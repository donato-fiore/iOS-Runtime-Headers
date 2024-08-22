// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APPLICATION_H
#define APPLICATION_H

@class SFBrowserApplication, NSMutableSet, NSMutableArray, WBDatabaseLockAcquisitor, WBSCyclerConnectionManager, WBTabGroupManager, WBSForYouRecentParsecResultsManager, WBSFormAutoFillCorrectionsHistoryObserver, WBSBrowserTabCompletionProvider, SBSAssertion, NSString, WBSParsecABGroupManager, WBSPhishingClassifierController, WBSAllowedLegacyTLSHostManager, WBSUnifiedBarAnalyticsRecorder, AMSSharedStoreReview, WebBookmarkCollection, NSArray, UIScene;
@protocol PageLoadTestRunnerDelegate, TabSnapshotCacheStressTestRunnerDelegate, MCProfileConnectionObserver, SFBrowserApplicationProxy, SFUIApplicationModifierFlagsProviding, UIApplicationDelegatePrivate, WBDatabaseLockAcquisitorDelegate, WBSBrowserTabCompletionProviderSource, _SFDownloadDelegate, WBSUnifiedBarAnalyticsRecorderDelegate, BKSMousePointerDeviceObserver, WBSSystemNoteTakingControllerDelegate, SFWebExtensionsControllerDelegate, _SFNavigationIntentHandling, BSInvalidatable, WBSCloudHistoryServiceProtocol, NSObject, WBSPhishingClassifier, WBSUnifiedBarAnalyticsProviding;


#import "BookmarksDatabaseHealthReporter.h"
#import "ForYouRecommendationMediator.h"
#import "ReadingListLeadImageCache.h"
#import "HighlightManager.h"
#import "SystemNoteTakingController.h"
#import "AutomationController.h"
#import "BrowserWindowController.h"
#import "BrowserController.h"
#import "SafariSettingsSyncEngine.h"

@interface Application : SFBrowserApplication <PageLoadTestRunnerDelegate, TabSnapshotCacheStressTestRunnerDelegate, MCProfileConnectionObserver, SFBrowserApplicationProxy, SFUIApplicationModifierFlagsProviding, UIApplicationDelegatePrivate, WBDatabaseLockAcquisitorDelegate, WBSBrowserTabCompletionProviderSource, _SFDownloadDelegate, WBSUnifiedBarAnalyticsRecorderDelegate, BKSMousePointerDeviceObserver, WBSSystemNoteTakingControllerDelegate, SFWebExtensionsControllerDelegate, _SFNavigationIntentHandling>

 {
    BOOL _isReadingDefaults;
    BOOL _shouldReadDefaultsOnResume;
    BOOL _isRunningShowBookmarksTest;
    BOOL _startedBookmarksTest;
    BOOL _isRunningCanvasTest;
    BOOL _willEnterSuspendedState;
    NSMutableSet *_pointerDevices;
    os_unfair_lock_s _pointerDeviceLock;
    id<BSInvalidatable> *_pointerDeviceObserverToken;
    NSMutableArray *_activeDownloads;
    NSUInteger _bookmarksDatabaseBackgroundTaskIdentifier;
    WBDatabaseLockAcquisitor *_bookmarksDatabaseBackgroundTaskLockAcquisitor;
    BookmarksDatabaseHealthReporter *_bookmarksDatabaseHealthReporter;
    id<WBSCloudHistoryServiceProtocol> *_cloudHistory;
    WBSCyclerConnectionManager *_cyclerConnectionManager;
    WBTabGroupManager *_ephemeralTabGroupManager;
    BOOL _finishedLaunching;
    WBSForYouRecentParsecResultsManager *_forYouRecentParsecResultsManager;
    ForYouRecommendationMediator *_forYouRecommendationMediator;
    WBSFormAutoFillCorrectionsHistoryObserver *_formAutoFillCorrectionsHistoryObserver;
    ReadingListLeadImageCache *_readingListImageCache;
    BOOL _resigningActive;
    WBSBrowserTabCompletionProvider *_tabCompletionProvider;
    WBTabGroupManager *_tabGroupManager;
    SBSAssertion *_wallpaperSuspensionAssertion;
    NSString *_openURLOriginBundleIdentifier;
    WBSParsecABGroupManager *_abGroupManager;
    HighlightManager *_highlightManager;
    WBSPhishingClassifierController *_phishingClassifier;
    WBSAllowedLegacyTLSHostManager *_cachedLegacyTLSHostManager;
    SystemNoteTakingController *_systemNoteTakingController;
    WBSUnifiedBarAnalyticsRecorder *_unifiedBarAnalyticsRecorder;
    id<NSObject> *_developerPreferencesDidChangeNotificationToken;
    AMSSharedStoreReview *_sharedStoreReview;
}


@property (readonly, nonatomic) WBSParsecABGroupManager *abGroupManager;
@property (readonly, nonatomic) AutomationController *automationController; // ivar: _automationController
@property (readonly, nonatomic) WebBookmarkCollection *bookmarkCollection; // ivar: _bookmarkCollection
@property (readonly, nonatomic) NSArray *browserControllers;
@property (readonly, nonatomic) BrowserWindowController *browserWindowController; // ivar: _browserWindowController
@property (readonly, nonatomic) NSInteger currentKeyboardModifierFlags; // ivar: _currentKeyboardModifierFlags
@property (readonly, nonatomic) UIScene *currentScene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) WBTabGroupManager *ephemeralTabGroupManager;
@property (weak, nonatomic) ForYouRecommendationMediator *existingForYouRecommendationMediator; // ivar: _existingForYouRecommendationMediator
@property (readonly, copy, nonatomic) NSString *focusedTabGroupUUIDString; // ivar: _focusedTabGroupUUIDString
@property (readonly, nonatomic) WBSForYouRecentParsecResultsManager *forYouRecentParsecResultsManager;
@property (readonly, nonatomic) BOOL hasPointerDevice;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HighlightManager *highlightManager;
@property (readonly, nonatomic) BOOL isCloudHistoryEnabled;
@property (readonly, nonatomic) BOOL isRunningPPT;
@property (readonly, nonatomic) WBSAllowedLegacyTLSHostManager *legacyTLSHostManager;
@property (readonly, nonatomic) NSUInteger maximumTabCount;
@property (nonatomic) BOOL needsFocusedTabGroupUpdate; // ivar: _needsFocusedTabGroupUpdate
@property (readonly, nonatomic) NSObject<WBSPhishingClassifier> *phishingClassifier;
@property (readonly, nonatomic) BOOL prefersSingleWindow;
@property (readonly, nonatomic) BrowserController *primaryBrowserController;
@property (readonly, nonatomic) ReadingListLeadImageCache *readingListLeadImageCache;
@property (readonly, nonatomic) SafariSettingsSyncEngine *settingsSyncEngine; // ivar: _settingsSyncEngine
@property (readonly, nonatomic) AMSSharedStoreReview *sharedStoreReview;
@property (readonly, nonatomic) BOOL shouldRestoreStateForPPT;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SystemNoteTakingController *systemNoteTakingController;
@property (readonly, copy, nonatomic) NSArray *tabEntitiesForAutomation;
@property (readonly, nonatomic) WBTabGroupManager *tabGroupManager;
@property (readonly, nonatomic) NSObject<WBSUnifiedBarAnalyticsProviding> *unifiedBarAnalyticsProvider;
@property (readonly, nonatomic) BOOL usesDefaultBrowsingModeInAllWindows;
@property (readonly, nonatomic) BOOL usesLoweredSearchBar;
@property (readonly, nonatomic) BOOL usesPrivateBrowsingModeInAnyWindow;


+(NSUInteger)systemMemorySize;
+(id)browserControllerUIDelegateProvider:(SEL)arg0 ;
+(id)contextClient;
+(id)sharedApplication;
+(id)sharedTestRunner;
+(void)commandLineTestOption:(int)arg0 arg:(char *)arg1 ;
+(void)initialize;
+(void)postTestNotificationName:(id)arg0 object:(id)arg1 ;
+(void)postTestNotificationName:(id)arg0 object:(id)arg1 userInfo:(id)arg2 ;
+(void)setBrowserControllerUIDelegateProvider:(id)arg0 ;
-(BOOL)_resetHistoryWithCompressedDatabaseAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)_startResizeTestWithName:(id)arg0 ;
-(BOOL)application:(id)arg0 didFinishLaunchingWithOptions:(id)arg1 ;
-(BOOL)canAddNewTabForPrivateBrowsing:(BOOL)arg0 ;
-(BOOL)didStartBookmarksTest;
-(BOOL)isNoteTakingControllerSupportedInPrivateBrowsing:(id)arg0 ;
-(BOOL)isRunningCanvasTest;
-(BOOL)isRunningShowBookmarksTest;
-(BOOL)overrideBrowserStateForTestNamed:(id)arg0 browserController:(id)arg1 ;
-(BOOL)prepareBookmarksTest;
-(BOOL)runMemoryOrIOTestWithType:(NSUInteger)arg0 ;
-(BOOL)runTest:(id)arg0 options:(id)arg1 ;
-(BOOL)sfWebExtensionsController:(id)arg0 canSendMessageFromWebView:(id)arg1 ;
-(BOOL)startCanvasTest:(id)arg0 ;
-(BOOL)startHistoryLoadTest;
-(BOOL)startHistoryTest;
-(BOOL)startSidebarTest;
-(BOOL)startTabBarTest;
-(NSUInteger)_numberOfTabsForPrivateBrowsing:(BOOL)arg0 ;
-(id)_allTabsWithExtensionContentLoadedForBrowserController:(id)arg0 extensionHost:(id)arg1 ;
-(id)_browserControllerForApplicationTesting;
-(id)_browserControllerForExternalNavigation;
-(id)_browserControllerForTabWithUUID:(id)arg0 ;
-(id)_extendLaunchTest;
-(id)_generateMemoryFootprintResults:(id)arg0 ;
-(id)_numberOption:(id)arg0 ;
-(id)_scrollViewForTestNamed:(id)arg0 ;
-(id)_sortedBrowserControllers;
-(id)_syntheticHTMLString;
-(id)_tabCompletionProvider;
-(id)createRecommendationMediatorOrReuseExistingOneIfPossible;
-(id)proxy;
-(id)sceneForTabGroupWithUUIDString:(id)arg0 ;
-(id)searchParametersWithCFEnabled:(BOOL)arg0 ;
-(id)selectedTabInfoForBrowserTabCompletionProvider:(id)arg0 ;
-(id)sfWebExtensionsController:(id)arg0 duplicateTab:(id)arg1 ;
-(id)sfWebExtensionsController:(id)arg0 navigationIntentUUIDForWindow:(id)arg1 ;
-(id)sfWebExtensionsController:(id)arg0 reusableTabWithID:(CGFloat)arg1 ;
-(id)sfWebExtensionsController:(id)arg0 tabForWebView:(id)arg1 ;
-(id)sfWebExtensionsController:(id)arg0 tabWithID:(CGFloat)arg1 ;
-(id)sfWebExtensionsController:(id)arg0 windowForWebView:(id)arg1 extension:(id)arg2 ;
-(id)sfWebExtensionsController:(id)arg0 windowWithID:(CGFloat)arg1 ;
-(id)sfWebExtensionsControllerAllWindows:(id)arg0 ;
-(id)sfWebExtensionsControllerLastFocusedWindow:(id)arg0 ;
-(id)tabCollectionConfiguration;
-(id)tabEntityWithUUID:(id)arg0 ;
-(id)tabInfosForBrowserTabCompletionProvider:(id)arg0 ;
-(void)_addDefaultsObserver;
-(void)_appleKeyboardsChanged:(id)arg0 ;
-(void)_applicationDidBecomeActive:(id)arg0 ;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_applicationWillResignActive:(id)arg0 ;
-(void)_clearInvalidCertificateBypassesOlderThanOneWeek;
-(void)_connectToCyclerIfNecessary;
-(void)_didEnableCustomizationSync;
-(void)_doSearchTestOnCVC:(id)arg0 WithTestStrings:(id)arg1 andDispatchGroup:(id)arg2 ;
-(void)_downloadDidStartNotification:(id)arg0 ;
-(void)_downloadDidStopNotification:(id)arg0 ;
-(void)_export30DaysWorthOfHistoryAfterUpgrade;
-(void)_getBookmarksDataClassEnabledWithCompletionHandler:(id)arg0 ;
-(void)_handleHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(void)_historyHostnamesWereRemoved:(id)arg0 ;
-(void)_historyWasCleared:(id)arg0 ;
-(void)_loadAlternateHTMLString:(id)arg0 completionHandler:(id)arg1 ;
-(void)_loadLargeForm:(id)arg0 ;
-(void)_loadTabsForTesting:(NSUInteger)arg0 presentTabView:(BOOL)arg1 completion:(id)arg2 ;
-(void)_managedProfileConfigurationDidUpdate;
-(void)_observeNotificationOnce:(id)arg0 handler:(id)arg1 ;
-(void)_performBookmarksDatabaseTasksInBackground;
-(void)_pollCanvasTest:(id)arg0 ;
-(void)_populateInMemoryBookmarksDBForTestNamed:(id)arg0 ;
-(void)_preparePageLoadTestControllerParameters;
-(void)_prepareTabViewBringUpTest;
-(void)_prepareTabViewCloseTest;
-(void)_prepareTabViewOpenTest;
-(void)_prepareTabViewRotationTest;
-(void)_prepareTabViewScrollTest;
-(void)_prepareTabViewSelectTest;
-(void)_prewarmAutomationControllerIfEnabled;
-(void)_pruneExpiredScenes;
-(void)_readDefaults;
-(void)_readFocusConfigurationKeys;
-(void)_reloadSearchEngines;
-(void)_reportBookmarksDatabaseHealth;
-(void)_reportLaunchAnalyticsSoon;
-(void)_resetCloudHistoryAccountIfNeeded;
-(void)_runFormTypingTextWithSetupScript:(id)arg0 ;
-(void)_runSidebarTest;
-(void)_runTabBarSwitchTabTest;
-(void)_runTabOverviewOpenNewTabTest;
-(void)_runTabOverviewPresentingAndDismissalTest;
-(void)_runTabOverviewScrollPerfTest;
-(void)_saveBrowserState;
-(void)_scrollContentWithTestName:(id)arg0 scrollingBounds:(struct CGRect )arg1 amplitude:(CGFloat)arg2 completionHandler:(id)arg3 ;
-(void)_showSearchEngineAlertIfNeeded;
-(void)_suspendOrResumeWallpaperAnimationIfNeeded;
-(void)_switchToBookmarksCollectionForTestNamed:(id)arg0 ;
-(void)_tabGroupFocusConfigurationChanged;
-(void)_typeTextInForm:(id)arg0 completionHandler:(id)arg1 ;
-(void)_updateCloudFeatureAvailability;
-(void)_updateKeyboardCorrectionLearningAllowed;
-(void)_webBookmarksDidReload;
-(void)application:(id)arg0 didDiscardSceneSessions:(id)arg1 ;
-(void)application:(id)arg0 userDidAcceptCloudKitShareWithMetadata:(id)arg1 ;
-(void)applicationWillSuspend;
-(void)applicationWillTerminate;
-(void)auditTabCount;
-(void)buildMenuWithBuilder:(id)arg0 ;
-(void)checkExtendedLaunchPageLoad:(id)arg0 forTabDocument:(id)arg1 ;
-(void)clearCachedTabCompletionData;
-(void)databaseLockAcquisitor:(id)arg0 acquiredLock:(BOOL)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)dispatchNavigationIntent:(id)arg0 ;
-(void)downloadDidFail:(id)arg0 ;
-(void)downloadDidFinish:(id)arg0 ;
-(void)downloadDidReceiveResponse:(id)arg0 ;
-(void)downloadDidStart:(id)arg0 ;
-(void)downloadShouldContinueAfterReceivingResponse:(id)arg0 decisionHandler:(id)arg1 ;
-(void)extensionBaseURIMapChangedForExtensionsController:(id)arg0 ;
-(void)extensionsController:(id)arg0 closeOpenExtensionTabsWithBaseURI:(id)arg1 ;
-(void)failedPurpleTestWithError:(id)arg0 ;
-(void)finishedBookmarksTest;
-(void)finishedCanvasTestWithURL:(id)arg0 forTabDocument:(id)arg1 ;
-(void)finishedPurpleTest:(id)arg0 ;
-(void)handleKeyUIEvent:(id)arg0 ;
-(void)handleNavigationIntent:(id)arg0 completion:(id)arg1 ;
-(void)loadBlankPageforKeyboardTests;
-(void)loadTabsForTesting:(NSUInteger)arg0 presentTabView:(BOOL)arg1 ;
-(void)loadTabsForTesting:(NSUInteger)arg0 presentTabView:(BOOL)arg1 completion:(id)arg2 ;
-(void)mousePointerDevicesDidConnect:(id)arg0 ;
-(void)mousePointerDevicesDidDisconnect:(id)arg0 ;
-(void)noteTakingController:(id)arg0 addHighlightForUserActivity:(id)arg1 completion:(id)arg2 ;
-(void)notifyAddedLinkPreviewMetadata:(id)arg0 toUserActivity:(id)arg1 webView:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pageLoadTestRunnerFinished:(id)arg0 ;
-(void)prepareTabViewBringUpTest;
-(void)prepareTabViewCloseTest;
-(void)prepareTabViewOpenTest;
-(void)prepareTabViewRotationTest;
-(void)prepareTabViewScrollTest;
-(void)prepareTabViewSelectTest;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)runBookmarksViewTest;
-(void)runGeneratePasswordTest;
-(void)runLargeFormFocusTest;
-(void)runLargeFormTypingTest;
-(void)runTabOverviewTest;
-(void)runTabSnapshotCacheStressTest;
-(void)saveChangesToCloudHistoryStore;
-(void)sceneForTabWithUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)sfWebExtensionsController:(id)arg0 captureVisibleTab:(id)arg1 format:(id)arg2 quality:(CGFloat)arg3 completionHandler:(id)arg4 ;
-(void)sfWebExtensionsController:(id)arg0 createNewTabInWindow:(id)arg1 tabIndex:(id)arg2 url:(id)arg3 makeActive:(BOOL)arg4 completionHandler:(id)arg5 ;
-(void)sfWebExtensionsController:(id)arg0 relateParentTab:(id)arg1 toTab:(id)arg2 ;
-(void)sfWebExtensionsController:(id)arg0 showPopupForExtension:(id)arg1 inWindow:(id)arg2 completionHandler:(id)arg3 ;
-(void)sfWebExtensionsControllerCompileContentBlocker:(id)arg0 identifier:(id)arg1 rules:(id)arg2 completionHandler:(id)arg3 ;
-(void)sfWebExtensionsControllerContentBlockerListDidChange:(id)arg0 ;
-(void)sfWebExtensionsControllerDidChangeExtensionForPermissionBanner:(id)arg0 ;
-(void)startBookmarksTest;
-(void)startCommandLineTest;
-(void)startKeyboardBringupTest;
-(void)startKeyboardRotationTest;
-(void)startKeyboardSplitAndMergeTest;
-(void)startSearchPerformanceDetailedTestWithCF:(BOOL)arg0 ;
-(void)startSearchPerformanceTest;
-(void)startSearchPerformanceTestWithTestStrings:(id)arg0 ;
-(void)startSearchPerformanceTestWithTestStrings:(id)arg0 perQuery:(BOOL)arg1 withCF:(BOOL)arg2 ;
-(void)startSearchPerformanceUnifiedFieldKeyTimeTest;
-(void)startTabViewBringUpTest;
-(void)startTabViewCloseTest;
-(void)startTabViewOpenTest;
-(void)startTabViewRotationTest;
-(void)startTabViewScrollTest;
-(void)startTabViewSelectTest;
-(void)startedPurpleTest;
-(void)tabEntitiesMatchingQuery:(id)arg0 completionHandler:(id)arg1 ;
-(void)tabSnapshotCacheStressTestRunnerDidFinish:(id)arg0 ;
-(void)updateTabCount;
-(void)userDefaultsDidChange:(id)arg0 ;


@end


#endif