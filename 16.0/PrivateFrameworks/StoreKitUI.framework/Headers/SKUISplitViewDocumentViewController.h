// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISPLITVIEWDOCUMENTVIEWCONTROLLER_H
#define SKUISPLITVIEWDOCUMENTVIEWCONTROLLER_H

@class UIViewController, UISplitViewController, NSString;
@protocol SKUINavigationDocumentDelegate, SKUIDocumentViewController;


#import "SKUIViewController.h"
#import "SKUISplitViewTemplateElement.h"
#import "SKUINavigationDocumentController.h"

@interface SKUISplitViewDocumentViewController : SKUIViewController <SKUINavigationDocumentDelegate, SKUIDocumentViewController>

 {
    UIViewController *_delayingPresentationViewController;
    UISplitViewController *_splitViewController;
    SKUISplitViewTemplateElement *_templateElement;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKUINavigationDocumentController *leftNavigationDocumentController; // ivar: _leftNavigationDocumentController
@property (retain, nonatomic) SKUINavigationDocumentController *rightNavigationDocumentController; // ivar: _rightNavigationDocumentController
@property (readonly) Class superclass;


+(BOOL)_shouldForwardViewWillTransitionToSize;
-(BOOL)_isFullyPopulated;
-(id)_defaultBackgroundColor;
-(id)initWithTemplateElement:(id)arg0 clientContext:(id)arg1 ;
-(id)leftBarButtonItemsForDocument:(id)arg0 ;
-(void)_reloadSplitViewControllers;
-(void)_skui_endDelayingPresentation;
-(void)dealloc;
-(void)delayPresentationIfNeededForParentViewController:(id)arg0 ;
-(void)documentDidUpdate:(id)arg0 ;
-(void)loadView;
-(void)navigationDocumentStackDidChange:(id)arg0 ;
-(void)skui_viewWillAppear:(BOOL)arg0 ;


@end


#endif