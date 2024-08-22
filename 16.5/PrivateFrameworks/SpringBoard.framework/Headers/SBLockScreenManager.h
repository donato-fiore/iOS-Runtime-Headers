// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBLOCKSCREENMANAGER_H
#define SBLOCKSCREENMANAGER_H

@class SBFAuthenticationAssertion, SBSRemoteAlertHandle, SBFMouseButtonDownGestureRecognizer, NSMutableDictionary, NSMutableSet, UINotificationFeedbackGenerator, NSString, BSCompoundAssertion, CSCoverSheetViewController, SBFUserAuthenticationController;
@protocol BSDescriptionProviding, SBPasscodeEntryTransientOverlayViewControllerDelegate, SBFPrivateAuthenticationObserver, CSCoverSheetViewControllerDelegate, CSWallpaperColorProvider, SBLockScreenBiometricAuthenticationCoordinatorDelegate, SBHomeButtonShowPasscodeRecognizerDelegate, SBHomeButtonSuppressAfterUnlockRecognizerDelegate, PBUIWallpaperObserver, SBCoverSheetPresentationDelegate, SBUILockStateProvider, SBTapToWakeDelegate, SBSRemoteAlertHandleObserver, SBBacklightControllerObserver, SBIdleTimerProviding, SBIdleTimerCoordinating, SBUILockStateProviding, SBHomeButtonShowPasscodeRecognizer, SBHomeButtonSuppressAfterUnlockRecognizer, BSInvalidatable, SAInvalidatable, SBFLockOutStatusProvider, SBLockScreenEnvironment, SBNotificationDestination;

#import <Foundation/Foundation.h>

#import "SBLockScreenBiometricAuthenticationCoordinator.h"
#import "SBCoverSheetBiometricResourceObserver.h"
#import "SBPearlInterlockObserver.h"
#import "SBLockScreenUnlockRequest.h"
#import "SBPasscodeEntryTransientOverlayViewController.h"
#import "SBLockScreenDisabledAssertionManager.h"
#import "SBLockScreenAutoUnlockAggregateRule.h"
#import "SBIdleTimerCoordinatorHelper.h"
#import "SBLockElementViewProvider.h"
#import "SBLiftToWakeManager.h"
#import "SBLockScreenOrientationManager.h"
#import "SBTapToWakeController.h"

@interface SBLockScreenManager : NSObject <BSDescriptionProviding, SBPasscodeEntryTransientOverlayViewControllerDelegate, SBFPrivateAuthenticationObserver, CSCoverSheetViewControllerDelegate, CSWallpaperColorProvider, SBLockScreenBiometricAuthenticationCoordinatorDelegate, SBHomeButtonShowPasscodeRecognizerDelegate, SBHomeButtonSuppressAfterUnlockRecognizerDelegate, PBUIWallpaperObserver, SBCoverSheetPresentationDelegate, SBUILockStateProvider, SBTapToWakeDelegate, SBSRemoteAlertHandleObserver, SBBacklightControllerObserver, SBIdleTimerProviding, SBIdleTimerCoordinating, SBUILockStateProviding>

 {
    SBLockScreenBiometricAuthenticationCoordinator *_biometricAuthenticationCoordinator;
    SBCoverSheetBiometricResourceObserver *_biometricResourceObserver;
    SBPearlInterlockObserver *_pearlInterlockObserver;
    id<SBHomeButtonShowPasscodeRecognizer> *_homeButtonShowPasscodeRecognizer;
    id<SBHomeButtonSuppressAfterUnlockRecognizer> *_homeButtonSuppressAfterUnlockRecognizer;
    BOOL _allowDisablePasscodeLockAssertion;
    BOOL _allowUILockUnlock;
    BOOL _isScreenOn;
    SBLockScreenUnlockRequest *_unlockRequest;
    BOOL _saveUnlockRequest;
    BOOL _uiHasBeenLockedOnce;
    SBPasscodeEntryTransientOverlayViewController *_passcodeEntryTransientOverlayViewController;
    BOOL _passcodeEntryTransientOverlayViewControllerPresentedAnimated;
    SBFAuthenticationAssertion *_sustainAuthenticationWhileUIUnlockedAssertion;
    SBLockScreenDisabledAssertionManager *_lockScreenDisabledAssertionManager;
    BOOL _isInLostMode;
    SBLockScreenAutoUnlockAggregateRule *_autoUnlockRuleAggregator;
    BOOL _shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes;
    SBSRemoteAlertHandle *_wakeToRemoteAlertHandle;
    id *_alertLaunchFinish;
    SBFMouseButtonDownGestureRecognizer *_mouseButtonDownGesture;
    NSMutableDictionary *_mesaCoordinatorDisabledAssertions;
    NSMutableDictionary *_mesaWalletPreArmDisabledAssertions;
    NSMutableSet *_mesaWalletPreArmDisabledReasons;
    NSMutableDictionary *_mesaAutoUnlockingDisabledAssertions;
    NSMutableDictionary *_mesaUnlockingDisabledAssertions;
    SBIdleTimerCoordinatorHelper *_idleTimerCoordinatorHelper;
    UINotificationFeedbackGenerator *_authenticationFeedbackGenerator;
    id<BSInvalidatable> *_bannerSuppressionAssertion;
    id<BSInvalidatable> *_pipInterruptionAssertion;
    id<SAInvalidatable> *_proudLockAssertion;
    SBLockElementViewProvider *_lockElement;
    NSString *_delayedLockReason;
    BOOL _ignoringDelayDismissalPending;
    BSCompoundAssertion *_lockScreenPresentationPendingAssertions;
}


@property (nonatomic, getter=isUIUnlocking) BOOL UIUnlocking; // ivar: _uiUnlocking
@property (readonly) BOOL bioAuthenticatedWhileMenuButtonDown;
@property (readonly, nonatomic) CSCoverSheetViewController *coverSheetViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasWakeToContentForInactiveDisplay;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isLockScreenActive;
@property (readonly) BOOL isLockScreenVisible;
@property (readonly) BOOL isSupressingLockButton;
@property (readonly) BOOL isUILocked; // ivar: _isUILocked
@property (readonly) BOOL isWaitingToLockUI; // ivar: _isWaitingToLockUI
@property (retain, nonatomic, getter=_liftToWakeManager, setter=_setLiftToWakeManager:) SBLiftToWakeManager *liftToWakeManager; // ivar: _liftToWakeManager
@property (retain, nonatomic, getter=_lockOutController, setter=_setLockOutController:) NSObject<SBFLockOutStatusProvider> *lockOutController; // ivar: _lockOutController
@property (readonly, nonatomic) NSObject<SBLockScreenEnvironment> *lockScreenEnvironment; // ivar: _lockScreenEnvironment
@property (readonly, nonatomic) SBLockScreenOrientationManager *lockScreenOrientationManager; // ivar: _lockScreenOrientationManager
@property (readonly, getter=isLockScreenPresentationPending) BOOL lockScreenPresentationPending;
@property (readonly, nonatomic) NSObject<SBNotificationDestination> *notificationDestination;
@property (readonly) BOOL shouldHandlePocketStateChanges;
@property (readonly) BOOL shouldPlayLockSound;
@property (readonly) BOOL shouldTapToWake;
@property (readonly) Class superclass;
@property (retain, nonatomic, getter=_tapToWakeController, setter=_setTapToWakeController:) SBTapToWakeController *tapToWakeController; // ivar: _tapToWakeController
@property (copy, nonatomic) id *unlockActionBlock; // ivar: _unlockActionBlock
@property (retain, nonatomic, getter=_userAuthController, setter=_setUserAuthController:) SBFUserAuthenticationController *userAuthController; // ivar: _userAuthController


+(id)_sharedInstanceCreateIfNeeded:(BOOL)arg0 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(BOOL)_attemptUnlockWithPasscode:(id)arg0 finishUIUnlock:(BOOL)arg1 ;
-(BOOL)_attemptUnlockWithPasscode:(id)arg0 mesa:(BOOL)arg1 finishUIUnlock:(BOOL)arg2 ;
-(BOOL)_attemptUnlockWithPasscode:(id)arg0 mesa:(BOOL)arg1 finishUIUnlock:(BOOL)arg2 completion:(id)arg3 ;
-(BOOL)_canAttemptRealUIUnlockIgnoringBacklightNonsenseWithReason:(*id)arg0 ;
-(BOOL)_canHandleTransitionRequest:(id)arg0 ;
-(BOOL)_finishUIUnlockFromSource:(int)arg0 withOptions:(id)arg1 ;
-(BOOL)_isPasscodeVisible;
-(BOOL)_isUnlockDisabled;
-(BOOL)_lockUI;
-(BOOL)_requiresEmptyLockElementForBacklightState:(NSInteger)arg0 ;
-(BOOL)_setPasscodeVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(BOOL)_shouldBeInSetupMode;
-(BOOL)_shouldBeShowingLockElement;
-(BOOL)_shouldBeShowingLockElementForBacklightState:(NSInteger)arg0 ;
-(BOOL)_shouldBloomForAnyReason;
-(BOOL)_shouldDisconnectCallWhenLockingForActiveAudioRoute;
-(BOOL)_shouldEmulateInterstitialPresentationForAccessibility:(BOOL)arg0 ;
-(BOOL)_shouldLockAfterEndingFaceTimeCall;
-(BOOL)_shouldLockAfterEndingTelephonyCall;
-(BOOL)_shouldReactivateInCallWakingTheDisplay:(BOOL)arg0 ;
-(BOOL)_shouldUnlockUIOnKeyDownEvent;
-(BOOL)_shouldWakeToInCallForUnlockSource:(int)arg0 wakingTheDisplay:(BOOL)arg1 ;
-(BOOL)_shouldWakeToOtherContentForUnlockSource:(int)arg0 wakingTheDisplay:(BOOL)arg1 stopAfterWakeTo:(BOOL)arg2 ;
-(BOOL)_specifiesTransientPresentationForMode:(NSInteger)arg0 ;
-(BOOL)_unlockWithRequest:(id)arg0 cancelPendingRequests:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)biometricAuthenticationCoordinator:(id)arg0 requestsAuthenticationFeedback:(id)arg1 ;
-(BOOL)biometricAuthenticationCoordinator:(id)arg0 requestsUnlockWithIntent:(int)arg1 ;
-(BOOL)biometricAuthenticationCoordinatorShouldWaitToInvalidateMatchingAssertion:(id)arg0 ;
-(BOOL)coverSheetViewControllerHasBeenDismissedSinceKeybagLock:(id)arg0 ;
-(BOOL)coverSheetViewControllerHasSecureApp:(id)arg0 ;
-(BOOL)coverSheetViewControllerIsPasscodeVisible:(id)arg0 ;
-(BOOL)coverSheetViewControllerIsShowingSecureApp:(id)arg0 ;
-(BOOL)coverSheetViewControllerShouldPreserveOrientationForExternalTransition:(id)arg0 ;
-(BOOL)coverSheetViewControllerTraitsArbiterOrientationActuationEnabled:(id)arg0 ;
-(BOOL)handleKeyHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(BOOL)handleTransitionRequest:(id)arg0 ;
-(BOOL)handlesHomeButtonSinglePresses;
-(BOOL)hasUIEverBeenLocked;
-(BOOL)isInLostMode;
-(BOOL)isLockScreenDisabledForAssertion;
-(BOOL)isPasscodeEntryTransientOverlayVisible;
-(BOOL)passcodeEntryTransientOverlayViewController:(id)arg0 authenticatePasscode:(id)arg1 ;
-(BOOL)passcodeEntryTransientOverlayViewControllerDidDetectBottomFaceOcclusionsSinceScreenOn:(id)arg0 ;
-(BOOL)passcodeEntryTransientOverlayViewControllerDidDetectFaceOcclusionsSinceScreenOn:(id)arg0 ;
-(BOOL)shouldLockUIAfterEndingCall;
-(BOOL)unlockUIFromSource:(int)arg0 withOptions:(id)arg1 ;
-(BOOL)unlockWithRequest:(id)arg0 completion:(id)arg1 ;
-(CGFloat)contrastForCurrentWallpaper;
-(id)_hostingWindowScene;
-(id)_newLockScreenEnvironment;
-(id)_statusBarLayoutManager;
-(id)acquireLockScreenPresentationPendingAssertionWithReason:(id)arg0 ;
-(id)averageColorForCurrentWallpaper;
-(id)averageColorForCurrentWallpaperInScreenRect:(struct CGRect )arg0 ;
-(id)biometricAuthenticationCoordinator;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)idleTimerProvider:(id)arg0 didProposeBehavior:(id)arg1 forReason:(id)arg2 ;
-(id)init;
-(id)newLegibilitySettingsProvider;
-(id)passcodeEntryTransientOverlayViewControllerStatusSubtitleText;
-(id)passcodeEntryTransientOverlayViewControllerStatusText;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
// -(void)_activateLockScreenAnimated:(BOOL)arg0 animationProvider:(id)arg1 automatically:(unk)arg2 inScreenOffMode:(BOOL)arg3 dismissNotificationCenter:(BOOL)arg4 completion:(BOOL)arg5  ;
-(void)_activeCallStateChanged;
-(void)_authenticationStateChanged:(id)arg0 ;
-(void)_cleanupSystemApertureLockElementIfNecessaryWithReason:(id)arg0 ;
-(void)_cleanupSystemApertureLockElementIgnoringDelays:(BOOL)arg0 reason:(id)arg1 ;
-(void)_clearAuthenticationLockAssertion;
-(void)_createAuthenticationAssertion;
-(void)_deviceBlockedChanged:(id)arg0 ;
-(void)_disconnectActiveCallIfNeededFromSource:(int)arg0 ;
-(void)_emulateInterstitialPasscodePresentationForAccessibility:(BOOL)arg0 ;
-(void)_evaluatePreArmDisabledAssertions;
-(void)_evaluateWallpaperMode;
-(void)_handleAuthenticationFeedback:(id)arg0 ;
-(void)_handleBacklightDidTurnOff:(id)arg0 ;
-(void)_handleBacklightLevelWillChange:(id)arg0 ;
-(void)_lockFeaturesForRemoteLock:(BOOL)arg0 ;
-(void)_lockScreenDimmed:(id)arg0 ;
-(void)_maybeLaunchSetupForcingCheckIfNotBricked:(BOOL)arg0 ;
-(void)_noteStartupTransitionDidBegin;
-(void)_noteStartupTransitionWillBegin;
-(void)_postLockCompletedNotification:(BOOL)arg0 ;
-(void)_prepareWallpaperForInteractiveMode;
-(void)_prepareWallpaperForStaticMode;
-(void)_reallySetUILocked:(BOOL)arg0 ;
-(void)_relockUIForButtonlikeSource:(int)arg0 ;
-(void)_resetOrRestoreStateChanged:(id)arg0 ;
-(void)_runUnlockActionBlock:(BOOL)arg0 ;
-(void)_sendUILockStateChangedNotification;
-(void)_setHomeButtonShowPasscodeRecognizer:(id)arg0 ;
-(void)_setHomeButtonSuppressAfterUnlockRecognizer:(id)arg0 ;
-(void)_setIdleTimerCoordinator:(id)arg0 ;
-(void)_setMesaAutoUnlockingDisabled:(BOOL)arg0 forReason:(id)arg1 ;
-(void)_setMesaCoordinatorDisabled:(BOOL)arg0 forReason:(id)arg1 ;
-(void)_setMesaUnlockingDisabled:(BOOL)arg0 forReason:(id)arg1 ;
-(void)_setSystemApertureProudLockElementVisible:(BOOL)arg0 backlightState:(NSInteger)arg1 withReason:(id)arg2 ;
-(void)_setSystemApertureProudLockElementVisible:(BOOL)arg0 withReason:(id)arg1 ;
-(void)_setSystemApertureProudLockElementVisible:(BOOL)arg0 withReason:(id)arg1 afterDelay:(CGFloat)arg2 ;
-(void)_setUILocked:(BOOL)arg0 ;
-(void)_setWalletPreArmDisabled:(BOOL)arg0 forReason:(id)arg1 ;
-(void)_setupModeChanged;
-(void)_showSystemApertureProudLockElementForBacklightState:(NSInteger)arg0 WithReason:(id)arg1 ;
-(void)_showSystemApertureProudLockElementIfSupportedWithReason:(id)arg0 ;
-(void)_updateBloom;
-(void)_wakeScreenForMouseButtonDown:(id)arg0 ;
-(void)_wakeScreenForTapToWake;
-(void)activateLostModeForRemoteLock:(BOOL)arg0 ;
-(void)activationChanged:(id)arg0 ;
-(void)addLockScreenDisableAssertion:(id)arg0 ;
-(void)attemptUnlockWithMesa;
-(void)attemptUnlockWithPasscode:(id)arg0 ;
-(void)attemptUnlockWithPasscode:(id)arg0 finishUIUnlock:(BOOL)arg1 completion:(id)arg2 ;
-(void)backlightController:(id)arg0 didTransitionToBacklightState:(NSInteger)arg1 source:(NSInteger)arg2 ;
-(void)backlightController:(id)arg0 didUpdateDigitizerDisabled:(BOOL)arg1 tapToWakeEnabled:(BOOL)arg2 ;
-(void)backlightController:(id)arg0 willTransitionToBacklightState:(NSInteger)arg1 source:(NSInteger)arg2 ;
-(void)biometricAuthenticationCoordinator:(id)arg0 handleIdentityMatchSuccess:(BOOL)arg1 ;
-(void)coverSheetPresentationManager:(id)arg0 unlockWithRequest:(id)arg1 completion:(id)arg2 ;
-(void)coverSheetViewController:(id)arg0 requestsTouchIDDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)coverSheetViewController:(id)arg0 setMesaUnlockingDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)coverSheetViewController:(id)arg0 startSpotlightInteractiveGestureTransactionForGesture:(id)arg1 ;
-(void)coverSheetViewController:(id)arg0 unlockWithRequest:(id)arg1 completion:(id)arg2 ;
-(void)coverSheetViewControllerDidDismissInlinePasscode:(id)arg0 ;
-(void)coverSheetViewControllerHandleUnlockAttemptSucceeded:(id)arg0 ;
-(void)coverSheetViewControllerIrisPlayingDidFinish:(id)arg0 ;
-(void)coverSheetViewControllerShouldDismissContextMenu:(id)arg0 ;
-(void)coverSheetViewControllerWillPresentInlinePasscode:(id)arg0 ;
-(void)coverSheetWindowedAccessoryViewControllerDidDismiss:(id)arg0 ;
-(void)coverSheetWindowedAccessoryViewControllerDidPresent:(id)arg0 ;
-(void)enableLostModePlugin;
-(void)exitLostModeIfNecessaryFromRemoteRequest:(BOOL)arg0 ;
-(void)extendedKeybagLockStateChanged:(BOOL)arg0 ;
-(void)homeButtonShowPasscodeRecognizerDidFailToRecognize:(id)arg0 ;
-(void)homeButtonShowPasscodeRecognizerRequestsPasscodeUIToBeShown:(id)arg0 ;
-(void)homeButtonSuppressAfterUnlockRecognizerRequestsEndOfSuppression:(id)arg0 ;
-(void)loadViewsIfNeeded;
-(void)lockScreenViewControllerDidDismiss;
-(void)lockScreenViewControllerDidPresent;
-(void)lockScreenViewControllerRequestsUnlock;
-(void)lockScreenViewControllerWillDismiss;
-(void)lockScreenViewControllerWillPresent;
-(void)lockUIFromSource:(int)arg0 withOptions:(id)arg1 ;
-(void)lockUIFromSource:(int)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
-(void)noteBacklightWillTransitionToInactive;
-(void)noteMenuButtonDoublePress;
-(void)noteMenuButtonSinglePress;
-(void)passcodeEntryTransientOverlayViewControllerDidDisappear:(id)arg0 ;
-(void)passcodeEntryTransientOverlayViewControllerRequestsDismissal:(id)arg0 ;
-(void)passcodeEntryTransientOverlayViewControllerRequestsEmergencyCall:(id)arg0 ;
-(void)remoteAlertHandleDidActivate:(id)arg0 ;
-(void)remoteLock:(BOOL)arg0 ;
-(void)removeLockScreenDisableAssertion:(id)arg0 ;
-(void)requestUserAttentionScreenWakeFromSource:(int)arg0 reason:(id)arg1 ;
-(void)setBiometricAutoUnlockingDisabled:(BOOL)arg0 forReason:(id)arg1 ;
-(void)setPasscodeVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)startUIUnlockFromSource:(int)arg0 withOptions:(id)arg1 ;
-(void)tapToWakeControllerDidRecognizePencilWakeGesture:(id)arg0 ;
-(void)tapToWakeControllerDidRecognizeWakeGesture:(id)arg0 ;
-(void)updateSpringBoardStatusBarForLockScreenTeardown;
-(void)wallpaperDidChangeForVariant:(NSInteger)arg0 ;


@end


#endif