// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLOCKSCREENVIEWCONTROLLERBASE_H
#define SBLOCKSCREENVIEWCONTROLLERBASE_H

@class UIViewController, SBFLockScreenActionContext, NSString, SBFLockScreenWakeAnimator, UIVisualEffectView;
@protocol SBApplicationHosting, SBAutoUnlockRule, SBBiometricUnlockBehavior, SBButtonEventsHandler, SBCoverSheetSlidingViewControllerContentViewController, SBIdleTimerProviding, SBLockScreenBacklightControlling, SBLockScreenBehaviorSuppressing, SBLockScreenBlockedStateObserving, SBLockScreenButtonObserving, SBLockScreenCallHandling, SBLockScreenContentStateProviding, SBLockScreenCustomActionStoring, SBLockScreenIdleTimerControlling, SBLockScreenLockingAndUnlocking, SBLockScreenMediaControlsPresenting, SBLockScreenPasscodeViewPresenting, SBLockScreenPluginPresenting, SBLockScreenProximityBehaviorProviding, SBLockScreenStatusBarTransitioning, SBLockScreenSpotlightPresenting, SBBiometricUnlockBehaviorDelegate, SBIdleTimerCoordinating;



@interface SBLockScreenViewControllerBase : UIViewController <SBApplicationHosting, SBAutoUnlockRule, SBBiometricUnlockBehavior, SBButtonEventsHandler, SBCoverSheetSlidingViewControllerContentViewController, SBIdleTimerProviding, SBLockScreenBacklightControlling, SBLockScreenBehaviorSuppressing, SBLockScreenBlockedStateObserving, SBLockScreenButtonObserving, SBLockScreenCallHandling, SBLockScreenContentStateProviding, SBLockScreenCustomActionStoring, SBLockScreenIdleTimerControlling, SBLockScreenLockingAndUnlocking, SBLockScreenMediaControlsPresenting, SBLockScreenPasscodeViewPresenting, SBLockScreenPluginPresenting, SBLockScreenProximityBehaviorProviding, SBLockScreenStatusBarTransitioning, SBLockScreenSpotlightPresenting>

 {
    SBFLockScreenActionContext *_customLockScreenActionContext;
}


@property (nonatomic, getter=isAuthenticated) BOOL authenticated; // ivar: _authenticated
@property (nonatomic) CGFloat backlightLevel; // ivar: _backlightLevel
@property (weak, nonatomic) NSObject<SBBiometricUnlockBehaviorDelegate> *biometricUnlockBehaviorDelegate; // ivar: _biometricUnlockBehaviorDelegate
@property (readonly, nonatomic) BOOL contentOccludesBackground;
@property (retain, nonatomic, getter=_customLockScreenActionContext) SBFLockScreenActionContext *customLockScreenActionContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL expectsFaceContact; // ivar: _expectsFaceContact
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SBIdleTimerCoordinating> *idleTimerCoordinator; // ivar: _idleTimerCoordinator
@property (readonly, nonatomic) SBFLockScreenWakeAnimator *lockScreenWakeAnimator; // ivar: _lockScreenWakeAnimator
@property (readonly, nonatomic) BOOL shouldShowLockStatusBarTime;
@property (nonatomic, getter=isShowingMediaControls) BOOL showingMediaControls;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIVisualEffectView *wakeEffectView; // ivar: _wakeEffectView


-(BOOL)canBeDeactivatedForUIUnlockFromSource:(int)arg0 ;
-(BOOL)canHostAnApp;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg0 ;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)handleHomeButtonPress;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVoiceCommandButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)isHostingAnApp;
-(BOOL)isInScreenOffMode;
-(BOOL)isMainPageVisible;
-(BOOL)isMakingEmergencyCall;
-(BOOL)isPasscodeLockVisible;
-(BOOL)isUnlockDisabled;
-(BOOL)shouldAutoUnlockForSource:(int)arg0 ;
-(BOOL)shouldDisableALS;
-(BOOL)shouldPresentOrDismissCoverSheetSpotlight;
-(BOOL)shouldUnlockUIOnKeyDownEvent;
-(BOOL)suppressesBanners;
-(BOOL)suppressesControlCenter;
-(BOOL)suppressesScreenshots;
-(BOOL)willUIUnlockFromSource:(int)arg0 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg0 ;
-(id)createHomeButtonShowPasscodeRecognizerForHomeButtonPress;
-(id)createHomeButtonSuppressAfterUnlockRecognizerForUnlockSource:(int)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)hostedAppSceneHandle;
-(id)hostedAppSceneHandles;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)conformsToSBApplicationHosting;
-(void)conformsToSBCoverSheetSlidingViewControllerContentViewController;
-(void)disableLockScreenPluginWithContext:(id)arg0 ;
-(void)emergencyDialerExitedWithError:(id)arg0 ;
-(void)enableLockScreenPluginWithContext:(id)arg0 ;
-(void)exitEmergencyDialerAnimated:(BOOL)arg0 ;
-(void)finishUIUnlockFromSource:(int)arg0 ;
-(void)handleBiometricEvent:(NSUInteger)arg0 ;
-(void)hostedAppWillRotateToInterfaceOrientation:(NSInteger)arg0 ;
-(void)jiggleLockIcon;
-(void)launchEmergencyDialer;
-(void)launchEmergencyDialerAnimated:(BOOL)arg0 ;
-(void)noteDeviceBlockedStatusUpdated;
-(void)noteMenuButtonDown;
-(void)noteMenuButtonUp;
-(void)noteResetRestoreStateUpdated;
-(void)prepareForUILock;
-(void)prepareForUIUnlock;
-(void)presentOrDismissCoverSheetSpotlightAnimated:(BOOL)arg0 ;
-(void)setInScreenOffMode:(BOOL)arg0 ;
-(void)setInScreenOffMode:(BOOL)arg0 forAutoUnlock:(BOOL)arg1 fromUnlockSource:(int)arg2 ;
-(void)setPasscodeLockVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setPasscodeLockVisible:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)startLockScreenFadeInAnimationForSource:(int)arg0 ;
-(void)updateScaleViewWithScale:(CGFloat)arg0 ;
-(void)updateStatusBarForLockScreenComeback;
-(void)updateStatusBarForLockScreenTeardown;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif