// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMAINWORKSPACE_H
#define SBMAINWORKSPACE_H

@class BSEventQueueLock, FBDisplayLayoutTransition, BSWatchdog, NSMutableDictionary, NSMutableSet, SBFZStackParticipant, NSString, FBSceneManager, SBFZStackResolver;
@protocol BSTransactionObserver, SBBacklightControllerObserver, FBSystemServiceDelegate, FBProcessManagerObserver, FBApplicationProcessObserver, BSWatchdogDelegate, FBSceneManagerObserver, MCProfileConnectionObserver, BSPowerMonitorObserver, SBPowerDownViewControllerDelegate, SBTransientOverlayPresentationManagerDelegate, CCSModulePresentationEndpoint, SBControlCenterModuleTransientOverlayViewControllerDelegate, SBInCallPresentationManagerDelegate, SBFZStackParticipantDelegate, BSInvalidatable, SBIdleTimerProviding, SBIdleTimerCoordinating;


#import "SBWorkspace.h"
#import "SBOrientationAggdLogger.h"
#import "SBAppStatusBarSettingsAssertion.h"
#import "SBIdleTimerCoordinatorHelper.h"
#import "SBPowerDownViewController.h"
#import "SBHomeHardwareButtonLongPressDurationAssertion.h"
#import "SBControlCenterModuleTransientOverlayViewController.h"
#import "SBWorkspaceKeyboardFocusController.h"
#import "SBFocusModesHomeScreenSettingsManager.h"
#import "SBZStackAuditor.h"
#import "SBHUDController.h"
#import "SBBrightnessControl.h"
#import "SBWorkspaceTransaction.h"
#import "SBHomeGestureArbiter.h"
#import "SBInCallPresentationManager.h"
#import "SBInCallTransientOverlayManager.h"
#import "SBKeyboardDismissalManager.h"
#import "SBPIPControllerCoordinator.h"
#import "SBRingerControl.h"
#import "SBSystemNotesManager.h"
#import "SBTransientOverlayPresentationManager.h"
#import "SBUniversalControlServer.h"
#import "SBVolumeControl.h"
#import "SBHardwareButtonZStackClient.h"

@interface SBMainWorkspace : SBWorkspace <BSTransactionObserver, SBBacklightControllerObserver, FBSystemServiceDelegate, FBProcessManagerObserver, FBApplicationProcessObserver, BSWatchdogDelegate, FBSceneManagerObserver, MCProfileConnectionObserver, BSPowerMonitorObserver, SBPowerDownViewControllerDelegate, SBTransientOverlayPresentationManagerDelegate, CCSModulePresentationEndpoint, SBControlCenterModuleTransientOverlayViewControllerDelegate, SBInCallPresentationManagerDelegate, SBFZStackParticipantDelegate>

 {
    BOOL _initialized;
    BSEventQueueLock *_suspensionLock;
    SBOrientationAggdLogger *_orientationAggdLogger;
    FBDisplayLayoutTransition *_displayLayoutTransition;
    BSEventQueueLock *_currentTransactionLock;
    BSWatchdog *_transactionWatchdog;
    NSMutableDictionary *_extensionHandlersByType;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    NSMutableSet *_activeSuspendedWorkspaceTransitions;
    SBIdleTimerCoordinatorHelper *_idleTimerCoordinatorHelper;
    SBPowerDownViewController *_powerDownViewController;
    SBHomeHardwareButtonLongPressDurationAssertion *_powerDownLongPressDurationAssertion;
    SBControlCenterModuleTransientOverlayViewController *_presentedControlCenterModuleTransientOverlayViewController;
    NSMutableSet *_ocelotRepairRequests;
    SBWorkspaceKeyboardFocusController *_keyboardFocusController;
    id<BSInvalidatable> *_lockKeyboardFocusAssertion;
    SBFocusModesHomeScreenSettingsManager *_focusModesHomeScreenSnapshotManager;
    SBZStackAuditor *_zStackAuditor;
    SBFZStackParticipant *_keyShortcutHUDZStackParticipant;
}


@property (readonly, nonatomic) SBHUDController *HUDController; // ivar: _HUDController
@property (retain, nonatomic, getter=_activeIdleTimerProvider, setter=_setActiveIdleTimerProvider:) NSObject<SBIdleTimerProviding> *activeIdleTimerProvider; // ivar: _activeIdleTimerProvider
@property (readonly, nonatomic) SBBrightnessControl *brightnessControl; // ivar: _brightnessControl
@property (retain, nonatomic) SBWorkspaceTransaction *currentTransaction; // ivar: _currentTransaction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBHomeGestureArbiter *homeGestureArbiter; // ivar: _homeGestureArbiter
@property (retain, nonatomic) NSObject<SBIdleTimerCoordinating> *idleTimerCoordinator;
@property (readonly, nonatomic) SBInCallPresentationManager *inCallPresentationManager; // ivar: _inCallPresentationManager
@property (readonly, nonatomic) SBInCallTransientOverlayManager *inCallTransientOverlayManager; // ivar: _inCallTransientOverlayManager
@property (readonly, nonatomic) SBKeyboardDismissalManager *keyboardDismissalManager; // ivar: _keyboardDismissalManager
@property (readonly, nonatomic) SBWorkspaceKeyboardFocusController *keyboardFocusController;
@property (readonly, nonatomic, getter=isMedusaEnabled) BOOL medusaEnabled; // ivar: _medusaEnabled
@property (readonly, nonatomic) SBPIPControllerCoordinator *pipCoordinator; // ivar: _pipCoordinator
@property (readonly, nonatomic, getter=isPowerDownTransientOverlayTopmost) BOOL powerDownTransientOverlayFrontmost;
@property (readonly, nonatomic) SBRingerControl *ringerControl; // ivar: _ringerControl
@property (readonly, nonatomic) FBSceneManager *sceneManager; // ivar: _sceneManager
@property (readonly, nonatomic, getter=isSpringBoardActive) BOOL springBoardActive;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SBSystemNotesManager *systemNotesManager; // ivar: _systemNotesManager
@property (readonly, nonatomic) SBTransientOverlayPresentationManager *transientOverlayPresentationManager; // ivar: _transientOverlayPresentationManager
@property (readonly, nonatomic) SBUniversalControlServer *universalControlServer; // ivar: _universalControlServer
@property (readonly, nonatomic) SBVolumeControl *volumeControl; // ivar: _volumeControl
@property (readonly, nonatomic) SBHardwareButtonZStackClient *zStackHardwareButtonClient; // ivar: _zStackHardwareButtonClient
@property (readonly, nonatomic) SBFZStackResolver *zStackResolver; // ivar: _zStackResolver


+(id)_instanceIfExists;
+(id)_sharedInstanceWithNilCheckPolicy:(NSInteger)arg0 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
+(id)start;
-(BOOL)_applicationProcessExited:(id)arg0 withContext:(id)arg1 ;
-(BOOL)_canAppWithBundleIdentifier:(id)arg0 requestMovingContentToSceneOpenApplicationOptions:(id)arg1 ;
-(BOOL)_canExecuteTransitionRequest:(id)arg0 forExecution:(BOOL)arg1 ;
-(BOOL)_canImplicitlyUnlockAtLockScreenWhileAuthenticatedFromOrigin:(id)arg0 givenOrigin:(id)arg1 trustedRequest:(BOOL)arg2 outReason:(*id)arg3 ;
-(BOOL)_executeApplicationTransitionRequest:(id)arg0 ;
-(BOOL)_executeTransientOverlayTransitionRequest:(id)arg0 ;
-(BOOL)_executeTransitionRequest:(id)arg0 options:(NSUInteger)arg1 validator:(id)arg2 ;
-(BOOL)_handleSetupExited:(id)arg0 ;
-(BOOL)_isApplicationRunningAsViewService:(id)arg0 ;
-(BOOL)_isLaunchingApplicationAfterSetupForRequestWithBundleIdentifier:(id)arg0 options:(id)arg1 origin:(id)arg2 ;
-(BOOL)_preflightTransitionRequest:(id)arg0 forExecution:(BOOL)arg1 ;
-(BOOL)_removeApplicationEntitiesFromWorkspace:(id)arg0 error:(*id)arg1 ;
-(BOOL)canExecuteTransitionRequest:(id)arg0 ;
-(BOOL)defaultShouldAutorotateForTransientOverlayPresentationManager:(id)arg0 ;
-(BOOL)dismissAllTransientOverlayPresentationsAnimated:(BOOL)arg0 ;
-(BOOL)dismissTransientOverlayViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)executeTransitionRequest:(id)arg0 ;
-(BOOL)executeTransitionRequest:(id)arg0 withValidator:(id)arg1 ;
-(BOOL)isKeyboardVisibleForSpringBoardForTransientOverlayPresentationManager:(id)arg0 ;
-(BOOL)presentTransientOverlayViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)requestTransitionWithBuilder:(id)arg0 ;
// -(BOOL)requestTransitionWithOptions:(NSUInteger)arg0 builder:(id)arg1 validator:(unk)arg2  ;
-(BOOL)transientOverlayPresentationManager:(id)arg0 shouldResignFirstResponderForKeyWindow:(id)arg1 ;
-(BOOL)transientOverlayPresentationManager:(id)arg0 shouldRestoreFirstResponderForKeyWindow:(id)arg1 ;
-(NSInteger)defaultPreferredInterfaceOrientationForPresentationForTransientOverlayPresentationManager:(id)arg0 ;
-(NSInteger)inCallPresentationManagerInterfaceOrientationForBannerPresentation:(id)arg0 ;
-(NSInteger)inCallPresentationManagerInterfaceOrientationForTransientOverlayPresentation:(id)arg0 ;
-(NSUInteger)defaultSupportedInterfaceOrientationsForTransientOverlayPresentationManager:(id)arg0 ;
-(id)_alertItemForPreventingLaunchOfApp:(id)arg0 fromTrustState:(NSUInteger)arg1 ;
-(id)_applicationForIdentifier:(id)arg0 ;
-(id)_generateIdleTimerBehaviorForReason:(id)arg0 ;
-(id)_handlerForExtensionPoint:(id)arg0 ;
-(id)_selectTransactionForAppActivationRequest:(id)arg0 ;
-(id)_selectTransactionForAppActivationUnderMainScreenLock:(id)arg0 withResult:(id)arg1 ;
-(id)_selectTransactionForAppActivationUnderMainScreenLockRequest:(id)arg0 ;
-(id)_selectTransactionForAppEntityRemoved:(id)arg0 ;
-(id)_selectTransactionForAppRelaunch:(id)arg0 ;
-(id)_selectTransactionForReturningToTheLockScreenFromApp:(id)arg0 animated:(BOOL)arg1 forceToBuddy:(BOOL)arg2 withResult:(id)arg3 ;
-(id)_selectTransactionForReturningToTheLockScreenWithRequest:(id)arg0 fromApp:(id)arg1 ;
-(id)_selectTransactionForTransientOverlayPresentationRequest:(id)arg0 ;
-(id)_transactionForTransitionRequest:(id)arg0 ;
-(id)_validateRequestToOpenApplication:(id)arg0 options:(id)arg1 origin:(id)arg2 error:(*id)arg3 ;
-(id)bannerLongLookPresentationObservationTokenForTransientOverlayPresentationManager:(id)arg0 ;
-(id)controlCenterPresentationObservationTokenForTransientOverlayPresentationManager:(id)arg0 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg0 ;
-(id)createRequestForApplicationActivation:(id)arg0 options:(NSUInteger)arg1 ;
-(id)createRequestWithOptions:(NSUInteger)arg0 ;
-(id)currentStatusBarSettingsForTransientOverlayPresentationManager:(id)arg0 ;
-(id)idleTimerProvider:(id)arg0 didProposeBehavior:(id)arg1 forReason:(id)arg2 ;
-(id)inCallPresentationManager:(id)arg0 createPresentationSessionWithSceneHandle:(id)arg1 ;
-(id)init;
-(id)initWithEventQueue:(id)arg0 ;
-(id)pipControllerForType:(NSInteger)arg0 ;
-(id)siriPresentationObservationTokenForTransientOverlayPresentationManager:(id)arg0 ;
-(id)systemServiceApplicationInfoProvider:(id)arg0 ;
-(id)transactionForTransitionRequest:(id)arg0 ;
-(id)transientOverlayPresentationManager:(id)arg0 acquireBannerLongLookWindowLevelAssertionWithReason:(id)arg1 windowLevel:(CGFloat)arg2 ;
-(id)transientOverlayPresentationManager:(id)arg0 acquireControlCenterWindowLevelAssertionWithReason:(id)arg1 windowLevel:(CGFloat)arg2 ;
-(id)transientOverlayPresentationManager:(id)arg0 acquireDeviceOrientationUpdateDeferralAssertionWithReason:(id)arg1 ;
-(id)transientOverlayPresentationManager:(id)arg0 acquireDisableAutoUnlockAssertionWithReason:(id)arg1 ;
-(id)transientOverlayPresentationManager:(id)arg0 acquireHideAppStatusBarAssertionWithReason:(id)arg1 animated:(BOOL)arg2 ;
-(id)transientOverlayPresentationManager:(id)arg0 acquireInteractiveScreenshotGestureDisabledAssertionWithReason:(id)arg1 ;
-(id)transientOverlayPresentationManager:(id)arg0 acquireProximitySensorEnabledAssertionWithReason:(id)arg1 ;
-(id)transientOverlayPresentationManager:(id)arg0 acquireSiriWindowLevelAssertionWithReason:(id)arg1 windowLevel:(CGFloat)arg2 ;
-(id)transientOverlayPresentationManager:(id)arg0 acquireWallpaperAnimationSuspensionAssertionWithReason:(id)arg1 ;
-(id)transientOverlayPresentationManager:(id)arg0 newSceneDeactivationAssertionWithReason:(NSInteger)arg1 ;
// -(void)_addRequestCompletionBlock:(id)arg0 toTransaction:(unk)arg1  ;
-(void)_addStateCaptureHandlers;
-(void)_applicationEntityWasRemovedFromAppSwitcher:(id)arg0 ;
-(void)_applyCommonActivationSettings:(id)arg0 forRequestWithOptions:(id)arg1 clientProcess:(id)arg2 application:(id)arg3 ;
-(void)_attemptUnlockToApplication:(id)arg0 showPasscode:(BOOL)arg1 origin:(id)arg2 givenOrigin:(id)arg3 options:(id)arg4 completion:(id)arg5 ;
-(void)_broadcastCurrentTransaction;
-(void)_cleanupAppRepairRequest:(id)arg0 ;
-(void)_coversheetDidDismiss;
-(void)_coversheetDidPresent;
-(void)_destroyApplicationSceneEntity:(id)arg0 ;
-(void)_determineSourceForTransitionRequest:(id)arg0 ;
-(void)_dismissPresentedControlCenterModule:(id)arg0 ;
-(void)_executeSuspendedTransactionForRequest:(id)arg0 ;
-(void)_finishInitialization;
-(void)_handleBuddyLaunchFinished;
-(void)_handleKeyShortcutHUDVisibilityDidDismiss;
-(void)_handleKeyShortcutHUDVisibilityDidPresent;
-(void)_handleOpenApplicationRequest:(id)arg0 options:(id)arg1 activationSettings:(id)arg2 origin:(id)arg3 withResult:(id)arg4 ;
-(void)_handleTrustedOpenRequestForApplication:(id)arg0 options:(id)arg1 activationSettings:(id)arg2 origin:(id)arg3 withResult:(id)arg4 ;
-(void)_handleUntrustedOpenRequestForApplication:(id)arg0 options:(id)arg1 activationSettings:(id)arg2 origin:(id)arg3 withResult:(id)arg4 ;
-(void)_handleUserActionRequest:(id)arg0 options:(id)arg1 activationSettings:(id)arg2 origin:(id)arg3 withResult:(id)arg4 ;
-(void)_initializeAndObserveDefaults;
-(void)_noteDidWakeFromSleep;
-(void)_proposeIdleTimerBehaviorForReason:(id)arg0 ;
-(void)_registerHandler:(id)arg0 forExtensionPoint:(id)arg1 ;
-(void)_removeApplicationEntities:(id)arg0 withDestructionIntent:(id)arg1 completion:(id)arg2 ;
-(void)_resume;
-(void)_setupPIPCoordinator;
-(void)_suspend;
-(void)_unregisterHandler:(id)arg0 forExtensionPoint:(id)arg1 ;
-(void)_updateFrontMostApplicationEventPort;
-(void)_updateMedusaEnablementAndNotify:(BOOL)arg0 ;
-(void)applicationProcessDebuggingStateDidChange:(id)arg0 ;
-(void)applicationProcessDidExit:(id)arg0 withContext:(id)arg1 ;
-(void)applicationProcessDidLaunch:(id)arg0 ;
-(void)applicationProcessWillLaunch:(id)arg0 ;
-(void)backlightController:(id)arg0 didAnimateBacklightToFactor:(float)arg1 source:(NSInteger)arg2 ;
-(void)controlCenterModuleTransientOverlayViewControllerNeedsDismissal:(id)arg0 ;
-(void)dealloc;
-(void)dismissPowerDownTransientOverlayWithCompletion:(id)arg0 ;
-(void)inCallPresentationManagerRequestsHandlingOfDeferredUILock:(id)arg0 ;
-(void)powerDownViewControllerDidDisappear:(id)arg0 ;
-(void)powerDownViewControllerRequestsDismissal:(id)arg0 ;
-(void)powerDownViewControllerRequestsPowerDown:(id)arg0 ;
-(void)powerMonitorSystemDidWakeFromSleep:(id)arg0 ;
-(void)powerMonitorSystemSleepRequestAborted:(id)arg0 ;
-(void)powerMonitorSystemWillSleep:(id)arg0 ;
-(void)powerMonitorSystemWillWakeFromSleep:(id)arg0 ;
-(void)presentModuleWithIdentifier:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)presentPowerDownTransientOverlay;
-(void)process:(id)arg0 stateDidChangeFromState:(id)arg1 toState:(id)arg2 ;
-(void)processDidExit:(id)arg0 ;
-(void)processManager:(id)arg0 didAddProcess:(id)arg1 ;
-(void)processManager:(id)arg0 didRemoveProcess:(id)arg1 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)systemService:(id)arg0 canActivateApplication:(id)arg1 withResult:(id)arg2 ;
-(void)systemService:(id)arg0 handleActions:(id)arg1 origin:(id)arg2 withResult:(id)arg3 ;
-(void)systemService:(id)arg0 handleOpenApplicationRequest:(id)arg1 withCompletion:(id)arg2 ;
-(void)systemService:(id)arg0 isPasscodeLockedOrBlockedWithResult:(id)arg1 ;
-(void)systemServicePrepareForExit:(id)arg0 andRelaunch:(BOOL)arg1 ;
-(void)systemServicePrepareForShutdown:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(void)transactionDidComplete:(id)arg0 ;
-(void)transientOverlayPresentationManager:(id)arg0 didDismissViewController:(id)arg1 wasTopmostPresentation:(BOOL)arg2 ;
-(void)transientOverlayPresentationManager:(id)arg0 preferredWhitePointAdaptivityStyleDidChangeWithAnimationSettings:(id)arg1 ;
-(void)transientOverlayPresentationManager:(id)arg0 registerCoverSheetExternalBehaviorProvider:(id)arg1 ;
-(void)transientOverlayPresentationManager:(id)arg0 unregisterCoverSheetExternalBehaviorProvider:(id)arg1 ;
-(void)transientOverlayPresentationManager:(id)arg0 willChangeTopmostViewControllerInterfaceOrientationToOrientation:(NSInteger)arg1 ;
-(void)transientOverlayPresentationManager:(id)arg0 willPresentViewController:(id)arg1 ;
-(void)transientOverlayPresentationManagerRequestsAppIconForceTouchDismissal:(id)arg0 animated:(BOOL)arg1 ;
-(void)transientOverlayPresentationManagerRequestsControlCenterDismissal:(id)arg0 animated:(BOOL)arg1 ;
-(void)transientOverlayPresentationManagerRequestsSiriDismissal:(id)arg0 animated:(BOOL)arg1 ;
-(void)updateFrontMostApplicationEventPort;
-(void)watchdogFired:(id)arg0 ;
-(void)watchdogStarted:(id)arg0 ;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif