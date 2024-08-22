// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBINCALLBANNERPRESENTABLEVIEWCONTROLLER_H
#define SBINCALLBANNERPRESENTABLEVIEWCONTROLLER_H

@class UIViewController, SBSUIInCallSceneClientSettingsDiffInspector, NSString;
@protocol SBDeviceApplicationSceneHandleObserver, SBBannerManagerPresentable, SBButtonEventsHandler, BSInvalidatable, BNPanGestureProxy, SBInCallBannerPresentableViewControllerDelegate, BNPresentableContext;


#import "SBDeviceApplicationSceneViewController.h"
#import "SBSceneViewStatusBarAssertion.h"
#import "SBDeviceApplicationSceneHandle.h"

@interface SBInCallBannerPresentableViewController : UIViewController <SBDeviceApplicationSceneHandleObserver, SBBannerManagerPresentable, SBButtonEventsHandler, BSInvalidatable>

 {
    BOOL _didCrossDefaultDraggingThreshold;
    id<BNPanGestureProxy> *_lastGestureProxy;
    SBDeviceApplicationSceneViewController *_sceneViewController;
    SBSceneViewStatusBarAssertion *_statusBarHiddenAssertion;
    SBSUIInCallSceneClientSettingsDiffInspector *_inCallSceneClientSettingsDiffInspector;
}


@property (readonly, nonatomic, getter=isCallConnected) BOOL callConnected;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBInCallBannerPresentableViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize preferredBannerContentSize; // ivar: _preferredBannerContentSize
@property (readonly, nonatomic) NSInteger presentableBehavior;
@property (weak, nonatomic) NSObject<BNPresentableContext> *presentableContext;
@property (readonly, nonatomic) NSInteger presentableType;
@property (readonly, nonatomic, getter=isPresented) BOOL presented; // ivar: _presented
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle; // ivar: _sceneHandle
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) UIViewController *viewController;


+(CGFloat)cornerRadius;
-(BOOL)_canShowWhileLocked;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg0 ;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)handleHomeButtonPress;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVoiceCommandButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)shouldDismissForReason:(id)arg0 ;
-(id)_inCallSceneClientSettingsDiffInspector;
-(id)initWithSceneHandle:(id)arg0 ;
-(struct CGPoint )translationInCoordinateSpace:(id)arg0 ;
-(struct CGPoint )velocityInCoordinateSpace:(id)arg0 ;
-(struct CGPoint )visualTranslationInCoordinateSpace:(id)arg0 ;
-(struct CGSize )preferredContentSizeWithPresentationSize:(struct CGSize )arg0 containerSize:(struct CGSize )arg1 ;
-(void)_callConnectedStatusChanged;
-(void)_handlePanGestureProxyAction:(id)arg0 ;
-(void)_handleTapAction:(id)arg0 ;
-(void)dealloc;
-(void)draggingDidBeginWithGestureProxy:(id)arg0 ;
-(void)invalidate;
-(void)presentableDidAppearAsBanner:(id)arg0 ;
-(void)presentableDidDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)presentableWillAppearAsBanner:(id)arg0 ;
-(void)presentableWillDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)sceneHandle:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2 ;
-(void)userInteractionDidEndForBannerForPresentable:(id)arg0 ;
-(void)userInteractionWillBeginForBannerForPresentable:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif