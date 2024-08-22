// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBROOTFOLDERVIEW_H
#define SBROOTFOLDERVIEW_H

@class UIView, NSHashTable, NSString, UILabel, UIViewController<SBHRootFolderCustomViewPresenting>, SBFParallaxSettings, SBFTouchPassThroughView;
@protocol _UISettingsKeyObserver, SBDockViewDelegate, SBFRemoteBasebandLoggingObserver, BSInvalidatable, SBRootFolderViewDelegate, SBIconListViewIconLocationTransitioning, SBRootFolderViewLayoutManager;


#import "SBFolderView.h"
#import "SBDockView.h"
#import "_SBRootFolderLayoutWrapperView.h"
#import "SBSearchBackdropView.h"
#import "SBHMinusPageStepper.h"
#import "_SBRootFolderViewElementBorrowedAssertion.h"
#import "SBDockIconListView.h"
#import "SBTitledHomeScreenButton.h"
#import "SBRootFolder.h"
#import "SBHRootFolderSettings.h"
#import "SBHRootFolderVisualConfiguration.h"
#import "SBSearchGesture.h"

@interface SBRootFolderView : SBFolderView <_UISettingsKeyObserver, SBDockViewDelegate, SBFRemoteBasebandLoggingObserver>

 {
    SBDockView *_dockView;
    _SBRootFolderLayoutWrapperView *_searchableLeadingCustomWrapperView;
    SBSearchBackdropView *_searchBackdropView;
    SBSearchBackdropView *_trailingCustomBackdropView;
    UIView *_trailingCustomSearchDimmingView;
    CGFloat _baseOffsetForDeterminingScrollToSearchThreshold;
    CGFloat _pageWidthWhenScrollToSearchBeganDragging;
    BOOL _scrollToSearchIsDraggingOrAnimating;
    CGFloat _scrollOffsetWhenScrollingBegan;
    BOOL _wasScrolling;
    BOOL _isLeadingCustomViewBouncing;
    NSInteger _iconListFrameOrientationOverride;
    NSInteger _activeSidebarAnimationCount;
    NSHashTable *_dockOffscreenProgressSettingClients;
    id<BSInvalidatable> *_dockStateDumpHandle;
    BOOL _lastEventWasAttemptingToOverscrollFirstPage;
    BOOL _lastEventWasAttemptingToOverscrollLastPage;
}


@property (nonatomic) BOOL allowsAutoscrollToLeadingCustomView; // ivar: _allowsAutoscrollToLeadingCustomView
@property (nonatomic) BOOL allowsFreeScrollingUntilScrollingEnds; // ivar: _allowsFreeScrollingUntilScrollingEnds
@property (readonly, nonatomic) CGFloat currentDockOffscreenFraction;
@property (readonly, nonatomic) SBHMinusPageStepper *customPageAnimationStepper; // ivar: _customPageAnimationStepper
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBRootFolderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) _SBRootFolderViewElementBorrowedAssertion *dockBorrowedAssertion; // ivar: _dockBorrowedAssertion
@property (nonatomic) NSUInteger dockEdge; // ivar: _dockEdge
@property (readonly, nonatomic, getter=isDockExternal) BOOL dockExternal; // ivar: _dockExternal
@property (readonly, nonatomic) CGFloat dockHeight;
@property (readonly, copy, nonatomic) NSString *dockIconLocation;
@property (readonly, nonatomic) SBDockIconListView *dockListView; // ivar: _dockListView
@property (readonly, nonatomic, getter=isDockPinnedForRotation) BOOL dockPinnedForRotation; // ivar: _dockPinnedForRotation
@property (readonly, nonatomic) SBDockView *dockView;
@property (readonly, nonatomic, getter=isDockVisible) BOOL dockVisible;
@property (retain, nonatomic) SBTitledHomeScreenButton *doneButton; // ivar: _doneButton
@property (readonly, nonatomic) CGFloat effectiveSidebarVisibilityProgress;
@property (readonly, nonatomic) CGRect enterEditingTouchRect;
@property (retain, nonatomic) NSObject<SBIconListViewIconLocationTransitioning> *firstListViewIconLocationTransitionHandler; // ivar: _firstListViewIconLocationTransitionHandler
@property (retain, nonatomic) SBRootFolder *folder;
@property (readonly, nonatomic) NSUInteger folderPageManagementAllowedOrientations; // ivar: _folderPageManagementAllowedOrientations
@property (retain, nonatomic) SBHRootFolderSettings *folderSettings; // ivar: _folderSettings
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hidesOffscreenCustomPageViews;
@property (readonly, nonatomic) UILabel *idleTextView; // ivar: _idleTextView
@property (readonly, nonatomic) NSUInteger ignoresOverscrollOnFirstPageOrientations; // ivar: _ignoresOverscrollOnFirstPageOrientations
@property (readonly, nonatomic) NSUInteger ignoresOverscrollOnLastPageOrientations; // ivar: _ignoresOverscrollOnLastPageOrientations
@property (readonly, nonatomic) BOOL isPageManagementUITransitioningOutOfVisible;
@property (readonly, nonatomic) NSObject<SBRootFolderViewLayoutManager> *layoutManager;
@property (readonly, nonatomic) UIView *leadingCustomView;
@property (nonatomic, getter=isLeadingCustomViewBouncing) BOOL leadingCustomViewBouncing; // ivar: _leadingCustomViewBouncing
@property (readonly, nonatomic) UIViewController<SBHRootFolderCustomViewPresenting> *leadingCustomViewController; // ivar: _leadingCustomViewController
@property (nonatomic, getter=isLeadingCustomViewPageHidden) BOOL leadingCustomViewPageHidden; // ivar: _leadingCustomViewPageHidden
@property (readonly, nonatomic) NSInteger leadingCustomViewPageIndex;
@property (readonly, nonatomic) CGFloat leadingCustomViewPageScrollOffset;
@property (nonatomic) CGFloat leadingCustomViewVisibilityProgress; // ivar: _leadingCustomViewVisibilityProgress
@property (readonly, nonatomic) UIView *leadingCustomViewWrapperView;
@property (readonly, nonatomic) CGFloat maxDockHeight;
@property (nonatomic, getter=isOccludedByOverlay) BOOL occludedByOverlay; // ivar: _occludedByOverlay
@property (readonly, nonatomic, getter=isOnLeadingCustomPage) BOOL onLeadingCustomPage;
@property (readonly, nonatomic, getter=isOnTrailingCustomPage) BOOL onTrailingCustomPage;
@property (nonatomic) _SBRootFolderViewElementBorrowedAssertion *pageControlBorrowedAssertion; // ivar: _pageControlBorrowedAssertion
@property (readonly, nonatomic, getter=isPageManagementUIVisible) BOOL pageManagementUIVisible;
@property (readonly, nonatomic) SBFParallaxSettings *parallaxSettings; // ivar: _parallaxSettings
@property (readonly, nonatomic) UIView *pullDownSearchView;
@property (nonatomic) CGFloat pullDownSearchVisibilityProgress; // ivar: _pullDownSearchVisibilityProgress
@property (readonly, nonatomic) SBHRootFolderVisualConfiguration *rootFolderVisualConfiguration;
@property (nonatomic) CGFloat scrollingAdjustment; // ivar: _scrollingAdjustment
@property (readonly, nonatomic) SBSearchBackdropView *searchBackdropView;
@property (retain, nonatomic) SBSearchGesture *searchGesture; // ivar: _searchGesture
@property (nonatomic, getter=isSearchHidden) BOOL searchHidden;
@property (readonly, nonatomic) _SBRootFolderLayoutWrapperView *searchPulldownWrapperView; // ivar: _searchPulldownWrapperView
@property (readonly, nonatomic) _SBRootFolderLayoutWrapperView *searchableLeadingCustomWrapperView;
@property (readonly, nonatomic) _SBRootFolderLayoutWrapperView *searchableTrailingCustomWrapperView; // ivar: _searchableTrailingCustomWrapperView
@property (nonatomic) BOOL shiftsPullDownSearchForVisibility; // ivar: _shiftsPullDownSearchForVisibility
@property (readonly, nonatomic) BOOL shouldFadeDockOutDuringTransitionToLeadingCustomView;
@property (readonly, nonatomic) BOOL shouldFadePageControlOutDuringTransitionToLeadingCustomView;
@property (nonatomic) BOOL showsAddWidgetButton; // ivar: _showsAddWidgetButton
@property (nonatomic) BOOL showsDoneButton; // ivar: _showsDoneButton
@property (readonly, nonatomic) NSUInteger sidebarAllowedOrientations; // ivar: _sidebarAllowedOrientations
@property (nonatomic, getter=isSidebarEffectivelyVisible) BOOL sidebarEffectivelyVisible; // ivar: _sidebarEffectivelyVisible
@property (readonly, nonatomic) NSInteger sidebarPageIndex;
@property (nonatomic, getter=isSidebarPinned) CGFloat sidebarPinned; // ivar: _sidebarPinned
@property (nonatomic, getter=isSidebarSlideGestureActive) BOOL sidebarSlideGestureActive; // ivar: _sidebarSlideGestureActive
@property (readonly, nonatomic) UIView *sidebarView;
@property (readonly, nonatomic, getter=isSidebarVisibilityGestureActive) BOOL sidebarVisibilityGestureActive;
@property (nonatomic) CGFloat sidebarVisibilityProgress; // ivar: _sidebarVisibilityProgress
@property (nonatomic, getter=wasSidebarVisibleWhenScrollingBegan) BOOL sidebarVisibleWhenScrollingBegan; // ivar: _sidebarVisibleWhenScrollingBegan
@property (readonly, nonatomic) _SBRootFolderLayoutWrapperView *sidebarWrapperView; // ivar: _sidebarWrapperView
@property (retain, nonatomic) NSObject<SBRootFolderViewLayoutManager> *specialLayoutManager; // ivar: _specialLayoutManager
@property (readonly) Class superclass;
@property (nonatomic) CGFloat titledButtonsAlpha; // ivar: _titledButtonsAlpha
@property (retain, nonatomic) SBFTouchPassThroughView *titledButtonsContainerView; // ivar: _titledButtonsContainerView
@property (nonatomic) CGFloat todayViewVisibilityProgress; // ivar: _todayViewVisibilityProgress
@property (readonly, nonatomic) SBSearchBackdropView *trailingCustomBackdropView;
@property (readonly, nonatomic) UIView *trailingCustomSearchDimmingView;
@property (readonly, nonatomic) UIView *trailingCustomView;
@property (readonly, nonatomic) UIViewController<SBHRootFolderCustomViewPresenting> *trailingCustomViewController; // ivar: _trailingCustomViewController
@property (readonly, nonatomic) NSInteger trailingCustomViewPageIndex;
@property (readonly, nonatomic) CGFloat trailingCustomViewPageScrollOffset;
@property (nonatomic) CGFloat trailingCustomViewVisibilityProgress; // ivar: _trailingCustomViewVisibilityProgress
@property (retain, nonatomic) NSObject<SBRootFolderViewLayoutManager> *transitioningNewSpecialLayoutManager; // ivar: _transitioningNewSpecialLayoutManager
@property (retain, nonatomic) NSObject<SBRootFolderViewLayoutManager> *transitioningOldSpecialLayoutManager; // ivar: _transitioningOldSpecialLayoutManager
@property (nonatomic) BOOL userAttemptedToOverscrollFirstPageDuringCurrentGesture; // ivar: _userAttemptedToOverscrollFirstPageDuringCurrentGesture
@property (nonatomic) BOOL userAttemptedToOverscrollLastPageDuringCurrentGesture; // ivar: _userAttemptedToOverscrollLastPageDuringCurrentGesture
@property (retain, nonatomic) SBTitledHomeScreenButton *widgetButton; // ivar: _widgetButton


+(id)defaultIconLocation;
+(void)_editButtonLayoutFramesInBounds:(struct CGRect )arg0 forVisualConfiguration:(id)arg1 withTranslationOffset:(CGFloat)arg2 inRTL:(BOOL)arg3 doneButton:(id)arg4 addWidgetButton:(id)arg5 doneButtonFrame:(struct CGRect *)arg6 addWidgetButtonFrame:(struct CGRect *)arg7 ;
-(BOOL)_isSidebarCollapsed;
-(BOOL)_isSidebarEnabledForCurrentOrientation;
-(BOOL)_isSidebarEnabledForCurrentPage;
-(BOOL)_isSidebarEnabledForIconListIndex:(NSUInteger)arg0 orientation:(NSInteger)arg1 ;
-(BOOL)_isSidebarEnabledForOrientation:(NSInteger)arg0 ;
-(BOOL)_isSidebarEnabledForPageIndex:(NSInteger)arg0 ;
-(BOOL)_isSidebarEnabledForPageIndex:(NSInteger)arg0 orientation:(NSInteger)arg1 ;
-(BOOL)_shouldHideSidebarView;
-(BOOL)_shouldIgnoreOverscrollOnFirstPageForCurrentOrientation;
-(BOOL)_shouldIgnoreOverscrollOnFirstPageForOrientation:(NSInteger)arg0 ;
-(BOOL)_shouldIgnoreOverscrollOnLastPageForCurrentOrientation;
-(BOOL)_shouldIgnoreOverscrollOnLastPageForOrientation:(NSInteger)arg0 ;
-(BOOL)iconScrollView:(id)arg0 shouldSetAutoscrollContentOffset:(struct CGPoint )arg1 ;
-(BOOL)iconScrollView:(id)arg0 shouldSetContentOffset:(struct CGPoint *)arg1 animated:(BOOL)arg2 ;
-(BOOL)isDockViewBorrowed;
-(BOOL)isModifyingDockOffscreenFraction;
-(BOOL)isOnSidebarPage;
-(BOOL)isPageControlBorrowed;
-(BOOL)isPageIndexCustomAndRightmost:(NSInteger)arg0 ;
-(BOOL)scrollViewHeightIncludesPageControlAndDock;
-(BOOL)shouldEndSidebarGestureWithSidebarVisibleWithCurrentProgress:(CGFloat)arg0 velocity:(CGFloat)arg1 ;
-(BOOL)shouldPinScrollingToFirstOrLastPageScrollOffsetForProposedScrollOffset:(struct CGPoint *)arg0 ;
-(BOOL)shouldScrollDockDuringTransitionToLeadingCustomView;
-(BOOL)shouldScrollPageControlDuringTransitionToLeadingCustomView;
-(CGFloat)_minimumHomeScreenScale;
-(CGFloat)_pageWidth;
-(CGFloat)_sidebarVisibilityProgressForPanGestureRecognizer:(id)arg0 presenting:(BOOL)arg1 ;
-(CGFloat)_spotlightFirstIconRowOffset;
-(CGFloat)additionalScrollWidthToKeepVisibleInOneDirection;
-(CGFloat)externalDockPageControlVerticalMargin;
-(CGFloat)internalDockPageControlVerticalMargin;
-(CGFloat)leadingCustomViewPageScrollOffsetUsingPageWidth:(CGFloat)arg0 ;
-(CGFloat)minimumHomeScreenScaleForDockView:(id)arg0 ;
-(CGFloat)scrollableWidthForVisibleColumnRange;
-(CGFloat)sidebarViewPageScrollOffsetUsingPageWidth:(CGFloat)arg0 ;
-(CGFloat)sidebarWidthUsingPageWidth:(CGFloat)arg0 ;
-(CGFloat)trailingCustomViewPageScrollOffsetUsingPageWidth:(CGFloat)arg0 ;
-(NSInteger)_pageCountForPageControl;
-(NSUInteger)_leadingCustomPageCount;
-(NSUInteger)_trailingCustomPageCount;
-(id)_createIconListViewForList:(id)arg0 ;
-(id)accessibilityTintColorForDockView:(id)arg0 ;
-(id)additionalIconListViews;
-(id)beginModifyingDockOffscreenFractionForReason:(id)arg0 ;
-(id)borrowDockViewForReason:(id)arg0 ;
-(id)borrowPageControlForReason:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)iconListViewAtIndex:(NSUInteger)arg0 ;
-(id)iconListViewAtPoint:(struct CGPoint )arg0 ;
-(id)iconListViewForExtraIndex:(NSUInteger)arg0 ;
-(id)iconListViewForIconListModelIndex:(NSUInteger)arg0 ;
-(id)iconLocationForList:(id)arg0 ;
-(id)iconLocationForListsWithNonDefaultSizedIcons;
-(id)initWithConfiguration:(id)arg0 ;
-(id)makeTitledButtonOfClass:(Class)arg0 ;
-(id)newDockBackgroundMaterialViewWithInitialWeighting:(CGFloat)arg0 ;
-(id)newDockBackgroundView;
-(id)newHomeScreenButtonBackgroundView;
-(id)rootListLayout;
-(id)rootWithWidgetsListLayout;
-(struct CGPoint )_scrollOffsetForContentAtPageIndex:(NSInteger)arg0 ;
-(struct CGPoint )_scrollOffsetForPageAtIndex:(NSInteger)arg0 pageWidth:(CGFloat)arg1 ;
-(struct CGPoint )_scrollView:(id)arg0 adjustedOffsetForOffset:(struct CGPoint )arg1 translation:(struct CGPoint )arg2 startPoint:(struct CGPoint )arg3 locationInView:(struct CGPoint )arg4 horizontalVelocity:(*CGFloat)arg5 verticalVelocity:(*CGFloat)arg6 ;
-(struct CGRect )_iconListFrameForPageRect:(struct CGRect )arg0 atIndex:(NSUInteger)arg1 ;
-(struct CGRect )_scaledBoundsForMinimumHomeScreenScale;
-(struct CGRect )_scrollViewFrameForDockEdge:(NSUInteger)arg0 ;
-(struct UIEdgeInsets )_statusBarInsetsForDockEdge:(NSUInteger)arg0 dockOffscreenPercentage:(CGFloat)arg1 ;
-(struct UIEdgeInsets )statusBarInsetsForDockEdge:(NSUInteger)arg0 ;
-(void)_adjustLeadingCustomContentForEdgeBounce;
-(void)_animateViewsForPullingToSearch;
-(void)_animateViewsForPullingToSearchWithMetrics:(struct SBRootFolderViewMetrics *)arg0 ;
-(void)_animateViewsForScrollingToLeadingOrTrailingCustomView;
-(void)_animateViewsForScrollingToLeadingOrTrailingCustomViewWithMetrics:(struct SBRootFolderViewMetrics *)arg0 ;
-(void)_captureInitialSearchScrollTrackingState;
-(void)_checkSidebarVisibilityProgressAfterScroll;
-(void)_cleanUpAfterOverscrollScrollGestureEnded:(id)arg0 ;
-(void)_cleanUpAfterScrolling;
-(void)_cleanupAfterExtraScrollGesturesCompleted;
-(void)_cleanupAfterSidebarSlideGestureCompleted:(id)arg0 ;
-(void)_currentPageIndexDidChangeFromPageIndex:(NSInteger)arg0 ;
-(void)_doPageManagementEducation;
-(void)_layoutSubviews;
-(void)_layoutSubviewsForLeadingCustomViewWithMetrics:(struct SBRootFolderViewMetrics *)arg0 ;
-(void)_layoutSubviewsForPulldownSearch;
-(void)_layoutSubviewsForSidebarWithMetrics:(struct SBRootFolderViewMetrics *)arg0 ;
-(void)_layoutSubviewsForTrailingCustomViewWithMetrics:(struct SBRootFolderViewMetrics *)arg0 ;
-(void)_overscrollScrollPanGestureRecognizerDidUpdate:(id)arg0 ;
-(void)_prepareSidebarViewForOrientationTransition;
-(void)_reduceMotionStatusDidChange:(id)arg0 ;
-(void)_resetSearchScrollTrackingState;
-(void)_setupIdleTextPrivacyDisclosures;
-(void)_setupSearchBackdropViewIfNecessary;
-(void)_setupStateDumper;
-(void)_setupTrailingCustomBackdropViewIfNecessary;
-(void)_setupTrailingCustomDimmingViewIfNecessary;
-(void)_sidebarScrollPanGestureRecognizerDidUpdate:(id)arg0 ;
-(void)_updateDockBackgroundViewForOcclusionByOverlay;
-(void)_updateDockOffscreenFractionWithMetrics:(struct SBRootFolderViewMetrics *)arg0 ;
-(void)_updateDockViewZOrdering;
-(void)_updateEditingStateAnimated:(BOOL)arg0 ;
-(void)_updateIconListIndexSearchableAndLeadingCustomViewsWithLayout:(BOOL)arg0 ;
-(void)_updateIconListLegibilitySettings;
-(void)_updatePageControlToIndex:(NSInteger)arg0 ;
-(void)_updateParallaxSettings;
-(void)_updateScrollingState:(BOOL)arg0 ;
-(void)_updateSidebarViewHidden;
-(void)_willScrollToPageIndex:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)cleanUpAfterTransition;
-(void)clientDidChangeDockOffScreenFraction:(id)arg0 ;
-(void)configurePageControlToAllowEnteringPageManagement:(BOOL)arg0 ;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)doneButtonTriggered:(id)arg0 ;
-(void)elementBorrowedAssertionDidInvalidate:(id)arg0 ;
-(void)enterPageManagementUIWithCompletionHandler:(id)arg0 ;
-(void)enumerateScrollViewPageViewsUsingBlock:(id)arg0 ;
-(void)exitPageManagementUIWithCompletionHandler:(id)arg0 ;
-(void)fadeContentForMinificationFraction:(CGFloat)arg0 ;
-(void)folder:(id)arg0 didAddIcons:(id)arg1 removedIcons:(id)arg2 ;
-(void)getMetrics:(struct SBRootFolderViewMetrics *)arg0 ;
-(void)getMetrics:(struct SBRootFolderViewMetrics *)arg0 dockEdge:(NSUInteger)arg1 ;
-(void)iconScrollViewDidCancelTouchTracking:(id)arg0 ;
-(void)layoutDockViewWithMetrics:(struct SBRootFolderViewMetrics *)arg0 ;
-(void)layoutIconListsWithAnimationType:(NSInteger)arg0 forceRelayout:(BOOL)arg1 ;
-(void)layoutPageControlWithMetrics:(struct SBRootFolderViewMetrics *)arg0 ;
-(void)layoutSearchableViews;
-(void)layoutSearchableViewsWithMetrics:(struct SBRootFolderViewMetrics *)arg0 ;
-(void)minimumHomeScreenScaleDidChange;
-(void)noteSidebarFinishedAnimating;
-(void)noteSidebarIsAnimating;
-(void)pageControlDidReceiveButtonTap:(id)arg0 ;
-(void)prepareForTransition;
-(void)prepareToTearDown;
-(void)remoteBasebandLogCollectionStateDidChange:(BOOL)arg0 ;
-(void)removeDockOffscreenFractionClient:(id)arg0 ;
-(void)resetIconListViews;
-(void)returnScalingView;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setContentAlpha:(CGFloat)arg0 ;
-(void)setContentVisibility:(NSUInteger)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setIdleText:(id)arg0 ;
-(void)setLegibilitySettings:(id)arg0 ;
-(void)setNeedsLayout;
-(void)setOrientation:(NSInteger)arg0 ;
-(void)setPageControlAlpha:(CGFloat)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)tearDownListViews;
-(void)transitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)updateAccessibilityTintColors;
-(void)updateConfigurationOfPageControlToAllowEnteringPageManagement;
-(void)updateDockViewOrientation;
-(void)updateIconListIndexAndVisibility:(BOOL)arg0 ;
-(void)updateIconListViews;
-(void)widgetButtonTriggered:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif