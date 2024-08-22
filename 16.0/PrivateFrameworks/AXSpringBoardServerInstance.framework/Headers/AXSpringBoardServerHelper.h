// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSPRINGBOARDSERVERHELPER_H
#define AXSPRINGBOARDSERVERHELPER_H

@class NSMutableArray, NSString, AXAssertion, AXSSMotionTrackingInputManager, UIWindow;
@protocol AXSpringBoardServerSideAppManagerDelegate, AXSSMotionTrackingInputManagerDelegate, AXSpringBoardServerInstanceDelegate, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "AXSpringBoardServerAlertManager.h"
#import "AXSpringBoardServerSideAppManager.h"

@interface AXSpringBoardServerHelper : NSObject <AXSpringBoardServerSideAppManagerDelegate, AXSSMotionTrackingInputManagerDelegate, AXSpringBoardServerInstanceDelegate>

 {
    id *_alertHandler;
    NSMutableArray *_visibleTripleClickItems;
    BOOL _shouldOverrideInterfaceOrientation;
    NSMutableArray *_notificationObservers;
}


@property (retain, nonatomic) AXSpringBoardServerAlertManager *alertManager; // ivar: _alertManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AXAssertion *disableSystemGesturesAssertionForAlert; // ivar: _disableSystemGesturesAssertionForAlert
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AXSSMotionTrackingInputManager *motionTrackingInputManager; // ivar: _motionTrackingInputManager
@property (retain, nonatomic) UIWindow *presentationWindow; // ivar: _presentationWindow
@property (retain, nonatomic) NSObject<BSInvalidatable> *presentationWindowFocusAssertion; // ivar: _presentationWindowFocusAssertion
@property (readonly, nonatomic) AXSpringBoardServerSideAppManager *sideAppManager;
@property (readonly) Class superclass;


+(id)_applicationController;
+(id)_assistantController;
+(id)_awayController;
+(id)_axActiveWindowScene;
+(id)_backlightController;
+(id)_globalIdleTimeCoordinator;
+(id)_iconController;
+(id)_lockScreenManager;
+(id)_syncController;
+(id)_uiController;
+(id)_wallpaperController;
+(id)sharedServerHelper;
+(void)initialize;
-(BOOL)_accessibilityAllowShowNotificationGestureOverride;
-(BOOL)_accessibilityHandleHomeOrLockButtonPress;
-(BOOL)_accessibilityIsUILocked;
-(BOOL)_accessibilityShowCoverSheet:(BOOL)arg0 serverInstance:(id)arg1 completion:(id)arg2 ;
-(BOOL)_accessibilityShowNotificationCenter:(BOOL)arg0 serverInstance:(id)arg1 ;
-(BOOL)_isDarkModeActive;
-(BOOL)_isDisplayingAlertController;
-(BOOL)_shouldShowTCOption:(int)arg0 ;
-(BOOL)accessibilityIsBannerVisible;
-(BOOL)accessibilityIsNotificationVisible;
-(BOOL)accessibilityShowControlCenter:(BOOL)arg0 ;
-(BOOL)areSystemGesturesDisabledByAccessibilityWithServerInstance:(id)arg0 ;
-(BOOL)areSystemGesturesDisabledNativelyWithServerInstance:(id)arg0 ;
-(BOOL)canLaunchAsFloatingApplicationForIconView:(id)arg0 ;
-(BOOL)canLaunchAsPinnedApplicationForIconView:(id)arg0 ;
-(BOOL)canSetDockIconActivationModeForServerInstance:(id)arg0 ;
-(BOOL)connectedDevicesRequireAssistiveTouch;
-(BOOL)currentDevicesHaveAssistiveTouchCustomActions;
-(BOOL)dismissSiriWithServerInstance:(id)arg0 ;
-(BOOL)handleToggleIncomingCallWithServerInstance:(id)arg0 ;
-(BOOL)hasActiveCallWithServerInstance:(id)arg0 ;
-(BOOL)hasActiveEndpointCallWithServerInstance:(id)arg0 ;
-(BOOL)hasActiveOrPendingCallOrFaceTimeWithServerInstance:(id)arg0 ;
-(BOOL)hasActiveOrPendingCallWithServerInstance:(id)arg0 ;
-(BOOL)isAppSwitcherPeekingWithServerInstance:(id)arg0 ;
-(BOOL)isAppSwitcherVisibleWithServerInstance:(id)arg0 ;
-(BOOL)isBannerVisibleWithServerInstance:(id)arg0 ;
-(BOOL)isBuddyRunning;
-(BOOL)isControlCenterVisibleWithServerInstance:(id)arg0 ;
-(BOOL)isCoverSheetVisibleWithServerInstance:(id)arg0 ;
-(BOOL)isDarkModeActiveWithServiceInstance:(id)arg0 ;
-(BOOL)isDockVisibleWithServerInstance:(id)arg0 ;
-(BOOL)isGuidedAccessActiveWithServerInstance:(id)arg0 ;
-(BOOL)isLockScreenVisible;
-(BOOL)isLockScreenVisibleWithServerInstance:(id)arg0 ;
-(BOOL)isLongLookNotificationVisibleWithServerInstance:(id)arg0 ;
-(BOOL)isMagnifierVisibleWithServerInstance:(id)arg0 ;
-(BOOL)isMakingEmergencyCallWithServerInstance:(id)arg0 ;
-(BOOL)isNotificationCenterVisibleWithServerInstance:(id)arg0 ;
-(BOOL)isNotificationVisibleWithServerInstance:(id)arg0 ;
-(BOOL)isOrientationLockedWithServerInstance:(id)arg0 ;
-(BOOL)isPIPWindowVisibleWithServerInstance:(id)arg0 ;
-(BOOL)isPasscodeLockVisible;
-(BOOL)isPasscodeLockVisibleWithServerInstance:(id)arg0 ;
-(BOOL)isPasscodeRequiredOnLockWithServerInstance:(id)arg0 ;
-(BOOL)isPreferencesFrontmost;
-(BOOL)isPurpleBuddyAppFrontmostWithServerInstance:(id)arg0 ;
-(BOOL)isReachabilityActive;
-(BOOL)isRingerMutedWithServerInstance:(id)arg0 ;
-(BOOL)isScreenLockedWithServerInstance:(id)arg0 ;
-(BOOL)isScreenshotWindowVisibleWithServerInstance:(id)arg0 ;
-(BOOL)isSettingsAppFrontmostWithServerInstance:(id)arg0 ;
-(BOOL)isShelfSwitcherVisibleWithServerInstance:(id)arg0 ;
-(BOOL)isShowingHomescreenWithServerInstance:(id)arg0 ;
-(BOOL)isShowingNonSystemAppWithServerInstance:(id)arg0 ;
-(BOOL)isSideSwitchUsedForOrientationWithServerInstance:(id)arg0 ;
-(BOOL)isSiriVisibleWithServerInstance:(id)arg0 ;
-(BOOL)isSpeakThisTemporarilyDisabledWithServerInstance:(id)arg0 ;
-(BOOL)isSpotlightVisibleWithServerInstance:(id)arg0 ;
-(BOOL)isStatusBarNativeFocusableWithServerInstance:(id)arg0 includingNonDismissableElements:(BOOL)arg1 ;
-(BOOL)isSyncingRestoringResettingOrUpdatingWithServerInstance:(id)arg0 ;
-(BOOL)isSystemAppFrontmostExcludingSiri:(BOOL)arg0 withServerInstance:(id)arg1 ;
-(BOOL)isSystemAppShowingAnAlertWithServerInstance:(id)arg0 ;
-(BOOL)isSystemGestureActiveWithServerInstance:(id)arg0 ;
-(BOOL)isSystemSleepingWithServerInstance:(id)arg0 ;
-(BOOL)isTodayViewOrAppLibraryVisibleWithServerInstance:(id)arg0 ;
-(BOOL)isVoiceControlRunningWithServerInstance:(id)arg0 ;
-(BOOL)serverInstance:(id)arg0 isShowingRemoteViewType:(NSInteger)arg1 ;
-(BOOL)serverInstance:(id)arg0 performMedusaGesture:(NSUInteger)arg1 ;
-(BOOL)serverInstance:(id)arg0 showControlCenter:(BOOL)arg1 ;
-(BOOL)serverInstance:(id)arg0 showNotificationCenter:(BOOL)arg1 ;
-(BOOL)shouldOverrideInterfaceOrientation;
-(BOOL)toggleDarkModeWithServerInstance:(id)arg0 ;
-(CGFloat)reachabilityOffsetWithServerInstance:(id)arg0 ;
-(CGFloat)volumeLevelWithServerInstance:(id)arg0 ;
-(NSUInteger)_accessibilityNotificationCount;
-(id)_accessibilityCoverSheetPresentationManagerSharedInstance;
-(id)_accessibilityNotificationSummary:(NSUInteger)arg0 ;
-(id)_axFloatingDockController;
-(id)_handleUsageConfirmationDialogWithMessage:(id)arg0 ;
-(id)_serviceForRemoteViewType:(NSInteger)arg0 ;
-(id)_visibleTripleClickItems;
-(id)allowedMedusaGesturesWithServerInstance:(id)arg0 ;
-(id)appForLayoutRole:(NSInteger)arg0 ;
-(id)appNameFromPid:(int)arg0 withServerInstance:(id)arg1 ;
-(id)coverSheetViewController;
-(id)focusedAppPIDWithServerInstance:(id)arg0 ;
-(id)focusedAppProcessWithServerInstance:(id)arg0 ;
-(id)focusedAppsWithServerInstance:(id)arg0 ;
-(id)focusedOccludedAppScenesWithServerInstance:(id)arg0 ;
-(id)frontmostAppProcessWithServerInstance:(id)arg0 ;
-(id)init;
-(id)installedAppsWithServerInstance:(id)arg0 ;
-(id)medusaAppsWithServerInstance:(id)arg0 ;
-(id)medusaBundleIDsToLayoutRoles;
-(id)runningAppPIDsWithServerInstance:(id)arg0 ;
-(id)runningAppProcessesWithServerInstance:(id)arg0 ;
-(id)sceneLayoutState;
-(id)serverInstance:(id)arg0 appWithIdentifier:(id)arg1 ;
-(id)serverInstance:(id)arg0 splashImageForAppWithBundleIdentifier:(id)arg1 ;
-(id)serverInstance:(id)arg0 springBoardSystemInfoQuery:(NSUInteger)arg1 ;
-(id)visibleTripleClickItemsWithServerInstance:(id)arg0 ;
-(int)purpleBuddyPIDWithServerInstance:(id)arg0 ;
-(void)_accessibilitySetAllowShowNotificationGestureOverride:(BOOL)arg0 ;
-(void)_cleanupAlertController;
-(void)_cleanupPresentationWindow;
-(void)_createAlertWindowSubclass;
-(void)_dismissAlertController;
-(void)_dismissAlertControllerWithCompletion:(id)arg0 ;
-(void)_dismissViewControllerWithCompletion:(id)arg0 ;
-(void)_displayAlertController:(id)arg0 ;
-(void)_displayViewController:(id)arg0 ;
-(void)_displayViewController:(id)arg0 withCompletion:(id)arg1 ;
-(void)_handleASTMenuCustomizeAddDwell:(BOOL)arg0 addScroll:(BOOL)arg1 ;
-(void)_handleASTMenuFullForInstance:(id)arg0 ;
-(void)_handleAlertActionPress:(id)arg0 ;
-(void)_handleConfirmRebootDevice;
-(void)_handleConnectedDevicesHaveAssistiveTouchCustomActions;
-(void)_handleDisableAssistiveTouchConfirmation;
-(void)_handleDisableBrightnessFiltersAlert:(id)arg0 ;
-(void)_handleDisableFKAConfirmation;
-(void)_handleDisableSwitchControlConfirmation;
-(void)_handleDisallowUSBRestrictedModeSCInformativeOnly:(BOOL)arg0 ;
-(void)_handleDisallowUSBRestrictedModeVOInformativeOnly:(BOOL)arg0 ;
-(void)_handleLiveTranscriptionConfirmation;
-(void)_handleSecureItentAlertForSwitchAST;
-(void)_handleSwitchUsageConfirmed;
-(void)_handleTouchAccommodationsUsageConfirmed;
-(void)_handleTripleClickAskAlert;
-(void)_handleVONoHomeButtonGestureAlert;
-(void)_handleVoiceOverUsageConfirmation;
-(void)_handleZoomConflictAlert:(id)arg0 ;
-(void)_handleZoomInBuddyAlert;
-(void)_handleZoomTripleClickAfterConflict;
-(void)_performValidation;
-(void)_sortVisibleItems;
-(void)_toggleTripleClickDisplay;
-(void)_unlockWithIntent:(int)arg0 ;
-(void)_updateVisibleTripleClickItems;
-(void)activateSOSModeWithServerInstance:(id)arg0 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(NSInteger)arg0 willAnimateWithDuration:(CGFloat)arg1 fromOrientation:(NSInteger)arg2 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(NSInteger)arg0 ;
-(void)armApplePayWithServerInstance:(id)arg0 ;
-(void)cancelSiriDismissalForAssistiveTouchWithServerInstance:(id)arg0 ;
-(void)dealloc;
-(void)didFailToFloatAppForSideAppManager:(id)arg0 ;
-(void)didFailToPinAppForSideAppManager:(id)arg0 ;
-(void)diminishJindoWithServerInstance:(id)arg0 ;
-(void)dismissAlertWithCancel;
-(void)dismissAppSwitcherWithServerInstance:(id)arg0 ;
-(void)dismissShelfSwitcherWithServerInstance:(id)arg0 ;
-(void)forceLoadGAXBundleWithServerInstance:(id)arg0 ;
-(void)freezeClarityUILoadingScreenWithServerInstance:(id)arg0 ;
-(void)handleBrokenHomeButtonAlert;
-(void)hideAlertWithServerInstance:(id)arg0 ;
-(void)isMediaPlayingWithServerInstance:(id)arg0 forBundleId:(id)arg1 completion:(id)arg2 ;
-(void)launchApplication:(id)arg0 ;
-(void)launchApplicationWithFullConfiguration:(id)arg0 ;
-(void)launchFloatingApplication:(id)arg0 ;
-(void)launchMagnifierAppWithServerInstance:(id)arg0 ;
-(void)launchPinnedApplication:(id)arg0 onLeadingSide:(BOOL)arg1 ;
-(void)launchVoiceOverImageExplorerViewServiceWithServerInstance:(id)arg0 forData:(id)arg1 ;
-(void)launchVoiceOverQuickSettingsViewServiceWithServerInstance:(id)arg0 data:(id)arg1 ;
-(void)openAppSwitcherWithServerInstance:(id)arg0 ;
-(void)openCommandAndControlCommandsWithServerInstance:(id)arg0 ;
-(void)openCommandAndControlSettingsWithServerInstance:(id)arg0 ;
-(void)openCommandAndControlVocabularyWithServerInstance:(id)arg0 ;
-(void)openCustomGestureCreationForASTWithServerInstance:(id)arg0 ;
-(void)openCustomGestureCreationForSCATWithServerInstance:(id)arg0 ;
-(void)openMenuCustomizationForASTWithServerInstance:(id)arg0 ;
-(void)openVoiceControlWithServerInstance:(id)arg0 ;
-(void)presentNearbyDeviceControlPickerWithServerInstance:(id)arg0 ;
-(void)reactivateInCallServiceWithServerInstance:(id)arg0 ;
-(void)rebootDeviceWithServerInstance:(id)arg0 ;
-(void)resetDimTimerWithServerInstance:(id)arg0 ;
-(void)revealSpotlightWithServerInstance:(id)arg0 ;
-(void)serverInstance:(id)arg0 hideRemoteViewType:(NSInteger)arg1 ;
-(void)serverInstance:(id)arg0 pauseMedia:(BOOL)arg1 forBundleId:(id)arg2 ;
-(void)serverInstance:(id)arg0 setDockIconActivationMode:(NSUInteger)arg1 ;
-(void)serverInstance:(id)arg0 setOrientation:(NSInteger)arg1 ;
-(void)serverInstance:(id)arg0 setOrientationLocked:(BOOL)arg1 ;
-(void)serverInstance:(id)arg0 setReachabilityEnabled:(BOOL)arg1 ;
// -(void)serverInstance:(id)arg0 showAlertType:(int)arg1 withHandler:(id)arg2 withData:(unk)arg3  ;
-(void)serverInstance:(id)arg0 showRemoteViewType:(NSInteger)arg1 withData:(id)arg2 ;
-(void)serverInstance:(id)arg0 showSpeechPlaybackControls:(BOOL)arg1 ;
-(void)serverInstanceBringInCallServiceForeground:(id)arg0 ;
-(void)setDashBoardSystemGesturesEnabled:(BOOL)arg0 withServerInstance:(id)arg1 ;
-(void)setReachabilityActive:(BOOL)arg0 ;
-(void)simulateEdgePressHaptics:(id)arg0 ;
-(void)toggleAppLibraryWithServerInstance:(id)arg0 ;
-(void)toggleBackgroundSoundsWithServerInstance:(id)arg0 ;
-(void)toggleDetectionModeWithServerInstance:(id)arg0 ;
-(void)toggleDockWithServerInstance:(id)arg0 ;
-(void)toggleLiveTranscriptionWithServerInstance:(id)arg0 ;
-(void)toggleNotificationCenterWithServerInstance:(id)arg0 ;
-(void)toggleQuickNoteWithServerInstance:(id)arg0 ;
-(void)toggleSpotlightWithServerInstance:(id)arg0 ;
-(void)toggleTorchWithServerInstance:(id)arg0 ;
-(void)unlockDeviceWithServerInstance:(id)arg0 ;
-(void)updateFrontMostApplicationWithServerInstance:(id)arg0 ;
-(void)wakeUpDeviceIfNecessaryWithServerInstance:(id)arg0 ;


@end


#endif