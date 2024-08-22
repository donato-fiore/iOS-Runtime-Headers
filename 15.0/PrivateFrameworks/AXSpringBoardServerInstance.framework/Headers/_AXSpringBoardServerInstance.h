// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _AXSPRINGBOARDSERVERINSTANCE_H
#define _AXSPRINGBOARDSERVERINSTANCE_H

@class AXIPCServer, AXIPCClient, NSMutableArray, NSMapTable, RBSProcessMonitor, _AXAssertionServer, NSString, NSMutableDictionary;
@protocol AXIDSServicesClient, OS_dispatch_queue, AXSpringBoardServerInstanceDelegate;

#import <Foundation/Foundation.h>


@interface _AXSpringBoardServerInstance : NSObject <AXIDSServicesClient>

 {
    AXIPCServer *_server;
    AXIPCClient *_client;
    NSMutableArray *_actionHandlers;
    NSMutableArray *_reachabilityHandlers;
    NSMapTable *_assertionClients;
    AXIPCClient *_currentSpeakerClient;
    *__IOHIDManager _hidManager;
    RBSProcessMonitor *_processMonitor;
    NSObject<OS_dispatch_queue> *_avSystemRetrievalQueue;
}


@property (retain, nonatomic) _AXAssertionServer *assertionServer; // ivar: _assertionServer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXSpringBoardServerInstanceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableControlCenterAssertionHeld; // ivar: _disableControlCenterAssertionHeld
@property (nonatomic) BOOL disableNotificationCenterAssertionHeld; // ivar: _disableNotificationCenterAssertionHeld
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldAllowActiveWatchToAutoAnswer;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *watchActiveWristState; // ivar: _watchActiveWristState


+(id)springBoardServerInstance;
+(id)springBoardServerInstanceIfExists;
+(unsigned int)_axCaptionPanelContextId;
-(BOOL)_hasActionHandlerForClientPort:(unsigned int)arg0 ;
-(BOOL)_hasReachabilityHandlerForClientPort:(unsigned int)arg0 ;
-(BOOL)hasActiveCall;
-(BOOL)hasActiveEndpointCall;
-(BOOL)hasActiveOrPendingCall;
-(BOOL)hasActiveOrPendingCallOrFaceTime;
-(BOOL)onlySystemGesturesDisabledHolderIsGuidedAccess;
-(BOOL)shouldBlockGestureActivation:(NSUInteger)arg0 ;
-(BOOL)shouldCancelSiriTouchActivationBlock;
-(BOOL)shouldSendReachabilityToggled;
-(id)_actionHandling:(id)arg0 ;
-(id)_activateSOSMode:(id)arg0 ;
-(id)_allowedMedusaGestures:(id)arg0 ;
-(id)_areSystemGesturesDisabledByAccessibility:(id)arg0 ;
-(id)_areSystemGesturesDisabledNatively:(id)arg0 ;
-(id)_armApplePay:(id)arg0 ;
-(id)_assertionClientForPort:(unsigned int)arg0 ;
-(id)_canSetDockIconActivationMode:(id)arg0 ;
-(id)_cancelGestureActivation:(id)arg0 ;
-(id)_cancelSiriDismissalForAssistiveTouch:(id)arg0 ;
-(id)_connectedDevicesHaveAssistiveTouchCustomActions:(id)arg0 ;
-(id)_connectedDevicesRequireAssistiveTouch:(id)arg0 ;
-(id)_copyStringToPasteboard:(id)arg0 ;
-(id)_dismissAppSwitcher:(id)arg0 ;
-(id)_dismissShelfSwitcher:(id)arg0 ;
-(id)_dismissSiri:(id)arg0 ;
-(id)_getActiveInterfaceOrientation:(id)arg0 ;
-(id)_getApplicationOrientation:(id)arg0 ;
-(id)_getPid:(id)arg0 ;
-(id)_getSplashImageForApp:(id)arg0 ;
-(id)_handleAcquireAssertion:(id)arg0 ;
-(id)_handleCancelReachabilityTimer:(id)arg0 ;
-(id)_handleGetFocusedAppPID:(id)arg0 ;
-(id)_handleGetFocusedApps:(id)arg0 ;
-(id)_handleGetPurpleBuddyPID:(id)arg0 ;
-(id)_handleGetRunningAppPIDs:(id)arg0 ;
-(id)_handleInstalledApps:(id)arg0 ;
-(id)_handleIsInspectorMinimized:(id)arg0 ;
-(id)_handleIsMagnifierVisible:(id)arg0 ;
-(id)_handleIsPurpleBuddyAppFrontmost:(id)arg0 ;
-(id)_handleIsSettingsAppFrontmost:(id)arg0 ;
-(id)_handleIsSystemAppFrontmost:(id)arg0 ;
-(id)_handleIsSystemAppShowingAnAlert:(id)arg0 ;
-(id)_handleLaunchMagnifierApp:(id)arg0 ;
-(id)_handleLaunchVoiceOverImageExplorerViewService:(id)arg0 ;
-(id)_handleLaunchVoiceOverQuickSettingsViewService:(id)arg0 ;
-(id)_handleLoadGAXBundleForUnmanagedASAM:(id)arg0 ;
-(id)_handleReactivateInCallService:(id)arg0 ;
-(id)_handleRelinquishAssertion:(id)arg0 ;
-(id)_handleRevealSpotlight:(id)arg0 ;
-(id)_handleSpringBoardInfoQuery:(id)arg0 ;
-(id)_handleToggleIncomingCall:(id)arg0 ;
-(id)_handleToggleSpotlight:(id)arg0 ;
-(id)_hasActiveCall:(id)arg0 ;
-(id)_hasActiveEndpointCall:(id)arg0 ;
-(id)_hasActiveOrPendingCall:(id)arg0 ;
-(id)_hasActiveOrPendingCallOrFaceTime:(id)arg0 ;
-(id)_hideAlert:(id)arg0 ;
-(id)_hideRemoteView:(id)arg0 ;
-(id)_initServer;
-(id)_isAppSwitcherVisible:(id)arg0 ;
-(id)_isControlCenterVisible:(id)arg0 ;
-(id)_isDarkModeActive:(id)arg0 ;
-(id)_isDockVisible:(id)arg0 ;
-(id)_isGuidedAccessActive:(id)arg0 ;
-(id)_isLockScreenVisible:(id)arg0 ;
-(id)_isLongLookNotificationVisible:(id)arg0 ;
-(id)_isMakingEmergencyCall:(id)arg0 ;
-(id)_isMediaPlaying:(id)arg0 ;
-(id)_isNotificationCenterVisible:(id)arg0 ;
-(id)_isOrientationLocked:(id)arg0 ;
-(id)_isPIPWindowVisible:(id)arg0 ;
-(id)_isPasscodeLockVisible:(id)arg0 ;
-(id)_isPointInAXInspector:(id)arg0 ;
-(id)_isRingerMuted:(id)arg0 ;
-(id)_isShelfSwitcherVisible:(id)arg0 ;
-(id)_isShowingHomescreen:(id)arg0 ;
-(id)_isShowingNonSystemApp:(id)arg0 ;
-(id)_isShowingRemoteView:(id)arg0 ;
-(id)_isSideSwitchUsedForOrientation:(id)arg0 ;
-(id)_isSiriVisible:(id)arg0 ;
-(id)_isSpeakThisTemporarilyDisabled:(id)arg0 ;
-(id)_isSpotlightVisible:(id)arg0 ;
-(id)_isSyncingRestoringResettingOrUpdating:(id)arg0 ;
-(id)_isSystemSleeping:(id)arg0 ;
-(id)_isVoiceControlRunning:(id)arg0 ;
-(id)_medusaApps:(id)arg0 ;
-(id)_openAppSwitcher:(id)arg0 ;
-(id)_openCommandAndControlCommands:(id)arg0 ;
-(id)_openCommandAndControlSettings:(id)arg0 ;
-(id)_openCommandAndControlVocabulary:(id)arg0 ;
-(id)_openCustomGestureCreationForAST:(id)arg0 ;
-(id)_openCustomGestureCreationForSCAT:(id)arg0 ;
-(id)_openVoiceControl:(id)arg0 ;
-(id)_pauseMedia:(id)arg0 ;
-(id)_performMedusaGesture:(id)arg0 ;
-(id)_reachabilityActive:(id)arg0 ;
-(id)_reachabilityEnabled:(id)arg0 ;
-(id)_reachabilityHandling:(id)arg0 ;
-(id)_reachabilityOffset:(id)arg0 ;
-(id)_rebootDevice:(id)arg0 ;
-(id)_resetDimTimer:(id)arg0 ;
-(id)_resumeMedia:(id)arg0 ;
-(id)_setCaptionPanelContextId:(id)arg0 ;
-(id)_setDockIconActivationMode:(id)arg0 ;
-(id)_setOrientation:(id)arg0 ;
-(id)_setOrientationLocked:(id)arg0 ;
-(id)_setSpeechPlaybackControls:(id)arg0 ;
-(id)_showAlert:(id)arg0 ;
-(id)_showControlCenter:(id)arg0 ;
-(id)_showNotificationCenter:(id)arg0 ;
-(id)_showRemoteView:(id)arg0 ;
-(id)_simulateEdgePressHaptics:(id)arg0 ;
-(id)_startHearingAidServer:(id)arg0 ;
-(id)_takeScreenshot:(id)arg0 ;
-(id)_toggleAppLibrary:(id)arg0 ;
-(id)_toggleBackgroundSounds:(id)arg0 ;
-(id)_toggleDarkMode:(id)arg0 ;
-(id)_toggleDock:(id)arg0 ;
-(id)_toggleHearingControl:(id)arg0 ;
-(id)_toggleNotificationCenter:(id)arg0 ;
-(id)_toggleQuickNote:(id)arg0 ;
-(id)_toggleTorch:(id)arg0 ;
-(id)_topEventPidOverride:(id)arg0 ;
-(id)_unlockDevice:(id)arg0 ;
-(id)_visibleTripleClickItems:(id)arg0 ;
-(id)_volumeLevel:(id)arg0 ;
-(id)_wakeUpDeviceIfNecessary:(id)arg0 ;
-(id)init;
// -(void)_accessibilityRetrieveAVSystemControlData:(id)arg0 withCompletionBlock:(unk)arg1  ;
-(void)_initializeAutoAnswerWatchObserver;
-(void)_initializeHandlers;
-(void)_initializeHearing;
// -(void)_performBlockAsynchronously:(id)arg0 afterDelay:(unk)arg1  ;
-(void)_performValidation;
-(void)_proximityDidChange:(id)arg0 ;
-(void)_registerServerAndNotifyClients;
-(void)_relinquishAllAssertionsForClientWithPort:(unsigned int)arg0 ;
-(void)_removeActionHandler:(unsigned int)arg0 ;
-(void)_removeReachabilityHandler:(unsigned int)arg0 ;
-(void)_requestOnWristState;
-(void)_setAVCallRoute:(id)arg0 ;
-(void)_setCallRoute:(int)arg0 ifCurrentlyRoutedTo:(id)arg1 ;
-(void)_setCallRoute:(int)arg0 ifCurrentlyRoutedTo:(id)arg1 withRoutes:(id)arg2 ;
-(void)_setDashboardSystemGesturesDisabled:(BOOL)arg0 ;
-(void)_setSystemGesturesEnabled:(BOOL)arg0 ;
-(void)_setupAssertionServerIfNeeded;
-(void)_springBoardFinishedLaunching:(id)arg0 ;
-(void)_updateProcess:(id)arg0 ;
-(void)acquireAssertionWithType:(id)arg0 identifier:(id)arg1 clientPort:(unsigned int)arg2 ;
-(void)dealloc;
-(void)didReceiveIncomingData:(id)arg0 ;
-(void)reachabilityToggledWithPayload:(id)arg0 synchronizationPort:(unsigned int)arg1 completion:(id)arg2 ;
-(void)registerHandlerForMessageKey:(int)arg0 target:(id)arg1 selector:(SEL)arg2 entitlements:(id)arg3 ;
-(void)relinquishAssertionWithType:(id)arg0 identifier:(id)arg1 clientPort:(unsigned int)arg2 ;
-(void)springBoardActionOccurred:(NSInteger)arg0 ;
-(void)springBoardActionOccurred:(NSInteger)arg0 withPayload:(id)arg1 ;
-(void)userChangedRouteNotification:(id)arg0 ;


@end


#endif