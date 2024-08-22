// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBTODAYVIEWCONTROLLER_H
#define SBTODAYVIEWCONTROLLER_H

@class UIViewController, NSHashTable, NSMutableDictionary, UIView, NSString, WGWidgetListHeaderView, SBHDateHeaderViewController, UITapGestureRecognizer, NSArray, UILabel, MTMaterialView, SBIconListView, NSLayoutConstraint, SBHIconManager, WGMajorListViewController, _UILegibilitySettings, NSMapTable, NSSet, SBRootFolder, UIScrollView, NSMutableArray, SBHScrollableIconViewInteraction, SBFTouchPassThroughView, UIStackView, NSMutableSet, SBViewControllerTransitionContext, SBHWidgetSettings;
@protocol SBUICoronaAnimationControllerParticipant, SBIconListLayoutObserver, SBIconViewObserver, SBHScrollableIconViewContaining, UIScrollViewDelegate, SBIconListModelObserver, SBIconListViewDragDelegate, WGMajorListViewControllerDelegate, WGWidgetIconAnimationExtraViewsProviding, PTSettingsKeyObserver, SBTodayViewSpotlightPresenterDelegate, CSExternalBehaviorProviding, UIGestureRecognizerDelegate, BSDescriptionProviding, SBUISpotlightInitiating, SBHLegibility, SBIconViewQuerying, SBIconLocationPresenting, SBFIdleTimerBehaviorProviding, SBHOccludable, SBHTodayViewController, SBFOverlayObserving, BSInvalidatable, SBTodayViewControllerDelegate, SBFOverlayDismissalDelegate, SBIconViewProviding, SBIconListLayoutProvider;


#import "SBTodayIconListLayoutDelegate.h"
#import "SBTodayKeepOnHomeScreenPlatterView.h"
#import "SBTodayViewSpotlightPresenter.h"

@interface SBTodayViewController : UIViewController <SBUICoronaAnimationControllerParticipant, SBIconListLayoutObserver, SBIconViewObserver, SBHScrollableIconViewContaining, UIScrollViewDelegate, SBIconListModelObserver, SBIconListViewDragDelegate, WGMajorListViewControllerDelegate, WGWidgetIconAnimationExtraViewsProviding, PTSettingsKeyObserver, SBTodayViewSpotlightPresenterDelegate, CSExternalBehaviorProviding, UIGestureRecognizerDelegate, BSDescriptionProviding, SBUISpotlightInitiating, SBHLegibility, SBIconViewQuerying, SBIconLocationPresenting, SBFIdleTimerBehaviorProviding, SBHOccludable, SBHTodayViewController, SBFOverlayObserving>

 {
    NSHashTable *_iconViewsForbiddenFromEditing;
    NSHashTable *_keepStaticAssertions;
    id<BSInvalidatable> *_stateCapture;
}


@property (retain, nonatomic) NSMutableDictionary *cancelTouchesAssertionsByLegacyWidgetID; // ivar: _cancelTouchesAssertionsByLegacyWidgetID
@property (retain, nonatomic) NSMutableDictionary *cancelTouchesAssertionsByWidgetID; // ivar: _cancelTouchesAssertionsByWidgetID
@property (retain, nonatomic) UIView *carouselReferenceForLegacyWidgetListView; // ivar: _carouselReferenceForLegacyWidgetListView
@property (weak, nonatomic) UIViewController *containerViewController; // ivar: _containerViewController
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) CGFloat customIdleExpirationTimeout;
@property (readonly, nonatomic) CGFloat customIdleWarningTimeout;
@property (retain, nonatomic) WGWidgetListHeaderView *dateHeaderView; // ivar: _dateHeaderView
@property (retain, nonatomic) SBHDateHeaderViewController *dateHeaderViewController; // ivar: _dateHeaderViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBTodayViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITapGestureRecognizer *dismissTapGestureRecognizer; // ivar: _dismissTapGestureRecognizer
@property (weak, nonatomic) NSObject<SBFOverlayDismissalDelegate> *dismissalDelegate; // ivar: _dismissalDelegate
@property (nonatomic) BOOL enableEditingModeWhenScrollEnds; // ivar: _enableEditingModeWhenScrollEnds
@property (readonly, copy, nonatomic) NSArray *extraViews;
@property (readonly, copy, nonatomic) NSArray *extraViewsContainers;
@property (retain, nonatomic) UIView *favoriteListContainerView; // ivar: _favoriteListContainerView
@property (retain, nonatomic) UILabel *favoriteListInstructionLabel; // ivar: _favoriteListInstructionLabel
@property (retain, nonatomic) SBTodayIconListLayoutDelegate *favoriteListLayoutDelegate; // ivar: _favoriteListLayoutDelegate
@property (retain, nonatomic) MTMaterialView *favoriteListPlatterView; // ivar: _favoriteListPlatterView
@property (retain, nonatomic) SBIconListView *favoriteListView; // ivar: _favoriteListView
@property (retain, nonatomic) NSLayoutConstraint *favoriteListWithLargeWidgetMinimumHeightConstraint; // ivar: _favoriteListWithLargeWidgetMinimumHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *favoriteListWithSmallOrMediumWidgetsMinimumHeightConstraint; // ivar: _favoriteListWithSmallOrMediumWidgetsMinimumHeightConstraint
@property (readonly, nonatomic) CGFloat firstWidgetTopOffset; // ivar: _firstWidgetTopOffset
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *headerContainerView; // ivar: _headerContainerView
@property (nonatomic, getter=isHeaderVisible) BOOL headerVisible; // ivar: _headerVisible
@property (weak, nonatomic) SBHIconManager *iconManager; // ivar: _iconManager
@property (retain, nonatomic) NSObject<SBIconViewProviding> *iconViewProvider; // ivar: _iconViewProvider
@property (readonly, nonatomic) NSInteger idleTimerDuration;
@property (readonly, nonatomic) NSInteger idleTimerMode;
@property (readonly, nonatomic) NSInteger idleWarnMode;
@property (nonatomic) BOOL isOverlayViewDisappearing; // ivar: _isOverlayViewDisappearing
@property (retain, nonatomic) SBTodayKeepOnHomeScreenPlatterView *keepOnHomeScreenPlatterView; // ivar: _keepOnHomeScreenPlatterView
@property (nonatomic) CGFloat lastRootSideBarContentOffset; // ivar: _lastRootSideBarContentOffset
@property (retain, nonatomic) UIView *legacyListContainerView; // ivar: _legacyListContainerView
@property (retain, nonatomic) MTMaterialView *legacyListPlatterView; // ivar: _legacyListPlatterView
@property (readonly, nonatomic) WGMajorListViewController *legacyWidgetListViewController; // ivar: _legacyWidgetListViewController
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (retain, nonatomic) SBTodayIconListLayoutDelegate *listLayoutDelegate; // ivar: _listLayoutDelegate
@property (retain, nonatomic) NSObject<SBIconListLayoutProvider> *listLayoutProvider; // ivar: _listLayoutProvider
@property (retain, nonatomic) SBIconListView *listView; // ivar: _listView
@property (retain, nonatomic) NSLayoutConstraint *listViewMinimumHeightConstraint; // ivar: _listViewMinimumHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *listViewMinimumWidthConstraint; // ivar: _listViewMinimumWidthConstraint
@property (nonatomic) NSInteger location; // ivar: _location
@property (readonly, nonatomic) NSInteger notificationBehavior;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (nonatomic, getter=isOccluded) BOOL occluded; // ivar: _occluded
@property (retain, nonatomic) NSMapTable *onScreenIconIndexRangeByIconListView; // ivar: _onScreenIconIndexRangeByIconListView
@property (readonly, nonatomic) NSInteger participantState;
@property (readonly, copy, nonatomic) NSSet *presentedIconLocations;
@property (readonly, nonatomic) NSInteger proximityDetectionMode;
@property (readonly, nonatomic) NSUInteger restrictedCapabilities;
@property (retain, nonatomic) SBRootFolder *rootFolder; // ivar: _rootFolder
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (retain, nonatomic) NSMutableArray *scrollViewDidEndScrollingHandlers; // ivar: _scrollViewDidEndScrollingHandlers
@property (retain, nonatomic) NSLayoutConstraint *scrollViewLeadingConstraint; // ivar: _scrollViewLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *scrollViewTrailingConstraint; // ivar: _scrollViewTrailingConstraint
@property (nonatomic) CGPoint scrollingBeginningOffset; // ivar: _scrollingBeginningOffset
@property (retain, nonatomic) SBHScrollableIconViewInteraction *scrollingInteraction; // ivar: _scrollingInteraction
@property (readonly, nonatomic) NSInteger scrollingStrategy;
@property (readonly, nonatomic) CGFloat searchBarTopOffset; // ivar: _searchBarTopOffset
@property (readonly, nonatomic) BOOL shouldAnimateFirstTwoViewsAsOne;
@property (readonly, nonatomic) BOOL shouldAnimateLastTwoViewsAsOne;
@property (retain, nonatomic) SBFTouchPassThroughView *spotlightContainerView; // ivar: _spotlightContainerView
@property (retain, nonatomic) SBTodayViewSpotlightPresenter *spotlightPresenter; // ivar: _spotlightPresenter
@property (nonatomic, getter=isSpotlightVisible) BOOL spotlightVisible; // ivar: _spotlightVisible
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (readonly, nonatomic) NSLayoutConstraint *stackViewToScrollViewBottomConstraint; // ivar: _stackViewToScrollViewBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *stackViewToScrollViewLeadingConstraint; // ivar: _stackViewToScrollViewLeadingConstraint
@property (readonly, nonatomic) NSLayoutConstraint *stackViewToScrollViewTopConstraint; // ivar: _stackViewToScrollViewTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *stackViewToScrollViewTrailingConstraint; // ivar: _stackViewToScrollViewTrailingConstraint
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressesEditingStateForListViews; // ivar: _suppressesEditingStateForListViews
@property (retain, nonatomic) NSMutableSet *suspendVisibleRowRangeUpdatesReasons; // ivar: _suspendVisibleRowRangeUpdatesReasons
@property (retain, nonatomic) SBViewControllerTransitionContext *transitionContext; // ivar: _transitionContext
@property (retain, nonatomic) NSHashTable *viewControllerAppearStateOverrideAssertions; // ivar: _viewControllerAppearStateOverrideAssertions
@property (nonatomic) BOOL visuallyRevealedPriorToEditingIcons; // ivar: _visuallyRevealedPriorToEditingIcons
@property (retain, nonatomic) NSMutableSet *widgetHitTestingDisabledReasons; // ivar: _widgetHitTestingDisabledReasons
@property (retain, nonatomic) SBHWidgetSettings *widgetSettings; // ivar: _widgetSettings


-(BOOL)_canShowWhileLocked;
-(BOOL)_isOverridingViewControllerAppearanceStateToRemainDisappeared;
-(BOOL)_isSidebarPinned;
-(BOOL)_isViewVisibleInScrollViewSpace:(id)arg0 ;
-(BOOL)_isWidgetHitTestingDisabled;
-(BOOL)_shouldIconViewForbidJiggling:(id)arg0 ;
-(BOOL)_shouldKeepIconImageViewControllersStatic;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)iconListView:(id)arg0 canHandleIconDropSession:(id)arg1 ;
-(BOOL)iconListView:(id)arg0 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg1 onIconView:(id)arg2 ;
-(BOOL)isDisplayingIcon:(id)arg0 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocations:(id)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg0 ;
-(BOOL)isDisplayingIconView:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isPresentingIconLocation:(id)arg0 ;
-(BOOL)isWidgetListViewControllerEditable:(id)arg0 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg0 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)spotlightPresenterAllowsPullToSearch:(id)arg0 ;
-(CGFloat)searchBarTopOffsetForSpotlightPresenter:(id)arg0 ;
-(CGFloat)todayViewControllerLocationForSpotlightPresenter:(id)arg0 ;
-(NSUInteger)_indexForNextWidgetInNonFavoriteListViewAfterContentOffset:(CGFloat)arg0 ;
-(id)_majorScrollView;
-(id)_platterViewAtLocation:(struct CGPoint )arg0 ;
-(id)_widgetIconViewAtLocation:(struct CGPoint )arg0 ;
-(id)beginOverridingViewControllerAppearanceStateToRemainDisappearedForReason:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)editingMaterialViewForWidgetListViewController:(id)arg0 ;
-(id)favoriteListModel;
-(id)firstIconViewForIcon:(id)arg0 ;
-(id)firstIconViewForIcon:(id)arg0 excludingLocations:(id)arg1 ;
-(id)firstIconViewForIcon:(id)arg0 inLocations:(id)arg1 ;
-(id)iconListView:(id)arg0 customSpringAnimationBehaviorForDroppingItem:(id)arg1 ;
-(id)iconListView:(id)arg0 iconDropSessionDidUpdate:(id)arg1 ;
-(id)iconListView:(id)arg0 iconViewForDroppingIconDragItem:(id)arg1 proposedIconView:(id)arg2 ;
-(id)iconListView:(id)arg0 previewForDroppingIconDragItem:(id)arg1 proposedPreview:(id)arg2 ;
-(id)iconViewForIcon:(id)arg0 location:(id)arg1 ;
-(id)initWithListLayoutProvider:(id)arg0 iconViewProvider:(id)arg1 legacyWidgetListViewController:(id)arg2 location:(NSInteger)arg3 ;
-(id)keepIconImageViewControllersStaticForReason:(id)arg0 ;
-(id)listModel;
-(id)parentViewControllerForSpotlightPresenter:(id)arg0 ;
-(id)scrollViewForWidgetListViewController:(id)arg0 ;
-(id)spotlightHeaderAcquiringViewController;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CGPoint )_interactiveSpotlightDraggingBeginPoint;
-(struct CGRect )_cellFrameInScrollBoundsForCell:(id)arg0 ;
-(struct CGRect )_suggestedTodayViewFrameForBounds:(struct CGRect )arg0 ;
-(struct CGSize )_iconSpacingForIconListViews;
-(struct CGSize )widgetListViewController:(id)arg0 sizeForInterfaceOrientation:(NSInteger)arg1 ;
-(struct UIEdgeInsets )_effectiveLayoutInsets;
-(struct UIEdgeInsets )visibleContainerInsets;
-(void)_autoFillInFavoriteListViewIfNecessary;
-(void)_beginAppearanceTransitionForChildViewControllersToVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_beginDisablingWidgetHitTestingForReason:(id)arg0 ;
-(void)_beginSuspendingVisibleRowRangeUpdatesForReason:(id)arg0 ;
-(void)_cancelTouchesForAllWidgets;
-(void)_cancelTouchesForHitTestedWidgetInScrollView:(id)arg0 ;
-(void)_cancelTouchesForWidgetIconView:(id)arg0 ;
-(void)_cancelTouchesForWidgetPlatterView:(id)arg0 ;
-(void)_cleanupViews;
-(void)_dismissTodayViewOverlay:(id)arg0 ;
-(void)_endAppearanceTransitionForChildViewControllersToVisible:(BOOL)arg0 ;
-(void)_endDisablingWidgetHitTestingForReason:(id)arg0 ;
-(void)_endSuspendingVisibleRowRangeUpdatesForReason:(id)arg0 ;
-(void)_enumerateWidgetIconViewsUsingBlock:(id)arg0 ;
-(void)_enumerateWidgetPlatterViewsUsingBlock:(id)arg0 ;
-(void)_enumerateWidgetWrapperViewsUsingBlock:(id)arg0 ;
-(void)_invalidateAllCancelTouchesAssertions;
-(void)_removeIconImageViewControllerKeepStaticAssertion:(id)arg0 ;
-(void)_setUpGestureRecognizers;
-(void)_setUpHeaderViews;
-(void)_setUpIconListViewLayoutDelegates;
-(void)_setUpIconListViews;
-(void)_setUpLegacyWidgetListView;
-(void)_setUpScrollView;
-(void)_setUpSearchPresenter;
-(void)_setupStateCapture;
-(void)_styleHeaderView:(id)arg0 withCellFrameInScrollViewBounds:(struct CGRect )arg1 ;
-(void)_toggleCarouselLayoutWithEditingState:(BOOL)arg0 ;
-(void)_toggleHeaderViewWithEditingState:(BOOL)arg0 ;
-(void)_toggleNonFavoriteListVisibilityWithSidebarPinned:(BOOL)arg0 editing:(BOOL)arg1 ;
-(void)_updateEditingStateAnimated:(BOOL)arg0 ;
-(void)_updateEditingStateForListView:(id)arg0 ;
-(void)_updateFavoriteListPlatterAndSize;
-(void)_updateHeaderVisibility;
-(void)_updateIconListSpacing;
-(void)_updateLegacyListPlatter;
-(void)_updateListLayoutAdditionalInsets;
-(void)_updateListViewLayoutAnimated:(BOOL)arg0 ;
-(void)_updatePresentationModeForIconViews;
-(void)_updateRevealStateAnimated:(BOOL)arg0 ;
-(void)_updateScrollViewContentInset;
-(void)_updateScrollViewContentSize;
-(void)_updateSidebarPinnedState;
-(void)_updateSubviewOrderingForListViews;
-(void)_updateTouchInsets;
-(void)_updateVisibleRowRangeForListView:(id)arg0 ;
-(void)_updateVisibleRowRangeForListViews;
-(void)_updateVisiblySettledForIconViews;
-(void)_updateVisiblySettledForIconViewsInListView:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)cleanupAfterSpotlightDismissal;
-(void)conformsToCSBehaviorProviding;
-(void)conformsToCSExternalBehaviorProviding;
-(void)coronaAnimationController:(id)arg0 willAnimateCoronaTransitionWithAnimator:(id)arg1 ;
-(void)dealloc;
-(void)dismissSpotlightAnimated:(BOOL)arg0 ;
-(void)editButtonTappedFromWidgetListViewController:(id)arg0 ;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateDisplayedIconViewsUsingBlock:(id)arg0 ;
-(void)enumerateScrollableIconViewsUsingBlock:(id)arg0 ;
-(void)iconList:(id)arg0 didAddIcon:(id)arg1 ;
-(void)iconList:(id)arg0 didMoveIcon:(id)arg1 ;
-(void)iconList:(id)arg0 didRemoveIcon:(id)arg1 ;
-(void)iconList:(id)arg0 didReplaceIcon:(id)arg1 withIcon:(id)arg2 ;
-(void)iconListView:(id)arg0 didAddIconView:(id)arg1 ;
-(void)iconListView:(id)arg0 didRemoveIconView:(id)arg1 ;
-(void)iconListView:(id)arg0 iconDragItem:(id)arg1 willAnimateDropWithAnimator:(id)arg2 ;
-(void)iconListView:(id)arg0 iconDropSession:(id)arg1 didPauseAtLocation:(struct CGPoint )arg2 ;
-(void)iconListView:(id)arg0 iconDropSessionDidEnter:(id)arg1 ;
-(void)iconListView:(id)arg0 iconDropSessionDidExit:(id)arg1 ;
-(void)iconListView:(id)arg0 performIconDrop:(id)arg1 ;
-(void)iconListView:(id)arg0 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg1 ;
-(void)iconListView:(id)arg0 willUseIconView:(id)arg1 forDroppingIconDragItem:(id)arg2 ;
-(void)iconListViewDidChangeBoundsSize:(id)arg0 ;
-(void)iconView:(id)arg0 didChangeCustomImageViewController:(id)arg1 ;
-(void)iconViewWillDismissContextMenu:(id)arg0 ;
-(void)iconViewWillPresentContextMenu:(id)arg0 ;
-(void)layoutIconListViewWithAnimationType:(NSInteger)arg0 forceRelayout:(BOOL)arg1 ;
-(void)loadView;
-(void)noteIconViewWillZoomDown:(id)arg0 ;
-(void)overlayController:(id)arg0 didChangePresentationProgress:(CGFloat)arg1 newPresentationProgress:(CGFloat)arg2 fromLeading:(BOOL)arg3 ;
-(void)overlayController:(id)arg0 visibilityDidChange:(BOOL)arg1 ;
-(void)overlayControllerDidBeginChangingPresentationProgress:(id)arg0 ;
-(void)presentSpotlightAnimated:(BOOL)arg0 ;
-(void)removeFromParentViewController;
-(void)removeObserver:(id)arg0 ;
-(void)resetForSpotlightDismissalAnimated:(BOOL)arg0 ;
-(void)scrollIconToVisible:(id)arg0 atPosition:(NSInteger)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setDisplayLayoutElementActive:(BOOL)arg0 ;
-(void)setEditing:(BOOL)arg0 ;
-(void)setRevealed:(BOOL)arg0 ;
-(void)setVisuallyRevealed:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)spotlightPresenterDidDismissSpotlight:(id)arg0 ;
-(void)spotlightPresenterDidPresentSpotlight:(id)arg0 ;
-(void)spotlightPresenterSearchBarDidFocus:(id)arg0 ;
-(void)spotlightPresenterWillPresentSpotlight:(id)arg0 ;
-(void)updateViewConstraints;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif