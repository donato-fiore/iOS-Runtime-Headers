// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBDASHBOARD_H
#define DBDASHBOARD_H

@class NSString, UIViewController, UIView, UIWindow, FBSDisplayConfiguration, FBSDisplayIdentity, CARDisplayInfo, NSMutableDictionary, NSHashTable, UIScreen, SiriActivityAssertion, SiriLongPressButtonSource, SiriDirectActionSource, FBScene, RBSProcessMonitor, CHSWidgetHost, UIWindowScene;
@protocol DBEnvironmentConfigurationObserving, DBLockoutControllerDelegate, DBNotificationViewControllerDelegate, DBSystemAlertPresenting, DBWorkspaceObserver, CARSessionCommandObserving, CRSInCallAssertionServiceObserver, DBEnvironment, BSInvalidatable, CRSIconLayoutVehicleDataProviding, SiriAssertion, UIScenePresenter;

#import <Foundation/Foundation.h>

#import "DBDashboardStateProvider.h"
#import "DBEnvironmentConfiguration.h"
#import "DBFocusController.h"
#import "DBFocusMovementManager.h"
#import "DBStatusBarHomeButtonStateManager.h"
#import "DBDashboardLayoutEngine.h"
#import "DBLockOutController.h"
#import "DBNotificationViewController.h"
#import "DBNotificationWindow.h"
#import "DBNowPlayingObserver.h"
#import "DBDashboardRootViewController.h"
#import "DBScreenshotManager.h"
#import "DBSiriViewController.h"
#import "DBSplashScreenAlert.h"
#import "DBStatusBarStateProvider.h"
#import "DBRootStatusBarViewController.h"
#import "DBStatusBarWindow.h"
#import "DBUserAlertServer.h"
#import "DBWallpaperViewController.h"
#import "DBWorkspace.h"
#import "DBDashboardWorkspaceOwner.h"

@interface DBDashboard : NSObject <DBEnvironmentConfigurationObserving, DBLockoutControllerDelegate, DBNotificationViewControllerDelegate, DBSystemAlertPresenting, DBWorkspaceObserver, CARSessionCommandObserving, CRSInCallAssertionServiceObserver, DBEnvironment>

 {
    id<BSInvalidatable> *_dispatchingAssertion;
    id<BSInvalidatable> *_dispatchingAssertionACBack;
    id<BSInvalidatable> *_dispatchingAssertionACHome;
    id<BSInvalidatable> *_dispatchingAssertionACSelect;
    id<BSInvalidatable> *_dispatchingAssertionTelephonyDrop;
    os_unfair_lock_s _lock;
    BOOL _lock_hasHandledConnect;
    BOOL _lock_hasPendingRequestUITake;
    BOOL _lock_invalidated;
}


@property (readonly, nonatomic) NSString *activeBundleIdentifier;
@property (retain, nonatomic) id *activeCallScreenBorrowToken; // ivar: _activeCallScreenBorrowToken
@property (retain, nonatomic) UIViewController *alertViewController; // ivar: _alertViewController
@property (nonatomic) int connectedNotifyToken; // ivar: _connectedNotifyToken
@property (retain, nonatomic) UIView *cornerRadiusView; // ivar: _cornerRadiusView
@property (retain, nonatomic) UIWindow *cornerRadiusWindow; // ivar: _cornerRadiusWindow
@property (nonatomic) CGFloat currentCornerRadius; // ivar: _currentCornerRadius
@property (retain, nonatomic) DBDashboardStateProvider *dashboardStateProvider; // ivar: _dashboardStateProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (readonly, copy, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (retain, nonatomic) CARDisplayInfo *displayInfo; // ivar: _displayInfo
@property (retain, nonatomic) DBEnvironmentConfiguration *environmentConfiguration; // ivar: _environmentConfiguration
@property (retain, nonatomic) DBFocusController *focusController; // ivar: _focusController
@property (retain, nonatomic) DBFocusMovementManager *focusMovementManager; // ivar: _focusMovementManager
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) DBStatusBarHomeButtonStateManager *homeButtonStateManager; // ivar: _homeButtonStateManager
@property (readonly, nonatomic) NSObject<CRSIconLayoutVehicleDataProviding> *iconLayoutDataProvider;
@property (retain, nonatomic) NSMutableDictionary *identifierToAppInfoMap; // ivar: _identifierToAppInfoMap
@property (retain, nonatomic) NSMutableDictionary *identifierToAppScenesMap; // ivar: _identifierToAppScenesMap
@property (retain, nonatomic) NSMutableDictionary *identifierToForegroundAppScenesMap; // ivar: _identifierToForegroundAppScenesMap
@property (retain, nonatomic) UIView *interestingView; // ivar: _interestingView
@property (retain, nonatomic) UIWindow *interestingWindow; // ivar: _interestingWindow
@property (retain, nonatomic) DBDashboardLayoutEngine *layoutEngine; // ivar: _layoutEngine
@property (retain, nonatomic) DBLockOutController *lockOutController; // ivar: _lockOutController
@property (retain, nonatomic) UIWindow *mainWindow; // ivar: _mainWindow
@property (retain, nonatomic) DBNotificationViewController *notificationViewController; // ivar: _notificationViewController
@property (retain, nonatomic) DBNotificationWindow *notificationWindow; // ivar: _notificationWindow
@property (retain, nonatomic) DBNowPlayingObserver *nowPlayingObserver; // ivar: _nowPlayingObserver
@property (retain, nonatomic) NSObject<BSInvalidatable> *oemScreenLayoutElementAssertion; // ivar: _oemScreenLayoutElementAssertion
@property (nonatomic) BOOL pendingInCallServiceActivation; // ivar: _pendingInCallServiceActivation
@property (retain, nonatomic) NSObject<BSInvalidatable> *preventPasscodeLockToken; // ivar: _preventPasscodeLockToken
@property (retain, nonatomic) NSObject<BSInvalidatable> *preventSpuriousScreenUndimToken; // ivar: _preventSpuriousScreenUndimToken
@property (retain, nonatomic) UIWindow *resizeWindow; // ivar: _resizeWindow
@property (retain, nonatomic) DBDashboardRootViewController *rootViewController; // ivar: _rootViewController
@property (retain, nonatomic) NSHashTable *sceneObservers; // ivar: _sceneObservers
@property (retain, nonatomic) UIScreen *screen; // ivar: _screen
@property (nonatomic, getter=isScreenAvailable) BOOL screenAvailable; // ivar: _screenAvailable
@property (retain, nonatomic) DBScreenshotManager *screenshotManager; // ivar: _screenshotManager
@property (nonatomic) BOOL showingApp; // ivar: _showingApp
@property (retain, nonatomic) SiriActivityAssertion *siriButtonAssertion; // ivar: _siriButtonAssertion
@property (retain, nonatomic) SiriLongPressButtonSource *siriButtonSource; // ivar: _siriButtonSource
@property (retain, nonatomic) SiriDirectActionSource *siriDirectActionSource; // ivar: _siriDirectActionSource
@property (retain, nonatomic) NSObject<SiriAssertion> *siriPrewarmAssertion; // ivar: _siriPrewarmAssertion
@property (nonatomic) CGFloat siriPrewarmTimestamp; // ivar: _siriPrewarmTimestamp
@property (retain, nonatomic) DBSiriViewController *siriViewController; // ivar: _siriViewController
@property (retain, nonatomic) DBSplashScreenAlert *splashScreenAlert; // ivar: _splashScreenAlert
@property (retain, nonatomic) FBScene *statusBarHostScene; // ivar: _statusBarHostScene
@property (retain, nonatomic) UIWindow *statusBarHostWindow; // ivar: _statusBarHostWindow
@property (retain, nonatomic) NSObject<UIScenePresenter> *statusBarScenePresenter; // ivar: _statusBarScenePresenter
@property (retain, nonatomic) DBStatusBarStateProvider *statusBarStateProvider; // ivar: _statusBarStateProvider
@property (retain, nonatomic) DBRootStatusBarViewController *statusBarViewController; // ivar: _statusBarViewController
@property (retain, nonatomic) DBStatusBarWindow *statusBarWindow; // ivar: _statusBarWindow
@property (readonly) Class superclass;
@property (retain, nonatomic) RBSProcessMonitor *templateAppProcessMonitor; // ivar: _templateAppProcessMonitor
@property (retain, nonatomic) DBUserAlertServer *userAlertServer; // ivar: _userAlertServer
@property (retain, nonatomic) DBWallpaperViewController *wallpaperViewController; // ivar: _wallpaperViewController
@property (readonly, nonatomic) CHSWidgetHost *widgetHost;
@property (retain, nonatomic) UIWindowScene *windowScene; // ivar: _windowScene
@property (retain, nonatomic) DBWorkspace *workspace; // ivar: _workspace
@property (retain, nonatomic) DBDashboardWorkspaceOwner *workspaceOwner; // ivar: _workspaceOwner


-(BOOL)_isPreYukonNavAppForAppInfo:(id)arg0 proxiedAppInfo:(id)arg1 ;
-(BOOL)_isStatusBarScene:(id)arg0 ;
-(BOOL)handleACHomeUp:(NSUInteger)arg0 ;
-(BOOL)hasActiveCall;
-(BOOL)preflightRequiredForApplicationInfo:(id)arg0 ;
-(BOOL)shouldDisableFiveRowKeyboards;
-(NSInteger)_sceneInterfaceStyleForScene:(id)arg0 ;
-(NSInteger)sceneInterfaceStyleForAppInfo:(id)arg0 proxyAppInfo:(id)arg1 ;
-(NSInteger)sceneMapInterfaceStyleForAppInfo:(id)arg0 proxyAppInfo:(id)arg1 ;
-(id)_activeBundleIdentifierForScene:(id)arg0 ;
-(id)_applicationSceneForBundleID:(id)arg0 ;
-(id)_dashboardScene;
-(id)_foregroundActiveScene;
-(id)_newResizeAnimationWindow;
-(id)_takeSnapshotOfFrame:(struct CGRect )arg0 ;
-(id)applicationInfoForScene:(id)arg0 ;
-(id)focusWindow;
-(id)initWithWindowScene:(id)arg0 environmentConfiguration:(id)arg1 ;
-(id)sceneForAppInfo:(id)arg0 ;
-(id)sceneIdentifierForAppInfo:(id)arg0 ;
-(id)systemGestureWindow;
-(struct CGRect )_rectForFocusedRectDictionary:(id)arg0 ;
-(struct CGRect )sceneFrameForAppInfo:(id)arg0 ;
-(struct CGRect )sceneFrameForAppInfo:(id)arg0 proxyAppInfo:(id)arg1 ;
-(struct UIEdgeInsets )safeAreaInsetsForAppInfo:(id)arg0 ;
-(struct UIEdgeInsets )safeAreaInsetsForAppInfo:(id)arg0 proxyAppInfo:(id)arg1 ;
-(struct UIEdgeInsets )statusBarInsets;
-(void)_acBackPressed:(id)arg0 ;
-(void)_animateStartupFromScaledMainWindow;
-(void)_animateStartupToHomeScreen;
-(void)_animateStartupToIcons;
-(void)_backLongPressed:(id)arg0 ;
-(void)_createBackgroundSceneForTemplateAppBundleID:(id)arg0 ;
-(void)_dismissFloatingSiriIfNecessary;
-(void)_displayRecordingAlert;
-(void)_drawCorners;
-(void)_handleBackgroundURLDeliveryForLaunchInfo:(id)arg0 ;
-(void)_handleCarPlayUIReady;
-(void)_handleHomeEvent:(id)arg0 ;
-(void)_handleOpenApplicationEvent:(id)arg0 ;
-(void)_handleReturnToHomeScreenEvent:(id)arg0 ;
-(void)_handleSessionURL:(id)arg0 ;
-(void)_handleSiriButtonDownWithTimestamp:(CGFloat)arg0 ;
-(void)_handleSiriButtonUpWithTimestamp:(CGFloat)arg0 ;
-(void)_handleSiriPrewarmWithTimestamp:(CGFloat)arg0 ;
-(void)_handleTapToRadarEvent;
-(void)_homeTapped:(id)arg0 ;
-(void)_launchAppWithInfo:(id)arg0 forURL:(id)arg1 ;
-(void)_notifyAccessoryIfNeededWithUIContext:(id)arg0 ;
-(void)_pointerSelectionPressed:(id)arg0 ;
-(void)_presentPrivacyDisclosureAlertForApplication:(id)arg0 ;
-(void)_screenDidBecomeAvailable:(id)arg0 ;
-(void)_screenDidBecomeUnavailable:(id)arg0 ;
-(void)_setInitialFocusOwner;
-(void)_templateAppStateUpdated:(id)arg0 ;
-(void)_updateAppScenesViewArea;
-(void)_updateDeferrals;
-(void)_updatePasscodeLockToken;
-(void)_updateUserInterfaceStyle;
-(void)_updateWallpaper;
-(void)_updateWindowFrames;
-(void)addObserver:(id)arg0 ;
-(void)alertServer:(id)arg0 wantsSystemDismissalForViewController:(id)arg1 ;
-(void)alertServer:(id)arg0 wantsSystemPresentationForViewController:(id)arg1 ;
-(void)dealloc;
-(void)didDismissNotificationForNotificationViewController:(id)arg0 ;
-(void)environmentConfiguration:(id)arg0 appearanceStyleDidChange:(NSInteger)arg1 ;
-(void)environmentConfiguration:(id)arg0 mapsAppearanceStyleDidChange:(NSInteger)arg1 ;
-(void)environmentConfiguration:(id)arg0 nightModeDidChange:(BOOL)arg1 ;
-(void)environmentConfiguration:(id)arg0 viewAreaDidChangeFromViewAreaFrame:(struct CGRect )arg1 safeAreaInsets:(struct UIEdgeInsets )arg2 toViewAreaFrame:(struct CGRect )arg3 safeAreaInsets:(struct UIEdgeInsets )arg4 duration:(CGFloat)arg5 transitionControlType:(NSUInteger)arg6 ;
-(void)environmentConfigurationPairedVehiclesDidChange:(id)arg0 ;
-(void)goToPageContainingBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)handleConnect;
-(void)handleEvent:(id)arg0 ;
-(void)handleFocusMovementAction:(id)arg0 fromScene:(id)arg1 ;
-(void)handleLongBackPress;
-(void)inCallAssertionService:(id)arg0 didSetBannersEnabled:(BOOL)arg1 ;
-(void)inCallAssertionServiceDidDismiss:(id)arg0 ;
-(void)inCallAssertionServiceDidPresent:(id)arg0 ;
-(void)invalidate;
-(void)lockOutController:(id)arg0 didChangeFromLockoutMode:(NSInteger)arg1 toLockOutMode:(NSInteger)arg2 animated:(BOOL)arg3 takeScreen:(BOOL)arg4 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)processMonitor:(id)arg0 didHandleDeathOfBundleIdentifier:(id)arg1 ;
-(void)processMonitor:(id)arg0 shouldHandleDeathOfBundleIdentifier:(id)arg1 isCrash:(BOOL)arg2 ;
-(void)removeObserver:(id)arg0 ;
-(void)sceneManager:(id)arg0 didCreateScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 didDestroyScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 scene:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)sceneManager:(id)arg0 scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)sceneManager:(id)arg0 updateForScene:(id)arg1 appliedWithContext:(id)arg2 ;
-(void)sceneManager:(id)arg0 updateForScene:(id)arg1 completedWithContext:(id)arg2 error:(id)arg3 ;
-(void)sceneManager:(id)arg0 updateForScene:(id)arg1 preparedWithContext:(id)arg2 ;
-(void)sceneManager:(id)arg0 willDestroyScene:(id)arg1 ;
-(void)session:(id)arg0 handleSiriRequestEvent:(NSInteger)arg1 withPayload:(id)arg2 ;
-(void)session:(id)arg0 openURL:(id)arg1 ;
-(void)session:(id)arg0 receivedUnhandledRemoteEvent:(id)arg1 withPayload:(id)arg2 ;
-(void)willDisplayNotificationForNotificationViewController:(id)arg0 ;
-(void)workspace:(id)arg0 stateDidChangeFromState:(id)arg1 toState:(id)arg2 ;


@end


#endif