// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUILOADINGDOCUMENTVIEWCONTROLLER_H
#define SKUILOADINGDOCUMENTVIEWCONTROLLER_H

@class NSString;
@protocol SKUIDocumentViewController, OS_dispatch_source;


#import "SKUIViewController.h"
#import "SKUIActivityIndicatorViewElement.h"
#import "SKUIActivityIndicatorView.h"
#import "SKUILayoutCache.h"
#import "SKUILoadingTemplateViewElement.h"
#import "SKUIViewElementLayoutContext.h"

@interface SKUILoadingDocumentViewController : SKUIViewController <SKUIDocumentViewController>

 {
    SKUIActivityIndicatorViewElement *_activityIndicatorElement;
    SKUIActivityIndicatorView *_activityIndicatorView;
    NSObject<OS_dispatch_source> *_delayTimer;
    SKUILayoutCache *_layoutCache;
    SKUILoadingTemplateViewElement *_templateElement;
    SKUIViewElementLayoutContext *_viewLayoutContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_activityIndicator;
-(id)_layoutCache;
-(id)_viewLayoutContext;
-(id)initWithActivityIndicatorElement:(id)arg0 ;
-(id)initWithTemplateElement:(id)arg0 ;
-(struct CGRect )_computedFrameForActivityIndicatorView;
-(void)_reloadViewStyling;
-(void)_showActivityIndicator;
-(void)dealloc;
-(void)documentDidUpdate:(id)arg0 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif