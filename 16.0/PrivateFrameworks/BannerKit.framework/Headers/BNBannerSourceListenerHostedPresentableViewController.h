// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BNBANNERSOURCELISTENERHOSTEDPRESENTABLEVIEWCONTROLLER_H
#define BNBANNERSOURCELISTENERHOSTEDPRESENTABLEVIEWCONTROLLER_H

@class BSAnimationSettings, NSString, FBScene, NSUUID, UIViewController;
@protocol BNBannerSourceListenerHostedPresentable, UIScenePresenter, BNPanGestureProxy, BNBannerSourceListenerPresentableDelegate, BNPresentable, BNPresentableContext;


#import "BNBannerSourceListenerPresentableViewController.h"

@interface BNBannerSourceListenerHostedPresentableViewController : BNBannerSourceListenerPresentableViewController <BNBannerSourceListenerHostedPresentable>

 {
    UIEdgeInsets _bannerContentOutsets;
    id<UIScenePresenter> *_scenePresenter;
    id<BNPanGestureProxy> *_panGestureProxy;
    BSAnimationSettings *_bannerSizeTransitionAnimationSettings;
}


@property (readonly, nonatomic) int bannerAppearState;
@property (readonly, nonatomic, getter=isContentHosted) BOOL contentHosted;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BNBannerSourceListenerPresentableDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHostedContent) BOOL hostedContent;
@property (readonly, nonatomic) NSObject<BNPresentable> *presentable;
@property (readonly, nonatomic) NSInteger presentableBehavior;
@property (weak, nonatomic) NSObject<BNPresentableContext> *presentableContext;
@property (readonly, nonatomic) NSInteger presentableType;
@property (readonly, nonatomic) BOOL providesHostedContent;
@property (readonly, nonatomic, getter=isReady) BOOL ready;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, nonatomic) FBScene *scene; // ivar: _scene
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSUUID *uniquePresentableIdentifier;
@property (readonly, nonatomic) UIViewController *viewController;


-(BOOL)_canShowWhileLocked;
-(id)_tearDownSceneBlock:(SEL)arg0 ;
-(id)bannerSizeTransitionAnimationSettings;
-(id)initWithWithSpecification:(id)arg0 serviceDomain:(id)arg1 scene:(id)arg2 readyCompletion:(id)arg3 ;
-(struct UIEdgeInsets )bannerContentOutsets;
-(void)_makeReadyIfPossibleWithScene:(id)arg0 ;
-(void)_tearDownSceneIfNecessary;
-(void)_tearDownSceneInfrastructureIfNecessary;
-(void)_tearDownScenePresenterIfNecessary;
-(void)_updateBannerContentOutsetsWithScene:(id)arg0 ;
-(void)_updatePreferredContentSizeWithScene:(id)arg0 transitionContext:(id)arg1 ;
-(void)bannerSourceListenerPresentableViewControllerViewDidChangeSize:(id)arg0 ;
-(void)draggingDidBeginWithGestureProxy:(id)arg0 ;
-(void)invalidate;
-(void)presentableDidAppearAsBanner:(id)arg0 ;
-(void)presentableDidDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)presentableWillAppearAsBanner:(id)arg0 ;
-(void)presentableWillDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)presentableWillNotAppearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)scene:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)sceneContentStateDidChange:(id)arg0 ;
-(void)sceneDidInvalidate:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)userInteractionDidEndForBannerForPresentable:(id)arg0 ;
-(void)userInteractionWillBeginForBannerForPresentable:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif