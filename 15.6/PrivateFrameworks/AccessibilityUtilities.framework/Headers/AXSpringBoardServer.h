// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXSPRINGBOARDSERVER_H
#define AXSPRINGBOARDSERVER_H

@class AXAccessQueue, NSMutableArray, NSString, NSMutableDictionary;
@protocol AXSystemAppServer;


#import "AXServer.h"

@interface AXSpringBoardServer : AXServer <AXSystemAppServer>



@property (retain, nonatomic) AXAccessQueue *accessQueue; // ivar: _accessQueue
@property (retain, nonatomic) NSMutableArray *actionHandlers; // ivar: _actionHandlers
@property (copy, nonatomic) id *currentAlertHandler; // ivar: _currentAlertHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isGuidedAccessActive;
@property (retain, nonatomic) NSMutableDictionary *mediaPlayingHandlers; // ivar: _mediaPlayingHandlers
@property (retain, nonatomic) NSMutableDictionary *reachabilityHandlers; // ivar: _reachabilityHandlers
@property (nonatomic) BOOL shouldFocusNonExclusiveSystemUI; // ivar: _shouldFocusNonExclusiveSystemUI
@property (readonly) Class superclass;


+(id)server;
-(BOOL)_isSystemAppFrontmostExcludingSiri:(BOOL)arg0 ;
-(BOOL)_shouldDispatchLocally;
-(BOOL)_shouldValidateEntitlements;
-(BOOL)areSystemGesturesDisabledByAccessibility;
-(BOOL)areSystemGesturesDisabledNatively;
-(BOOL)canSetDockIconActivationMode;
-(BOOL)connectedDevicesRequireAssistiveTouch;
-(BOOL)currentDevicesHaveAssistiveTouchCustomActions;
-(BOOL)dismissBuddyIfNecessary;
-(BOOL)dismissSiri;
-(BOOL)hasActiveCall;
-(BOOL)hasActiveEndpointCall;
-(BOOL)hasActiveOrPendingCall;
-(BOOL)hasActiveOrPendingCallOrFaceTime;
-(BOOL)isAppSwitcherVisible;
-(BOOL)isBannerVisible;
-(BOOL)isControlCenterVisible;
-(BOOL)isDarkModeActive;
-(BOOL)isDockVisible;
-(BOOL)isInspectorMinimized;
-(BOOL)isLockScreenVisible;
-(BOOL)isMagnifierVisible;
-(BOOL)isMakingEmergencyCall;
-(BOOL)isNonExclusiveSystemUIFocusableIncludingPIPWindow:(BOOL)arg0 ;
-(BOOL)isNonExclusiveSystemUIFocusableIncludingPIPWindow:(BOOL)arg0 includingNonDismissableElements:(BOOL)arg1 ;
-(BOOL)isNotificationCenterVisible;
-(BOOL)isNotificationVisible;
-(BOOL)isNowPlayingUIVisible;
-(BOOL)isOrientationLocked;
-(BOOL)isPIPWindowVisible;
-(BOOL)isPasscodeLockVisible;
-(BOOL)isPointInsideAccessibilityInspector:(id)arg0 ;
-(BOOL)isPurpleBuddyAppFrontmost;
-(BOOL)isReceivingAirPlay;
-(BOOL)isRingerMuted;
-(BOOL)isScreenLockedWithPasscode:(*BOOL)arg0 ;
-(BOOL)isScreenSaverVisible;
-(BOOL)isScreenshotWindowVisible;
-(BOOL)isSettingsAppFrontmost;
-(BOOL)isShelfSwitcherVisible;
-(BOOL)isShowingAXAlert;
-(BOOL)isShowingHomescreen;
-(BOOL)isShowingLongLookNotification;
-(BOOL)isShowingNonSystemApp;
-(BOOL)isShowingRemoteView:(NSInteger)arg0 ;
-(BOOL)isSideSwitchUsedForOrientation;
-(BOOL)isSiriTalkingOrListening;
-(BOOL)isSiriVisible;
-(BOOL)isSoftwareUpdateUIVisible;
-(BOOL)isSpeakThisTemporarilyDisabled;
-(BOOL)isSpotlightVisible;
-(BOOL)isStatusBarNativeFocusable;
-(BOOL)isStatusBarNativeFocusableIncludingNonDismissableElements:(BOOL)arg0 ;
-(BOOL)isSyncingRestoringResettingOrUpdating;
-(BOOL)isSystemAppFrontmost;
-(BOOL)isSystemAppFrontmostExludingSiri;
-(BOOL)isSystemAppShowingAnAlert;
-(BOOL)isSystemSleeping;
-(BOOL)isVoiceControlRunning;
-(BOOL)loadGAXBundleForUnmanagedASAM;
-(BOOL)performMedusaGesture:(NSUInteger)arg0 ;
-(BOOL)showControlCenter:(BOOL)arg0 ;
-(BOOL)showNotificationCenter:(BOOL)arg0 ;
-(BOOL)toggleDarkMode;
-(BOOL)toggleIncomingCall;
-(CGFloat)reachabilityOffset;
-(CGFloat)volumeLevel;
-(NSInteger)activeApplicationOrientation;
-(NSInteger)activeInterfaceOrientation;
-(id)_axSpringBoardServerInstance;
-(id)_axSpringBoardServerInstanceDelegate;
-(id)_axSpringBoardServerInstanceIfExists;
-(id)_handleActionResult:(id)arg0 ;
-(id)_handleMediaPlayingResult:(id)arg0 ;
-(id)_handleReachabilityResult:(id)arg0 ;
-(id)_handleReplyResult:(id)arg0 ;
-(id)_payloadForRemoteViewType:(NSInteger)arg0 data:(id)arg1 ;
-(id)_serviceName;
-(id)allowedMedusaGestures;
-(id)applicationWithIdentifier:(id)arg0 ;
-(id)focusedAppPID;
-(id)focusedAppProcess;
-(id)focusedApps;
-(id)init;
-(id)installedApps;
-(id)medusaApps;
-(id)runningAppPIDs;
-(id)runningAppProcesses;
-(id)splashImageForAppWithBundleIdentifier:(id)arg0 ;
-(id)visibleTripleClickItems;
-(int)pid;
-(int)purpleBuddyPID;
-(int)topEventPidOverride;
-(void)_didConnectToClient;
-(void)_didConnectToServer;
-(void)_isSystemAppFrontmostExcludingSiri:(BOOL)arg0 completion:(id)arg1 ;
-(void)_sendRemoteViewIPCMessage:(int)arg0 withRemoteViewType:(NSInteger)arg1 withData:(id)arg2 ;
-(void)_wasDisconnectedFromClient;
-(void)_willClearServer;
-(void)acquireAssertionWithType:(id)arg0 identifier:(id)arg1 ;
-(void)activateSOSMode;
-(void)activeInterfaceOrientation:(id)arg0 ;
-(void)armApplePay;
-(void)cancelReachabilityDetection;
-(void)cancelSiriDismissalForAssistiveTouch;
-(void)cleanupAlertHandler;
-(void)copyStringToPasteboard:(id)arg0 ;
-(void)didPotentiallyDismissNonExclusiveSystemUI;
-(void)dismissAppSwitcher;
-(void)dismissShelfSwitcher;
-(void)hideAlert;
-(void)hideNotificationCenter;
-(void)hideRemoteView:(NSInteger)arg0 ;
-(void)isMagnifierVisibleWithCompletion:(id)arg0 ;
-(void)isMediaPlayingForApp:(id)arg0 completionHandler:(id)arg1 ;
-(void)isSystemAppFrontmost:(id)arg0 ;
-(void)isSystemSleeping:(id)arg0 ;
-(void)launchMagnifierApp;
-(void)launchVoiceOverImageExplorerViewServiceForResult:(id)arg0 withData:(id)arg1 ;
-(void)launchVoiceOverQuickSettingsViewService:(id)arg0 ;
-(void)openAppSwitcher;
-(void)openAssistiveTouchCustomGestureCreation;
-(void)openCommandAndControlCommands;
-(void)openCommandAndControlSettings;
-(void)openCommandAndControlVocabulary;
-(void)openSCATCustomGestureCreation;
-(void)openVoiceControl;
-(void)pauseMedia;
-(void)pauseMediaForApp:(id)arg0 ;
-(void)pid:(id)arg0 ;
-(void)purpleBuddyPID:(id)arg0 ;
-(void)reactivateInCallService;
-(void)rebootDevice;
// -(void)registerReachabilityHandler:(id)arg0 withIdentifierCallback:(unk)arg1  ;
// -(void)registerSpringBoardActionHandler:(id)arg0 withIdentifierCallback:(unk)arg1  ;
-(void)relinquishAssertionWithType:(id)arg0 identifier:(id)arg1 ;
-(void)removeActionHandler:(id)arg0 ;
-(void)removeReachabilityHandler:(id)arg0 ;
-(void)resetDimTimer;
-(void)resumeMedia;
-(void)resumeMediaForApp:(id)arg0 ;
-(void)revealSpotlight;
// -(void)screenLockStatus:(id)arg0 passcodeStatusRequired:(unk)arg1  ;
-(void)setCancelGestureActivation:(NSUInteger)arg0 cancelEnabled:(BOOL)arg1 ;
-(void)setCaptionPanelContextId:(unsigned int)arg0 ;
-(void)setDockIconActivationMode:(NSUInteger)arg0 ;
-(void)setHearingAidControlVisible:(BOOL)arg0 ;
-(void)setOrientation:(NSInteger)arg0 ;
-(void)setOrientationLocked:(BOOL)arg0 ;
-(void)setReachabilityActive:(BOOL)arg0 ;
-(void)setReachabilityEnabled:(BOOL)arg0 ;
-(void)setShowSpeechPlaybackControls:(BOOL)arg0 ;
-(void)setVolume:(CGFloat)arg0 ;
-(void)showAlert:(int)arg0 withHandler:(id)arg1 ;
// -(void)showAlert:(int)arg0 withHandler:(id)arg1 withData:(unk)arg2  ;
-(void)showNotificationCenter;
-(void)showRemoteView:(NSInteger)arg0 withData:(id)arg1 ;
-(void)simulateEdgePressHaptics;
-(void)startHearingAidServer;
-(void)systemAppInfoWithQuery:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)takeScreenshot;
-(void)toggleAppLibrary;
-(void)toggleBackgroundSounds;
-(void)toggleDock;
-(void)toggleNotificationCenter;
-(void)toggleQuickNote;
-(void)toggleReachability;
-(void)toggleSpotlight;
-(void)toggleTorch;
-(void)unlockDevice;
-(void)wakeUpDeviceIfNecessary;


@end


#endif