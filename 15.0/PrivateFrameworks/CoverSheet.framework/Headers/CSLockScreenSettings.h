// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSLOCKSCREENSETTINGS_H
#define CSLOCKSCREENSETTINGS_H

@class PTSettings, PTOutlet, SBFAnimationSettings;


#import "CSLockScreenChargingSettings.h"
#import "CSCoverSheetDismissGestureSettings.h"
#import "CSCoverSheetTransitionsSettings.h"
#import "CSDashBoardNotificationVersusPagingScrollSettings.h"
#import "CSDashBoardQuickActionsButtonSettings.h"
#import "CSDashBoardRemoteContentSettings.h"
#import "CSDashBoardScrollModifierSettings.h"
#import "CSFocusSettings.h"
#import "CSBounceSettings.h"
#import "CSHorizontalScrollFailureRecognizerSettings.h"
#import "CSLockScreenIdleTimerSettings.h"
#import "CSLockScreenMesaSettings.h"
#import "CSLockScreenPasscodeSettings.h"
#import "CSLockScreenPearlSettings.h"
#import "CSLockScreenTestPluginSettings.h"

@interface CSLockScreenSettings : PTSettings

@property (retain) PTOutlet *addNotificationOutlet; // ivar: _addNotificationOutlet
@property BOOL alwaysEnableUserRequestedErase; // ivar: _alwaysEnableUserRequestedErase
@property BOOL alwaysPutPluginsBelowScrollView; // ivar: _alwaysPutPluginsBelowScrollView
@property CGFloat appGrabberSlideUpVelocityThreshold; // ivar: _appGrabberSlideUpVelocityThreshold
@property BOOL autoDismissUnlockedLockScreen; // ivar: _autoDismissUnlockedLockScreen
@property CGFloat cameraPrelaunchThresholdOnSwipe; // ivar: _cameraPrelaunchThresholdOnSwipe
@property CGFloat cameraPrewarmAutoCancelTimeInterval; // ivar: _cameraPrewarmAutoCancelTimeInterval
@property CGFloat cameraPrewarmDebounceTimeInterval; // ivar: _cameraPrewarmDebounceTimeInterval
@property CGFloat cameraPrewarmThresholdOnSwipe; // ivar: _cameraPrewarmThresholdOnSwipe
@property (retain) CSLockScreenChargingSettings *chargingSettings; // ivar: _chargingSettings
@property (retain) CSCoverSheetDismissGestureSettings *coverSheetDismissGestureSettings; // ivar: _coverSheetDismissGestureSettings
@property (retain) CSCoverSheetTransitionsSettings *coverSheetTransitionsSettings; // ivar: _coverSheetTransitionsSettings
@property (retain) CSDashBoardNotificationVersusPagingScrollSettings *dashBoardNotificationScrollSettings; // ivar: _dashBoardNotificationScrollSettings
@property (retain) CSDashBoardQuickActionsButtonSettings *dashBoardQuickActionButtonSettings; // ivar: _dashBoardQuickActionButtonSettings
@property (retain) CSDashBoardRemoteContentSettings *dashBoardRemoteContentSettings; // ivar: _dashBoardRemoteContentSettings
@property (retain) CSDashBoardScrollModifierSettings *dashBoardScrollModifierSettings; // ivar: _dashBoardScrollModifierSettings
@property (retain) CSFocusSettings *focusSettings; // ivar: _focusSettings
@property (retain) CSBounceSettings *horizontalBounceSettings; // ivar: _horizontalBounceSettings
@property (retain) CSHorizontalScrollFailureRecognizerSettings *horizontalScrollFailureRecognizerSettings; // ivar: _horizontalScrollFailureRecognizerSettings
@property (retain) CSLockScreenIdleTimerSettings *idleTimerSettings; // ivar: _idleTimerSettings
@property BOOL killsInsecureDrawingApps; // ivar: _killsInsecureDrawingApps
@property CGFloat lockJiggleAnimationDelay; // ivar: _lockJiggleAnimationDelay
@property CGFloat lockJiggleHapticDelay; // ivar: _lockJiggleHapticDelay
@property CGFloat mainToCameraViewSlideCompletionPercentage; // ivar: _mainToCameraViewSlideCompletionPercentage
@property CGFloat mainToTodayViewSlideCompletionPercentage; // ivar: _mainToTodayViewSlideCompletionPercentage
@property (retain) CSLockScreenMesaSettings *mesaSettings; // ivar: _mesaSettings
@property CGFloat nowPlayingHeightCompact; // ivar: _nowPlayingHeightCompact
@property CGFloat nowPlayingHeightExpanded; // ivar: _nowPlayingHeightExpanded
@property (retain) CSLockScreenPasscodeSettings *passcodeSettings; // ivar: _passcodeSettings
@property (retain) CSLockScreenPearlSettings *pearlSettings; // ivar: _pearlSettings
@property BOOL prelaunchesCameraAppOnSwipe; // ivar: _prelaunchesCameraAppOnSwipe
@property BOOL prelaunchesCameraAppOnTap; // ivar: _prelaunchesCameraAppOnTap
@property BOOL prewarmsCameraHardwareOnSwipe; // ivar: _prewarmsCameraHardwareOnSwipe
@property BOOL prewarmsCameraHardwareOnTap; // ivar: _prewarmsCameraHardwareOnTap
@property BOOL showBlockedUI; // ivar: _showBlockedUI
@property BOOL showEmergencyDialer; // ivar: _showEmergencyDialer
@property BOOL showLogoutButton; // ivar: _showLogoutButton
@property BOOL showNowPlaying; // ivar: _showNowPlaying
@property BOOL showRawErrorCodes; // ivar: _showRawErrorCodes
@property BOOL showRegionsDebugView; // ivar: _showRegionsDebugView
@property BOOL showResetRestore; // ivar: _showResetRestore
@property BOOL showThermalTrap; // ivar: _showThermalTrap
@property BOOL showUserPicture; // ivar: _showUserPicture
@property (retain) CSLockScreenTestPluginSettings *testPluginSettings; // ivar: _testPluginSettings
@property CGFloat unlockPasscodeThreshold; // ivar: _unlockPasscodeThreshold
@property NSInteger unlockRubberBandFeedbackIntensity; // ivar: _unlockRubberBandFeedbackIntensity
@property CGFloat unlockRubberBandFeedbackInterval; // ivar: _unlockRubberBandFeedbackInterval
@property CGFloat unlockRubberBandThreshold; // ivar: _unlockRubberBandThreshold
@property CGFloat unlockSwipeWallpaperAlpha; // ivar: _unlockSwipeWallpaperAlpha
@property (retain) SBFAnimationSettings *unlockToPhoneWallpaperInSettings; // ivar: _unlockToPhoneWallpaperInSettings
@property (retain) SBFAnimationSettings *unlockToPhoneWallpaperOutSettings; // ivar: _unlockToPhoneWallpaperOutSettings
@property (retain) SBFAnimationSettings *unlockWallpaperInSettings; // ivar: _unlockWallpaperInSettings
@property (retain) SBFAnimationSettings *unlockWallpaperOutSettings; // ivar: _unlockWallpaperOutSettings
@property (retain) CSBounceSettings *verticalBounceSettings; // ivar: _verticalBounceSettings


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif