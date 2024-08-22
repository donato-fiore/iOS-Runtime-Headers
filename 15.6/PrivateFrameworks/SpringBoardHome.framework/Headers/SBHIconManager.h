// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHICONMANAGER_H
#define SBHICONMANAGER_H

@class SBReusableViewMap, UIImpactFeedbackGenerator, NSMutableSet, NSMutableArray, NSCountedSet, NSHashTable, NSMapTable, NSMutableDictionary, NSMutableOrderedSet, NSTimer, ATXHomeScreenPageIconRanker, CHSAvocadoDescriptorProvider, SBFParallaxSettings, NSString, NSArray, SBHomeScreenDefaults, UIViewController<SBHLegibility>, _UILegibilitySettings, NSDictionary, UIViewController<SBHTodayViewController>, NSSet, ATXDefaultWidgetSuggesterClient, UIViewController<SBHIconRootViewProviding>, UIViewController<SBHSidebarProvider>, UIViewController<SBHRootFolderCustomViewPresenting>, BSEventQueue;
@protocol UIPopoverPresentationControllerDelegate, SBReusableViewMapDelegate, SBRootFolderPageStateObserver, SBNestingViewControllerDelegate, SBHIconModelDelegate, PTSettingsKeyObserver, SBRootFolderDelegate, SBIconViewObserver, SBHWidgetStackViewControllerDataSource, SBHWidgetStackViewControllerDelegate, SBHMultiplexingWrapperViewControllerDelegate, SBLeafIconObserver, CHUISAvocadoHostViewControllerDelegate, SBHWidgetMetricsProviderDelegate, CHSAvocadoDescriptorProviderObserver, SBHMultiplexingManagerDelegate, SBIconDragManagerDelegate, SBHTodayViewControllerObserver, SBHModalInteractionDelegate, SBFolderObserver, SBIconViewDelegate, SBIconViewQuerying, SBHomeScreenIconTransitionAnimatorDelegate, SBIconViewProviding, SBRootFolderControllerDelegate, SBIconLocationPresenting, SBHLibraryViewControllerObserver, SBHVisibleContentPresenter, OS_os_activity, BSInvalidatable, SBHIconManagerDelegate, SBIconListLayoutProvider;

#import <Foundation/Foundation.h>

#import "SBIconLabelImageCache.h"
#import "SBIconPreviousLocationTracker.h"
#import "SBFolderIconImageCache.h"
#import "SBHIconImageCache.h"
#import "SBHMultiplexingManager.h"
#import "SBFolderIcon.h"
#import "SBHFocusMode.h"
#import "SBFolder.h"
#import "SBIconView.h"
#import "SBWorkspaceInteractionContext.h"
#import "SBHPeopleWidgetPersonDetailInteraction.h"
#import "SBIconListView.h"
#import "SBHomeScreenIconTransitionAnimator.h"
#import "SBFloatingDockViewController.h"
#import "SBHHomeScreenSettings.h"
#import "SBIconDragManager.h"
#import "SBHIconModel.h"
#import "SBIconPageIndicatorImageSetCache.h"
#import "SBHIconShareSheetManager.h"
#import "SBIcon.h"
#import "SBModalWidgetIntroductionViewController.h"
#import "SBFolderController.h"
#import "SBHLibraryViewController.h"
#import "SBRootFolder.h"
#import "SBRootFolderController.h"
#import "SBHRootFolderSettings.h"
#import "SBSearchGesture.h"
#import "SBHTrialClientManager.h"
#import "SBHHomeScreenUsageMonitor.h"
#import "SBHWidgetIntroductionSettings.h"
#import "SBHWidgetMetricsProvider.h"

@interface SBHIconManager : NSObject <UIPopoverPresentationControllerDelegate, SBReusableViewMapDelegate, SBRootFolderPageStateObserver, SBNestingViewControllerDelegate, SBHIconModelDelegate, PTSettingsKeyObserver, SBRootFolderDelegate, SBIconViewObserver, SBHWidgetStackViewControllerDataSource, SBHWidgetStackViewControllerDelegate, SBHMultiplexingWrapperViewControllerDelegate, SBLeafIconObserver, CHUISAvocadoHostViewControllerDelegate, SBHWidgetMetricsProviderDelegate, CHSAvocadoDescriptorProviderObserver, SBHMultiplexingManagerDelegate, SBIconDragManagerDelegate, SBHTodayViewControllerObserver, SBHModalInteractionDelegate, SBFolderObserver, SBIconViewDelegate, SBIconViewQuerying, SBHomeScreenIconTransitionAnimatorDelegate, SBIconViewProviding, SBRootFolderControllerDelegate, SBIconLocationPresenting, SBHLibraryViewControllerObserver, SBHVisibleContentPresenter>

 {
    SBReusableViewMap *_iconViewMap;
    SBReusableViewMap *_homescreenIconAccessoryViewMap;
    SBReusableViewMap *_homescreenIconLabelAccessoryViewMap;
    SBReusableViewMap *_homescreenIconImageViewMap;
    SBReusableViewMap *_widgetBackgroundViewMap;
    SBIconLabelImageCache *_labelImageCache;
    UIImpactFeedbackGenerator *_iconEditingFeedbackBehavior;
    NSMutableSet *_touchedIconViews;
    NSMutableArray *_iconTouchesFinishedBlocks;
    NSUInteger _maxIconViewsInHierarchy;
    NSCountedSet *_reasonsToNotRestartEditingTimer;
    NSHashTable *_pageStateObservers;
    NSHashTable *_folderPresentationObservers;
    NSMutableArray *_currentExpandCompletions;
    NSMutableArray *_currentCollapseCompletions;
    SBIconPreviousLocationTracker *_previousIconLocationTracker;
    SBFolderIconImageCache *_folderIconImageCache;
    SBHIconImageCache *_iconImageCache;
    SBHIconImageCache *_addWidgetSheetIconImageCache;
    NSUInteger _relayoutCount;
    BOOL _editingShouldBeReEnabledAfterLibrarySearchControllerIsDismissed;
    Class _subclassIconViewClass;
    SBHMultiplexingManager *_widgetMultiplexingManager;
    NSHashTable *_aliveWidgetViewControllersHashTable;
    NSMapTable *_widgetViewControllersForIconView;
    NSMapTable *_iconViewsForCustomIconImageViewController;
    NSMapTable *_iconViewsForWidgetMultiplexingViewController;
    NSMapTable *_appPredictionViewControllersForUniqueIdentifier;
    NSMutableDictionary *_widgetIntents;
    NSMutableDictionary *_archivedWidgetIntents;
    NSMutableDictionary *_rootIconListsResetTemporaryIntentCache;
    NSUInteger _descriptorsChangedSequenceNumber;
    NSMutableSet *_pendingWidgetIntentConfigurationInitializations;
    NSMutableSet *_activeWidgetIntentConfigurationInitializations;
    NSMutableArray *_performAfterPendingWidgetIntentConfigurationBlocks;
    NSCountedSet *_reasonsToIgnoreUserPreferenceForAddingNewIconsToHomeScreen;
    NSObject<OS_os_activity> *_editingActivity;
    os_activity_scope_state_s _editingActivityScope;
    id<BSInvalidatable> *_stateCaptureHandle;
    SBFolderIcon *_pendingFolderIconToOpen;
    NSMapTable *_preventBackgroundingAssertionsForAvocadoWidgets;
    NSMutableOrderedSet *_avocadoWidgetViewControllersWithBackgroundAssertions;
    NSTimer *_avocadoBackgroundAssertionCullingTimer;
    NSMutableArray *_reasonsToNotManageBackgroundAssertions;
    NSHashTable *_avocadoHostViewControllersBackgroundAssertionsToBeCleanedUpAfterTodayViewControllerDismissed;
}


@property (retain, nonatomic) SBHFocusMode *activeFocusMode; // ivar: _activeFocusMode
@property (readonly, nonatomic) BOOL allowsNestedFolders;
@property (nonatomic, getter=isAnimatingFolderCreation) BOOL animatingFolderCreation; // ivar: _animatingFolderCreation
@property (nonatomic, getter=isAnimatingFolderOpeningOrClosing) BOOL animatingFolderOpeningOrClosing; // ivar: _animatingFolderOpeningOrClosing
@property (nonatomic, getter=isAnimatingForUnscatter) BOOL animatingForUnscatter; // ivar: _animatingForUnscatter
@property (readonly, nonatomic) BOOL areAnyIconShareSheetsShowing;
@property (retain, nonatomic) ATXHomeScreenPageIconRanker *atxIconRanker; // ivar: _atxIconRanker
@property (readonly, nonatomic) CHSAvocadoDescriptorProvider *avocadoDescriptorProvider; // ivar: _avocadoDescriptorProvider
@property (readonly, nonatomic) SBFParallaxSettings *badgeParallaxSettings; // ivar: _badgeParallaxSettings
@property (readonly, nonatomic) BOOL canCloseFolders;
@property (nonatomic) BOOL canDismissOverscrollLibraryForPageTransition; // ivar: _canDismissOverscrollLibraryForPageTransition
@property (nonatomic) BOOL canPresentOverscrollLibraryForPageTransition; // ivar: _canPresentOverscrollLibraryForPageTransition
@property (retain, nonatomic) NSMutableArray *chuisOnboardingWidgetViewControllers; // ivar: _chuisOnboardingWidgetViewControllers
@property (retain, nonatomic) SBFolder *closingFolder; // ivar: _closingFolder
@property (nonatomic) NSUInteger contentVisibility; // ivar: _contentVisibility
@property (retain, nonatomic) SBIconView *currentConfiguringIconView; // ivar: _currentConfiguringIconView
@property (retain, nonatomic) SBWorkspaceInteractionContext *currentInteractionContext; // ivar: _currentInteractionContext
@property (retain, nonatomic) SBHPeopleWidgetPersonDetailInteraction *currentPersonDetailInteraction; // ivar: _currentPersonDetailInteraction
@property (readonly, nonatomic) SBIconListView *currentRootIconList;
@property (retain, nonatomic) SBHomeScreenIconTransitionAnimator *currentTransitionAnimator; // ivar: _currentTransitionAnimator
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *defaultFirstPageSuggestedWidgetIcons; // ivar: _defaultFirstPageSuggestedWidgetIcons
@property (copy, nonatomic) NSArray *defaultFirstPageWidgetDescriptors; // ivar: _defaultFirstPageWidgetDescriptors
@property (nonatomic) NSUInteger defaultFirstPageWidgetSizeClass; // ivar: _defaultFirstPageWidgetSizeClass
@property (retain, nonatomic) NSArray *defaultSecondPageSuggestedWidgetIcons; // ivar: _defaultSecondPageSuggestedWidgetIcons
@property (copy, nonatomic) NSArray *defaultSecondPageWidgetDescriptors; // ivar: _defaultSecondPageWidgetDescriptors
@property (nonatomic) NSUInteger defaultSecondPageWidgetSizeClass; // ivar: _defaultSecondPageWidgetSizeClass
@property (retain, nonatomic) NSMutableArray *defaultWidgetsBumpedIconUsageRanking; // ivar: _defaultWidgetsBumpedIconUsageRanking
@property (retain, nonatomic) NSMutableDictionary *defaultWidgetsIconsRestoringRecord; // ivar: _defaultWidgetsIconsRestoringRecord
@property (retain, nonatomic) NSMutableArray *defaultWidgetsIconsRestoringRecordOriginalIndex; // ivar: _defaultWidgetsIconsRestoringRecordOriginalIndex
@property (weak, nonatomic) NSObject<SBHIconManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disablesScrollingToLastIconPageForLibraryDismissal; // ivar: _disablesScrollingToLastIconPageForLibraryDismissal
@property (readonly, nonatomic) SBIconListView *dockListView;
@property (nonatomic, getter=isDockPinnedForRotation) BOOL dockPinnedForRotation; // ivar: _dockPinnedForRotation
@property (nonatomic, getter=isEditing) BOOL editing; // ivar: _editing
@property (readonly, nonatomic, getter=isEditingAllowed) BOOL editingAllowed;
@property (retain, nonatomic) NSObject<BSInvalidatable> *editingAutosaveDisableAssertion; // ivar: _editingAutosaveDisableAssertion
@property (retain, nonatomic) NSTimer *editingEndTimer; // ivar: _editingEndTimer
@property (readonly, nonatomic) SBIconListView *effectiveDockListView;
@property (readonly, nonatomic) SBIconListView *floatingDockListView;
@property (readonly, nonatomic) SBIconListView *floatingDockSuggestionsListView;
@property (retain, nonatomic) SBFloatingDockViewController *floatingDockViewController; // ivar: _floatingDockViewController
@property (readonly, nonatomic) SBFolderIconImageCache *folderIconImageCache;
@property (readonly, nonatomic, getter=isFolderPageManagementUIVisible) BOOL folderPageManagementUIVisible;
@property (readonly, nonatomic, getter=isFolderScrolling) BOOL folderScrolling;
@property (nonatomic) BOOL forceShowWidgetIntroduction; // ivar: _forceShowWidgetIntroduction
@property (nonatomic) NSUInteger gridCellInfoOptionsForInsertingDefaultWidgets; // ivar: _gridCellInfoOptionsForInsertingDefaultWidgets
@property (readonly, nonatomic) BOOL hasAnimatingFolder;
@property (readonly, nonatomic) BOOL hasOpenFolder;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBIconView *highlightedIconView; // ivar: _highlightedIconView
@property (readonly, nonatomic) SBHomeScreenDefaults *homeScreenDefaults; // ivar: _homeScreenDefaults
@property (readonly, nonatomic) SBHHomeScreenSettings *homeScreenSettings; // ivar: _homeScreenSettings
@property (readonly, nonatomic, getter=isIconContentPossiblyVisibleOverApplication) BOOL iconContentPossiblyVisibleOverApplication;
@property (readonly, nonatomic) SBIconDragManager *iconDragManager; // ivar: _iconDragManager
@property (readonly, nonatomic, getter=isIconDragging) BOOL iconDragging;
@property (readonly, nonatomic) UIImpactFeedbackGenerator *iconEditingFeedbackBehavior;
@property (readonly, nonatomic) SBHIconImageCache *iconImageCache;
@property (readonly, nonatomic) SBIconLabelImageCache *iconLabelImageCache;
@property (retain, nonatomic) SBHIconModel *iconModel; // ivar: _iconModel
@property (readonly, nonatomic) SBIconPageIndicatorImageSetCache *iconPageIndicatorImageSetCache; // ivar: _iconPageIndicatorImageSetCache
@property (readonly, nonatomic) SBHIconShareSheetManager *iconShareSheetManager; // ivar: _iconShareSheetManager
@property (retain, nonatomic) SBIcon *iconToReveal; // ivar: _iconToReveal
@property (readonly, nonatomic, getter=isIconTouched) BOOL iconTouched;
@property (readonly, nonatomic) NSInteger interfaceOrientation;
@property (nonatomic) BOOL internalForceShowWidgetDiscoverability; // ivar: _internalForceShowWidgetDiscoverability
@property (nonatomic) BOOL isVerticalWidgetIntroduction; // ivar: _isVerticalWidgetIntroduction
@property (retain, nonatomic) UIViewController<SBHLegibility> *leadingCustomViewController; // ivar: _leadingCustomViewController
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (readonly, nonatomic, getter=isLibraryViewControllerVisible) BOOL libraryViewControllerVisible;
@property (retain, nonatomic) NSObject<SBIconListLayoutProvider> *listLayoutProvider; // ivar: _listLayoutProvider
@property (nonatomic) NSUInteger listLayoutProviderLayoutOptions; // ivar: _listLayoutProviderLayoutOptions
@property (nonatomic) NSUInteger maximumNumberOfWidgetsToMaintainPreventBackgroundAssertions; // ivar: _maximumNumberOfWidgetsToMaintainPreventBackgroundAssertions
@property (retain, nonatomic) SBModalWidgetIntroductionViewController *modalIntroductionViewController; // ivar: _modalIntroductionViewController
@property (nonatomic) BOOL modalIntroductionViewControllerIsPrewarming; // ivar: _modalIntroductionViewControllerIsPrewarming
@property (nonatomic) BOOL needsRelayout; // ivar: _needsRelayout
@property (readonly, nonatomic) SBFolder *openedFolder;
@property (readonly, nonatomic) SBFolderController *openedFolderController;
@property (copy, nonatomic) NSDictionary *originalIconStateBeforeWidgetDiscoverability; // ivar: _originalIconStateBeforeWidgetDiscoverability
@property (retain, nonatomic) UIViewController<SBHTodayViewController> *overlayCoverSheetTodayViewController; // ivar: _overlayCoverSheetTodayViewController
@property (nonatomic, getter=isOverlayCoverSheetTodayViewVisible) BOOL overlayCoverSheetTodayViewVisible; // ivar: _overlayCoverSheetTodayViewVisible
@property (retain, nonatomic) SBHLibraryViewController *overlayLibraryViewController; // ivar: _overlayLibraryViewController
@property (nonatomic, getter=isOverlayLibraryViewVisible) BOOL overlayLibraryViewVisible; // ivar: _overlayLibraryViewVisible
@property (retain, nonatomic) UIViewController<SBHTodayViewController> *overlayTodayViewController; // ivar: _overlayTodayViewController
@property (nonatomic, getter=isOverlayTodayViewVisible) BOOL overlayTodayViewVisible; // ivar: _overlayTodayViewVisible
@property (readonly, nonatomic, getter=isPerformingCancelledCollapseTransition) BOOL performingCancelledCollapseTransition;
@property (readonly, nonatomic, getter=isPerformingExpandTransition) BOOL performingExpandTransition;
@property (copy, nonatomic) NSArray *postResetPathIdentifiers; // ivar: _postResetPathIdentifiers
@property (copy, nonatomic) NSString *precachedContentSizeCategory; // ivar: _precachedContentSizeCategory
@property (readonly, copy, nonatomic) NSSet *presentedIconLocations;
@property (retain, nonatomic) SBIconView *previewInteractingIconView; // ivar: _previewInteractingIconView
@property (retain, nonatomic) ATXDefaultWidgetSuggesterClient *proactiveWidgetSuggesterClient; // ivar: _proactiveWidgetSuggesterClient
@property (nonatomic, getter=isResettingRootIconLists) BOOL resettingRootIconLists; // ivar: _resettingRootIconLists
@property (retain, nonatomic) SBRootFolder *rootFolder; // ivar: _rootFolder
@property (readonly, nonatomic, getter=isRootFolderContentVisible) BOOL rootFolderContentVisible;
@property (retain, nonatomic) SBRootFolderController *rootFolderController; // ivar: _rootFolderController
@property (readonly, nonatomic, getter=isRootFolderScrolling) BOOL rootFolderScrolling;
@property (readonly, nonatomic) SBHRootFolderSettings *rootFolderSettings; // ivar: _rootFolderSettings
@property (retain, nonatomic) UIViewController<SBHIconRootViewProviding> *rootViewController; // ivar: _rootViewController
@property (readonly, nonatomic, getter=isScrolling) BOOL scrolling;
@property (readonly, nonatomic) SBSearchGesture *searchGesture;
@property (nonatomic) BOOL shouldDisableUserInteractionForWidgetDiscoverability; // ivar: _shouldDisableUserInteractionForWidgetDiscoverability
@property (readonly, nonatomic, getter=isShowingIconContextMenu) BOOL showingIconContextMenu;
@property (readonly, nonatomic, getter=isShowingLeadingCustomView) BOOL showingLeadingCustomView;
@property (readonly, nonatomic, getter=isShowingOrTransitioningToLeadingCustomView) BOOL showingOrTransitioningToLeadingCustomView;
@property (readonly, nonatomic, getter=isShowingPullDownOrLeadingCustomViewSearch) BOOL showingPullDownOrLeadingCustomViewSearch;
@property (readonly, nonatomic, getter=isShowingPullDownSearch) BOOL showingPullDownSearch;
@property (readonly, nonatomic, getter=isShowingPullDownSearchOrTransitioningToVisible) BOOL showingPullDownSearchOrTransitioningToVisible;
@property (readonly, nonatomic, getter=isShowingSpotlightOrLeadingCustomView) BOOL showingSpotlightOrLeadingCustomView;
@property (nonatomic) BOOL showsAddWidgetButtonWhileEditing; // ivar: _showsAddWidgetButtonWhileEditing
@property (readonly, nonatomic) BOOL showsBadgesInAppLibrary; // ivar: _showsBadgesInAppLibrary
@property (nonatomic) BOOL showsDoneButtonWhileEditing; // ivar: _showsDoneButtonWhileEditing
@property (readonly, nonatomic, getter=isSidebarEffectivelyVisible) BOOL sidebarEffectivelyVisible;
@property (retain, nonatomic) UIViewController<SBHSidebarProvider> *sidebarViewController; // ivar: _sidebarViewController
@property (readonly, nonatomic, getter=isSidebarVisibilityGestureActive) BOOL sidebarVisibilityGestureActive;
@property (readonly, nonatomic, getter=isSidebarVisible) BOOL sidebarVisible;
@property (readonly, copy, nonatomic) NSString *statisticsSummary;
@property (nonatomic) BOOL stopUpdatingDefaultWidgetsBumpedIconRecord; // ivar: _stopUpdatingDefaultWidgetsBumpedIconRecord
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTrackingScroll) BOOL trackingScroll;
@property (retain, nonatomic) UIViewController<SBHRootFolderCustomViewPresenting> *trailingCustomViewController; // ivar: _trailingCustomViewController
@property (readonly, nonatomic) BSEventQueue *transitionEventQueue; // ivar: _transitionEventQueue
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
@property (readonly, nonatomic, getter=isTransitioningHomeScreenState) BOOL transitioningHomeScreenState;
@property (retain, nonatomic) SBHTrialClientManager *trialClientManager; // ivar: _trialClientManager
@property (retain, nonatomic) SBHHomeScreenUsageMonitor *usageMonitor; // ivar: _usageMonitor
@property (nonatomic, getter=isUsageMonitoringEnabled) BOOL usageMonitoringEnabled; // ivar: _usageMonitoringEnabled
@property (nonatomic) BOOL widgetDiscoverabilityHasRun; // ivar: _widgetDiscoverabilityHasRun
@property (nonatomic) NSUInteger widgetIntroductionCounter; // ivar: _widgetIntroductionCounter
@property (readonly, nonatomic) SBHWidgetIntroductionSettings *widgetIntroductionSettings; // ivar: _widgetIntroductionSettings
@property (readonly, nonatomic) SBHWidgetMetricsProvider *widgetMetricsProvider; // ivar: _widgetMetricsProvider


+(CGFloat)defaultIconLayoutAnimationDuration;
+(id)defaultIconLocationForListsWithNonDefaultSizedIcons;
-(BOOL)_bundleWithIdentifierHasOpenURLEntitlement:(id)arg0 ;
-(BOOL)_determineIfAvocadoHostViewControllerIsVisible:(id)arg0 ;
-(BOOL)_determineIfAvocadoHostViewControllerIsVisible:(id)arg0 withinStackViewController:(id)arg1 ;
-(BOOL)_isShowingOrTransitioningToSearchableLeadingCustomView;
-(BOOL)_isShowingSearchableLeadingCustomView;
-(BOOL)_shouldLibraryOverlayAllowSwipeToDismissGesture;
-(BOOL)_shouldParallaxInIconLocation:(id)arg0 ;
-(BOOL)_shouldRespondToIconCloseBoxes;
-(BOOL)addDefaultFirstPageWidgetsToHomeScreen:(BOOL)arg0 ;
-(BOOL)addDefaultSecondPageWidgetsToHomeScreen:(BOOL)arg0 ;
-(BOOL)addDefaultWidgetsToHomeScreen;
-(BOOL)allowsNestedFoldersForIconDragManager:(id)arg0 ;
-(BOOL)animator:(id)arg0 canAlterViewHierarchyDuringCleanupUsingBlock:(id)arg1 ;
-(BOOL)applyOriginaliconStateForWidgetDiscoverability;
-(BOOL)canAddIconToIgnoredList:(id)arg0 ;
-(BOOL)canOpenFolderForIcon:(id)arg0 ;
-(BOOL)canSaveIconState:(id)arg0 ;
-(BOOL)canShowWidgetIntroduction;
-(BOOL)clearTodayLayout;
-(BOOL)deviceTypeSupportModalWidgetIntroduction;
-(BOOL)dismissSpotlightAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(BOOL)dismissSpotlightOrLeadingCustomViewAnimated:(BOOL)arg0 ;
-(BOOL)dismissSpotlightOrTodayViewAnimated:(BOOL)arg0 ;
-(BOOL)folderController:(id)arg0 canChangeCurrentPageIndexToIndex:(NSInteger)arg1 ;
-(BOOL)folderController:(id)arg0 iconListView:(id)arg1 canHandleIconDropSession:(id)arg2 ;
-(BOOL)folderController:(id)arg0 iconListView:(id)arg1 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg2 onIconView:(id)arg3 ;
-(BOOL)folderControllerShouldClose:(id)arg0 withPinchGesture:(id)arg1 ;
-(BOOL)hasOpenFolderInLocation:(id)arg0 ;
-(BOOL)hasRootFolderController;
-(BOOL)hasRootViewController;
-(BOOL)icon:(id)arg0 canReceiveGrabbedIcon:(id)arg1 ;
-(BOOL)iconAllowsBadging:(id)arg0 ;
-(BOOL)iconDragManager:(id)arg0 canAcceptDropInSession:(id)arg1 inIconListView:(id)arg2 ;
-(BOOL)iconDragManager:(id)arg0 canAddDragItemsToSession:(id)arg1 fromIconView:(id)arg2 ;
-(BOOL)iconDragManager:(id)arg0 canBeginDragForIconView:(id)arg1 ;
-(BOOL)iconDragManager:(id)arg0 shouldDuplicateIconsInDragSession:(id)arg1 ;
-(BOOL)iconDragManagerCanBeginIconDrags:(id)arg0 ;
-(BOOL)iconLocationAllowsBadging:(id)arg0 ;
-(BOOL)iconModel:(id)arg0 listsAllowRotatedLayoutForFolderClass:(Class)arg1 ;
-(BOOL)iconModel:(id)arg0 shouldAvoidPlacingIconOnFirstPage:(id)arg1 ;
-(BOOL)iconModel:(id)arg0 shouldPlaceIconOnIgnoredList:(id)arg1 ;
-(BOOL)iconModel:(id)arg0 shouldRemoveIcon:(id)arg1 ;
-(BOOL)iconShouldAllowCloseBoxTap:(id)arg0 ;
-(BOOL)iconShouldAllowTap:(id)arg0 ;
-(BOOL)iconView:(id)arg0 canAddDragItemsToSession:(id)arg1 ;
-(BOOL)iconView:(id)arg0 editingModeGestureRecognizerDidFire:(id)arg1 ;
-(BOOL)iconView:(id)arg0 shouldActivateApplicationShortcutItem:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(BOOL)iconView:(id)arg0 shouldContinueToUseBackgroundViewForComponents:(id)arg1 ;
-(BOOL)iconView:(id)arg0 supportsConfigurationForDataSource:(id)arg1 ;
-(BOOL)iconViewCanBecomeFocused:(id)arg0 ;
-(BOOL)iconViewCanBeginDrags:(id)arg0 ;
-(BOOL)iconViewDisplaysAccessories:(id)arg0 ;
-(BOOL)iconViewDisplaysCloseBox:(id)arg0 ;
-(BOOL)iconViewDisplaysLabel:(id)arg0 ;
-(BOOL)iconViewShouldBeginShortcutsPresentation:(id)arg0 ;
-(BOOL)iconsShouldAllowCloseBoxes;
-(BOOL)isAnimatingFolderIconTransitionForIconDragManager:(id)arg0 ;
-(BOOL)isDisplayingIcon:(id)arg0 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocation:(id)arg1 options:(NSUInteger)arg2 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocations:(id)arg1 ;
-(BOOL)isDisplayingIcon:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)isDisplayingIcon:(id)arg0 queryOptions:(NSUInteger)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg0 ;
-(BOOL)isDisplayingIconView:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)isEditingAllowedForIconListView:(id)arg0 ;
-(BOOL)isEditingAllowedForIconLocation:(id)arg0 ;
-(BOOL)isEditingAllowedForIconView:(id)arg0 ;
-(BOOL)isFloatingDockVisible;
-(BOOL)isIconCurrentlyOnscreen:(id)arg0 ;
-(BOOL)isIconIgnored:(id)arg0 ;
-(BOOL)isIconViewRecycled:(id)arg0 ;
-(BOOL)isIconVisiblyRepresented:(id)arg0 ;
-(BOOL)isOverlayTodayOrLibraryViewVisible;
-(BOOL)isPerformingCancelledExpandTransition;
-(BOOL)isPresentingIconLocation:(id)arg0 ;
-(BOOL)isShowingModalInteraction;
-(BOOL)isTodayViewEffectivelyVisible;
-(BOOL)listsAllowRotatedLayoutForFolderClass:(Class)arg0 ;
-(BOOL)multiplexingManager:(id)arg0 shouldCacheRecentViewController:(id)arg1 forIdentifier:(id)arg2 ;
-(BOOL)presentHomeScreenIconsAnimated:(BOOL)arg0 ;
-(BOOL)presentLibraryCategoryPodForCategoryIdentifier:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)presentSpotlightFromSource:(NSUInteger)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(BOOL)prototypeSettingBumpLeastUsedApps;
-(BOOL)prototypeSettingEditButtonAsUndo;
-(BOOL)prototypeSettingShowExtraLargeTVWidget;
-(BOOL)prototypeSettingShowModalWidgetIntroduction;
-(BOOL)prototypeSettingShowWidgetIntroduction;
-(BOOL)prototypeSettingSimpleBottomSnaking;
-(BOOL)relayout;
-(BOOL)resetIconLayoutWithOptions:(NSUInteger)arg0 ;
-(BOOL)resetTodayLayout;
-(BOOL)rootFolder:(id)arg0 canAddIcon:(id)arg1 toIconList:(id)arg2 inFolder:(id)arg3 ;
-(BOOL)rootFolder:(id)arg0 canBounceIcon:(id)arg1 ;
-(BOOL)rootFolder:(id)arg0 isGridLayoutValid:(id)arg1 forIconList:(id)arg2 inFolder:(id)arg3 ;
-(BOOL)rootFolder:(id)arg0 shouldAllowBadgingForIcon:(id)arg1 ;
-(BOOL)rootFolderControllerCanUseSeparateWindowForRotation:(id)arg0 ;
-(BOOL)rootFolderControllerDidSetPrototypeSettingEditAsUndo:(id)arg0 ;
-(BOOL)shouldHighlightTouchedIconView:(id)arg0 ;
-(BOOL)shouldRecycleIconView:(id)arg0 ;
-(BOOL)supportsDockForIconModel:(id)arg0 ;
-(BOOL)userHasUsedWidget;
-(BOOL)viewMap:(id)arg0 shouldRecycleView:(id)arg1 ;
-(BOOL)widgetDiscoverabilityServerSideEnabled;
-(BOOL)widgetIconIsOnboardingWidget:(id)arg0 ;
-(BOOL)widgetStackViewController:(id)arg0 isDataSourceBlockedForScreenTimeExpiration:(id)arg1 ;
-(BOOL)widgetViewControllerShouldTransitionSceneToBackground:(id)arg0 ;
-(CGFloat)additionalDragLiftScaleForIconView:(id)arg0 ;
-(CGFloat)defaultIconLayoutAnimationDurationForIconDragManager:(id)arg0 ;
-(CGFloat)distanceToTopOfSpotlightIconsForRootFolderController:(id)arg0 ;
-(CGFloat)externalDockHeightForRootFolderController:(id)arg0 ;
-(CGFloat)iconDragManager:(id)arg0 additionalDragLiftScaleForIconView:(id)arg1 ;
-(CGFloat)maxExternalDockHeightForRootFolderController:(id)arg0 ;
-(CGFloat)minimumHomeScreenScaleForFolderController:(id)arg0 ;
-(CGFloat)preferredExternalDockVerticalMarginForRootFolderController:(id)arg0 ;
-(Class)controllerClassForFolder:(id)arg0 ;
-(Class)controllerClassForFolderClass:(Class)arg0 ;
-(Class)iconModel:(id)arg0 iconClassForApplicationWithBundleIdentifier:(id)arg1 proposedClass:(Class)arg2 ;
-(Class)iconViewClass;
-(NSInteger)closeBoxTypeForIconView:(id)arg0 ;
-(NSInteger)currentIconListIndex;
-(NSInteger)iconDragManager:(id)arg0 draggingStartLocationForIconView:(id)arg1 proposedStartLocation:(NSInteger)arg2 ;
-(NSInteger)iconView:(id)arg0 draggingStartLocationWithProposedStartLocation:(NSInteger)arg1 ;
-(NSUInteger)allowedGridSizeClassesForDock;
-(NSUInteger)allowedGridSizeClassesForDockForIconModel:(id)arg0 ;
-(NSUInteger)allowedGridSizeClassesForDockForRootFolder:(id)arg0 ;
-(NSUInteger)allowedGridSizeClassesForTodayList;
-(NSUInteger)allowedGridSizeClassesForTodayListForIconModel:(id)arg0 ;
-(NSUInteger)allowedGridSizeClassesForTodayListForRootFolder:(id)arg0 ;
-(NSUInteger)allowedInterfaceOrientations;
-(NSUInteger)columnCountForTodayList;
-(NSUInteger)columnCountForTodayListForRootFolder:(id)arg0 ;
-(NSUInteger)effectiveRootFolderControllerContentVisibility;
-(NSUInteger)focusEffectTypeForIconView:(id)arg0 ;
-(NSUInteger)gridCellInfoOptions;
-(NSUInteger)gridCellInfoOptionsForOrientation:(NSInteger)arg0 ;
-(NSUInteger)iconModel:(id)arg0 allowedGridSizeClassesForFolderClass:(Class)arg1 ;
-(NSUInteger)iconModel:(id)arg0 maxColumnCountForListInRootFolderWithInterfaceOrientation:(NSInteger)arg1 ;
-(NSUInteger)iconModel:(id)arg0 maxRowCountForListInRootFolderWithInterfaceOrientation:(NSInteger)arg1 ;
-(NSUInteger)listGridCellInfoOptionsForIconDragManager:(id)arg0 ;
-(NSUInteger)listRotatedLayoutClusterGridSizeClassForIconModel:(id)arg0 ;
-(NSUInteger)maxColumnCountForTodayListForIconModel:(id)arg0 ;
-(NSUInteger)maxIconCountForDock;
-(NSUInteger)maxIconCountForDockForIconModel:(id)arg0 ;
-(NSUInteger)maxIconCountForDockForRootFolder:(id)arg0 ;
-(NSUInteger)maxListCountForFolders;
-(NSUInteger)maxListCountForFoldersForIconModel:(id)arg0 ;
-(NSUInteger)maxRowCountForFavoriteTodayListForIconModel:(id)arg0 ;
-(NSUInteger)supportedGridSizeClassesForIconView:(id)arg0 ;
-(NSUInteger)supportedMedusaShortcutActionsForIconView:(id)arg0 ;
-(NSUInteger)viewMap:(id)arg0 maxRecycledViewsOfClass:(Class)arg1 ;
-(id)_archivedIntentForDataSource:(id)arg0 inIcon:(id)arg1 loadingIfNecessary:(BOOL)arg2 ;
-(id)_containerViewControllerForPersonDetailInteractionTargetingIconView:(id)arg0 ;
-(id)_createAppropriateRootViewControllerForRootFolder:(id)arg0 ;
-(id)_createRootFolderControllerForRootFolder:(id)arg0 ;
-(id)_createRootTableControllerForRootFolder:(id)arg0 ;
-(id)_currentFolderController;
-(id)_dumpRootFolderForStateCapture:(id)arg0 ;
-(id)_effectiveTodayViewController;
-(id)_folderControllerForIcon:(id)arg0 inLocation:(id)arg1 ;
-(id)_homeScreenContentViewForPersonDetailInteractionTargetingIconView:(id)arg0 ;
-(id)_iconForDescriptor:(id)arg0 ;
-(id)_intentForDataSource:(id)arg0 inIcon:(id)arg1 creatingIfNecessary:(BOOL)arg2 ;
-(id)_intentForWidget:(id)arg0 ofIcon:(id)arg1 creatingIfNecessary:(BOOL)arg2 ;
-(id)_makeCustomViewControllerForWidgetIcon:(id)arg0 dataSource:(id)arg1 location:(id)arg2 ;
-(id)_multiplexingViewControllerForIcon:(id)arg0 dataSource:(id)arg1 location:(id)arg2 withPriority:(NSUInteger)arg3 ;
-(id)_newIntentForDataSource:(id)arg0 inIcon:(id)arg1 ;
-(id)_personDetailInteractionContextForPersonURL:(id)arg0 iconView:(id)arg1 ;
-(id)_proposedFolderNameForGrabbedIcon:(id)arg0 recipientIcon:(id)arg1 ;
-(id)_rootFolderForRootViewControllerForRootFolder:(id)arg0 ;
-(id)_stackConfigurationForStackIcon:(id)arg0 ;
-(id)accessibilityTintColorForIconView:(id)arg0 ;
-(id)accessibilityTintColorForScreenRect:(struct CGRect )arg0 ;
-(id)addApplicationPlaceholders:(id)arg0 ;
-(id)addWidgetSheetIconImageCache;
-(id)addWidgetsToEachPage;
-(id)animator:(id)arg0 animationSettingsForOperation:(NSUInteger)arg1 childViewController:(id)arg2 ;
-(id)appIconImageCacheForRootFolderController:(id)arg0 ;
-(id)appPredictionsIconViewDisplayingIconView:(id)arg0 options:(NSUInteger)arg1 ;
-(id)applicationWithBundleIdentifier:(id)arg0 ;
-(id)backgroundViewForDockForRootFolderController:(id)arg0 ;
-(id)backgroundViewForEditingDoneButtonForRootFolderController:(id)arg0 ;
-(id)bestHomeScreenLocationForIcon:(id)arg0 ;
-(id)bestLocationForIcon:(id)arg0 ;
-(id)containerBundleIdentifierForDataSource:(id)arg0 ;
-(id)containerViewForPresentingContextMenuForIconView:(id)arg0 ;
-(id)createNewFolderFromRecipientIcon:(id)arg0 grabbedIcon:(id)arg1 ;
-(id)customImageViewControllerForIconView:(id)arg0 ;
-(id)debuggingActiveWidgetInfo;
-(id)defaultIconStateForIconModel:(id)arg0 ;
-(id)defaultWidgetsIconsRestoringRecordKeyForIcon:(id)arg0 ;
-(id)dequeueReusableIconViewOfClass:(Class)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)externalDockIconListViewForRootFolderController:(id)arg0 ;
-(id)fakeStatusBarForFolderController:(id)arg0 ;
-(id)firstIconViewForIcon:(id)arg0 ;
-(id)firstIconViewForIcon:(id)arg0 excludingLocations:(id)arg1 ;
-(id)firstIconViewForIcon:(id)arg0 inLocations:(id)arg1 ;
-(id)firstIconViewForIcon:(id)arg0 options:(NSUInteger)arg1 ;
-(id)firstIconViewWithOptions:(NSUInteger)arg0 iconPassingTest:(id)arg1 ;
-(id)firstPageLeafIdentifiersForIconModel:(id)arg0 ;
-(id)folderController:(id)arg0 accessibilityTintColorForScreenRect:(struct CGRect )arg1 ;
-(id)folderController:(id)arg0 iconListView:(id)arg1 customSpringAnimationBehaviorForDroppingItem:(id)arg2 ;
-(id)folderController:(id)arg0 iconListView:(id)arg1 iconDropSessionDidUpdate:(id)arg2 ;
-(id)folderController:(id)arg0 iconListView:(id)arg1 iconViewForDroppingIconDragItem:(id)arg2 proposedIconView:(id)arg3 ;
-(id)folderController:(id)arg0 iconListView:(id)arg1 previewForDroppingIconDragItem:(id)arg2 proposedPreview:(id)arg3 ;
-(id)folderControllerForFolder:(id)arg0 ;
-(id)folderControllerWantsToHideStatusBar:(id)arg0 animated:(BOOL)arg1 ;
-(id)homeScreenPreviewView;
-(id)homescreenIconAccessoryViewMap;
-(id)homescreenIconImageViewMap;
-(id)homescreenIconLabelAccessoryViewMap;
-(id)iconDragManager:(id)arg0 dragPreviewForIconView:(id)arg1 ;
-(id)iconListViewForIndexPath:(id)arg0 ;
-(id)iconLocationForList:(id)arg0 inFolder:(id)arg1 ofRootFolder:(id)arg2 ;
-(id)iconLocationForListsWithNonDefaultSizedIcons;
-(id)iconLocationForListsWithNonDefaultSizedIconsForRootFolderController:(id)arg0 ;
-(id)iconLocationForPrecachingImages;
-(id)iconModel:(id)arg0 customInsertionIndexPathForIcon:(id)arg1 inRootFolder:(id)arg2 ;
-(id)iconModel:(id)arg0 localizedFolderNameForDefaultDisplayName:(id)arg1 ;
-(id)iconView:(id)arg0 applicationShortcutItemsWithProposedItems:(id)arg1 ;
-(id)iconView:(id)arg0 backgroundViewForComponentsOfType:(NSInteger)arg1 ;
-(id)iconView:(id)arg0 configurationInteractionForDataSource:(id)arg1 ;
-(id)iconView:(id)arg0 containerViewControllerForConfigurationInteraction:(id)arg1 ;
-(id)iconView:(id)arg0 dragPreviewForItem:(id)arg1 session:(id)arg2 previewParameters:(id)arg3 ;
-(id)iconView:(id)arg0 homeScreenContentViewForConfigurationInteraction:(id)arg1 ;
-(id)iconView:(id)arg0 iconAccessoryViewOfClass:(Class)arg1 ;
-(id)iconView:(id)arg0 iconLabelAccessoryViewOfType:(NSInteger)arg1 ;
-(id)iconView:(id)arg0 labelImageWithParameters:(id)arg1 ;
-(id)iconViewDelegateForExternalDragForIconDragManager:(id)arg0 ;
-(id)iconViewForIcon:(id)arg0 location:(id)arg1 ;
-(id)iconViewForIcon:(id)arg0 location:(id)arg1 options:(NSUInteger)arg2 ;
-(id)iconViewMap;
-(id)iconViewQueryableForIconDragManager:(id)arg0 ;
-(id)iconViewShowingContextMenu;
-(id)iconViewWillCancelDrag:(id)arg0 ;
-(id)imageViewForIconView:(id)arg0 ;
-(id)init;
-(id)intentForWidget:(id)arg0 ofIcon:(id)arg1 ;
-(id)launchActionsForIconView:(id)arg0 ;
-(id)launchURLForIconView:(id)arg0 ;
-(id)localizedDefaultFolderName;
-(id)localizedFolderNameForDefaultDisplayName:(id)arg0 ;
-(id)nestingViewController:(id)arg0 interactionControllerForAnimationController:(id)arg1 ;
-(id)onboardingWidgetPreviewsForWidgetIcon:(id)arg0 ;
-(id)parallaxSettingsForComponentsOfIconView:(id)arg0 ;
-(id)prewarmModalWidgetIntroductionWithCompletion:(id)arg0 ;
-(id)promoteSuggestedWidget:(id)arg0 withinStack:(id)arg1 ;
-(id)reasonToDisallowInteractionOnIconView:(id)arg0 ;
-(id)reasonToDisallowTapOnIconView:(id)arg0 ;
-(id)recycledViewsContainerProviderForViewMap:(id)arg0 ;
-(id)replaceApplicationPlaceholderWithApplication:(id)arg0 ;
-(id)rootFolder:(id)arg0 shouldBounceIcon:(id)arg1 afterInsertingIcons:(id)arg2 forIconList:(id)arg3 inFolder:(id)arg4 ;
-(id)rootFolderController:(id)arg0 dragPreviewForIconView:(id)arg1 ;
-(id)rootFolderController:(id)arg0 draggedIconForStackConfigurationInteractionForIdentifier:(id)arg1 ;
-(id)rootFolderController:(id)arg0 promoteSuggestedWidget:(id)arg1 withinStack:(id)arg2 ;
-(id)rootFolderController:(id)arg0 vendorNameForAppWithBundleIdentifiers:(id)arg1 ;
-(id)rootFolderControllerForIconDragManager:(id)arg0 ;
-(id)rootFolderForIconDragManager:(id)arg0 ;
-(id)rootIconListAtIndex:(NSInteger)arg0 ;
-(id)rootViewForIconDragManager:(id)arg0 ;
-(id)screenSnapshotProviderForComponentsOfIconView:(id)arg0 ;
-(id)stackConfigurationInteractionForIconView:(id)arg0 ;
-(id)statusBarStyleRequestForFolderController:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)todayViewControllers;
-(id)viewControllerForPresentingViewControllers;
-(id)viewMap:(id)arg0 makeNewViewOfClass:(Class)arg1 ;
-(id)widgetBackgroundViewMap;
-(id)widgetIconWithWidgetExtensionIdentifiers:(id)arg0 widgetKinds:(id)arg1 sizeClass:(NSUInteger)arg2 ;
-(id)widgetInsertionRippleIconAnimatorForIcon:(id)arg0 iconListView:(id)arg1 withReferenceIconView:(id)arg2 ;
-(id)widgetStackViewController:(id)arg0 containerApplicationNameForDataSource:(id)arg1 ;
-(id)widgetStackViewController:(id)arg0 containerBundleIdentifierForDataSource:(id)arg1 ;
-(id)widgetStackViewController:(id)arg0 viewControllerForDataSource:(id)arg1 ;
-(id)windowForIconDragPreviewsForIconDragManager:(id)arg0 ;
-(struct CGRect )iconView:(id)arg0 contentBoundingRectForConfigurationInteraction:(id)arg1 ;
-(struct SBHIconGridSize )iconModel:(id)arg0 listGridSizeForFolderClass:(Class)arg1 ;
-(struct SBHIconGridSize )iconModel:(id)arg0 listWithNonDefaultSizedIconsGridSizeForFolderClass:(Class)arg1 ;
-(struct SBHIconGridSize )listGridSizeForFolderClass:(Class)arg0 ;
-(struct SBHIconGridSize )listWithNonDefaultSizedIconsGridSizeForFolderClass:(Class)arg0 ;
-(struct SBHIconGridSizeClassAreas )iconGridSizeClassAreas;
-(struct SBHIconGridSizeClassSizes )gridSizeClassSizesForIconModel:(id)arg0 ;
-(struct SBHIconGridSizeClassSizes )iconGridSizeClassSizes;
-(struct UIEdgeInsets )contentOverlayInsetsFromParentIfAvailableForFolderController:(id)arg0 ;
-(struct UIEdgeInsets )statusBarEdgeInsetsForFolderController:(id)arg0 ;
-(void)_addReasonToNotManageBackgroundAssertions:(id)arg0 ;
-(void)_addTouchedIconView:(id)arg0 ;
-(void)_animateFolderIcon:(id)arg0 open:(BOOL)arg1 location:(id)arg2 animated:(BOOL)arg3 withCompletion:(id)arg4 ;
-(void)_archiveConfiguration:(id)arg0 forDataSource:(id)arg1 ofIcon:(id)arg2 ;
-(void)_beginObservingLeafIconsInModel:(id)arg0 ;
-(void)_cancelAvocadoBackgroundCulling;
-(void)_cleanupAssertionForAvocadoHostViewController:(id)arg0 reason:(id)arg1 ;
-(void)_cleanupForClosingFolderAnimated:(BOOL)arg0 ;
-(void)_closeFolderController:(id)arg0 animated:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)_collectAvocadoHostViewControllersForWhenTodayViewControllerIsOccluded:(id)arg0 ;
-(void)_compactRootListsAfterFolderCloseWithAnimation:(BOOL)arg0 ;
-(void)_configureRootFolderConfiguration:(id)arg0 ;
-(void)_cullAvocadoBackgroundsForReason:(id)arg0 ;
-(void)_cullAvocadoBackgroundsForTimerFired:(id)arg0 ;
-(void)_cullAvocadoBackgroundsIfNeededForReason:(id)arg0 ;
-(void)_discardEndEditingTimerAndDontResetUntilReasonIsRemoved:(id)arg0 ;
-(void)_endObservingLeafIconsInModel:(id)arg0 ;
-(void)_enqueueTransitionName:(id)arg0 withHandler:(id)arg1 ;
-(void)_ensureRootFolderController;
-(void)_ensureWidgetIsVisibleForDebuggingWithDescriptor:(id)arg0 sizeClass:(NSInteger)arg1 ;
-(void)_finishResetRootIconLists;
-(void)_finishResetRootIconListsReusingPreviousControllers:(BOOL)arg0 ;
-(void)_folderDidFinishOpenClose:(BOOL)arg0 animated:(BOOL)arg1 success:(BOOL)arg2 ;
-(void)_handleRemovedDataSource:(id)arg0 ofIcon:(id)arg1 ;
-(void)_handleUpdatedConfiguration:(id)arg0 forDataSource:(id)arg1 ofIcon:(id)arg2 archiving:(BOOL)arg3 ;
-(void)_iconModelDidLayout:(id)arg0 ;
-(void)_iconModelDidReloadIcons:(id)arg0 ;
-(void)_iconModelWillLayout:(id)arg0 ;
-(void)_iconModelWillReloadIcons:(id)arg0 ;
-(void)_loadAndSaveDefaultIntentIfNecessaryForWidget:(id)arg0 ofIcon:(id)arg1 viewController:(id)arg2 ;
-(void)_markAvocadoHostViewControllerForDeferredCleanup:(id)arg0 ;
-(void)_noteUserIsInteractingWithIcons;
-(void)_ppt_forcibleCullAllAvocadoBackgroundAssertions;
-(void)_precacheDataForRootIcons;
-(void)_prepareToResetRootIconLists;
-(void)_processPendingDefaultIntents;
-(void)_reduceTransparencyStatusDidChange:(id)arg0 ;
-(void)_removeAllPreventAvocadoBackgroundAssertions:(id)arg0 ;
-(void)_removeAssertionsForNowOccludedTodayViewController:(id)arg0 ;
-(void)_removeReasonToNotManageBackgroundAssertions:(id)arg0 ;
-(void)_removeReasonToNotResetEndEditingTimer:(id)arg0 ;
-(void)_removeTouchedIconView:(id)arg0 ;
-(void)_resetHomescreenIconStateTo:(id)arg0 ;
-(void)_restartAvocadoBackgroundCullTimer;
-(void)_restartEditingEndTimer;
-(void)_scheduleAvocadoBackgroundCullingForReason:(id)arg0 ;
-(void)_scheduleAvocadoBackgroundCullingForReason:(id)arg0 interval:(CGFloat)arg1 ;
-(void)_scrollToLastIconPageForLibraryOverlayDismissalIfNecessary;
-(void)_setupApplicationShortcutItemsForPresentation:(id)arg0 ;
-(void)_setupStateCaptureHandleIfNeeded;
-(void)_sizeCategoryDidChange:(id)arg0 ;
-(void)_tryScrollToIconToRevealAnimated:(BOOL)arg0 ;
-(void)_updateAssertionsForWidgetStackViewController:(id)arg0 ;
-(void)_updateCaptureOnlyBackgroundViewForCustomIconImageViewController:(id)arg0 ;
-(void)_updateIconView:(id)arg0 forCustomIconImageViewController:(id)arg1 ;
-(void)_updateOverlayOcclusionForRootFolderController;
-(void)_updateOverscrollModalLibraryForScrollToPresented:(BOOL)arg0 ;
-(void)_updateVisibleIconsViewsForAllowableCloseBoxes;
-(void)_updateWidgetMultiplexingViewController:(id)arg0 forIconView:(id)arg1 ;
-(void)_willAnimateWidgetInsertion;
-(void)addAllEligibleIconsToIgnoredList;
-(void)addDebugIconOfSizeClass:(NSUInteger)arg0 toPage:(NSUInteger)arg1 coordinate:(struct SBIconCoordinate )arg2 ;
-(void)addDebugIconOfSizeClass:(NSUInteger)arg0 toPage:(NSUInteger)arg1 coordinate:(struct SBIconCoordinate )arg2 orientation:(NSInteger)arg3 ;
-(void)addDebugIconOfSizeClass:(NSUInteger)arg0 toPage:(NSUInteger)arg1 iconIndex:(NSUInteger)arg2 ;
-(void)addFolderPresentationObserver:(id)arg0 ;
-(void)addIconToIgnoredList:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)addIcons:(id)arg0 intoFolderIcon:(id)arg1 openFolderOnFinish:(BOOL)arg2 completion:(id)arg3 ;
-(void)addNewIconToDesignatedLocation:(id)arg0 options:(NSUInteger)arg1 ;
-(void)addNewIconsToDesignatedLocations:(id)arg0 saveIconState:(BOOL)arg1 ;
-(void)addPageStateObserver:(id)arg0 ;
-(void)addReasonToIgnoreUserPreferenceForAddingNewIconsToHomeScreen:(id)arg0 ;
-(void)addSuggestedActiveWidgetToStack:(id)arg0 ;
-(void)addWidgetStackToCurrentPage;
-(void)addWidgetStackWithIdentifiers:(id)arg0 toPage:(NSInteger)arg1 withSizeClass:(NSUInteger)arg2 ;
-(void)addWidgetWithIdentifier:(id)arg0 toPage:(NSInteger)arg1 withSizeClass:(NSUInteger)arg2 ;
-(void)addWidgets:(id)arg0 toGridPath:(id)arg1 overflowOptions:(NSUInteger)arg2 ;
// -(void)animateModalWidgetDiscoverabilityIntroductionWhenNeededWithPresentCompletion:(id)arg0 dismissCompletion:(unk)arg1  ;
-(void)animateToDefaultStateWithCompletionHandler:(id)arg0 ;
-(void)avocadoHostViewController:(id)arg0 requestsLaunchWithAction:(id)arg1 ;
-(void)beginStopUpdatingDefaultWidgetsBumpedIconRecord;
-(void)cancelAllDrags;
-(void)cancelAllFolderScrolling;
-(void)captureHomeScreenOnboardingSnapshot;
-(void)changeSizeOfWidgetIcon:(id)arg0 toSizeClass:(NSUInteger)arg1 ;
-(void)checkForInvalidCustomElements;
-(void)checkForInvalidWidgets;
-(void)clearHighlightedIcon;
-(void)clearHighlightedIcon:(id)arg0 ;
-(void)closeFolderAnimated:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)configureIconView:(id)arg0 forIcon:(id)arg1 ;
-(void)dealloc;
-(void)descriptorsDidChangeForDescriptorProvider:(id)arg0 ;
-(void)didDeleteIconState:(id)arg0 ;
-(void)didSaveIconState:(id)arg0 ;
-(void)disableUserInteractionForWidgetDiscoverability;
-(void)dismissFolderPageManagementUI;
-(void)dismissIconContextMenu;
-(void)dismissIconShareSheets;
-(void)dismissLibraryOverlayForIconDragManager:(id)arg0 ;
-(void)dismissModalInteractions;
-(void)dismissModalInteractionsImmediately;
-(void)dismissTodayOverlayForIconDragManager:(id)arg0 ;
-(void)displayPronouncedContainerView;
-(void)displayPronouncedContainerViewVisibility:(BOOL)arg0 isVertical:(BOOL)arg1 ;
-(void)editingDidChangeWithFeedbackBehavior:(id)arg0 ;
-(void)enableUserInteractionForWidgetDiscoverability;
-(void)endStopUpdatingDefaultWidgetsBumpedIconRecord;
-(void)enumerateAppPredictionViewControllersInIconLocationGroup:(id)arg0 withOptions:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateAppPredictionViewControllersWithIconViewsInIconLocationGroup:(id)arg0 withOptions:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateDisplayedIconViewsUsingBlock:(id)arg0 ;
-(void)enumerateEditableViewControllersUsingBlock:(id)arg0 ;
-(void)enumerateIconViewQueryableChildrenUsingBlock:(id)arg0 ;
-(void)enumerateIconViewQueryableChildrenWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateIconViewsDisplayedInAppPredictionsInLocationGroup:(id)arg0 withOptions:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateKnownIconViewsUsingBlock:(id)arg0 ;
-(void)enumeratePageStateObserversUsingBlock:(id)arg0 ;
-(void)finishInstallingIconAnimated:(BOOL)arg0 ;
-(void)folder:(id)arg0 didAddIcons:(id)arg1 removedIcons:(id)arg2 ;
-(void)folder:(id)arg0 didReplaceIcon:(id)arg1 withIcon:(id)arg2 ;
-(void)folder:(id)arg0 listHiddenDidChange:(id)arg1 ;
-(void)folderController:(id)arg0 didBeginEditingTitle:(id)arg1 ;
-(void)folderController:(id)arg0 didEndEditingTitle:(id)arg1 ;
-(void)folderController:(id)arg0 draggedIconShouldDropFromListView:(id)arg1 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 iconDragItem:(id)arg2 willAnimateDropWithAnimator:(id)arg3 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 iconDropSession:(id)arg2 didPauseAtLocation:(struct CGPoint )arg3 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 iconDropSessionDidEnter:(id)arg2 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 iconDropSessionDidExit:(id)arg2 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 performIconDrop:(id)arg2 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg2 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 willUseIconView:(id)arg2 forDroppingIconDragItem:(id)arg3 ;
-(void)folderController:(id)arg0 willCreateInnerFolderControllerWithConfiguration:(id)arg1 ;
-(void)folderController:(id)arg0 willRemoveFakeStatusBar:(id)arg1 ;
-(void)folderController:(id)arg0 willUseIconTransitionAnimator:(id)arg1 forOperation:(NSInteger)arg2 onViewController:(id)arg3 animated:(BOOL)arg4 ;
-(void)folderControllerDidEndScrolling:(id)arg0 ;
-(void)folderControllerShouldBeginEditing:(id)arg0 withHaptic:(BOOL)arg1 ;
-(void)folderControllerShouldEndEditing:(id)arg0 ;
-(void)folderControllerWillBeginScrolling:(id)arg0 ;
-(void)folderControllerWillClose:(id)arg0 ;
-(void)folderControllerWillOpen:(id)arg0 ;
-(void)getListView:(*id)arg0 folder:(*id)arg1 relativePath:(*id)arg2 forIndexPath:(id)arg3 ;
-(void)getStatistics:(struct SBHIconManagerStatistics *)arg0 ;
-(void)hideSiriSuggestionOnWidgetFromStack:(id)arg0 ;
-(void)hideSuggestedWidgetFromStack:(id)arg0 ;
-(void)highlightIconView:(id)arg0 ;
-(void)icon:(id)arg0 touchEnded:(BOOL)arg1 ;
-(void)icon:(id)arg0 touchMoved:(id)arg1 ;
-(void)iconCloseBoxTapped:(id)arg0 ;
-(void)iconDragManager:(id)arg0 didAddItemsToIconDragWithUniqueIdentifier:(id)arg1 numberOfDraggedItems:(NSUInteger)arg2 ;
-(void)iconDragManager:(id)arg0 didEndDragOriginatingFromIconView:(id)arg1 userDidBeginDrag:(BOOL)arg2 lastUserInteractionDate:(id)arg3 ;
-(void)iconDragManager:(id)arg0 didEndIconDragWithUniqueIdentifier:(id)arg1 numberOfDraggedItems:(NSUInteger)arg2 ;
-(void)iconDragManager:(id)arg0 iconDropSessionDidEnter:(id)arg1 ;
-(void)iconDragManager:(id)arg0 wantsAnimatedRemovalOfIcon:(id)arg1 ;
-(void)iconDragManager:(id)arg0 willBeginIconDragWithUniqueIdentifier:(id)arg1 numberOfDraggedItems:(NSUInteger)arg2 ;
-(void)iconDragManagerIconDraggingDidChange:(id)arg0 ;
-(void)iconDragManagerMultiItemIconDraggingDidChange:(id)arg0 ;
-(void)iconModel:(id)arg0 didAddIcon:(id)arg1 ;
-(void)iconModel:(id)arg0 launchIcon:(id)arg1 fromLocation:(id)arg2 context:(id)arg3 ;
-(void)iconModel:(id)arg0 willRemoveIcon:(id)arg1 ;
-(void)iconTapped:(id)arg0 ;
-(void)iconTouchBegan:(id)arg0 ;
-(void)iconView:(id)arg0 configurationDidEndWithInteraction:(id)arg1 ;
-(void)iconView:(id)arg0 configurationDidUpdateWithInteraction:(id)arg1 ;
-(void)iconView:(id)arg0 configurationWillBeginWithInteraction:(id)arg1 ;
-(void)iconView:(id)arg0 didChangeCustomImageViewController:(id)arg1 ;
-(void)iconView:(id)arg0 didEndDragSession:(id)arg1 withOperation:(NSUInteger)arg2 ;
-(void)iconView:(id)arg0 dragLiftAnimationDidChangeDirection:(NSInteger)arg1 ;
-(void)iconView:(id)arg0 item:(id)arg1 willAnimateDragCancelWithAnimator:(id)arg2 ;
-(void)iconView:(id)arg0 session:(id)arg1 willEndWithOperation:(NSUInteger)arg2 ;
-(void)iconView:(id)arg0 willAddDragItems:(id)arg1 toSession:(id)arg2 ;
-(void)iconView:(id)arg0 willAnimateDragLiftWithAnimator:(id)arg1 session:(id)arg2 ;
-(void)iconView:(id)arg0 willRemoveIconAccessoryView:(id)arg1 ;
-(void)iconView:(id)arg0 willRemoveIconImageView:(id)arg1 ;
-(void)iconView:(id)arg0 willRemoveIconLabelAccessoryView:(id)arg1 ;
-(void)iconView:(id)arg0 willUseContextMenuStyle:(id)arg1 ;
-(void)iconView:(id)arg0 willUsePreviewForCancelling:(id)arg1 targetIconView:(id)arg2 ;
-(void)iconViewShortcutsPresentationDidCancel:(id)arg0 ;
-(void)iconViewShortcutsPresentationWillBegin:(id)arg0 ;
-(void)iconViewShortcutsPresentationWillFinish:(id)arg0 ;
-(void)iconViewWasDiscarded:(id)arg0 ;
-(void)iconViewWasRecycled:(id)arg0 ;
-(void)iconViewWillBeginDrag:(id)arg0 session:(id)arg1 ;
-(void)immediateDownloadSpringBoardHomeTrialSettingsWhenNeeded;
-(void)informUsageMonitorOfVisibleIconRectsForTodayViewController:(id)arg0 ;
-(void)insertIcons:(id)arg0 intoWidgetStack:(id)arg1 ;
-(void)invalidateOnboardingWidgetPreviewViewControllers;
-(void)launchFromIconView:(id)arg0 withActions:(id)arg1 ;
-(void)layoutIconListsWithAnimationType:(NSInteger)arg0 ;
-(void)layoutIconListsWithAnimationType:(NSInteger)arg0 duration:(CGFloat)arg1 forceRelayout:(BOOL)arg2 ;
-(void)layoutIconListsWithAnimationType:(NSInteger)arg0 forceRelayout:(BOOL)arg1 ;
-(void)leafIcon:(id)arg0 didRemoveIconDataSource:(id)arg1 ;
-(void)libraryViewController:(id)arg0 didAcceptDrop:(id)arg1 ;
-(void)libraryViewController:(id)arg0 willDismissSearchController:(id)arg1 ;
-(void)libraryViewController:(id)arg0 willLaunchIcon:(id)arg1 fromLocation:(id)arg2 ;
-(void)libraryViewController:(id)arg0 willPresentSearchController:(id)arg1 ;
-(void)minimumHomeScreenScaleDidChange;
-(void)modalInteractionDidEnd:(id)arg0 ;
-(void)modalInteractionWillBegin:(id)arg0 ;
-(void)moveIconToHiddenPage:(id)arg0 ;
-(void)multiplexingManager:(id)arg0 willRemoveViewController:(id)arg1 forIdentifier:(id)arg2 ;
-(void)multiplexingWrapperViewControllerDidChangeGridAlignment:(id)arg0 ;
-(void)multiplexingWrapperViewControllerWillChangeGridAlignment:(id)arg0 ;
-(void)nestingViewController:(id)arg0 willPerformOperation:(NSInteger)arg1 onViewController:(id)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)noteFloatingDockWillAnimateChangeInHeight;
-(void)noteFloatingDockWillChangeHeight;
-(void)noteIconStateChangedExternally;
-(void)noteIconViewWillZoomDown:(id)arg0 ;
-(void)noteInterfaceOrientationChanged;
-(void)openFolderIcon:(id)arg0 location:(id)arg1 animated:(BOOL)arg2 withCompletion:(id)arg3 ;
-(void)organizeAllIconsAcrossPagesWithPageCount:(NSUInteger)arg0 ;
-(void)organizeAllIconsIntoFoldersWithPageCount:(NSUInteger)arg0 ;
-(void)performAfterAllIconTouchesFinishedUsingBlock:(id)arg0 ;
-(void)performAfterCachingWidgetIntentsUsingBlock:(id)arg0 ;
-(void)performAfterIconContextMenuDismissesUsingBlock:(id)arg0 ;
-(void)popExpandedIconAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)popExpandedIconFromLocation:(id)arg0 interactionContext:(id)arg1 animated:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)popModalInteraction;
-(void)popToCurrentRootIconList;
-(void)popToCurrentRootIconListWhenPossible;
-(void)presentLeadingCustomViewWithCompletion:(id)arg0 ;
-(void)presentLibraryOverlayForIconDragManager:(id)arg0 ;
-(void)presentStatistics;
-(void)presentTodayOverlay;
-(void)presentTodayOverlayForIconDragManager:(id)arg0 ;
-(void)prototypeSetDefaultSecondPageWidgetIcons;
-(void)pushExpandedIcon:(id)arg0 location:(id)arg1 animated:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)randomizeAllIconsAcrossPagesWithPageCount:(NSUInteger)arg0 ;
-(void)recycleIconView:(id)arg0 ;
-(void)refreshAppPredictionBadges;
-(void)removeAllIconAnimations;
-(void)removeAllWidgetIcons;
-(void)removeFirstWidgetFromRootFolderListAtIndex:(NSUInteger)arg0 ;
-(void)removeFolderPresentationObserver:(id)arg0 ;
-(void)removeIcon:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)removePageStateObserver:(id)arg0 ;
-(void)removeReasonToIgnoreUserPreferenceForAddingNewIconsToHomeScreen:(id)arg0 ;
-(void)removeWidget:(id)arg0 fromStack:(id)arg1 ;
-(void)removeWidgetDiscoverabilityContainerViewsAndPopoverWhenNeeded:(BOOL)arg0 ;
-(void)removeWidgetIconsFromHomeScreen;
-(void)replaceApplicationPlaceholderWithApplication:(id)arg0 completionHandler:(id)arg1 ;
-(void)replaceFolderIcon:(id)arg0 byContainedIcon:(id)arg1 animated:(BOOL)arg2 ;
-(void)replaceHomescreenWithWidgets;
-(void)resetDefaultWidgetsUndoInfo;
-(void)resetRootIconLists;
-(void)revealIcon:(id)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)rootFolder:(id)arg0 wantsToDoPageHidingEducationWithCompletion:(id)arg1 ;
-(void)rootFolderController:(id)arg0 didChangeEffectiveSidebarVisibilityProgress:(CGFloat)arg1 ;
-(void)rootFolderController:(id)arg0 didChangeSidebarVisibilityProgress:(CGFloat)arg1 ;
-(void)rootFolderController:(id)arg0 didDismissPageManagementWithLayoutManager:(id)arg1 context:(id)arg2 ;
-(void)rootFolderController:(id)arg0 didDismissWidgetEditingViewController:(id)arg1 ;
-(void)rootFolderController:(id)arg0 didEndOverscrollOnFirstPageWithVelocity:(CGFloat)arg1 translation:(CGFloat)arg2 ;
-(void)rootFolderController:(id)arg0 didEndOverscrollOnLastPageWithVelocity:(CGFloat)arg1 translation:(CGFloat)arg2 ;
-(void)rootFolderController:(id)arg0 didOverscrollOnFirstPageByAmount:(CGFloat)arg1 ;
-(void)rootFolderController:(id)arg0 didOverscrollOnLastPageByAmount:(CGFloat)arg1 ;
-(void)rootFolderController:(id)arg0 didPresentWidgetEditingViewController:(id)arg1 ;
-(void)rootFolderController:(id)arg0 handleInsertionForWidgetIcon:(id)arg1 withReferenceIconView:(id)arg2 fromPresenter:(id)arg3 dismissViewControllerHandler:(id)arg4 ;
-(void)rootFolderController:(id)arg0 noteDidRemoveSuggestedWidgetIcon:(id)arg1 ;
-(void)rootFolderController:(id)arg0 noteDragItemWasConsumedExternallyForDropSession:(id)arg1 ;
-(void)rootFolderController:(id)arg0 prepareAddSheetViewController:(id)arg1 ;
-(void)rootFolderController:(id)arg0 statusBarInsetsDidChange:(struct UIEdgeInsets )arg1 ;
-(void)rootFolderController:(id)arg0 wantsToAdjustLeadingCustomContentForEdgeBounceForScrollOffset:(struct CGPoint )arg1 ;
-(void)rootFolderController:(id)arg0 willDismissPageManagementUsingAnimator:(id)arg1 context:(id)arg2 ;
-(void)rootFolderController:(id)arg0 willDismissWidgetEditingViewController:(id)arg1 ;
-(void)rootFolderController:(id)arg0 willPresentPageManagementWithLayoutManager:(id)arg1 animator:(id)arg2 context:(id)arg3 ;
-(void)rootFolderController:(id)arg0 willPresentWidgetEditingViewController:(id)arg1 ;
-(void)rootFolderController:(id)arg0 willUsePropertyAnimator:(id)arg1 toTransitionToState:(NSInteger)arg2 ;
-(void)rootFolderController:(id)arg0 willUseTransitionContext:(id)arg1 toTransitionToState:(NSInteger)arg2 ;
-(void)rootFolderControllerDidAcceptWidgetIntroduction:(id)arg0 ;
-(void)rootFolderControllerDidEditWidgetIntroduction:(id)arg0 ;
-(void)rootFolderControllerDidUndoWidgetIntroduction:(id)arg0 ;
-(void)rootFolderControllerViewDidDisappear:(id)arg0 ;
-(void)rootFolderControllerViewWillAppear:(id)arg0 ;
-(void)rootFolderControllerWillAnimateWidgetInsertionForStackConfigurationInteraction:(id)arg0 ;
-(void)rootFolderPageStateProvider:(id)arg0 didContinueTransitionToState:(NSInteger)arg1 progress:(CGFloat)arg2 ;
-(void)rootFolderPageStateProvider:(id)arg0 didEndTransitionFromState:(NSInteger)arg1 toState:(NSInteger)arg2 successfully:(BOOL)arg3 ;
-(void)rootFolderPageStateProvider:(id)arg0 willBeginTransitionToState:(NSInteger)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 ;
-(void)rootFolderPageStateProvider:(id)arg0 willEndTransitionToState:(NSInteger)arg1 successfully:(BOOL)arg2 ;
-(void)runDownloadingIconTest;
-(void)runRemoveAndRestoreIconTest;
-(void)saveOriginalIconStateForWidgetDiscoverability;
-(void)scrollToDefaultWidgets;
-(void)scrollToIconListContainingIcon:(id)arg0 animate:(BOOL)arg1 ;
-(void)setIdleModeText:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)setupHomeScreenForWidgetScrollPerformanceTest;
-(void)shuffleWidgetStackForTestRecipe;
-(void)tearDownAndResetRootIconLists;
-(void)todayViewController:(id)arg0 contentVisibilityDidChange:(NSUInteger)arg1 ;
-(void)todayViewController:(id)arg0 contentVisibilityWillChange:(NSUInteger)arg1 ;
-(void)todayViewControllerDidAppear:(id)arg0 ;
-(void)todayViewControllerDidDisappear:(id)arg0 ;
-(void)todayViewControllerDidEndScrolling:(id)arg0 ;
-(void)todayViewControllerWillDisappear:(id)arg0 ;
-(void)toggleSuggestedWidgetInStackForTestRecipe;
-(void)tryScrollToIconToRevealAnimated:(BOOL)arg0 ;
-(void)undoDefaultTVWidget;
-(void)undoDefaultWidgets:(BOOL)arg0 ;
-(void)uninstallIcon:(id)arg0 ;
-(void)uninstallIcon:(id)arg0 animate:(BOOL)arg1 ;
-(void)uninstallIcon:(id)arg0 animate:(BOOL)arg1 completion:(id)arg2 ;
-(void)unscatterAnimated:(BOOL)arg0 afterDelay:(CGFloat)arg1 withCompletion:(id)arg2 ;
-(void)updateFloatingDockMaximumEditingIconSize;
-(void)updateIconViewAccessoryVisibility;
-(void)updatePronouncedContainerViewVisibility:(BOOL)arg0 vertical:(BOOL)arg1 ;
-(void)updateVisibleIconsToShowLeafIcons:(id)arg0 hideLeafIcons:(id)arg1 forceRelayout:(BOOL)arg2 ;
-(void)updateWidgetDiscoverabilityUserPreferencesByDeletingWidget:(id)arg0 ;
-(void)widgetStackViewController:(id)arg0 didActivateDataSource:(id)arg1 fromUserInteraction:(BOOL)arg2 ;
-(void)widgetStackViewController:(id)arg0 didFinishUsingBackgroundView:(id)arg1 ;
-(void)widgetStackViewController:(id)arg0 didRemoveViewController:(id)arg1 ;
-(void)widgetStackViewControllerWidgetCountDidChange:(id)arg0 ;
-(void)widgetViewControllerUsesSystemBackgroundMaterialDidChange:(id)arg0 ;


@end


#endif