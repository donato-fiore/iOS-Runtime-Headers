// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBICONCONTROLLER_H
#define SBICONCONTROLLER_H

@class UIViewController, NSSet, BBObserver, NSMutableSet, NSIndexPath, BSEventQueue, NSMutableArray, NSMapTable, SBHIconImageCache, NSMutableDictionary, SBHLibraryCategoryMapProvider, SBHIconEditingSettings, SBHWidgetSettings, UILongPressGestureRecognizer, UITapGestureRecognizer, NSNumber, UIView, NSDate, NSHashTable, ATXAppDirectoryClient, UIWindow, SBFolderController, NSString, NSTimer, DNDModeConfigurationService, DNDStateService, SBIconDragManager, SBHIconManager, _UILegibilitySettings, SBHLibraryCategoryMap, SBHLibraryViewController, PTSingleTestRecipe, SBRootFolder, SBRootFolderController, SBHRootFolderSettings, PTDoubleTestRecipe, NSArray, WGWidgetGroupViewController;
@protocol BBObserverDelegate, MCProfileConnectionObserver, SBApplicationRestrictionObserver, UIGestureRecognizerDelegate, SBSearchGestureObserver, FBSDisplayLayoutPublisherObserving, SBRootFolderPageStateObserver, SBAlertItemsControllerObserver, SBAssistantObserver, SBHIconManagerDelegate, SBRootFolderControllerAccessoryViewControllerDelegate, SBHomeScreenSpotlightDismissalDelegate, SBTodayViewControllerDelegate, SBFloatingDockControllerDelegate, SPUIRemoteSearchViewDelegate, PTSettingsKeyObserver, WGWidgetGroupViewControllerDelegate, SBHSidebarProviderDelegate, SBLayoutStateTransitionObserver, SPUISearchBarDelegate, SBProactiveHomeScreenSuggestionProviderObserver, SBFOverlayObserving, SBProactiveHomeScreenUsageObserverDelegate, SBHLibraryViewControllerObserver, PTSettingsKeyObserver, SBHomeScreenOverlayControllerDelegate, APUIAppPredictionViewControllerDelegate, SBBarSwipeAffordanceObserver, SBBarSwipeAffordanceDelegate, DNDStateUpdateListener, DNDModeConfigurationServiceListener, SBIconModelApplicationDataSource, SBHomeScreenIconTransitionAnimatorDelegate, SBIconAnimationContaining, BSInvalidatable, OS_dispatch_queue, SBRootFolderPageTransition;


#import "SBIconModel.h"
#import "SBApplicationController.h"
#import "SBApplicationPlaceholderController.h"
#import "SBUIController.h"
#import "SBMainDisplayPolicyAggregator.h"
#import "SBAlertItemsController.h"
#import "SBAssistantController.h"
#import "SBWorkspaceTransitionRequest.h"
#import "SBFolderStatsQueryableMetric.h"
#import "SBFloatingDockBehaviorAssertion.h"
#import "SBAppStatusBarContentAssertion.h"
#import "SBSpotlightTransientOverlayInteractiveGestureTransaction.h"
#import "SBPowerLogMetricsAggregator.h"
#import "SBIconVisibilityService.h"
#import "SBIconContentView.h"
#import "SBTodayViewController.h"
#import "SBFloatingDockController.h"
#import "SBHomeScreenOverlayController.h"
#import "SBBarSwipeAffordanceViewController.h"
#import "SBProactiveHomeScreenSuggestionProvider.h"
#import "SBProactiveHomeScreenUsageObserver.h"
#import "SBHomeScreenSpotlightViewController.h"
#import "SBWidgetMetricsServer.h"

@interface SBIconController : UIViewController <BBObserverDelegate, MCProfileConnectionObserver, SBApplicationRestrictionObserver, UIGestureRecognizerDelegate, SBSearchGestureObserver, FBSDisplayLayoutPublisherObserving, SBRootFolderPageStateObserver, SBAlertItemsControllerObserver, SBAssistantObserver, SBHIconManagerDelegate, SBRootFolderControllerAccessoryViewControllerDelegate, SBHomeScreenSpotlightDismissalDelegate, SBTodayViewControllerDelegate, SBFloatingDockControllerDelegate, SPUIRemoteSearchViewDelegate, PTSettingsKeyObserver, WGWidgetGroupViewControllerDelegate, SBHSidebarProviderDelegate, SBLayoutStateTransitionObserver, SPUISearchBarDelegate, SBProactiveHomeScreenSuggestionProviderObserver, SBFOverlayObserving, SBProactiveHomeScreenUsageObserverDelegate, SBHLibraryViewControllerObserver, PTSettingsKeyObserver, SBHomeScreenOverlayControllerDelegate, APUIAppPredictionViewControllerDelegate, SBBarSwipeAffordanceObserver, SBBarSwipeAffordanceDelegate, DNDStateUpdateListener, DNDModeConfigurationServiceListener, SBIconModelApplicationDataSource, SBHomeScreenIconTransitionAnimatorDelegate, SBIconAnimationContaining>

 {
    NSSet *_visibleTags;
    NSSet *_hiddenTags;
    SBIconModel *_iconModel;
    BBObserver *_bbObserver;
    NSMutableSet *_displayIDsWithBadgingEnabled;
    SBApplicationController *_override_applicationController;
    SBApplicationPlaceholderController *_override_applicationPlaceholderController;
    SBUIController *_override_userInterfaceController;
    SBMainDisplayPolicyAggregator *_override_policyAggregator;
    SBAlertItemsController *_override_alertItemsController;
    SBAssistantController *_override_assistantController;
    BOOL _rotating;
    BOOL _allowsUninstall;
    BOOL _keyboardIsRotating;
    BOOL _isAnimatingSignficantly;
    BOOL _sendITunesNotification;
    BOOL _showingSearch;
    BOOL _performedInitialLayout;
    NSIndexPath *_indexPathToResetTo;
    SBWorkspaceTransitionRequest *_currentTransitionRequest;
    BSEventQueue *_transitionEventQueue;
    SBFolderStatsQueryableMetric *_queryableFolderMetric;
    NSMutableArray *_iconTouchesFinishedBlocks;
    NSMapTable *_folderControllerDeferRotationForIconScrollingAssertions;
    NSMapTable *_activeInterfaceOrientationChangeDeferralAssertionsByReason;
    NSMapTable *_deviceOrientationUpdateDeferralAssertionsByReason;
    SBFloatingDockBehaviorAssertion *_homeScreenOverlayFloatingDockBehaviorAssertion;
    SBFloatingDockBehaviorAssertion *_addWidgetSheetFloatingDockBehaviorAssertion;
    SBFloatingDockBehaviorAssertion *_widgetConfigurationFloatingDockBehaviorAssertion;
    SBAppStatusBarContentAssertion *_statusBarContentAssertionForFakeStatusBar;
    SBHIconImageCache *_appSwitcherHeaderIconImageCache;
    SBHIconImageCache *_tableUIIconImageCache;
    SBHIconImageCache *_notificationIconImageCache;
    NSMutableSet *_delayedStyleWallpaperEffectViews;
    NSMapTable *_suspendWallpaperAnimationForFolderAssertions;
    NSMutableDictionary *_temporaryWidgetIntents;
    SBHLibraryCategoryMapProvider *_categoryMapProvider;
    SBHIconEditingSettings *_iconEditingSettings;
    SBHWidgetSettings *_widgetSettings;
    UILongPressGestureRecognizer *_longPressToEditGestureRecognizer;
    UITapGestureRecognizer *_tapToEndEditingGestureRecognizer;
    SBSpotlightTransientOverlayInteractiveGestureTransaction *_spotlightInteractiveGestureTransaction;
    NSMutableDictionary *_filesWidgetExtensionProviders;
    NSNumber *_homeScreenOverlayInitialPresentationProgress;
    UIView *_screenSnapshotForIconViews;
    NSMutableArray *_outstandingSnapshotProviders;
    id<BSInvalidatable> *_appLibraryLayoutAssertion;
    id<BSInvalidatable> *_podDisplayLayoutAssertion;
    id<BSInvalidatable> *_folderDisplayLayoutAssertion;
    id<BSInvalidatable> *_widgetEditingLayoutAssertion;
    SBPowerLogMetricsAggregator *_powerLogAggregator;
    id<BSInvalidatable> *_overlayUseSnapshotAsBackgroundViewAssertion;
    NSDate *_iconDragSessionBeginDate;
    NSHashTable *_iconsOccludedAssertions;
    SBIconVisibilityService *_iconVisibilityService;
    ATXAppDirectoryClient *_loggingClient;
    id<BSInvalidatable> *_stateCaptureHandlerForKeyDisplayIDsWithBadgingEnabled;
    id<BSInvalidatable> *_stateCaptureHandleForHomeScreenDefaults;
    id<BSInvalidatable> *_stateCaptureHandleForInterestingAppIconLocations;
    id<BSInvalidatable> *_stateCaptureHandleForRestrictions;
}


@property (nonatomic, setter=_setIgnoreMutatingIconListsOnApplicationInstall:) BOOL _ignoreMutatingIconListsOnApplicationInstall; // ivar: __ignoreMutatingIconListsOnApplicationInstall
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accountStoreQueue; // ivar: _accountStoreQueue
@property (nonatomic) BOOL activeFocusModeHidesApplicationBadges; // ivar: _activeFocusModeHidesApplicationBadges
@property (readonly, nonatomic) SBAlertItemsController *alertItemsController;
@property (readonly, nonatomic) NSUInteger allowedInterfaceOrientations;
@property (readonly, nonatomic) UIWindow *animationWindow;
@property (readonly, nonatomic) NSSet *appIconForceTouchWindows; // ivar: _appIconForceTouchWindows
@property (readonly, nonatomic, getter=isAppLibrarySupported) BOOL appLibrarySupported;
@property (readonly, nonatomic) SBHIconImageCache *appSwitcherHeaderIconImageCache;
@property (readonly, nonatomic) SBHIconImageCache *appSwitcherUnmaskedIconImageCache;
@property (readonly, nonatomic) SBApplicationController *applicationController;
@property (readonly, nonatomic) SBApplicationPlaceholderController *applicationPlaceholderController;
@property (readonly, nonatomic) BOOL areAnyIconViewContextMenusShowing;
@property (readonly, nonatomic) SBAssistantController *assistantController;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) SBIconContentView *contentView;
@property (retain, nonatomic) SBTodayViewController *coverSheetTodayViewController; // ivar: _coverSheetTodayViewController
@property (readonly, nonatomic) NSObject<SBIconAnimationContaining> *currentAnimationContainer;
@property (readonly, nonatomic) CGFloat currentDockHeight;
@property (readonly, nonatomic, getter=_currentFolderController) SBFolderController *currentFolderController;
@property (readonly, nonatomic) NSInteger currentIconListIndex; // ivar: _currentIconListIndex
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSTimer *delayedLaunchRequestTimer; // ivar: _delayedLaunchRequestTimer
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dismissingMenuForFolderPresentation; // ivar: _dismissingMenuForFolderPresentation
@property (retain, nonatomic) NSObject<BSInvalidatable> *displayLayoutTransition; // ivar: _displayLayoutTransition
@property (retain, nonatomic) DNDModeConfigurationService *dndModeConfigurationService; // ivar: _dndModeConfigurationService
@property (retain, nonatomic) DNDStateService *dndStateService; // ivar: _dndStateService
@property (readonly, nonatomic) UIView *fallbackIconContainerView;
@property (readonly, nonatomic) SBFloatingDockController *floatingDockController; // ivar: _floatingDockController
@property (nonatomic) BOOL hasRestrictedEnforcedLayout; // ivar: _hasRestrictedEnforcedLayout
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBHomeScreenOverlayController *homeScreenOverlayController; // ivar: _homeScreenOverlayController
@property (retain, nonatomic) SBTodayViewController *homeScreenTodayViewController; // ivar: _homeScreenTodayViewController
@property (readonly, nonatomic) SBIconDragManager *iconDragManager;
@property (readonly, nonatomic) SBHIconManager *iconManager; // ivar: _iconManager
@property (nonatomic) NSUInteger iconOcclusionReasons; // ivar: _iconOcclusionReasons
@property (retain, nonatomic) NSObject<SBRootFolderPageTransition> *interactivePullToTodaySearchTransition; // ivar: _interactivePullToTodaySearchTransition
@property (readonly, nonatomic) BOOL isAnySearchVisibleOrTransitioning;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (retain, nonatomic) SBBarSwipeAffordanceViewController *libraryAffordanceViewController; // ivar: _libraryAffordanceViewController
@property (readonly, nonatomic) SBHLibraryCategoryMap *libraryCategoryMap;
@property (retain, nonatomic) SBHLibraryViewController *libraryViewController; // ivar: _libraryViewController
@property (retain, nonatomic) SBIconModel *model;
@property (readonly, nonatomic) SBHIconImageCache *notificationIconImageCache;
@property (readonly, nonatomic, getter=_openFolderController) SBFolderController *openFolderController;
@property (readonly, nonatomic) PTSingleTestRecipe *organizeInFoldersTestRecipe; // ivar: _organizeInFoldersTestRecipe
@property (readonly, nonatomic) SBMainDisplayPolicyAggregator *policyAggregator;
@property (retain, nonatomic) NSTimer *popoverDelayTimer; // ivar: _popoverDelayTimer
@property (retain, nonatomic) SBProactiveHomeScreenSuggestionProvider *proactiveSuggestionProvider; // ivar: _proactiveSuggestionProvider
@property (retain, nonatomic) SBProactiveHomeScreenUsageObserver *proactiveUsageObserver; // ivar: _proactiveUsageObserver
@property (readonly, nonatomic) PTSingleTestRecipe *relayoutTestRecipe; // ivar: _relayoutTestRecipe
@property (readonly, nonatomic) SBRootFolder *rootFolder;
@property (readonly, nonatomic, getter=_rootFolderController) SBRootFolderController *rootFolderController;
@property (readonly, nonatomic) SBHRootFolderSettings *rootFolderSettings; // ivar: _rootFolderSettings
@property (readonly, nonatomic) PTSingleTestRecipe *runDownloadingIconTestRecipe; // ivar: _runDownloadingIconTestRecipe
@property (readonly, nonatomic) PTSingleTestRecipe *runRemoveAndRestoreIconTestRecipe; // ivar: _runRemoveAndRestoreIconTestRecipe
@property (readonly, nonatomic) BOOL shouldAddNewIconsToRootFolder;
@property (readonly, nonatomic, getter=isShowingHomeScreenOverlay) BOOL showingHomeScreenOverlay; // ivar: _showingHomeScreenOverlay
@property (readonly, nonatomic, getter=isShowingSidebar) BOOL showingSidebar;
@property (readonly, nonatomic) PTDoubleTestRecipe *shuffleStackTestRecipe; // ivar: _shuffleStackTestRecipe
@property (retain, nonatomic) NSObject<BSInvalidatable> *sidebarAppearanceStateOverrideAssertion; // ivar: _sidebarAppearanceStateOverrideAssertion
@property (readonly, nonatomic, getter=isSidebarPinned) BOOL sidebarPinned;
@property (retain, nonatomic) NSObject<BSInvalidatable> *significantAnimationColorSamplingAssertion; // ivar: _significantAnimationColorSamplingAssertion
@property (retain, nonatomic) SBHomeScreenSpotlightViewController *spotlightViewController; // ivar: _spotlightViewController
@property (retain, nonatomic) SBAppStatusBarContentAssertion *statusBarContentAssertion; // ivar: _statusBarContentAssertion
@property (readonly, nonatomic) NSArray *suggestedOnboardingStack; // ivar: _suggestedOnboardingStack
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<BSInvalidatable> *suspendWallpaperAnimationForOverlayViewAssertion; // ivar: _suspendWallpaperAnimationForOverlayViewAssertion
@property (retain, nonatomic) NSObject<BSInvalidatable> *suspendWallpaperAnimationForSpotlightAssertion; // ivar: _suspendWallpaperAnimationForSpotlightAssertion
@property (readonly, nonatomic) SBHIconImageCache *tableUIIconImageCache;
@property (readonly, nonatomic, getter=isTodayOverlaySpotlightVisible) BOOL todayOverlaySpotlightVisible;
@property (retain, nonatomic) SBTodayViewController *todayViewController; // ivar: _todayViewController
@property (readonly, nonatomic) PTSingleTestRecipe *toggleSearchTestRecipe; // ivar: _toggleSearchTestRecipe
@property (nonatomic, getter=isUninstallingSystemAppsRestricted) BOOL uninstallingSystemAppsRestricted; // ivar: _uninstallingSystemAppsRestricted
@property (nonatomic) NSInteger userIconStateFileStatus; // ivar: _userIconStateFileStatus
@property (readonly, nonatomic) SBUIController *userInterfaceController;
@property (readonly, copy, nonatomic) NSSet *visibleIconStateDisplayIdentifiers;
@property (retain, nonatomic) SBBarSwipeAffordanceViewController *widgetAddSheetAffordanceViewController; // ivar: _widgetAddSheetAffordanceViewController
@property (readonly, nonatomic) WGWidgetGroupViewController *widgetGroupViewController; // ivar: _widgetGroupViewController
@property (readonly, nonatomic) SBWidgetMetricsServer *widgetMetricsServer; // ivar: _widgetMetricsServer


+(id)sharedInstance;
+(id)sharedInstanceIfExists;
+(void)_getApplicationDataStore:(*id)arg0 configurationKey:(*id)arg1 forDataSource:(id)arg2 ;
-(BOOL)_badgesAreEnabledForSectionInfo:(id)arg0 ;
-(BOOL)_dragSessionContainsAppClipWebClipIcon:(id)arg0 ;
-(BOOL)_enableWidgetSuggestionsForIconsInModel:(id)arg0 withRootFolder:(id)arg1 ;
-(BOOL)_isHostedByCoverSheet;
-(BOOL)_isWidgetWithContainerBundleIdentifierValid:(id)arg0 ;
-(BOOL)_ppt_pushHomeScreenStateWithError:(*id)arg0 ;
-(BOOL)_shouldHideAppIconForceTouchInfoForApplication:(id)arg0 ;
-(BOOL)_shouldTodayViewController:(id)arg0 receiveTouch:(id)arg1 ;
-(BOOL)_tryToPrepareNonDynamicDefaultTodayLayout;
-(BOOL)allowsBadgingForIcon:(id)arg0 ;
-(BOOL)allowsHomeScreenOverlay;
-(BOOL)allowsUninstall;
-(BOOL)appPredictionViewController:(id)arg0 launchAppFromIcon:(id)arg1 ;
-(BOOL)appPredictionViewController:(id)arg0 shouldDisplayBadgeWithBundleIdentifier:(id)arg1 ;
-(BOOL)areAnyIconViewContextMenusAnimating;
-(BOOL)areHomeScreenIconsOccluded;
-(BOOL)canAppPredictionsWidgetAlignWithGrid;
-(BOOL)dismissLibraryAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(BOOL)forbidApplicationBundleIdentifierFromLibrary:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)iconManager:(id)arg0 allowsBadgingForIcon:(id)arg1 ;
-(BOOL)iconManager:(id)arg0 allowsBadgingForIconLocation:(id)arg1 ;
-(BOOL)iconManager:(id)arg0 canAcceptDropInSession:(id)arg1 inIconListView:(id)arg2 ;
-(BOOL)iconManager:(id)arg0 canAddDragItemsToSession:(id)arg1 fromIconView:(id)arg2 ;
-(BOOL)iconManager:(id)arg0 canAddIcon:(id)arg1 toIconList:(id)arg2 inFolder:(id)arg3 ;
-(BOOL)iconManager:(id)arg0 canAddIconToIgnoredList:(id)arg1 ;
-(BOOL)iconManager:(id)arg0 canBeginDragForIconView:(id)arg1 ;
-(BOOL)iconManager:(id)arg0 canCustomElementAlignWithGrid:(id)arg1 ;
-(BOOL)iconManager:(id)arg0 folderController:(id)arg1 canChangeCurrentPageIndexToIndex:(NSInteger)arg2 ;
-(BOOL)iconManager:(id)arg0 iconViewDisplaysCloseBox:(id)arg1 ;
-(BOOL)iconManager:(id)arg0 iconViewDisplaysLabel:(id)arg1 ;
-(BOOL)iconManager:(id)arg0 isCustomElementValid:(id)arg1 ;
-(BOOL)iconManager:(id)arg0 isIconVisibleForBundleIdentifier:(id)arg1 ;
-(BOOL)iconManager:(id)arg0 isPartialEditingAllowedForIconLocation:(id)arg1 ;
-(BOOL)iconManager:(id)arg0 isWidgetValid:(id)arg1 ;
-(BOOL)iconManager:(id)arg0 shouldActivateApplicationShortcutItem:(id)arg1 atIndex:(NSUInteger)arg2 forIconView:(id)arg3 ;
-(BOOL)iconManager:(id)arg0 shouldCacheRecentViewController:(id)arg1 forIdentifier:(id)arg2 ;
-(BOOL)iconManager:(id)arg0 shouldContinueToUseBackgroundView:(id)arg1 forComponentsOfIconView:(id)arg2 ;
-(BOOL)iconManager:(id)arg0 shouldPlaceIconOnIgnoredList:(id)arg1 ;
-(BOOL)iconManagerCanBeginIconDrags:(id)arg0 ;
-(BOOL)iconManagerCanSaveIconState:(id)arg0 ;
-(BOOL)iconManagerCanUseSeparateWindowForRotation:(id)arg0 ;
-(BOOL)iconManagerShouldShowWidgetIntroductionPopoverForDefaultWidgets:(id)arg0 ;
-(BOOL)importIconState:(id)arg0 ;
-(BOOL)isAppLibraryAllowed;
-(BOOL)isEditingAllowedForIconManager:(id)arg0 ;
-(BOOL)isEditingForHomeScreenOverlayController:(id)arg0 ;
-(BOOL)isEnterpriseMultiUser;
-(BOOL)isFloatingDockVisibleForIconManager:(id)arg0 ;
-(BOOL)isFocusAllowedForIconManager:(id)arg0 ;
-(BOOL)isHideSuggestionSupportedForIconView:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isHideSupportedForIcon:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isIconContentPossiblyVisibleOverApplicationForIconManager:(id)arg0 ;
-(BOOL)isLibraryOverlayPresented;
-(BOOL)isNewsTodayWidgetAvailableForCurrentLocale;
-(BOOL)isOnlyHideSuggestionSupportedForIcon:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isRootFolderContentVisibleForIconManager:(id)arg0 ;
-(BOOL)isTodayOverlayPresented;
-(BOOL)isTodayViewRotating:(id)arg0 ;
-(BOOL)isUninstallOrHideSupportedForIcon:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isUninstallSupportedForIcon:(id)arg0 ;
-(BOOL)isUpgradeRestore;
-(BOOL)listsAllowRotatedLayoutForIconManager:(id)arg0 ;
-(BOOL)presentLibraryAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(BOOL)presentLibraryCategoryPodForCategoryIdentifier:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)resetCategories;
-(BOOL)resetHomeScreenLayout;
-(BOOL)shouldAddDefaultWidgetsToHomeScreen;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldAutorotate;
-(BOOL)shouldUseLiveBlurForBackgroundViewForComponentsOfIconView:(id)arg0 ;
-(BOOL)showsAddWidgetButtonWhileEditingForHomeScreenOverlayController:(id)arg0 ;
-(BOOL)showsDoneButtonWhileEditingForHomeScreenOverlayController:(id)arg0 ;
-(BOOL)unforbidApplicationBundleIdentifierFromLibrary:(id)arg0 ;
-(CGFloat)distanceToTopOfSpotlightIconsForIconManager:(id)arg0 ;
-(CGFloat)iconManager:(id)arg0 additionalDragLiftScaleForIconView:(id)arg1 ;
-(CGFloat)iconManager:(id)arg0 minimumHomeScreenScaleForFolderController:(id)arg1 ;
-(CGFloat)minimumHomeScreenScale;
-(CGFloat)minimumHomeScreenScaleForFloatingDockController:(id)arg0 ;
-(Class)iconManager:(id)arg0 iconClassForApplicationWithBundleIdentifier:(id)arg1 proposedClass:(Class)arg2 ;
-(NSInteger)_effectiveOrientation;
-(NSInteger)iconManager:(id)arg0 closeBoxTypeForIconView:(id)arg1 proposedType:(NSInteger)arg2 ;
-(NSInteger)iconManager:(id)arg0 draggingStartLocationForIconView:(id)arg1 proposedStartLocation:(NSInteger)arg2 ;
-(NSInteger)interfaceOrientationForIconManager:(id)arg0 ;
-(NSInteger)orientation;
-(NSUInteger)_foldersInList:(id)arg0 ;
-(NSUInteger)allowedInterfaceOrientationsForIconManager:(id)arg0 ;
-(NSUInteger)barSwipeAffordanceView:(id)arg0 systemGestureTypeForType:(NSInteger)arg1 ;
-(NSUInteger)bestListLayoutProviderLayoutOptions;
-(NSUInteger)defaultSearchViewPresentationSourceForViewController:(id)arg0 ;
-(NSUInteger)iconManager:(id)arg0 focusEffectTypeForIconView:(id)arg1 ;
-(NSUInteger)iconManager:(id)arg0 supportedMedusaShortcutActionsForIconView:(id)arg1 ;
-(NSUInteger)maximumListCountForFoldersForIconManager:(id)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(NSUInteger)supportedMedusaShortcutActionsForBundleIdentifier:(id)arg0 ;
-(id)_addStateCaptureHandlerForHomeScreenDefaults;
-(id)_addStateCaptureHandlerForInterestingAppIconLocations;
-(id)_addStateCaptureHandlerForKeyDisplayIDsWithBadgingEnabled;
-(id)_addStateCaptureHandlerForRestrictions;
-(id)_aggregateLoggingAppKeyForIcon:(id)arg0 ;
-(id)_configureCategoryMapProviderToUseCategoryMapAtURL:(id)arg0 ;
-(id)_containerViewControllerForPresentingFromTodayViewControllerAllowingCoverSheet:(BOOL)arg0 ;
-(id)_createTestFolder;
-(id)_createTestFolderWithOverrideIconList:(id)arg0 ;
-(id)_createWidgetIconWithDataSource:(id)arg0 gridSize:(NSUInteger)arg1 ;
-(id)_createWidgetIconWithDescriptors:(id)arg0 gridSize:(NSUInteger)arg1 ;
-(id)_createWidgetIconWithKind:(id)arg0 extensionBundleIdentifier:(id)arg1 gridSize:(NSUInteger)arg2 ;
-(id)_newTodayViewControllerWithIconManager:(id)arg0 iconListModel:(id)arg1 rootFolder:(id)arg2 location:(NSInteger)arg3 ;
-(id)_ppt_prepareTransientIconModelStoreWithError:(*id)arg0 ;
-(id)allApplicationPlaceholdersForIconModel:(id)arg0 ;
-(id)allApplicationsForIconModel:(id)arg0 ;
-(id)animator:(id)arg0 animationSettingsForOperation:(NSUInteger)arg1 childViewController:(id)arg2 ;
-(id)appPredictionViewController:(id)arg0 badgeValueForApplicationWithBundleIdentifier:(id)arg1 ;
-(id)appPredictionViewController:(id)arg0 iconForApplicationWithBundleIdentifier:(id)arg1 ;
-(id)backgroundViewForEditingDoneButtonForHomeScreenOverlayController:(id)arg0 ;
-(id)containerViewForPresentingContextMenuForIconView:(id)arg0 ;
-(id)defaultIconStateForIconManager:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)fallbackDefaultFirstPageWidgetsForIconManager:(id)arg0 ;
-(id)firstPageLeafIdentifiersForIconManager:(id)arg0 ;
-(id)folderNameForDisplayID:(id)arg0 ;
-(id)homeScreenOverlayController:(id)arg0 displayLayoutIdentifierForSidebarViewController:(id)arg1 ;
-(id)iconManager:(id)arg0 accessibilityTintColorForIconView:(id)arg1 ;
-(id)iconManager:(id)arg0 accessibilityTintColorForScreenRect:(struct CGRect )arg1 ;
-(id)iconManager:(id)arg0 animator:(id)arg1 animationSettingsForOperation:(NSUInteger)arg2 childViewController:(id)arg3 ;
-(id)iconManager:(id)arg0 applicationShortcutItemsForIconView:(id)arg1 ;
-(id)iconManager:(id)arg0 backgroundViewForComponentsOfIconView:(id)arg1 ;
-(id)iconManager:(id)arg0 backgroundViewForDockForRootFolderController:(id)arg1 ;
-(id)iconManager:(id)arg0 configurationDataForDataSource:(id)arg1 ofIcon:(id)arg2 ;
-(id)iconManager:(id)arg0 containerViewControllerForConfigurationOfIconView:(id)arg1 ;
-(id)iconManager:(id)arg0 containerViewControllerForModalInteractionFromIconView:(id)arg1 ;
-(id)iconManager:(id)arg0 containerViewForPresentingContextMenuForIconView:(id)arg1 ;
-(id)iconManager:(id)arg0 defaultAutomaticFavoriteIconIdentifiersWithMaximumCount:(NSUInteger)arg1 ;
-(id)iconManager:(id)arg0 dragPreviewForIconView:(id)arg1 ;
-(id)iconManager:(id)arg0 fakeStatusBarForFolderController:(id)arg1 ;
-(id)iconManager:(id)arg0 homeScreenContentViewForConfigurationOfIconView:(id)arg1 ;
-(id)iconManager:(id)arg0 homeScreenContentViewForModalInteractionFromIconView:(id)arg1 ;
-(id)iconManager:(id)arg0 launchActionsForIconView:(id)arg1 ;
-(id)iconManager:(id)arg0 launchURLForIconView:(id)arg1 ;
-(id)iconManager:(id)arg0 localizedFolderNameForDefaultDisplayName:(id)arg1 ;
-(id)iconManager:(id)arg0 reasonToDisallowInteractionOnIconView:(id)arg1 ;
-(id)iconManager:(id)arg0 screenSnapshotProviderForComponentsOfIconView:(id)arg1 ;
-(id)iconManager:(id)arg0 statusBarStyleRequestForFolderController:(id)arg1 ;
-(id)iconManager:(id)arg0 viewControllerForCustomIcon:(id)arg1 element:(id)arg2 ;
-(id)iconManager:(id)arg0 wantsToHideStatusBarForFolderController:(id)arg1 animated:(BOOL)arg2 ;
-(id)iconManager:(id)arg0 willAddDefaultFirstPageWidgetsBasedOnPinnedWidgets:(id)arg1 suggestionWidgets:(id)arg2 ;
-(id)iconModel:(id)arg0 applicationWithBundleIdentifier:(id)arg1 ;
-(id)iconPathForIconWithDisplayID:(id)arg0 ;
-(id)initWithApplicationController:(id)arg0 applicationPlaceholderController:(id)arg1 userInterfaceController:(id)arg2 policyAggregator:(id)arg3 alertItemsController:(id)arg4 assistantController:(id)arg5 powerLogAggregator:(id)arg6 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)launchActionsForIconView:(id)arg0 ;
-(id)launchActivationSettingsForIconView:(id)arg0 ;
-(id)launchURLForIconView:(id)arg0 ;
-(id)localizedDefaultFolderNameForIconManager:(id)arg0 ;
-(id)localizedFolderNameForDefaultDisplayName:(id)arg0 ;
-(id)markIconsOccludedForReason:(id)arg0 ;
-(id)preferredFocusEnvironments;
-(id)proactiveHomeScreenUsageObserver:(id)arg0 intentForWidget:(id)arg1 ofIcon:(id)arg2 ;
-(id)proactiveOnboardingDefaultStacks;
-(id)recycledViewsContainerProviderForIconManager:(id)arg0 ;
-(id)rootFolderController:(id)arg0 transitionContextForTransitioningToState:(NSInteger)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)temporaryIntentDataForIconWithIdentifier:(id)arg0 widgetUniqueIdentifier:(id)arg1 ;
-(id)testSetupForIconManagerAddWidgetsToEachPage:(id)arg0 ;
-(id)testSetupForIconManagerWidgetScrollPerformanceTest:(id)arg0 ;
-(id)testSetupForIconManagerWidgetScrollTest:(id)arg0 ;
-(id)testSetupHomeScreenForWidgetScrollPerformanceTest:(id)arg0 ;
-(id)transitionContextToShowSpotlight:(BOOL)arg0 fromTodayView:(BOOL)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 ;
-(id)viewControllerForPresentingViewControllersForIconManager:(id)arg0 ;
-(id)windowForIconDragPreviewsForIconManager:(id)arg0 ;
-(struct CGRect )iconManager:(id)arg0 contentBoundingRectForConfigurationOfIconView:(id)arg1 ;
-(struct CGSize )_suggestedTodayViewSizeForBounds:(struct CGRect )arg0 ;
-(struct CGSize )widgetGroupViewController:(id)arg0 sizeForInterfaceOrientation:(NSInteger)arg1 ;
-(struct UIEdgeInsets )contentOverlayInsetsFromParentIfAvailableForFolderController:(id)arg0 ;
-(struct UIEdgeInsets )iconManager:(id)arg0 contentOverlayInsetsFromParentIfAvailableForFolderController:(id)arg1 ;
-(struct UIEdgeInsets )iconManager:(id)arg0 statusBarEdgeInsetsForFolderController:(id)arg1 ;
-(void)_acquireAssertionsForFolderController:(id)arg0 ;
-(void)_acquireUseSnapshotAsLibraryBackgroundViewAssertionIfNecessary;
-(void)_addSmartStackToTodayList:(id)arg0 completionHandler:(id)arg1 ;
-(void)_backupRestoringDidChange:(id)arg0 ;
-(void)_beginAppearanceTransitionForChildViewControllersToVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_beginDisablingAllOrientationChangesForReason:(id)arg0 ;
-(void)_bookmarkDidUninstall:(id)arg0 ;
-(void)_configureDeweyEachAppHasItsOwnCategory:(NSUInteger)arg0 ;
-(void)_configureDeweyOneCategoryWithAllApps;
-(void)_configureEditingGestureRecognizers;
-(void)_configureLibraryWithCategoryLimit:(NSInteger)arg0 ;
-(void)_controlCenterWillDismiss:(id)arg0 ;
-(void)_controlCenterWillPresent:(id)arg0 ;
-(void)_coverSheetDidPresent:(id)arg0 ;
-(void)_coverSheetWillPresent:(id)arg0 ;
-(void)_dismissPageManagementIfPresented:(id)arg0 ;
-(void)_endAppearanceTransitionForChildViewControllersToVisible:(BOOL)arg0 ;
-(void)_endDisablingAllOrientationChangesForReason:(id)arg0 ;
-(void)_enqueueTransitionName:(id)arg0 withHandler:(id)arg1 ;
-(void)_ensureRootFolderController;
-(void)_evaluateLibraryOverlayAffordanceActivation;
-(void)_failCurrentTestWithMessage:(id)arg0 ;
-(void)_forceTouchControllerWillPresent:(id)arg0 ;
-(void)_handleEditingGesture:(id)arg0 ;
-(void)_iconForceTouchControllerDidDismiss:(id)arg0 ;
-(void)_iconForceTouchControllerWillPresent:(id)arg0 ;
-(void)_iconModelDidLayout:(id)arg0 ;
-(void)_iconVisibilityChanged:(id)arg0 ;
-(void)_installedAppsDidChange:(id)arg0 ;
-(void)_invalidateAssertionsForFolderController:(id)arg0 ;
-(void)_launchFromIconView:(id)arg0 withActions:(id)arg1 ;
-(void)_launchWidgetIcon:(id)arg0 fromLocation:(id)arg1 withContext:(id)arg2 ;
-(void)_lockScreenUIWillLock:(id)arg0 ;
-(void)_mainSwitcherCreated:(id)arg0 ;
-(void)_makeTodayViewControllers;
-(void)_mutateIconListsForInstalledAppsDidChangeWithController:(id)arg0 added:(id)arg1 modified:(id)arg2 removed:(id)arg3 ;
-(void)_obtainSmartStackForWidgetDiscoverabilityWithCompletionHandler:(id)arg0 ;
-(void)_performInitialLayoutWithOrientation:(NSInteger)arg0 ;
-(void)_performWidgetMigrationIfNecessary;
-(void)_performWidgetMigrationIfNecessaryForApplication:(id)arg0 ;
-(void)_ppt_popHomeScreenState;
-(void)_prepareDefaultTodayLayoutIfNecessary;
-(void)_presentPageManagement:(id)arg0 ;
-(void)_primaryAppleAccountDidChange:(id)arg0 ;
-(void)_rebuildTodayViewControllers;
-(void)_relinquishStatusBarContentAssertionAnimated:(BOOL)arg0 ;
-(void)_runAppIconForceTouchTest:(id)arg0 withOptions:(id)arg1 ;
-(void)_runFolderCloseTest;
-(void)_runFolderOpenTest;
-(void)_runFolderTestWithName:(id)arg0 actions:(id)arg1 ;
-(void)_runScrollFolderTest:(NSInteger)arg0 ;
// -(void)_runTest:(id)arg0 afterMovingIconsIntoFolder:(unk)arg1 withFolderOpen:(id)arg2  ;
-(void)_setFolderDisplayLayoutElementActive:(BOOL)arg0 ;
-(void)_setModalAppLibraryDisplayLayoutElementActive:(BOOL)arg0 ;
-(void)_setPodDisplayLayoutElementActive:(BOOL)arg0 ;
-(void)_setUpLibraryViewController;
-(void)_setWidgetEditingDisplayLayoutElementActive:(BOOL)arg0 ;
-(void)_showInfoAlertIfNeeded:(BOOL)arg0 ;
-(void)_showsBadgesInAppLibraryDidChange;
-(void)_startSpotlightInteractiveGestureTransactionForGesture:(id)arg0 ;
-(void)_storeAccountDidChange:(id)arg0 ;
-(void)_teardownDeweyTestConfigurations;
-(void)_tryToPrepareDynamicDefaultTodayLayout;
-(void)_updateEnabledBadgesSetWithSections:(id)arg0 ;
-(void)_updateIconModelStore;
-(void)_updateRootFolderWithActiveFocusMode:(id)arg0 ;
-(void)_updateRootFolderWithDoNotDisturbState:(id)arg0 ;
-(void)_updateStatusBarContentAssertionAnimated:(BOOL)arg0 ;
-(void)_updateUninstallingSystemAppsRestricted;
-(void)_updateVisibleIconsAfterOcclusionChange;
-(void)activateTodayViewWithCompletion:(id)arg0 ;
-(void)addIconOcclusionReason:(NSUInteger)arg0 updateVisibleIcons:(BOOL)arg1 ;
-(void)alertItemsController:(id)arg0 didActivateAlertItem:(id)arg1 ;
-(void)alertItemsController:(id)arg0 didDeactivateAlertItem:(id)arg1 forReason:(int)arg2 ;
-(void)alertItemsController:(id)arg0 willActivateAlertItem:(id)arg1 ;
-(void)applicationRestrictionController:(id)arg0 didUpdateVisibleTags:(id)arg1 hiddenTags:(id)arg2 ;
-(void)assistantWillAppear:(id)arg0 ;
-(void)completeSidebarAnimationsIfNeeded;
-(void)configureLibraryViewController:(id)arg0 withIconManager:(id)arg1 ;
-(void)dealloc;
-(void)dismissAppIconForceTouchControllers:(id)arg0 ;
-(void)dismissHomeScreenOverlay;
-(void)dismissHomeScreenOverlayAnimated:(BOOL)arg0 ;
-(void)dismissHomeScreenOverlayAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)dismissHomeScreenOverlayUsingTransitionCoordinator:(id)arg0 ;
-(void)dismissLibraryOverlay;
-(void)dismissLibraryOverlayAnimated:(BOOL)arg0 ;
-(void)dismissLibraryOverlayForIconManager:(id)arg0 ;
-(void)dismissOverlaysForIconManager:(id)arg0 ;
-(void)dismissSearchView;
-(void)dismissTodayOverlay;
-(void)dismissTodayOverlayAnimated:(BOOL)arg0 ;
-(void)dismissTodayOverlayForIconManager:(id)arg0 ;
-(void)dismissTodayOverlaySpotlightAnimated:(BOOL)arg0 ;
-(void)earlyTerminateAnyContextMenuAnimations;
-(void)folderController:(id)arg0 iconListView:(id)arg1 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg2 ;
-(void)handleHomeButtonTap;
-(void)handleNavigationCommand:(id)arg0 withDirection:(NSInteger)arg1 ;
-(void)handleSpotlightDismissalFromViewController:(id)arg0 ;
-(void)handleSpotlightPresentationFromViewController:(id)arg0 ;
-(void)homeGesturePerformedForBarSwipeAffordanceView:(id)arg0 ;
-(void)homeScreenOverlayController:(id)arg0 setSuppressesEditingStateForListView:(BOOL)arg1 ;
-(void)homeScreenOverlayWantsToEndEditing:(id)arg0 ;
-(void)homeScreenOverlayWantsWidgetEditingViewControllerPresented:(id)arg0 ;
-(void)iconManager:(id)arg0 configureIconView:(id)arg1 forIcon:(id)arg2 ;
-(void)iconManager:(id)arg0 dataSource:(id)arg1 ofIcon:(id)arg2 didUpdateConfigurationData:(id)arg3 ;
-(void)iconManager:(id)arg0 didAddItemsToIconDragWithUniqueIdentifier:(id)arg1 numberOfDraggedItems:(NSUInteger)arg2 ;
-(void)iconManager:(id)arg0 didCloseFolder:(id)arg1 ;
-(void)iconManager:(id)arg0 didCreateRootFolderController:(id)arg1 ;
-(void)iconManager:(id)arg0 didCreateRootViewController:(id)arg1 ;
-(void)iconManager:(id)arg0 didDismissPageManagementWithLayoutManager:(id)arg1 context:(id)arg2 ;
-(void)iconManager:(id)arg0 didEndIconDragWithUniqueIdentifier:(id)arg1 numberOfDraggedItems:(NSUInteger)arg2 ;
-(void)iconManager:(id)arg0 didOpenFolder:(id)arg1 ;
-(void)iconManager:(id)arg0 didReceiveTapOnLaunchDisabledIconView:(id)arg1 ;
-(void)iconManager:(id)arg0 didRemoveConfigurableDataSource:(id)arg1 ofIcon:(id)arg2 ;
-(void)iconManager:(id)arg0 didSpringLoadIconView:(id)arg1 ;
-(void)iconManager:(id)arg0 folderControllerDidEndScrolling:(id)arg1 ;
-(void)iconManager:(id)arg0 folderControllerWillBeginScrolling:(id)arg1 ;
-(void)iconManager:(id)arg0 iconDropSessionDidEnter:(id)arg1 ;
-(void)iconManager:(id)arg0 iconView:(id)arg1 configurationDidEndWithInteraction:(id)arg2 ;
-(void)iconManager:(id)arg0 iconView:(id)arg1 configurationWillBeginWithInteraction:(id)arg2 ;
-(void)iconManager:(id)arg0 iconView:(id)arg1 willUseContextMenuStyle:(id)arg2 ;
-(void)iconManager:(id)arg0 launchIcon:(id)arg1 location:(id)arg2 animated:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)iconManager:(id)arg0 launchIconForIconView:(id)arg1 withActions:(id)arg2 ;
-(void)iconManager:(id)arg0 nestingViewController:(id)arg1 willPerformOperation:(NSInteger)arg2 onViewController:(id)arg3 withTransitionCoordinator:(id)arg4 ;
-(void)iconManager:(id)arg0 possibleUserIconTapBegan:(id)arg1 ;
-(void)iconManager:(id)arg0 possibleUserIconTapBeganAfterInformingIcon:(id)arg1 ;
-(void)iconManager:(id)arg0 prepareAddSheetViewController:(id)arg1 ;
-(void)iconManager:(id)arg0 prepareForPageHidingEducationWithCompletionHandler:(id)arg1 ;
-(void)iconManager:(id)arg0 rootFolderController:(id)arg1 didChangeEffectiveSidebarVisibilityProgress:(CGFloat)arg2 ;
-(void)iconManager:(id)arg0 rootFolderController:(id)arg1 didChangeSidebarVisibilityProgress:(CGFloat)arg2 ;
-(void)iconManager:(id)arg0 rootFolderController:(id)arg1 didEndOverscrollOnFirstPageWithVelocity:(CGFloat)arg2 translation:(CGFloat)arg3 ;
-(void)iconManager:(id)arg0 rootFolderController:(id)arg1 didEndOverscrollOnLastPageWithVelocity:(CGFloat)arg2 translation:(CGFloat)arg3 ;
-(void)iconManager:(id)arg0 rootFolderController:(id)arg1 didOverscrollOnFirstPageByAmount:(CGFloat)arg2 ;
-(void)iconManager:(id)arg0 rootFolderController:(id)arg1 didOverscrollOnLastPageByAmount:(CGFloat)arg2 ;
-(void)iconManager:(id)arg0 rootFolderController:(id)arg1 willUseTransitionContext:(id)arg2 toTransitionToState:(NSInteger)arg3 ;
-(void)iconManager:(id)arg0 statusBarInsetsDidChange:(struct UIEdgeInsets )arg1 ;
-(void)iconManager:(id)arg0 touchesEndedForIconView:(id)arg1 ;
-(void)iconManager:(id)arg0 wantsLaunchForWidgetURL:(id)arg1 ;
-(void)iconManager:(id)arg0 wantsUninstallForIcon:(id)arg1 location:(id)arg2 ;
-(void)iconManager:(id)arg0 willBeginIconDragWithUniqueIdentifier:(id)arg1 numberOfDraggedItems:(NSUInteger)arg2 ;
-(void)iconManager:(id)arg0 willCloseFolder:(id)arg1 ;
-(void)iconManager:(id)arg0 willCloseFolderController:(id)arg1 ;
-(void)iconManager:(id)arg0 willDestroyRootFolderController:(id)arg1 ;
-(void)iconManager:(id)arg0 willDestroyRootViewController:(id)arg1 ;
-(void)iconManager:(id)arg0 willDismissPageManagementUsingAnimator:(id)arg1 context:(id)arg2 ;
-(void)iconManager:(id)arg0 willOpenFolder:(id)arg1 ;
-(void)iconManager:(id)arg0 willOpenFolderController:(id)arg1 ;
-(void)iconManager:(id)arg0 willPrepareIconViewForLaunch:(id)arg1 ;
-(void)iconManager:(id)arg0 willPresentPageManagementWithLayoutManager:(id)arg1 animator:(id)arg2 context:(id)arg3 ;
-(void)iconManager:(id)arg0 willRemoveFakeStatusBar:(id)arg1 forFolderController:(id)arg2 ;
-(void)iconManager:(id)arg0 willRemoveViewControllerForIdentifier:(id)arg1 ;
-(void)iconManager:(id)arg0 willUseIconImageCache:(id)arg1 ;
-(void)iconManager:(id)arg0 willUseRootFolderControllerConfiguration:(id)arg1 ;
-(void)iconManagerDidDismissWidgetEditing:(id)arg0 ;
-(void)iconManagerDidFinishInstallForIcon:(id)arg0 ;
-(void)iconManagerDidNoteIconStateChangedExternally:(id)arg0 ;
-(void)iconManagerDidSaveIconState:(id)arg0 ;
-(void)iconManagerEditingDidChange:(id)arg0 ;
-(void)iconManagerFolderAnimatingDidChange:(id)arg0 ;
-(void)iconManagerIconDraggingDidChange:(id)arg0 ;
-(void)iconManagerListLayoutProviderDidChange:(id)arg0 ;
-(void)iconManagerWillAnimateWidgetInsertion:(id)arg0 ;
-(void)iconManagerWillPresentWidgetEditing:(id)arg0 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)libraryViewController:(id)arg0 didDismissSearchController:(id)arg1 ;
-(void)libraryViewController:(id)arg0 didPresentSearchController:(id)arg1 ;
-(void)libraryViewController:(id)arg0 willDismissFolderController:(id)arg1 ;
-(void)libraryViewController:(id)arg0 willDismissSearchController:(id)arg1 ;
-(void)libraryViewController:(id)arg0 willPresentFolderController:(id)arg1 ;
-(void)libraryViewController:(id)arg0 willPresentSearchController:(id)arg1 ;
-(void)libraryViewControllerDidDismiss:(id)arg0 ;
-(void)libraryViewControllerDidPresent:(id)arg0 ;
-(void)libraryViewControllerRequestsDismissal:(id)arg0 ;
-(void)libraryViewControllerWillDismiss:(id)arg0 ;
-(void)libraryViewControllerWillPresent:(id)arg0 ;
-(void)loadView;
-(void)modeConfigurationService:(id)arg0 didReceiveAvailableModesUpdate:(id)arg1 ;
-(void)noteFloatingDockWillAnimateChangeInHeight;
-(void)noteFloatingDockWillChangeHeight;
-(void)noteTransientOverlayPresented;
-(void)noteViewCovered;
-(void)noteViewUncovered;
-(void)observer:(id)arg0 noteServerConnectionStateChanged:(BOOL)arg1 ;
-(void)observer:(id)arg0 updateSectionInfo:(id)arg1 ;
-(void)obtainProactiveSecondPageWidgetSuggestion;
-(void)overlayController:(id)arg0 didChangePresentationProgress:(CGFloat)arg1 newPresentationProgress:(CGFloat)arg2 fromLeading:(BOOL)arg3 ;
-(void)overlayController:(id)arg0 visibilityDidChange:(BOOL)arg1 ;
-(void)overlayControllerDidBeginChangingPresentationProgress:(id)arg0 ;
-(void)performAfterContextMenuAnimationsHaveCompleted:(id)arg0 ;
-(void)popLibraryOverlay;
-(void)popToCurrentRootIconListWhenPossible;
-(void)prepareForImminentExit;
-(void)presentLibraryOverlayForIconManager:(id)arg0 ;
-(void)presentLibraryOverlayForIconManager:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)presentTodayOverlayForIconManager:(id)arg0 ;
-(void)proactiveHomeScreenSuggestionProvider:(id)arg0 willUseTemporaryIntent:(id)arg1 forIconWithIdentifier:(id)arg2 widgetUniqueIdentifier:(id)arg3 ;
-(void)proactiveHomeScreenSuggestionProviderDidUpdatePrediction:(id)arg0 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)publisher:(id)arg0 didUpdateLayout:(id)arg1 withTransition:(id)arg2 ;
-(void)removeIconOcclusionReason:(NSUInteger)arg0 updateVisibleIcons:(BOOL)arg1 ;
-(void)removeIconsOccludedAssertion:(id)arg0 ;
-(void)rootFolderController:(id)arg0 transitionDidFinish:(id)arg1 ;
-(void)rootFolderController:(id)arg0 transitionWillBegin:(id)arg1 ;
-(void)rootFolderController:(id)arg0 transitionWillFinish:(id)arg1 ;
-(void)rootFolderController:(id)arg0 transitionWillReverse:(id)arg1 ;
-(void)rootFolderPageStateProvider:(id)arg0 didContinueTransitionToState:(NSInteger)arg1 progress:(CGFloat)arg2 ;
-(void)rootFolderPageStateProvider:(id)arg0 didEndTransitionFromState:(NSInteger)arg1 toState:(NSInteger)arg2 successfully:(BOOL)arg3 ;
-(void)rootFolderPageStateProvider:(id)arg0 willBeginTransitionToState:(NSInteger)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 ;
-(void)rootFolderPageStateProvider:(id)arg0 willEndTransitionToState:(NSInteger)arg1 successfully:(BOOL)arg2 ;
-(void)searchBarDidFocus;
-(void)searchGesture:(id)arg0 changedPercentComplete:(CGFloat)arg1 ;
-(void)searchGesture:(id)arg0 endedGesture:(BOOL)arg1 ;
-(void)searchGesture:(id)arg0 startedShowing:(BOOL)arg1 ;
-(void)setTemporaryIntent:(id)arg0 forIconWithIdentifier:(id)arg1 widgetUniqueIdentifier:(id)arg2 ;
-(void)setWallpaperAnimationDisabled:(BOOL)arg0 forReason:(id)arg1 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)stateService:(id)arg0 didReceiveDoNotDisturbStateUpdate:(id)arg1 ;
-(void)todayViewControllerDidChangeHeaderVisibility:(id)arg0 ;
-(void)todayViewControllerWillPresentSpotlight:(id)arg0 ;
-(void)todayViewDidAppear:(id)arg0 ;
-(void)todayViewWantsToEndEditing:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateContentViewOrientationAndLayoutIfNeeded;
-(void)updateNumberOfRowsWithDuration:(CGFloat)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)widgetGroupViewControllerDidChangeHeaderVisibility:(id)arg0 ;


@end


#endif