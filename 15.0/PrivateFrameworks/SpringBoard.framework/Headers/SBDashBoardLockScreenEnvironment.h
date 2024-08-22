// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDASHBOARDLOCKSCREENENVIRONMENT_H
#define SBDASHBOARDLOCKSCREENENVIRONMENT_H

@class SBSearchGesture, CSCoverSheetViewController, SBFLockScreenActionContext, NSString, UIViewController;
@protocol SBApplicationHosting, SBAutoUnlockRule, SBBiometricUnlockBehavior, SBBiometricUnlockBehaviorDelegate, SBButtonEventsHandler, CSCoverSheetViewControllerObserver, SBLockScreenBacklightControlling, SBLockScreenBehaviorSuppressing, SBLockScreenBlockedStateObserving, SBLockScreenButtonObserving, SBLockScreenContentStateProviding, SBLockScreenCustomActionStoring, SBLockScreenLockingAndUnlocking, SBLockScreenMediaControlsPresenting, SBLockScreenPasscodeViewPresenting, SBLockScreenProximityBehaviorProviding, SBLockScreenStatusBarTransitioning, SBLockScreenSpotlightPresenting, SBLockScreenEnvironment, SBLockScreenApplicationLaunching, SBLockScreenCallHandling, SBLockScreenIdleTimerControlling, SBIdleTimerProviding, SBLockScreenPluginPresenting, SBFScreenWakeAnimationTarget, SBSWidgetMetricsProviding;

#import <Foundation/Foundation.h>

#import "SBDashBoardAnalyticsEmitter.h"
#import "SBDashBoardApplicationLauncher.h"
#import "SBDashBoardBiometricUnlockController.h"
#import "SBLockScreenActionManager.h"
#import "SBDashBoardEmergencyDialerController.h"
#import "SBDashBoardIdleTimerController.h"
#import "SBDashBoardOrientationController.h"
#import "SBDashBoardPluginController.h"
#import "SBDashBoardPolicyBasedBehaviorProvider.h"
#import "SBDashBoardSetupController.h"
#import "SBDashBoardSpotlightPresenter.h"
#import "SBCoverSheetSpotlightPresenter.h"

@interface SBDashBoardLockScreenEnvironment : NSObject <SBApplicationHosting, SBAutoUnlockRule, SBBiometricUnlockBehavior, SBBiometricUnlockBehaviorDelegate, SBButtonEventsHandler, CSCoverSheetViewControllerObserver, SBLockScreenBacklightControlling, SBLockScreenBehaviorSuppressing, SBLockScreenBlockedStateObserving, SBLockScreenButtonObserving, SBLockScreenContentStateProviding, SBLockScreenCustomActionStoring, SBLockScreenLockingAndUnlocking, SBLockScreenMediaControlsPresenting, SBLockScreenPasscodeViewPresenting, SBLockScreenProximityBehaviorProviding, SBLockScreenStatusBarTransitioning, SBLockScreenSpotlightPresenting, SBLockScreenEnvironment>

 {
    SBDashBoardAnalyticsEmitter *_analyticsEmitter;
    SBDashBoardApplicationLauncher *_applicationLauncher;
    SBDashBoardBiometricUnlockController *_biometricUnlockController;
    SBLockScreenActionManager *_lockScreenActionManager;
    SBDashBoardEmergencyDialerController *_emergencyDialerController;
    SBDashBoardIdleTimerController *_idleTimerController;
    SBDashBoardOrientationController *_orientationController;
    SBDashBoardPluginController *_pluginController;
    SBDashBoardPolicyBasedBehaviorProvider *_policyBasedBehaviorProvider;
    SBDashBoardSetupController *_setupController;
    SBDashBoardSpotlightPresenter *_spotlightPresenter;
    SBCoverSheetSpotlightPresenter *_coverSheetSpotlightPresenter;
    SBSearchGesture *_searchGesture;
}


@property (readonly, nonatomic) NSObject<SBApplicationHosting> *applicationHoster;
@property (readonly, nonatomic) NSObject<SBLockScreenApplicationLaunching> *applicationLauncher;
@property (nonatomic, getter=isAuthenticated) BOOL authenticated;
@property (readonly, nonatomic) NSObject<SBAutoUnlockRule> *autoUnlockRule;
@property (readonly, nonatomic) NSObject<SBLockScreenBacklightControlling> *backlightController;
@property (nonatomic) CGFloat backlightLevel;
@property (readonly, nonatomic) NSObject<SBLockScreenBehaviorSuppressing> *behaviorSuppressor;
@property (readonly, nonatomic) NSObject<SBBiometricUnlockBehavior> *biometricUnlockBehavior;
@property (weak, nonatomic) NSObject<SBBiometricUnlockBehaviorDelegate> *biometricUnlockBehaviorDelegate; // ivar: _biometricUnlockBehaviorDelegate
@property (readonly, nonatomic) NSObject<SBLockScreenBlockedStateObserving> *blockedStateObserver;
@property (readonly, nonatomic) NSObject<SBButtonEventsHandler> *buttonEventsHandler;
@property (readonly, nonatomic) NSObject<SBLockScreenButtonObserving> *buttonObserver;
@property (readonly, nonatomic) NSObject<SBLockScreenCallHandling> *callController;
@property (readonly, nonatomic) NSObject<SBLockScreenContentStateProviding> *contentStateProvider;
@property (readonly, nonatomic) CSCoverSheetViewController *coverSheetViewController; // ivar: _coverSheetViewController
@property (readonly, nonatomic) NSObject<SBLockScreenCustomActionStoring> *customActionStore;
@property (retain, nonatomic, getter=_customLockScreenActionContext) SBFLockScreenActionContext *customLockScreenActionContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL expectsFaceContact; // ivar: _expectsFaceContact
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SBLockScreenIdleTimerControlling> *idleTimerController;
@property (readonly, nonatomic) NSObject<SBIdleTimerProviding> *idleTimerProvider;
@property (readonly, nonatomic) NSObject<SBLockScreenLockingAndUnlocking> *lockController;
@property (readonly, nonatomic) NSObject<SBLockScreenMediaControlsPresenting> *mediaControlsPresenter;
@property (readonly, nonatomic) NSObject<SBLockScreenPasscodeViewPresenting> *passcodeViewPresenter;
@property (readonly, nonatomic) NSObject<SBLockScreenPluginPresenting> *pluginPresenter;
@property (readonly, nonatomic) NSObject<SBLockScreenProximityBehaviorProviding> *proximityBehaviorProvider;
@property (readonly, nonatomic) UIViewController *rootViewController;
@property (readonly, nonatomic) NSObject<SBFScreenWakeAnimationTarget> *screenWakeAnimationTarget;
@property (readonly, nonatomic) BOOL shouldShowLockStatusBarTime;
@property (nonatomic, getter=isShowingMediaControls) BOOL showingMediaControls;
@property (readonly, nonatomic) NSObject<SBLockScreenSpotlightPresenting> *spotlightPresenter;
@property (readonly, nonatomic) NSObject<SBLockScreenStatusBarTransitioning> *statusBarTransitionController;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SBSWidgetMetricsProviding> *widgetMetricsProvider;


-(BOOL)biometricUnlockBehavior:(id)arg0 requestsFeedback:(id)arg1 ;
-(BOOL)biometricUnlockBehavior:(id)arg0 requestsUnlock:(id)arg1 withFeedback:(id)arg2 ;
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
-(id)createHomeButtonShowPasscodeRecognizerForHomeButtonPress;
-(id)createHomeButtonSuppressAfterUnlockRecognizerForUnlockSource:(int)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)hostedAppSceneHandle;
-(id)hostedAppSceneHandles;
-(id)init;
-(id)initWithCoverSheetViewController:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)conformsToSBApplicationHosting;
-(void)coverSheetViewController:(id)arg0 didChangeActiveBehavior:(id)arg1 ;
-(void)finishUIUnlockFromSource:(int)arg0 ;
-(void)handleBiometricEvent:(NSUInteger)arg0 ;
-(void)hostedAppWillRotateToInterfaceOrientation:(NSInteger)arg0 ;
-(void)jiggleLockIcon;
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


@end


#endif