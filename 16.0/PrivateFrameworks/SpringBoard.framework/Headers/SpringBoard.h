// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPRINGBOARD_H
#define SPRINGBOARD_H

@class UISystemShellApplication, NSHashTable, NSMutableArray, NSSet, NSNumberFormatter, NSTimer, NSDate, NSCountedSet, NSString, SSScreenCapturer, SBScreenTimeTrackingController, DNDAWDMetricsService, DNDNotificationsService, NSMutableSet, NSMutableDictionary, DNDToggleManager, STDynamicActivityAttributionMonitor, STAttributedEntityResolver, STLocationStatusDomainDisplayNameTransformer, STMediaStatusDomainDisplayNameTransformer, NSOperationQueue, FCUIFocusEnablementIndicatorManager, NSArray, SBFUserAuthenticationController, BLSHService, STDynamicActivityAttributionManager, RSPeerToPeerServerController, STStatusServer, STTelephonyStateProvider, UIWindow;
@protocol SBWindowSceneTracking, MCProfileConnectionObserver, RSPeerToPeerConnectionControllerDataSource, SBRestartManagerDelegate, SBModalAlertPresentationCoordinatorDelegate, UIStatusBarStyleDelegate_SpringBoardOnly, SSScreenCapturerDelegate, SBBacklightControllerObserver, SBInteractiveScreenshotGestureManagerDelegate, SBRemoteTransientOverlaySessionManagerDelegate, SBSpotlightTransientOverlayViewControllerDelegate, _UIApplicationInitializationContextFactory, SBAVSystemControllerCacheObserver, SBWorkspaceKeyboardFocusControllerObserver, UIApplicationDelegate, SBIdleTimerProviding, BSInvalidatable, OS_dispatch_source, OS_os_transaction, SBIdleTimer, SBFLockOutStatusProvider, SBUIUserAgent, SBProximityBacklightPolicy;


#import "SBUIController.h"
#import "SBApplication.h"
#import "SBCardItemsController.h"
#import "SBWindowSceneStatusBarSettingsAssertion.h"
#import "SBBluetoothAccessoryBatteryMonitor.h"
#import "SBDeveloperBuildExpirationTrigger.h"
#import "SBSynchronizeCloudCriticalDataOperation.h"
#import "SBModalAlertPresenter.h"
#import "SBMainDisplayInterfaceOrientationAggregator.h"
#import "SBDeviceOrientationUpdateManager.h"
#import "SBPressPrecedenceArbiter.h"
#import "SBMainWorkspace.h"
#import "SBCarDoNotDisturbController.h"
#import "SBDisplayManager.h"
#import "SBExternalDisplayEducationObserver.h"
#import "SBExternalDisplayService.h"
#import "SBChamoisDisplayPrototypeController.h"
#import "SBSpuriousScreenUndimmingAssertion.h"
#import "SBSmartCoverService.h"
#import "SBHomeScreenService.h"
#import "SBChronoHomeScreenUsageObserver.h"
#import "SBChronoApplicationProcessStateObserver.h"
#import "SBAppSwitcherSystemService.h"
#import "SBRemoteAlertHandleServer.h"
#import "SBTestAutomationService.h"
#import "SBStateDumpService.h"
#import "SBSpotlightTransientOverlayViewController.h"
#import "SBAccessibilityWindowHostingControllerServer.h"
#import "SBSystemShellEmbeddedDisplayController.h"
#import "SBSceneHostingDisplayControllerProvider.h"
#import "SBMirroredDisplayControllerProvider.h"
#import "SBSessionManager.h"
#import "SBActivityManager.h"
#import "SBActivitySystemApertureElementObserver.h"
#import "SBSessionSystemApertureElementObserver.h"
#import "SBAlwaysOnCoverGestureRecognizer.h"
#import "SBKeyboardFocusService.h"
#import "SBHIDUISensorModeController.h"
#import "SBHUDController.h"
#import "SBAccountStoreManager.h"
#import "SBAppClipOverlayCoordinator.h"
#import "SBApplicationAutoLaunchService.h"
#import "SBApplicationLaunchAlertService.h"
#import "SBAudioRecordingManager.h"
#import "SBAvocadoDebuggingController.h"
#import "SBBacklightEnvironmentSessionProvider.h"
#import "SBBannerManager.h"
#import "SBBrightnessControl.h"
#import "SBCameraHardwareButton.h"
#import "SBCombinationHardwareButton.h"
#import "SBDisplayPortalManager.h"
#import "SBHomeHardwareButton.h"
#import "SBIdleTimerPolicyAggregator.h"
#import "SBInteractiveScreenshotGestureManager.h"
#import "SBLockHardwareButton.h"
#import "SBLockScreenService.h"
#import "SBLockedPointerManager.h"
#import "SBModalAlertPresentationCoordinator.h"
#import "SBMousePointerManager.h"
#import "SBNCNotificationDispatcher.h"
#import "SBPIPControllerCoordinator.h"
#import "SBProximitySensorManager.h"
#import "SBRemoteTransientOverlaySessionManager.h"
#import "SBRestartManager.h"
#import "SBRingerControl.h"
#import "SBScreenSleepCoordinator.h"
#import "SBScreenshotManager.h"
#import "SBSensorActivityDataProvider.h"
#import "SBSoftwareUpdatePasscodePolicyManager.h"
#import "SBStatusBarStateAggregator.h"
#import "SBTransientUIInteractionManager.h"
#import "SBSystemUIScenesCoordinator.h"
#import "SBUserSessionController.h"
#import "SBVoiceCommandButton.h"
#import "SBVolumeButtonEventMapper.h"
#import "SBVolumeControl.h"
#import "SBVolumeHardwareButton.h"
#import "SBWebClipService.h"
#import "SBWidgetController.h"
#import "SBWindowSceneManager.h"

@interface SpringBoard : UISystemShellApplication <SBWindowSceneTracking, MCProfileConnectionObserver, RSPeerToPeerConnectionControllerDataSource, SBRestartManagerDelegate, SBModalAlertPresentationCoordinatorDelegate, UIStatusBarStyleDelegate_SpringBoardOnly, SSScreenCapturerDelegate, SBBacklightControllerObserver, SBInteractiveScreenshotGestureManagerDelegate, SBRemoteTransientOverlaySessionManagerDelegate, SBSpotlightTransientOverlayViewControllerDelegate, _UIApplicationInitializationContextFactory, SBAVSystemControllerCacheObserver, SBWorkspaceKeyboardFocusControllerObserver, UIApplicationDelegate, SBIdleTimerProviding>

 {
    SBUIController *_uiController;
    CGFloat _headsetButtonDownTime;
    *__IOHIDEvent _headsetDownEvent;
    int _headsetClickCount;
    BOOL _headsetButtonClickCount;
    BOOL _menuButtonClickCount;
    BOOL _screenWasDimOnMenuDown;
    BOOL _screenshotWasTaken;
    BOOL _headsetDownDelayedActionPerformed;
    BOOL _isSeekingInMedia;
    BOOL _ignoringCurrentLockButtonPress;
    int _mediaSeekDirection;
    unsigned int _springBoardRequestsAccelerometerEvents;
    NSInteger _activeInterfaceOrientation;
    NSHashTable *_activeInterfaceOrientationObservers;
    NSMutableArray *_activeInterfaceOrientationOverrideStack;
    BOOL _wantsOrientationEvents;
    int _notifyDontAnimateREOToken;
    int _notifyDontAllowMediaHUDToken;
    BOOL _expectsFaceContact;
    BOOL _expectsFaceContactInLandscape;
    BOOL _hardwareKeyboardAttached;
    BOOL _smartCoverClosed;
    BOOL _keybagRefetchTransactionIsActive;
    BOOL _menuButtonDown;
    id<BSInvalidatable> *_smartCoverHIDUIAssertion;
    NSSet *_restrictionDisabledApplications;
    SBApplication *_inCallApp;
    SBApplication *_menuButtonInterceptApp;
    BOOL _menuButtonInterceptAppEnabledForever;
    SBApplication *_lastLockButtonEventRecipient;
    NSNumberFormatter *_decimalFormatter;
    NSNumberFormatter *_percentFormatter;
    NSTimer *_midnightTimer;
    NSDate *_midnightFireDate;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    unsigned int _memoryPressureStatus;
    NSMutableArray *_blocksAwaitingAvailableMemory;
    SBCardItemsController *_cardItemsController;
    NSUInteger _currentOverrides;
    *__CFBoolean _shouldDelaySleepForHeadsetClick;
    BOOL _didPlayLockSound;
    NSHashTable *_disableActiveOrientationChangeAssertions;
    NSCountedSet *_ignoringInteractionEventsReasons;
    SBWindowSceneStatusBarSettingsAssertion *_hideStatusBarAssertion;
    SBWindowSceneStatusBarSettingsAssertion *_showStatusBarAssertion;
    BOOL _atHomescreen;
    NSString *_logFile;
    SBBluetoothAccessoryBatteryMonitor *_bluetoothBatteryMonitor;
    SBDeveloperBuildExpirationTrigger *_developerBuildExpirationTrigger;
    SSScreenCapturer *_screenCapturer;
    SBSynchronizeCloudCriticalDataOperation *_synchronizeCloudCriticalDataOperation;
    SBModalAlertPresenter *_systemModalAlertPresenter;
    SBMainDisplayInterfaceOrientationAggregator *_orientationAggregator;
    SBDeviceOrientationUpdateManager *_deviceOrientationManager;
    BOOL _inUserTransition;
    BOOL _determiningBootTransition;
    BOOL _dontLockEver;
    SBPressPrecedenceArbiter *_pressPrecedenceArbiter;
    SBMainWorkspace *_mainWorkspace;
    id<BSInvalidatable> *_keyboardFocusControllerObserver;
    NSInteger _lastUpdatedMirroredDisplayOrientation;
    NSInteger _mainTransientOverlayPresentationManagerInterfaceOrientation;
    NSInteger _deviceOrientationChangePendedDuringStartupTransition;
    BOOL _hasDeviceOrientationChangePendedDuringStartupTransition;
    SBCarDoNotDisturbController *_carDoNotDisturbController;
    SBScreenTimeTrackingController *_screenTimeTrackingController;
    SBDisplayManager *_displayManager;
    SBExternalDisplayEducationObserver *_displayConnectionObserver;
    SBExternalDisplayService *_externalDisplayService;
    SBChamoisDisplayPrototypeController *_chamoisDisplayPrototypeController;
    SBSpuriousScreenUndimmingAssertion *_preventPowerSourceAlertsDarkBootAssertion;
    id<BSInvalidatable> *_deferOrientationUpdatesForKeybagAssertion;
    SBSmartCoverService *_smartCoverService;
    SBHomeScreenService *_homeScreenService;
    SBChronoHomeScreenUsageObserver *_widgetHomeScreenUsageObserver;
    SBChronoApplicationProcessStateObserver *_widgetApplicationProcessStateObserver;
    SBAppSwitcherSystemService *_appSwitcherSystemService;
    NSInteger _lastSeekRequestSource;
    DNDAWDMetricsService *_dndAWDMetricsService;
    DNDNotificationsService *_dndNotificationsService;
    SBRemoteAlertHandleServer *_remoteAlertHandleServer;
    SBTestAutomationService *_testAutomationService;
    SBStateDumpService *_stateDumpService;
    NSUInteger _stateDumpServiceRevision;
    NSCountedSet *_spotlightTransientOverlayRequiringReasons;
    SBSpotlightTransientOverlayViewController *_spotlightTransientOverlayViewController;
    NSHashTable *_activeRemoteTransientOverlayViewProviders;
    id *_headsetButtonUpHandler;
    SBAccessibilityWindowHostingControllerServer *_accessibilityWindowHostingController;
    id<BSInvalidatable> *_pipSpotlightWindowLevelAssertionInvalidatable;
    NSMutableSet *_keyboardUsagePairsDown;
    NSMutableDictionary *_typingActivePIDsAndDeathWatchers;
    BOOL _swallowKeyboardEvents;
    BOOL _requestingStatusBarStyleWithoutConsideringAlerts;
    DNDToggleManager *_dndToggleManager;
    NSMutableDictionary *_volumePressTypesRequringButtonUpPresses;
    NSObject<OS_os_transaction> *_takingScreenshotTransaction;
    SBSystemShellEmbeddedDisplayController *_embeddedDisplayController;
    SBSceneHostingDisplayControllerProvider *_extendedDisplayControllerProvider;
    SBSceneHostingDisplayControllerProvider *_nonInteractiveDisplayControllerProvider;
    SBMirroredDisplayControllerProvider *_baselineDisplayControllerProvider;
    SBSessionManager *_sessionManager;
    SBActivityManager *_activityManager;
    STDynamicActivityAttributionMonitor *_systemStatusDynamicAttributionMonitor;
    STAttributedEntityResolver *_systemStatusMediaEntityResolver;
    STAttributedEntityResolver *_systemStatusLocationEntityResolver;
    STLocationStatusDomainDisplayNameTransformer *_systemStatusLocationDomainTransformer;
    STMediaStatusDomainDisplayNameTransformer *_systemStatusMediaDomainTransformer;
    SBActivitySystemApertureElementObserver *_activitySystemApertureElementObserver;
    SBSessionSystemApertureElementObserver *_sessionSystemApertureElementObserver;
    SBAlwaysOnCoverGestureRecognizer *_alwaysOnCoverGestureRecognizer;
    SBKeyboardFocusService *_keyboardFocusService;
    BOOL _startupTransitionHasFinished;
    NSOperationQueue *_postStartupOperationQueue;
    FCUIFocusEnablementIndicatorManager *_focusEnablementIndicatorManager;
}


@property (readonly, nonatomic) SBHIDUISensorModeController *HIDUISensorController; // ivar: _HIDUISensorController
@property (readonly, nonatomic) SBHUDController *HUDController; // ivar: _HUDController
@property (readonly, nonatomic) SBAccountStoreManager *accountStoreController; // ivar: _accountStoreController
@property (readonly, nonatomic) SBAppClipOverlayCoordinator *appClipOverlayCoordinator; // ivar: _appClipOverlayCoordinator
@property (readonly, nonatomic) SBApplicationAutoLaunchService *applicationAutoLaunchService; // ivar: _applicationAutoLaunchService
@property (readonly, nonatomic) SBApplicationLaunchAlertService *applicationLaunchAlertService; // ivar: _applicationLaunchAlertService
@property (readonly, nonatomic) NSArray *appsRegisteredForLockButtonEvents; // ivar: _appsRegisteredForLockButtonEvents
@property (readonly, nonatomic) NSArray *appsRegisteredForVolumeEvents; // ivar: _appsRegisteredForVolumeEvents
@property (readonly, nonatomic) SBAudioRecordingManager *audioRecordingManager; // ivar: _audioRecordingManager
@property (readonly, nonatomic) SBFUserAuthenticationController *authenticationController; // ivar: _authenticationController
@property (readonly, nonatomic) SBAvocadoDebuggingController *avocadoController; // ivar: _avocadoController
@property (readonly, nonatomic) SBBacklightEnvironmentSessionProvider *backlightEnvironmentSessionProvider; // ivar: _backlightEnvironmentSessionProvider
@property (readonly, nonatomic) SBBannerManager *bannerManager; // ivar: _bannerManager
@property (nonatomic, getter=isBatterySaverModeActive) BOOL batterySaverModeActive; // ivar: _batterySaverModeActive
@property (readonly, nonatomic) BLSHService *blshService; // ivar: _blshService
@property (nonatomic) CGFloat bottomEdgeAmbiguousActivationMargin; // ivar: _bottomEdgeAmbiguousActivationMargin
@property (readonly, nonatomic) SBBrightnessControl *brightnessControl; // ivar: _brightnessControl
@property (readonly, nonatomic) SBCameraHardwareButton *cameraHardwareButton; // ivar: _cameraHardwareButton
@property (readonly, nonatomic) SBCombinationHardwareButton *combinationHardwareButton; // ivar: _combinationHardwareButton
@property (retain, nonatomic) NSTimer *daylightSavingsTimer; // ivar: _daylightSavingsTimer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SBDisplayPortalManager *displayPortalManager; // ivar: _displayPortalManager
@property (readonly, nonatomic) STDynamicActivityAttributionManager *dynamicAttributionManager; // ivar: _dynamicAttributionManager
@property BOOL hasFinishedLaunching; // ivar: _hasFinishedLaunching
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBHomeHardwareButton *homeHardwareButton; // ivar: _homeHardwareButton
@property (retain, nonatomic, setter=_setIdleTimer:) NSObject<SBIdleTimer> *idleTimer; // ivar: _idleTimer
@property (readonly, nonatomic) SBIdleTimerPolicyAggregator *idleTimerPolicyAggregator; // ivar: _idleTimerPolicyAggregator
@property (readonly, nonatomic) SBInteractiveScreenshotGestureManager *interactiveScreenshotGestureManager; // ivar: _interactiveScreenshotGestureManager
@property (readonly, nonatomic) SBApplication *leastRecentlyForegroundLocatingApp;
@property (readonly, nonatomic) SBLockHardwareButton *lockHardwareButton; // ivar: _lockHardwareButton
@property (readonly, nonatomic) NSObject<SBFLockOutStatusProvider> *lockOutController; // ivar: _lockOutController
@property (readonly, nonatomic) SBLockScreenService *lockScreenService; // ivar: _lockScreenService
@property (readonly, nonatomic) SBLockedPointerManager *lockedPointerManager; // ivar: _lockedPointerManager
@property (readonly, nonatomic) SBModalAlertPresentationCoordinator *modalAlertPresentationCoordinator; // ivar: _modalAlertPresentationCoordinator
@property (readonly, nonatomic) SBMousePointerManager *mousePointerManager; // ivar: _mousePointerManager
@property (readonly, nonatomic) SBNCNotificationDispatcher *notificationDispatcher; // ivar: _notificationDispatcher
@property (retain, nonatomic) NSMutableArray *nowLocatingApps; // ivar: _nowLocatingApps
@property (nonatomic) int nowPlayingProcessPID; // ivar: _nowPlayingProcessPID
@property (readonly, nonatomic) SBMainDisplayInterfaceOrientationAggregator *orientationAggregator;
@property (readonly, nonatomic) SBPIPControllerCoordinator *pictureInPictureCoordinator; // ivar: _pictureInPictureCoordinator
@property (readonly, nonatomic) NSObject<SBUIUserAgent> *pluginUserAgent; // ivar: _pluginUserAgent
@property (readonly, nonatomic) NSObject<SBProximityBacklightPolicy> *proximityBacklightPolicy; // ivar: _proximityBacklightPolicy
@property (readonly, nonatomic) SBProximitySensorManager *proximitySensorManager; // ivar: _proximitySensorManager
@property (readonly, nonatomic) SBRemoteTransientOverlaySessionManager *remoteTransientOverlaySessionManager; // ivar: _remoteTransientOverlaySessionManager
@property (readonly, nonatomic) SBRestartManager *restartManager; // ivar: _restartManager
@property (readonly, nonatomic) SBRingerControl *ringerControl; // ivar: _ringerControl
@property (readonly, nonatomic) int ringerSwitchState; // ivar: _ringerSwitchState
@property (readonly, nonatomic) SBScreenSleepCoordinator *screenSleepCoordinator; // ivar: _screenSleepCoordinator
@property (readonly, nonatomic) SBScreenshotManager *screenshotManager; // ivar: _screenshotManager
@property (readonly, nonatomic) SBSensorActivityDataProvider *sensorActivityDataProvider; // ivar: _sensorActivityDataProvider
@property (readonly, nonatomic) SBSoftwareUpdatePasscodePolicyManager *softwareUpdatePasscodePolicyManager; // ivar: _softwareUpdatePasscodePolicyManager
@property (retain, nonatomic) RSPeerToPeerServerController *stateDumpServerController; // ivar: _stateDumpServerController
@property (readonly, nonatomic) SBStatusBarStateAggregator *statusBarStateAggregator; // ivar: _statusBarStateAggregator
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) STStatusServer *systemStatusServer; // ivar: _systemStatusServer
@property (readonly, nonatomic) SBTransientUIInteractionManager *systemTransientUIInteractionManager; // ivar: _systemTransientUIInteractionManager
@property (readonly, nonatomic) SBSystemUIScenesCoordinator *systemUIScenesCoordinator; // ivar: _systemUIScenesCoordinator
@property (readonly, nonatomic) STTelephonyStateProvider *telephonyStateProvider; // ivar: _telephonyStateProvider
@property (readonly, nonatomic, getter=isTypingActive) BOOL typingActive; // ivar: _typingActive
@property (readonly, nonatomic) SBUserSessionController *userSessionController; // ivar: _userSessionController
@property (readonly, nonatomic) SBVoiceCommandButton *voiceCommandButton; // ivar: _voiceCommandButton
@property (readonly, nonatomic) SBVolumeButtonEventMapper *volumeButtonEventMapper; // ivar: _volumeButtonEventMapper
@property (readonly, nonatomic) SBVolumeControl *volumeControl; // ivar: _volumeControl
@property (readonly, nonatomic) SBVolumeHardwareButton *volumeHardwareButton; // ivar: _volumeHardwareButton
@property (readonly, nonatomic) BOOL wantsOrientationEvents;
@property (readonly, nonatomic) SBWebClipService *webClipService; // ivar: _webClipService
@property (readonly, nonatomic) SBWidgetController *widgetController; // ivar: _widgetController
@property (retain, nonatomic) UIWindow *window;
@property (readonly, nonatomic) SBWindowSceneManager *windowSceneManager; // ivar: _windowSceneManager


+(id)_newApplicationInitializationContext;
+(void)initializeSystemServicesBeforeApplicationDidFinishLaunching;
-(BOOL)__handleHIDEvent:(struct __IOHIDEvent *)arg0 withUIEvent:(id)arg1 ;
-(BOOL)_accessibilityIsSystemGestureActive;
-(BOOL)_accessibilityObjectWithinProximity;
-(BOOL)_accessibilityShouldAllowAppLaunch;
-(BOOL)_accessibilityShouldAllowIconLaunch;
-(BOOL)_accessibilitySystemGesturesDisabledByAccessibility;
-(BOOL)_areKeyboardHUDsEnabled;
-(BOOL)_frontBoardWantsKeyboardSceneLayerOrderedIntoScene;
-(BOOL)_handleCoverGestureHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(BOOL)_handleGameControllerEventHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(BOOL)_handleNavigationSwipeHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(BOOL)_handlePhysicalButtonEvent:(id)arg0 ;
-(BOOL)_hasForegroundAppWithPID:(int)arg0 ;
-(BOOL)_isDim;
-(BOOL)_isGlobeKeyShortcutHUDEnabled;
-(BOOL)_isRemoteStateDumpEnabled;
-(BOOL)_isStatusBarEffectivelyHiddenForContentOverlayInsetsForWindow:(id)arg0 ;
-(BOOL)_prepareButtonEvent:(id)arg0 type:(NSInteger)arg1 phase:(NSInteger)arg2 timestamp:(CGFloat)arg3 force:(CGFloat)arg4 clickCount:(NSUInteger)arg5 longClick:(BOOL)arg6 contextID:(unsigned int)arg7 ;
-(BOOL)_shouldEnableSessions;
-(BOOL)_shouldPendAlertsForTest:(id)arg0 ;
-(BOOL)_shouldSwallowHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(BOOL)_statusBarOrientationFollowsWindow:(id)arg0 ;
-(BOOL)_supportsAlwaysOnDisplay;
-(BOOL)_systemShellAllowsInteractionTrackingKeyboardFocusUpdateForWindow:(id)arg0 ;
-(BOOL)allowCaseLatchLockAndUnlock;
-(BOOL)application:(id)arg0 handleOpenURL:(id)arg1 ;
-(BOOL)canOpenURL:(id)arg0 ;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)canShowLockScreenCameraGrabber;
-(BOOL)caseIsEnabledAndLatched;
-(BOOL)disablesFrontBoardImplicitWindowScenes;
-(BOOL)expectsFaceContact;
-(BOOL)expectsFaceContactInLandscape;
-(BOOL)handleDoubleHeightStatusBarTapWithStyleOverride:(NSUInteger)arg0 ;
-(BOOL)handleStatusBarHoverActionForRegion:(NSInteger)arg0 ;
-(BOOL)hasDisableActiveInterfaceOrientationChangeAssertions;
-(BOOL)homeScreenRotationStyleWantsUIKitRotation;
-(BOOL)homeScreenSupportsRotation;
-(BOOL)iapIsInExtendedMode;
-(BOOL)iconScrollView:(id)arg0 shouldSetAutoscrollContentOffset:(struct CGPoint )arg1 ;
-(BOOL)iconScrollView:(id)arg0 shouldSetContentOffset:(struct CGPoint *)arg1 animated:(BOOL)arg2 ;
-(BOOL)interactiveScreenshotGestureManagerShouldPreventGestureRecognition:(id)arg0 ;
-(BOOL)isBundleIdentifierRestrictionDisabled:(id)arg0 ;
-(BOOL)isCurrentlyDeferringOrientationUpdates;
-(BOOL)isDeterminingBootTransition;
-(BOOL)isHardwareKeyboardAttached;
-(BOOL)isKeybagRefetchTransactionActive;
-(BOOL)isLocked;
-(BOOL)isNowPlayingAppPlaying;
-(BOOL)isShowingHomescreen;
-(BOOL)launchApplicationWithIdentifier:(id)arg0 suspended:(BOOL)arg1 ;
-(BOOL)launchedForUserTransition;
-(BOOL)lockScreenCameraSupported;
-(BOOL)menuButtonInterceptAppEnabledForever;
-(BOOL)remoteTransientOverlaySessionManager:(id)arg0 performDismissalRequest:(id)arg1 forSession:(id)arg2 ;
-(BOOL)remoteTransientOverlaySessionManager:(id)arg0 performPresentationRequest:(id)arg1 forSession:(id)arg2 ;
-(BOOL)remoteTransientOverlaySessionManager:(id)arg0 prefersStatusBarActivityItemVisibleForServiceBundleIdentifier:(id)arg1 forSession:(id)arg2 ;
-(BOOL)remoteTransientOverlaySessionManager:(id)arg0 shouldActivateOverlayWithContext:(id)arg1 forSession:(id)arg2 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)runTest:(id)arg0 options:(id)arg1 ;
-(BOOL)shouldNeverLock;
-(BOOL)shouldShowAlertForUnhandledURL:(id)arg0 error:(int)arg1 ;
-(BOOL)smartCoverIsClosed;
-(BOOL)supportsPortraitUpsideDownOrientation;
-(BOOL)underMemoryPressure;
-(CGFloat)_accessibilityActivationAnimationStartDelay;
-(CGFloat)_accessibilityDeactivationAnimationStartDelay;
-(NSInteger)_currentNonFlatDeviceOrientation;
-(NSInteger)_frontMostAppOrientation;
-(NSInteger)_interfaceOrientationForRawOrientation:(NSInteger)arg0 validOrientation:(NSInteger)arg1 ignoringHomeScreenRotationStyle:(BOOL)arg2 ;
-(NSInteger)_testOrientation:(id)arg0 options:(id)arg1 ;
-(NSInteger)activeInterfaceOrientation;
-(NSInteger)activeInterfaceOrientationWithoutConsideringTransientOverlays;
-(NSInteger)alertInterfaceOrientation;
-(NSInteger)deviceOrientationForDeferredUpdateIfAny;
-(NSInteger)homeScreenRotationStyle;
-(NSInteger)interfaceOrientationForCurrentDeviceOrientation:(BOOL)arg0 ;
-(NSInteger)interfaceOrientationForRawOrientation:(NSInteger)arg0 validOrientation:(NSInteger)arg1 ignoringHomeScreenRotationStyle:(BOOL)arg2 ;
-(NSInteger)rawDeviceOrientationIgnoringOrientationLocks;
-(NSInteger)remoteTransientOverlaySessionManager:(id)arg0 activeWallpaperVariantForSession:(id)arg1 ;
-(NSInteger)startupInterfaceOrientation;
-(NSInteger)statusBarOrientationForEmbeddedDisplay;
-(NSInteger)windowingModeForDisplay:(id)arg0 ;
-(NSUInteger)statusBar:(id)arg0 effectiveStyleOverridesForRequestedStyle:(NSInteger)arg1 overrides:(NSUInteger)arg2 ;
-(id)_accessibilityFrontMostApplication;
-(id)_accessibilityRunningApplications;
-(id)_accessibilityTopDisplay;
-(id)_allWindowInfo:(NSInteger)arg0 ;
-(id)_appIconsToPutInFolderForTest;
-(id)_applicationToUseForOpenAndCloseTesting;
-(id)_applicationToUseForScrollTesting;
-(id)_combinedListViewController;
-(id)_dashBoardCombinedListViewController;
-(id)_dashBoardControllerForTesting;
-(id)_defaultExpirationComponents;
-(id)_doubleHomeButtonPressEventStream;
-(id)_dumpStateCaptureData;
-(id)_findView:(id)arg0 passingTest:(id)arg1 ;
-(id)_flickTimingFunction;
-(id)_homeScreenTodayViewEventStreamWithDismissal:(BOOL)arg0 ;
-(id)_installSwitcherModelForSwitcherTests;
-(id)_keyWindowForScreen:(id)arg0 ;
-(id)_leadingNotificationRequest;
-(id)_legacy_deviceOrientationUpdateManager;
-(id)_mainDisplayWindowScene;
-(id)_settingLanguageStringForNewLanguage;
-(id)_singleHomeButtonPressEventStream;
-(id)_windowForSystemAppButtonEventsForScreen:(id)arg0 ;
-(id)activeDisplayWindowScene;
-(id)allowedRemotePeerDisplayNames;
-(id)application:(id)arg0 configurationForConnectingSceneSession:(id)arg1 options:(id)arg2 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg0 ;
-(id)deviceOrientationUpdateDeferralAssertionWithReason:(id)arg0 ;
-(id)embeddedDisplayWindowScene;
-(id)formattedDecimalStringForNumber:(id)arg0 ;
-(id)formattedPercentStringForNumber:(id)arg0 ;
-(id)inCallApp;
-(id)init;
-(id)keyCommands;
-(id)layoutPublisherForPhysicalDisplay:(id)arg0 ;
-(id)localPeerDisplayName;
-(id)menuButtonInterceptApp;
-(id)modalAlertPresentationCoordinatorRequestedForegroundScenes:(id)arg0 ;
-(id)recordingIndicatorManagerForMainDisplay;
-(id)remoteTransientOverlaySessionManager:(id)arg0 embeddedDisplayWindowSceneForRemoteTransientOverlaySession:(id)arg1 ;
-(id)setNextVoiceRecognitionAudioInputPaths:(id)arg0 ;
-(id)statusBarForEmbeddedDisplay;
-(id)statusBarWindowForEmbeddedDisplay;
-(id)supportedStateTypes;
-(id)systemApertureControllerForMainDisplay;
-(id)transactionForDismissingSearchTransientOverlay;
-(struct CGSize )scrollView:(id)arg0 contentSizeForZoomScale:(CGFloat)arg1 withProposedSize:(struct CGSize )arg2 ;
-(void)_accessibilityActivationAnimationWillBegin;
-(void)_accessibilityDeactivationAnimationWillBegin;
-(void)_accessibilitySetSystemGesturesDisabledByAccessibility:(BOOL)arg0 ;
-(void)_activateSafariWithCompletion:(id)arg0 ;
-(void)_adjustDaylightSavingsTimerAfterSleep;
-(void)_adjustMidnightTimerAfterSleep;
-(void)_adjustSignificantTimersAfterSleep;
-(void)_application:(id)arg0 statusBarTouchesEnded:(id)arg1 ;
-(void)_applicationOpenURL:(id)arg0 withApplication:(id)arg1 animating:(BOOL)arg2 activationSettings:(id)arg3 origin:(id)arg4 withResult:(id)arg5 ;
-(void)_basicRotationTestForCurrentConfigurationWithTeardown:(id)arg0 ;
-(void)_batterySaverModeChanged:(int)arg0 ;
-(void)_beginRequiringSpotlightTransientOverlayForReason:(id)arg0 ;
-(void)_broadcastStateCaptureToConnectedRemotePeers:(id)arg0 ;
-(void)_caseLatchWantsToAttemptLock;
-(void)_cleanUpLaunchTestState;
-(void)_cleanupMainWorkspaceForMedusaTestWithCompletion:(id)arg0 ;
-(void)_completeStartupAfterMainSceneConnect:(id)arg0 ;
-(void)_continueRunningDismissAppSwitcherTestWithCompletion:(id)arg0 ;
-(void)_continueRunningScrollAppSwitcherTest:(id)arg0 runColdTest:(BOOL)arg1 completion:(id)arg2 ;
-(void)_coverGestureDidRecognize:(id)arg0 ;
-(void)_daylightSavingsTimeChanged;
-(void)_deactivateReachability;
-(void)_deviceOrientationChanged:(NSInteger)arg0 ;
-(void)_disableRemoteStateDumpWithCompletion:(id)arg0 ;
-(void)_dismissSpotlightWithHomeButtonEvent;
-(void)_dumpLoggingStateCaptureWithCompletion:(id)arg0 ;
-(void)_enableRemoteStateDumpWithTimeout:(NSInteger)arg0 withCompletion:(id)arg1 ;
-(void)_enableSessions:(BOOL)arg0 ;
-(void)_endRequiringSpotlightTransientOverlayForReason:(id)arg0 ;
// -(void)_enqueueWorkspaceEvent:(id)arg0 withName:(unk)arg1 ifSatisfiesCondition:(id)arg2 cancelingEventsWithNames:(id)arg3 failureBlock:(unk)arg4  ;
-(void)_forceRotateToOrientation:(NSInteger)arg0 withCompletion:(id)arg1 ;
-(void)_handleActivateAppExposeKeyShortcut:(id)arg0 ;
-(void)_handleActivateAsFloatingAppKeyShortcut:(id)arg0 ;
-(void)_handleActivateControlCenterKeyShortcut:(id)arg0 ;
-(void)_handleActivateNotificationCenterKeyShortcut:(id)arg0 ;
-(void)_handleActivateSiriKeyShortcut:(id)arg0 ;
-(void)_handleAddWindowToSetCommand:(id)arg0 ;
-(void)_handleApplicationExit:(id)arg0 ;
-(void)_handleApplicationProcessStateDidChangeNotification:(id)arg0 ;
-(void)_handleBrightnessKeyCommand:(id)arg0 keyDown:(BOOL)arg1 ;
-(void)_handleBrightnessKeyCommandDownShortcut:(id)arg0 ;
-(void)_handleBrightnessKeyCommandUpShortcut:(id)arg0 ;
-(void)_handleCommandQ:(id)arg0 ;
-(void)_handleCommandTab:(id)arg0 ;
-(void)_handleDeviceOrientationChangedEvent:(struct __GSEvent *)arg0 ;
-(void)_handleDeviceOrientationChangedHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(void)_handleEndOfScrollingTest;
-(void)_handleGotoHomeScreenShortcut:(id)arg0 ;
-(void)_handleHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(void)_handleHomeScreenNavigateIn:(id)arg0 ;
-(void)_handleHomeScreenNavigateLeading:(id)arg0 ;
-(void)_handleHomeScreenNavigateOut:(id)arg0 ;
-(void)_handleHomeScreenNavigateTrailing:(id)arg0 ;
-(void)_handleKeyDownEvent_DisplayBrightnessChange:(struct __IOHIDEvent *)arg0 modifiers:(NSInteger)arg1 ;
-(void)_handleKeyDownEvent_DoNotDisturb:(struct __IOHIDEvent *)arg0 modifiers:(NSInteger)arg1 ;
-(void)_handleKeyDownEvent_KeyboardBrightnessChange:(struct __IOHIDEvent *)arg0 modifiers:(NSInteger)arg1 ;
-(void)_handleKeyUIEvent:(id)arg0 ;
-(void)_handleLockShortcut:(id)arg0 ;
-(void)_handleMakeFullscreenKeyShortcut:(id)arg0 ;
-(void)_handleMakeSplitLeftKeyShortcut:(id)arg0 ;
-(void)_handleMakeSplitRightKeyShortcut:(id)arg0 ;
-(void)_handleMoveToOtherDisplayKeyShortcut:(id)arg0 ;
-(void)_handleNavigateAppWindowInSpaceKeyShortcut:(id)arg0 ;
-(void)_handleNavigateAppWindowsInStripKeyShortcut:(id)arg0 ;
-(void)_handleNavigateFloatingAppKeyShortcut:(id)arg0 ;
-(void)_handleNavigateWindowInSpaceKeyShortcut:(id)arg0 ;
-(void)_handleNextSwitcherSpaceKeyShortcut:(id)arg0 ;
-(void)_handleOpenAppSwitcherShortcut:(id)arg0 ;
-(void)_handlePreviousSwitcherSpaceKeyShortcut:(id)arg0 ;
-(void)_handleRemoveWindowFromSetShortcut:(id)arg0 ;
-(void)_handleScreenShotShortcut:(id)arg0 ;
-(void)_handleShiftCommandTab:(id)arg0 ;
-(void)_handleShowShortcutHUD:(id)arg0 ;
-(void)_handleShutDownAndReboot;
-(void)_handleSnapshotButtonHIDEvent:(struct __IOHIDEvent *)arg0 buttonIsDown:(BOOL)arg1 fromSource:(int)arg2 ;
-(void)_handleSplitHomeScreenShortcut:(id)arg0 ;
-(void)_handleStandardFunctionKeyActionWithPreferencesURLString:(id)arg0 modifiers:(NSInteger)arg1 block:(id)arg2 ;
-(void)_handleSystemNotesPIPKeyShortcut:(id)arg0 ;
-(void)_handleToggleFloatingAppVisibilityKeyShortcut:(id)arg0 ;
-(void)_handleToggleMaximizationKeyShortcut:(id)arg0 ;
-(void)_headsetButtonDown:(struct __IOHIDEvent *)arg0 ;
-(void)_headsetButtonUp:(struct __IOHIDEvent *)arg0 ;
-(void)_iapExtendedModeReset;
-(void)_iapServerConnectionDiedNotification:(id)arg0 ;
-(void)_initializeAndStartObservingDefaultsIfNecessary;
-(void)_initializeDeferredItems;
-(void)_keyboardAvailabilityChanged;
-(void)_keyboardOrCaseLatchWantsToAttemptUnlock:(int)arg0 ;
// -(void)_launchFullscreenApplication:(id)arg0 withLaunchResult:(id)arg1 transactionCompletion:(unk)arg2  ;
-(void)_legacy_noteInterfaceOrientationChanged:(NSInteger)arg0 duration:(CGFloat)arg1 updateMirroredDisplays:(BOOL)arg2 force:(BOOL)arg3 logMessage:(id)arg4 ;
-(void)_localeChanged;
-(void)_lockdownActivationChanged:(id)arg0 ;
-(void)_logReliabilityInfoForEvent:(struct __IOHIDEvent *)arg0 source:(int)arg1 ;
-(void)_medusaTestWithName:(id)arg0 testOptions:(id)arg1 ;
-(void)_midnightPassed;
-(void)_nowPlayingAppDidChangeNotification:(id)arg0 ;
-(void)_openURLCore:(id)arg0 display:(id)arg1 animating:(BOOL)arg2 activationSettings:(id)arg3 origin:(id)arg4 withResult:(id)arg5 ;
-(void)_pauseWithComposer:(id)arg0 locations:(struct CGPoint *)arg1 touchCount:(NSUInteger)arg2 ;
-(void)_performAfterDelay:(CGFloat)arg0 block:(id)arg1 ;
-(void)_performArcSwipeWithComposer:(id)arg0 ;
-(void)_performBackAndForthPanOnScreenWithIterations:(NSUInteger)arg0 duration:(CGFloat)arg1 completion:(id)arg2 ;
-(void)_performDeferredLaunchWork;
-(void)_performDelayedHeadsetClickTimeout;
-(void)_performDragFromPoint:(struct CGPoint )arg0 andDragTo:(struct CGPoint )arg1 duration:(CGFloat)arg2 fromView:(id)arg3 withCompletion:(id)arg4 ;
-(void)_performExpandingCoalescedBundleForNotificationRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)_performFiveFingerScrunchWithComposer:(id)arg0 scrunchProgress:(CGFloat)arg1 duration:(CGFloat)arg2 withContinuationBlock:(id)arg3 ;
-(void)_performFourFingerSwipeWithComposer:(id)arg0 vertically:(BOOL)arg1 duration:(CGFloat)arg2 ;
-(void)_performLeftToRightPanGestureOnScreenWithDuration:(CGFloat)arg0 completion:(id)arg1 ;
-(void)_performMainWorkspaceTransitionWithPrimaryWorkspaceEntity:(id)arg0 sideWorkspaceEntity:(id)arg1 floatingWorkspaceEntity:(id)arg2 spaceConfiguration:(NSInteger)arg3 floatingConfiguration:(NSInteger)arg4 animated:(BOOL)arg5 completion:(id)arg6 ;
// -(void)_performMultiFingerDragWithComposer:(id)arg0 startLocations:(struct CGPoint *)arg1 endLocations:(struct CGPoint *)arg2 touchCount:(NSUInteger)arg3 duration:(CGFloat)arg4 timingFunction:(id)arg5 startWithTouchDown:(BOOL)arg6 intermediateTransformer:(id)arg7 completion:(unk)arg8  ;
-(void)_performNotificationPublishingWithCount:(NSUInteger)arg0 uniqueThreadCount:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)_performOrbAtPoint:(struct CGPoint )arg0 fromView:(id)arg1 withCompletion:(id)arg2 ;
-(void)_performPanGestureTowardsUserInterfaceLayoutDirectionOnScreenWithDuration:(CGFloat)arg0 completion:(id)arg1 ;
-(void)_performPanWithComposer:(id)arg0 startLocation:(struct CGPoint )arg1 endLocation:(struct CGPoint )arg2 duration:(CGFloat)arg3 ;
-(void)_performRestackingExpandedBundleForNotificationRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)_performRightToLeftPanGestureOnScreenWithDuration:(CGFloat)arg0 completion:(id)arg1 ;
-(void)_performScrunchAndSwipeWithComposer:(id)arg0 ;
-(void)_performSwipeHomeWithComposer:(id)arg0 ;
-(void)_performSwipeWithComposer:(id)arg0 startLocation:(struct CGPoint )arg1 endLocation:(struct CGPoint )arg2 duration:(CGFloat)arg3 ;
// -(void)_performSwipeWithComposer:(id)arg0 startLocation:(struct CGPoint )arg1 endLocation:(struct CGPoint )arg2 duration:(CGFloat)arg3 timingFunction:(id)arg4 intermediateTransformer:(id)arg5 completion:(unk)arg6  ;
-(void)_performTapAtPoint:(struct CGPoint )arg0 fromView:(id)arg1 withCompletion:(id)arg2 ;
-(void)_postActiveInterfaceOrientationChangedNotificationAnimated:(BOOL)arg0 ;
-(void)_postSpringBoardSignificantTimeChangedNotificationWithLogMessage:(id)arg0 ;
-(void)_preWarmAllIconPagesWithCompletion:(id)arg0 ;
-(void)_preheatScreenshotsWithPresentationOptions:(id)arg0 ;
-(void)_prepareBacklightServices;
-(void)_prepareToRunAutoPIPTestWithCompletion:(id)arg0 ;
-(void)_prepareToRunSwitcherGestureTestsFromHomeScreen:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)_prepareToRunSwitcherGestureTestsWithCompletion:(id)arg0 ;
-(void)_prepareToRunSwitcherGestureTestsWithForegroundApp:(id)arg0 shouldStartTest:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)_publishFakeThreadedLockScreenNotificationsWithCount:(NSUInteger)arg0 uniqueThreadCount:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_pullDownToSpotlightForView:(id)arg0 offset:(CGFloat)arg1 duration:(CGFloat)arg2 completion:(id)arg3 ;
-(void)_registerForAVSystemControllerNotifications;
-(void)_removeAllFakeNotifications;
-(void)_removeTransientActiveInterfaceOrientationOverrideForReason:(id)arg0 ;
-(void)_resetForceRotate;
-(void)_resetSmartCoverHIDUIAssertionForReason:(id)arg0 ;
-(void)_resetToHomeScreen;
-(void)_retryLaunchTestWithOptions:(id)arg0 ;
-(void)_returnToHomeScreenWithCompletion:(id)arg0 ;
-(void)_ringerChanged:(struct __IOHIDEvent *)arg0 ;
// -(void)_rotateFromPortrait:(id)arg0 toLandscape:(unk)arg1 andFromLandscape:(id)arg2 andBackToPortrait:(unk)arg3  ;
-(void)_rotateView:(id)arg0 toOrientation:(NSInteger)arg1 ;
-(void)_rotationCompletion:(id)arg0 ;
-(void)_runAddWidgetSheetTest;
-(void)_runAppOpen:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)_runAppSearchDismiss;
-(void)_runAppSearchPresent;
-(void)_runAppSwitcherBringupTestOverApp:(BOOL)arg0 rotated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_runAppSwitcherDismissTestOverApp:(BOOL)arg0 rotated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_runArcSwipeMultipleAppsTest;
-(void)_runArcSwipeTestFromHomeScreen:(BOOL)arg0 ;
-(void)_runAutoPIPWithGestureTest:(id)arg0 ;
-(void)_runBottomEdgeSwipeMultipleAppsTest;
-(void)_runBottomEdgeSwipeTestFromHomeScreen:(BOOL)arg0 ;
-(void)_runCoverSheetNotificationListHistoryRevealTest;
-(void)_runDashBoardDismissFromPasscodeViewAfterAuthenticationTest;
-(void)_runDashBoardDismissFromTodayViewWhileAuthenticatedTest;
-(void)_runDashBoardDismissTestFromPageIndex:(NSUInteger)arg0 showPasscodeView:(BOOL)arg1 ;
-(void)_runDashBoardDismissWhileAuthenticatedTest;
-(void)_runDashBoardPresentDismissPasscode;
-(void)_runDashBoardRotateCameraPage;
-(void)_runDashBoardRotateMainPage;
-(void)_runDashBoardRotateTodayViewPage;
-(void)_runDashBoardRotationTestWithCompletion:(id)arg0 ;
-(void)_runDashBoardScrollFromLeftToRightPageTestWithBlur:(BOOL)arg0 ;
-(void)_runDashBoardScrollToLeftPageTestWithBlur:(BOOL)arg0 ;
-(void)_runDashBoardScrollToRightPageTestWithBlur:(BOOL)arg0 ;
-(void)_runDashboardTodayViewScrollWidgetsTestWithOptions:(id)arg0 ;
-(void)_runDismissContinuityBannerInSwitcherTestWithCompletion:(id)arg0 ;
-(void)_runDoSiDoTest;
-(void)_runEnterPageHiding;
-(void)_runExitPageHiding;
-(void)_runFourFingerSwipeMultipleAppsTest;
-(void)_runFourFingerSwipeTest;
-(void)_runHomeScreenIconPullToSpotlightDismiss;
-(void)_runHomeScreenIconPullToSpotlightWithTestName:(id)arg0 cold:(BOOL)arg1 ;
-(void)_runHomeScreenSearchDismiss;
-(void)_runHomeScreenSearchPresent;
-(void)_runHomeScreenSwipeLeftToTodayView;
-(void)_runHomeScreenSwipeRightFromTodayView;
-(void)_runLeftRightTodayViewScrollWidgetsTestWithOptions:(id)arg0 ;
-(void)_runLockScreenScrollNotificationsTestWithOptions:(id)arg0 ;
-(void)_runMedusaMoveFloatingApplicationTest:(id)arg0 withOptions:(id)arg1 ;
-(void)_runMedusaPinFloatingApplicationTest:(id)arg0 withOptions:(id)arg1 ;
-(void)_runMedusaSplitViewResizeTest:(id)arg0 withOptions:(id)arg1 ;
-(void)_runMedusaSplitViewSuspendTest:(id)arg0 withOptions:(id)arg1 ;
// -(void)_runMedusaTest:(id)arg0 withMainWorkspaceTransition:(id)arg1 options:(unk)arg2  ;
-(void)_runMedusaUnpinFloatingApplicationTest:(id)arg0 withOptions:(id)arg1 ;
-(void)_runNotificationCoalescingExpandingScrollingTestWithOptions:(id)arg0 ;
-(void)_runNotificationCoalescingExpandingTestWithOptions:(id)arg0 ;
-(void)_runNotificationCoalescingRestackingFromBottomTestWithOptions:(id)arg0 ;
-(void)_runNotificationCoalescingRestackingTestWithOptions:(id)arg0 ;
-(void)_runPresentContinuityBannerInSwitcherTestWithCompletion:(id)arg0 ;
-(void)_runScrollAppSwitcherLandscapeTest:(id)arg0 overApp:(BOOL)arg1 completion:(id)arg2 ;
-(void)_runScrollAppSwitcherTest:(id)arg0 overApp:(BOOL)arg1 completion:(id)arg2 ;
-(void)_runScrollIconListTestForTestName:(id)arg0 testOptions:(id)arg1 ;
-(void)_runScrollTestWithScrollView:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)_runScrunchAndSwipeMultipleAppsTest;
-(void)_runScrunchAndSwipeTest;
-(void)_runScrunchHomeToAutoPIPTest;
-(void)_runScrunchToAppSwitcherTest;
-(void)_runScrunchToHomeTest;
-(void)_runSpotlightPulldownRotation;
-(void)_runSpotlightTodayViewRotation;
-(void)_runStackConfigurationTransition;
-(void)_runSwipeAndPauseForSwitcherOverFolderTest;
-(void)_runSwipeAndPauseForSwitcherTestFromHomeScreen:(BOOL)arg0 completion:(id)arg1 ;
-(void)_runSwipeToHomeOverFolderTest;
-(void)_runSwipeToHomeTestWithCompletion:(id)arg0 ;
-(void)_runSwipeUpHomeToAutoPIPTest;
-(void)_runTapContinuityBannerInSwitcherTestWithCompletion:(id)arg0 ;
// -(void)_runTestWithVariableFinish:(id)arg0 options:(unk)arg1 completion:(id)arg2  ;
-(void)_runTodayViewEditingScrollWidgetsTestWithOptions:(id)arg0 ;
-(void)_runTodayViewFocusSearchFieldToSpotlight;
-(void)_runTodayViewPullDownToSpotlight;
-(void)_runTodayViewScrollWidgetsTestWithOptions:(id)arg0 ;
-(void)_runToggleSearchTest;
-(void)_runVolumeChangeWithCompletion:(id)arg0 ;
-(void)_runWidgetConfigurationTransitionFromEditingMode:(BOOL)arg0 ;
-(void)_scheduleSharedIPadPostStartupOperation:(id)arg0 ;
-(void)_screenshotWindowWasDismissed;
-(void)_screenshotWindowWillBeDisplayed;
-(void)_setAmbiguousControlCenterActivationMargin:(CGFloat)arg0 ;
-(void)_setDeferredHeadsetButtonDownEvent:(struct __IOHIDEvent *)arg0 ;
-(void)_setDeviceOrientation:(NSInteger)arg0 animated:(BOOL)arg1 logMessage:(id)arg2 ;
-(void)_setReachabilitySupported:(BOOL)arg0 ;
-(void)_setStatusBarOrientation:(NSInteger)arg0 animated:(BOOL)arg1 logMessage:(id)arg2 ;
-(void)_setStatusBarOrientation:(NSInteger)arg0 logMessage:(id)arg1 ;
-(void)_setStatusBarShowsProgress:(BOOL)arg0 ;
-(void)_setupMainWorkspaceForMedusaTestWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)_setupNotificationListTest;
-(void)_setupSystemApertureProximityBacklightPolicyDelegateForMainDisplayWindowScene:(id)arg0 ;
-(void)_significantTimeChangeNotificationReceived;
-(void)_significantTimeDidChange:(BOOL)arg0 ;
-(void)_simulateHomeButtonPressWithCompletion:(id)arg0 ;
-(void)_simulateLockButtonPress;
-(void)_simulateUserScrollForNotificationListWithCount:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)_smartCoverDidClose:(struct __IOHIDEvent *)arg0 ;
-(void)_smartCoverDidOpen:(struct __IOHIDEvent *)arg0 ;
-(void)_smartCoverMightHaveOpened:(struct __IOHIDEvent *)arg0 ;
// -(void)_startAutoPIPWithGesture:(id)arg0 setupCompletion:(unk)arg1 finalCompletion:(id)arg2  ;
-(void)_startBulletinBoardServer;
-(void)_startRecordingIndicatorForMainDisplayWindowScene:(id)arg0 ;
-(void)_startScrollAppSwitcherTest:(id)arg0 overApp:(BOOL)arg1 runColdTest:(BOOL)arg2 completion:(id)arg3 ;
-(void)_startSeekWithDirection:(id)arg0 ;
-(void)_startSystemStatusServerAndFriends;
-(void)_takeScreenshotAndEdit:(BOOL)arg0 ;
-(void)_takeScreenshotWithOptionsCollection:(id)arg0 presentationOptions:(id)arg1 ;
-(void)_toggleAppLibraryVisibility:(id)arg0 ;
-(void)_toggleFloatingDockVisibility:(id)arg0 ;
-(void)_toggleSearch;
-(void)_turnScreenOnAndAuthenticateWithCompletion:(id)arg0 ;
-(void)_turnScreenOnAndUnlockWithCompletion:(id)arg0 ;
-(void)_turnScreenOnOnDashBoardWithCompletion:(id)arg0 ;
-(void)_uninstallModelForTestsAndRestoreAppLayouts:(id)arg0 ;
-(void)_unlockAnimationDidFinish:(id)arg0 ;
-(void)_unscatterWillBegin:(id)arg0 ;
-(void)_updateHardwareKeyboardAttached;
-(void)_updateHomeScreenPresenceNotification:(id)arg0 ;
-(void)_updateOrientationDetectionSettings;
-(void)_updateRingerState:(int)arg0 withVisuals:(BOOL)arg1 updatePreferenceRegister:(BOOL)arg2 ;
-(void)_waitForCloudCriticalData;
-(void)addActiveOrientationObserver:(id)arg0 ;
-(void)addDisableActiveInterfaceOrientationChangeAssertion:(id)arg0 ;
-(void)addInCallApp:(id)arg0 ;
-(void)addNowLocatingApp:(id)arg0 ;
-(void)applicationDidFinishLaunching:(id)arg0 ;
-(void)applicationOpenURL:(id)arg0 ;
-(void)applicationOpenURL:(id)arg0 withApplication:(id)arg1 animating:(BOOL)arg2 activationSettings:(id)arg3 origin:(id)arg4 notifyLSOnFailure:(BOOL)arg5 withResult:(id)arg6 ;
-(void)backlightController:(id)arg0 willAnimateBacklightToFactor:(float)arg1 source:(NSInteger)arg2 ;
-(void)batteryStatusDidChange:(id)arg0 ;
-(void)beginIgnoringInteractionEvents;
-(void)beginIgnoringInteractionEventsForReason:(id)arg0 ;
// -(void)beginInteractiveSpotlightTransientOverlayPresentationWithValidator:(id)arg0 beginHandler:(unk)arg1  ;
-(void)buildMenuWithBuilder:(id)arg0 ;
-(void)cache:(id)arg0 didUpdateActiveAudioRoute:(id)arg1 ;
-(void)didDismissMiniAlert;
-(void)didReceiveMemoryWarning;
-(void)endIgnoringInteractionEvents;
-(void)endIgnoringInteractionEventsForReason:(id)arg0 ;
-(void)endLaunchTest;
-(void)failedTest:(id)arg0 withResults:(id)arg1 ;
-(void)finishedTest:(id)arg0 extraResults:(id)arg1 waitForNotification:(id)arg2 withTeardownBlock:(id)arg3 ;
-(void)frontDisplayDidChange:(id)arg0 ;
-(void)handleDeferredUILockForInCallPresentation;
-(void)handleDeferredUILockForInCallPresentationAnimateIfNeeded:(BOOL)arg0 inCallPresentationActive:(BOOL)arg1 ;
-(void)handleKeyHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(void)handleLockButtonPressFromTransientOverlayViewController:(id)arg0 ;
-(void)iconScrollViewDidCancelTouchTracking:(id)arg0 ;
-(void)iconScrollViewWillCancelTouchTracking:(id)arg0 ;
-(void)interactiveScreenshotGestureManager:(id)arg0 requestsScreenshotPreheatWithPresentationOptions:(id)arg1 ;
-(void)interactiveScreenshotGestureManager:(id)arg0 requestsScreenshotWithOptionsCollection:(id)arg1 presentationOptions:(id)arg2 ;
-(void)keyboardFocusController:(id)arg0 didUpdateWindowSceneWithFocusFrom:(id)arg1 to:(id)arg2 ;
-(void)keyboardFocusController:(id)arg0 externalSceneDidAcquireFocus:(id)arg1 ;
-(void)languageChanged;
-(void)launchMusicPlayerSuspended;
-(void)localeChanged;
-(void)modalAlertPresentationCoordinator:(id)arg0 didChangeShowingSystemModalAlert:(BOOL)arg1 ;
-(void)noteBacklightFadeFinished;
-(void)noteBacklightLevelChanged;
-(void)noteCaseHardwarePresent;
-(void)noteInstalledWebClipsDidChange;
-(void)noteInterfaceOrientationChanged:(NSInteger)arg0 duration:(CGFloat)arg1 logMessage:(id)arg2 ;
-(void)noteInterfaceOrientationChanged:(NSInteger)arg0 duration:(CGFloat)arg1 updateMirroredDisplays:(BOOL)arg2 force:(BOOL)arg3 logMessage:(id)arg4 ;
-(void)noteInterfaceOrientationChanged:(NSInteger)arg0 duration:(CGFloat)arg1 updateMirroredDisplays:(BOOL)arg2 logMessage:(id)arg3 ;
-(void)noteInterfaceOrientationChanged:(NSInteger)arg0 force:(BOOL)arg1 logMessage:(id)arg2 ;
-(void)noteInterfaceOrientationChanged:(NSInteger)arg0 logMessage:(id)arg1 ;
-(void)noteKeybagRefetchTransactionIsActive:(BOOL)arg0 ;
-(void)noteMainTransientOverlayPresentationManagerWillChangeToInterfaceOrientation:(NSInteger)arg0 ;
-(void)noteSceneLayoutDidUpdateOnDisplayWithIdentity:(id)arg0 ;
-(void)noteSubstantialTransitionOccured;
-(void)nowLocatingAppDidEnterForeground:(id)arg0 ;
-(void)popTransientActiveInterfaceOrientationForReason:(id)arg0 ;
-(void)profileConnectionDidReceivePasscodePolicyChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)pushTransientActiveInterfaceOrientation:(NSInteger)arg0 forReason:(id)arg1 ;
-(void)registerAnalyticsEventHandlers;
-(void)registerRemoteAlertSceneViewProvider:(id)arg0 ;
-(void)remoteTransientOverlaySessionManager:(id)arg0 requestsHandlingForButtonEvents:(NSUInteger)arg1 forSession:(id)arg2 viewController:(id)arg3 ;
-(void)removeActiveOrientationObserver:(id)arg0 ;
-(void)removeDisableActiveInterfaceOrientationChangeAssertion:(id)arg0 nudgeOrientationIfRemovingLast:(BOOL)arg1 ;
-(void)removeDisplayConnectionObserver;
-(void)removeInCallApp;
-(void)removeNowLocatingApp:(id)arg0 ;
-(void)requestDeviceUnlock;
-(void)resetIdleTimerAndUndim;
-(void)restartManager:(id)arg0 willRestartWithTransitionRequest:(id)arg1 ;
-(void)restartManagerExitImminent:(id)arg0 ;
-(void)restartManagerWillReboot:(id)arg0 ;
-(void)restartManagerWillShutdown:(id)arg0 ;
-(void)rotateIfNeeded:(NSInteger)arg0 completion:(id)arg1 ;
-(void)runFieldTestScript;
-(void)runFolderRotationTest:(int)arg0 ;
-(void)runHomeScreenRotationIterationWithRemainingIterations:(int)arg0 completionHandler:(id)arg1 ;
-(void)runHomeScreenRotationTest:(int)arg0 ;
-(void)screenCapturer:(id)arg0 didCaptureScreenshotsOfScreens:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrolling:(id)arg0 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setAppRegisteredForLockButtonEvents:(id)arg0 isActive:(BOOL)arg1 ;
-(void)setAppRegisteredForVolumeEvents:(id)arg0 isActive:(BOOL)arg1 ;
-(void)setExpectsFaceContact:(BOOL)arg0 ;
-(void)setExpectsFaceContact:(BOOL)arg0 inLandscape:(BOOL)arg1 ;
-(void)setMenuButtonInterceptApp:(id)arg0 forever:(BOOL)arg1 ;
-(void)setNextAssistantRecognitionStrings:(id)arg0 ;
-(void)setNowPlayingInfo:(id)arg0 forProcessWithPID:(int)arg1 ;
-(void)setStatusBarOrientation:(NSInteger)arg0 forEmbeddedDisplayAnimated:(BOOL)arg1 ;
-(void)setSuspensionAnimationDelay:(CGFloat)arg0 ;
-(void)setSystemVolumeHUDEnabled:(BOOL)arg0 forAudioCategory:(id)arg1 ;
-(void)setUpDaylightSavingsTimer;
-(void)setWantsVolumeButtonEvents:(BOOL)arg0 ;
-(void)setupMidnightTimer;
-(void)showAlertForUnhandledURL:(id)arg0 error:(int)arg1 ;
-(void)significantTimeChange;
-(void)spotlightTransientOverlayViewControllerDidPresent:(id)arg0 ;
-(void)spotlightTransientOverlayViewControllerRequestsDismissal:(id)arg0 ;
-(void)spotlightTransientOverlayViewControllerWillDismiss:(id)arg0 ;
-(void)startLaunchTestNamed:(id)arg0 options:(id)arg1 ;
-(void)startLaunchTestNamed:(id)arg0 options:(id)arg1 withCompletionBlock:(id)arg2 ;
-(void)startResumeTestNamed:(id)arg0 options:(id)arg1 ;
-(void)startedTest:(id)arg0 ;
-(void)stateForStateType:(NSUInteger)arg0 withCompletionHandler:(id)arg1 ;
-(void)takeScreenshot;
// -(void)toggleSearchFromBreadcrumbSource:(BOOL)arg0 withWillBeginHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(void)unregisterRemoteAlertSceneViewProvider:(id)arg0 ;
-(void)updateMirroredDisplayOrientationWithLogMessage:(id)arg0 ;
-(void)updateNativeOrientationAndMirroredDisplays:(BOOL)arg0 logMessage:(id)arg1 ;
-(void)updateNativeOrientationAnimated:(BOOL)arg0 logMessage:(id)arg1 ;
-(void)updateNativeOrientationWithLogMessage:(id)arg0 ;
-(void)updateNativeOrientationWithOrientation:(NSInteger)arg0 logMessage:(id)arg1 ;
-(void)updateNativeOrientationWithOrientation:(NSInteger)arg0 updateMirroredDisplays:(BOOL)arg1 animated:(BOOL)arg2 logMessage:(id)arg3 ;
-(void)validateCommand:(id)arg0 ;
-(void)willDisplayMiniAlert;
-(void)wipeDeviceNowWithReason:(id)arg0 ;


@end


#endif