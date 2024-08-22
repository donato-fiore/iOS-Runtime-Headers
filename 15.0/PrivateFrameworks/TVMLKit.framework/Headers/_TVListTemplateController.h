// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVLISTTEMPLATECONTROLLER_H
#define _TVLISTTEMPLATECONTROLLER_H

@class TVBgImageLoadingViewController, IKViewElement, IKCollectionElement, IKImageElement, IKAudioElement, UIView, NSString, UIViewController;
@protocol _TVListViewControllerDelegate, TVAppTemplateController, TVAppTemplateImpressionable;


#import "_TVFocusCaptureView.h"
#import "_TVListViewController.h"

@interface _TVListTemplateController : TVBgImageLoadingViewController <_TVListViewControllerDelegate, TVAppTemplateController, TVAppTemplateImpressionable>

 {
    IKViewElement *_templateElement;
    IKCollectionElement *_listElement;
    IKViewElement *_bannerElement;
    IKImageElement *_bgImageElement;
    IKAudioElement *_bgAudioElement;
    IKImageElement *_heroImageElement;
    UIView *_overlayView;
    _TVFocusCaptureView *_disabledTemplateFocusCaptureView;
    CGFloat _impressionThreshold;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIViewController *focusedController; // ivar: _focusedController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _TVListViewController *listViewController; // ivar: _listViewController
@property (retain, nonatomic) UIViewController *previewViewController; // ivar: _previewViewController
@property (readonly) Class superclass;


-(BOOL)_backgroundImageRequiresBlur;
-(BOOL)setNeedsFocusUpdateToList;
-(NSInteger)_blurEffectStyle;
-(id)_backgroundImageProxy;
-(id)_listTemplateView;
-(id)impressionableElementsContainedInDocument:(id)arg0 ;
-(id)preferredFocusEnvironments;
-(struct CGSize )_backgroundImageProxySize;
-(void)_configureWithBgElement:(id)arg0 ;
-(void)_configureWithBgImage:(id)arg0 backdropImage:(id)arg1 ;
-(void)_configureWithListElement:(id)arg0 ;
-(void)_updateView;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)listViewController:(id)arg0 didScrollWithScrollView:(id)arg1 ;
-(void)listViewController:(id)arg0 updatePreviewViewController:(id)arg1 ;
-(void)loadView;
-(void)updateWithViewElement:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif