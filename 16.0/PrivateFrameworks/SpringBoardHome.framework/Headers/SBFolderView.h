// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFOLDERVIEW_H
#define SBFOLDERVIEW_H

@class UIView, NSMutableArray, NSMutableSet, NSString, NSArray, _UILegibilitySettings, UIScrollView, UIPanGestureRecognizer;
@protocol SBIconListPageControlDelegate, UITextFieldDelegate, SBIconListLayoutDelegate, SBHScrollableIconViewContaining, SBIconScrollViewDelegate, SBFolderObserver, BSDescriptionProviding, SBIconListViewDragDelegate, SBHVisibleContentPresenter, SBFolderViewDelegate, SBIconViewProviding, SBIconListLayoutProvider;


#import "SBFolderTitleTextField.h"
#import "SBHScrollableZoomingIconViewInteraction.h"
#import "SBIconListModel.h"
#import "SBIconListView.h"
#import "SBFolder.h"
#import "SBFolderIconImageCache.h"
#import "SBHIconImageCache.h"
#import "SBIconPageIndicatorImageSetCache.h"
#import "SBIconListPageControl.h"

@interface SBFolderView : UIView <SBIconListPageControlDelegate, UITextFieldDelegate, SBIconListLayoutDelegate, SBHScrollableIconViewContaining, SBIconScrollViewDelegate, SBFolderObserver, BSDescriptionProviding, SBIconListViewDragDelegate, SBHVisibleContentPresenter>

 {
    NSMutableArray *_iconListViews;
    NSMutableSet *_scrollingDisabledReasons;
    NSMutableSet *_pageControlDisabledReasons;
    SBFolderTitleTextField *_titleTextField;
    NSMutableSet *_scrollViewIsScrollingOverrides;
    NSMutableSet *_parallaxDisabledReasons;
    UIView *_scalingView;
    SBVisibleColumnRange _visibleColumnRange;
    SBFolderPredictedVisibleColumn _predictedVisibleColumn;
    BOOL _wasScrolling;
    NSMutableArray *_scrollFrames;
    NSUInteger _scrollFrameCount;
    CGFloat _scrollStartContentOffset;
    NSInteger _scrollMinimumVisiblePageIndex;
    NSInteger _scrollMaximumVisiblePageIndex;
    SBHScrollableZoomingIconViewInteraction *_scrollingInteraction;
    NSUInteger _ignoreScrollingDidEndNotificationsCount;
    NSMutableArray *_scrollCompletionBlocks;
    NSMutableArray *_rotationCompletionBlocks;
    CGFloat _headerHeight;
}


@property (readonly, nonatomic, getter=isRTL) BOOL RTL;
@property (readonly, nonatomic) CGFloat additionalScrollWidthToKeepVisibleInOneDirection;
@property (nonatomic) BOOL addsFocusGuidesForWrapping; // ivar: _addsFocusGuidesForWrapping
@property (readonly, nonatomic) NSUInteger allowedOrientations; // ivar: _allowedOrientations
@property (nonatomic) BOOL automaticallyCreatesIconListViews; // ivar: _automaticallyCreatesIconListViews
@property (nonatomic) NSUInteger contentVisibility; // ivar: _contentVisibility
@property (readonly, nonatomic) NSUInteger countOfAdditionalPagesToKeepVisibleInOneDirection;
@property (readonly, nonatomic) SBIconListModel *currentIconListModel;
@property (readonly, nonatomic) SBIconListView *currentIconListView;
@property (readonly, nonatomic) NSInteger currentPageIndex; // ivar: _currentPageIndex
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSInteger defaultPageIndex;
@property (weak, nonatomic) NSObject<SBFolderViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEditing) BOOL editing; // ivar: _isEditing
@property (readonly, nonatomic) NSInteger firstIconPageIndex;
@property (retain, nonatomic) SBFolder *folder; // ivar: _folder
@property (retain, nonatomic) SBFolderIconImageCache *folderIconImageCache; // ivar: _folderIconImageCache
@property (nonatomic) BOOL hasEverBeenInAWindow; // ivar: _hasEverBeenInAWindow
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat headerHeight;
@property (readonly, nonatomic) UIView *headerView; // ivar: _headerView
@property (retain, nonatomic) SBHIconImageCache *iconImageCache; // ivar: _iconImageCache
@property (readonly, nonatomic) NSUInteger iconListViewCount;
@property (readonly, copy, nonatomic) NSArray *iconListViews;
@property (readonly, copy, nonatomic) NSString *iconLocation;
@property (retain, nonatomic) SBIconPageIndicatorImageSetCache *iconPageIndicatorImageSetCache; // ivar: _iconPageIndicatorImageSetCache
@property (readonly, weak, nonatomic) NSObject<SBIconViewProviding> *iconViewProvider; // ivar: _iconViewProvider
@property (readonly, nonatomic) NSInteger iconVisibilityHandling;
@property (nonatomic) BOOL includesHiddenIconListPages; // ivar: _includesHiddenIconListPages
@property (readonly, nonatomic) NSInteger lastIconPageIndex;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettingsForIconListViews;
@property (readonly, nonatomic) NSObject<SBIconListLayoutProvider> *listLayoutProvider; // ivar: _listLayoutProvider
@property (readonly, nonatomic) NSInteger maximumPageIndex;
@property (readonly, nonatomic) CGFloat maximumVisibleScrollOffset;
@property (readonly, nonatomic) NSInteger minimumPageIndex;
@property (readonly, nonatomic) CGFloat minimumVisibleScrollOffset;
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (retain, nonatomic) SBIconListPageControl *pageControl; // ivar: _pageControl
@property (nonatomic) CGFloat pageControlAlpha;
@property (readonly, nonatomic) CGFloat pageControlAreaHeight;
@property (nonatomic, getter=isPageControlHidden) BOOL pageControlHidden;
@property (readonly, nonatomic) NSUInteger pageCount;
@property (readonly, nonatomic, getter=isParallaxEnabled) BOOL parallaxEnabled;
@property (nonatomic, getter=isRotating) BOOL rotating; // ivar: _rotating
@property (readonly, nonatomic) UIView *scalingView;
@property (readonly, nonatomic, getter=isScalingViewBorrowed) BOOL scalingViewBorrowed; // ivar: _isScalingViewBorrowed
@property (readonly, nonatomic) CGFloat scrollOffsetForPageIndexCalculation;
@property (readonly, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly, nonatomic) CGFloat scrollableWidthForVisibleColumnRange;
@property (readonly, nonatomic, getter=isScrolling) BOOL scrolling;
@property (retain, nonatomic) UIPanGestureRecognizer *scrollingDisabledGestureRecognizer; // ivar: _scrollingDisabledGestureRecognizer
@property (readonly, nonatomic) BOOL snapsToPageBoundariesAfterScrolling; // ivar: _snapsToPageBoundariesAfterScrolling
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressesEditingStateForListViews; // ivar: _suppressesEditingStateForListViews
@property (readonly, nonatomic, getter=_titleTextField) SBFolderTitleTextField *titleTextField;
@property (readonly, nonatomic) BOOL updatesPredictedVisibleColumnWhileScrolling;
@property (readonly, nonatomic) NSInteger userInterfaceLayoutDirection;
@property (readonly, nonatomic) NSUInteger userInterfaceLayoutDirectionHandling; // ivar: _userInterfaceLayoutDirectionHandling
@property (readonly, nonatomic) SBVisibleColumnRange visibleColumnRangeExcludingAdditionalWidthKeptVisible;


+(Class)defaultIconListViewClass;
+(NSInteger)_pageIndexForOffset:(CGFloat)arg0 minimumPage:(NSInteger)arg1 maximumPage:(NSInteger)arg2 pageCount:(NSUInteger)arg3 pageWidth:(CGFloat)arg4 pageSpacing:(CGFloat)arg5 userInterfaceLayoutDirection:(NSInteger)arg6 behavior:(NSInteger)arg7 fractionOfDistanceThroughPage:(*CGFloat)arg8 ;
+(NSUInteger)_pageOffsetForOffset:(CGFloat)arg0 behavior:(NSInteger)arg1 pageWidth:(CGFloat)arg2 pageSpacing:(CGFloat)arg3 pageCount:(NSUInteger)arg4 userInterfaceLayoutDirection:(NSInteger)arg5 fractionOfDistanceThroughPage:(*CGFloat)arg6 ;
+(id)defaultIconLocation;
-(BOOL)_animatesRotationForAllVisibleIconListViews;
-(BOOL)_hasLeadingCustomPages;
-(BOOL)_hasTrailingCustomPages;
-(BOOL)_isEligibleForFocusInteraction;
-(BOOL)_isValidIconListViewIndex:(NSInteger)arg0 ;
-(BOOL)_isValidPageIndex:(NSInteger)arg0 ;
-(BOOL)_shouldIgnoreScrollingDidEndNotifications;
-(BOOL)_shouldUseScrollableIconViewInteraction;
-(BOOL)_showsTitle;
-(BOOL)_useParallaxOnPageControl;
-(BOOL)canChangeCurrentPageIndexToIndex:(NSUInteger)arg0 ;
-(BOOL)doesPageContainIconListView:(NSInteger)arg0 ;
-(BOOL)hasIconPages;
-(BOOL)iconListView:(id)arg0 canHandleIconDropSession:(id)arg1 ;
-(BOOL)iconListView:(id)arg0 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg1 onIconView:(id)arg2 ;
-(BOOL)iconScrollView:(id)arg0 shouldSetAutoscrollContentOffset:(struct CGPoint )arg1 ;
-(BOOL)iconScrollView:(id)arg0 shouldSetContentOffset:(struct CGPoint *)arg1 animated:(BOOL)arg2 ;
-(BOOL)isPageTypeIcon:(NSInteger)arg0 ;
-(BOOL)isVisibleColumnRangeValid:(struct SBVisibleColumnRange )arg0 ;
-(BOOL)locationCountsAsInsideFolder:(struct CGPoint )arg0 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(CGFloat)_offsetToCenterPageControlInSpaceForPageControl;
-(CGFloat)_pageSpacing;
-(CGFloat)_pageWidth;
-(CGFloat)_titleFontSize;
-(CGFloat)currentScrollOffset;
-(Class)listViewClass;
-(NSInteger)_pageIndexForOffset:(CGFloat)arg0 ;
-(NSInteger)_pageIndexForOffset:(CGFloat)arg0 behavior:(NSInteger)arg1 fractionOfDistanceThroughPage:(*CGFloat)arg2 ;
-(NSInteger)closestIconPageIndexForPageIndex:(NSInteger)arg0 ;
-(NSInteger)pageIndexForIconListModel:(id)arg0 ;
-(NSInteger)pageIndexForIconListModelIndex:(NSUInteger)arg0 ;
-(NSInteger)pageIndexForIconListViewIndex:(NSUInteger)arg0 ;
-(NSUInteger)_leadingCustomPageCount;
-(NSUInteger)_trailingCustomPageCount;
-(NSUInteger)iconListModelIndexForPageIndex:(NSInteger)arg0 ;
-(NSUInteger)iconListViewIndexForIconListModelIndex:(NSUInteger)arg0 ;
-(NSUInteger)iconListViewIndexForPageIndex:(NSInteger)arg0 ;
-(NSUInteger)iconPageCount;
-(NSUInteger)indexOfIconListView:(id)arg0 ;
-(NSUInteger)typeForPage:(NSInteger)arg0 ;
-(id)_createIconListViewForList:(id)arg0 ;
-(id)_interactionTintColor;
-(id)_legibilitySettingsWithPrimaryColor:(id)arg0 ;
-(id)_newPageControl;
-(id)accessibilityLegibilitySettingsForRect:(struct CGRect )arg0 tintStyle:(NSUInteger)arg1 ;
-(id)accessibilityTintColorForRect:(struct CGRect )arg0 tintStyle:(NSUInteger)arg1 ;
-(id)additionalIconListViews;
-(id)allIconListViews;
-(id)borrowScalingView;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)firstIconListView;
-(id)highlightingViewForPageControl:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)iconListView:(id)arg0 animatorForRemovingIcons:(id)arg1 proposedAnimator:(id)arg2 ;
-(id)iconListView:(id)arg0 customSpringAnimationBehaviorForDroppingItem:(id)arg1 ;
-(id)iconListView:(id)arg0 iconDropSessionDidUpdate:(id)arg1 ;
-(id)iconListView:(id)arg0 iconViewForDroppingIconDragItem:(id)arg1 proposedIconView:(id)arg2 ;
-(id)iconListView:(id)arg0 previewForDroppingIconDragItem:(id)arg1 proposedPreview:(id)arg2 ;
-(id)iconListViewAtIndex:(NSUInteger)arg0 ;
-(id)iconListViewAtPoint:(struct CGPoint )arg0 ;
-(id)iconListViewAtScrollPoint:(struct CGPoint )arg0 ;
-(id)iconListViewDisplayingIconView:(id)arg0 ;
-(id)iconListViewForDrag:(id)arg0 ;
-(id)iconListViewForIconListModelIndex:(NSUInteger)arg0 ;
-(id)iconListViewForPageIndex:(NSInteger)arg0 ;
-(id)iconListViewForTouch:(id)arg0 ;
-(id)iconListViewWithList:(id)arg0 ;
-(id)iconLocationForList:(id)arg0 ;
-(id)iconVisibilityDescription;
-(id)initWithConfiguration:(id)arg0 ;
-(id)lastIconListView;
-(id)preferredFocusEnvironments;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CGPoint )_scrollOffsetForContentAtPageIndex:(NSInteger)arg0 ;
-(struct CGPoint )_scrollOffsetForFirstListView;
-(struct CGPoint )_scrollOffsetForPageAtIndex:(NSInteger)arg0 ;
-(struct CGPoint )_scrollOffsetForPageAtIndex:(NSInteger)arg0 pageWidth:(CGFloat)arg1 ;
-(struct CGRect )_frameForIconListAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )_frameForScalingView;
-(struct CGRect )_iconListFrameForPageRect:(struct CGRect )arg0 atIndex:(NSUInteger)arg1 ;
-(struct CGSize )_iconListViewSize;
-(struct CGSize )scrollView:(id)arg0 contentSizeForZoomScale:(CGFloat)arg1 withProposedSize:(struct CGSize )arg2 ;
-(struct SBHFloatRange )_scrollRangeForContentAtPageIndex:(NSInteger)arg0 pageWidth:(CGFloat)arg1 ;
-(struct SBHFloatRange )_scrollRangeForPageAtIndex:(NSInteger)arg0 ;
-(struct SBHFloatRange )_scrollRangeForPageAtIndex:(NSInteger)arg0 pageWidth:(CGFloat)arg1 ;
-(struct SBVisibleColumnRange )visibleColumnRangeWithTotalLists:(NSUInteger)arg0 iconVisibilityHandling:(NSInteger)arg1 predictedVisibleColumn:(struct SBFolderPredictedVisibleColumn *)arg2 includingAdditionalColumnsKeptVisible:(BOOL)arg3 ;
-(struct UIEdgeInsets )_scrollingInteractionVisibleInsets;
-(struct UIEdgeInsets )visibleContainerInsets;
-(unsigned int)scrollingDirection;
-(void)_addIconListView:(id)arg0 ;
-(void)_addIconListView:(id)arg0 atEnd:(BOOL)arg1 ;
-(void)_addIconListViewsForModels:(id)arg0 ;
-(void)_addScrollingCompletionBlock:(id)arg0 ;
-(void)_backgroundContrastDidChange:(id)arg0 ;
-(void)_checkIfScrollStateChanged;
-(void)_configureIconListView:(id)arg0 ;
-(void)_configureScrollingInteraction:(id)arg0 ;
-(void)_currentPageIndexDidChangeFromPageIndex:(NSInteger)arg0 ;
-(void)_didAddIconListView:(id)arg0 ;
-(void)_didRemoveIconListView:(id)arg0 ;
-(void)_disableUserInteractionBeforeSignificantAnimation;
-(void)_enableUserInteractionAfterSignificantAnimation;
-(void)_enumerateScrollableIconViewsUsingBlock:(id)arg0 ;
-(void)_ignoreScrollingDidEndNotifications;
-(void)_layoutSubviews;
-(void)_markListViewsAsPurged;
-(void)_noteFolderListsDidChange:(NSUInteger)arg0 ;
-(void)_orientationDidChange:(NSInteger)arg0 ;
-(void)_precacheIconImages;
-(void)_removeIconListView:(id)arg0 ;
-(void)_removeIconListView:(id)arg0 purge:(BOOL)arg1 ;
-(void)_scrollingInteractionScrollViewDidScroll:(id)arg0 ;
-(void)_setParallaxDisabled:(BOOL)arg0 forReason:(id)arg1 ;
-(void)_unignoreScrollingDidEndNotifications;
-(void)_updateEditingStateAnimated:(BOOL)arg0 ;
-(void)_updateIconListContainment:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)_updateIconListFrames;
-(void)_updateIconListLegibilitySettings;
-(void)_updateIconListViews:(NSInteger)arg0 ;
-(void)_updateIconListViewsWithCurrentIconListModel:(id)arg0 ;
-(void)_updateIconListViewsWithCurrentPageIndex:(NSInteger)arg0 currentIconListModel:(id)arg1 ;
-(void)_updatePageControlCurrentPage;
-(void)_updatePageControlNumberOfPages;
-(void)_updatePageControlToIndex:(NSInteger)arg0 ;
-(void)_updateParallaxSettings;
-(void)_updateScalingViewFrame;
-(void)_updateScrollingIfNeeded;
-(void)_updateScrollingInteractionIsScrolling:(BOOL)arg0 ;
-(void)_updateScrollingState:(BOOL)arg0 ;
-(void)_updateTitleLegibilitySettings;
-(void)_willScrollToPageIndex:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)addScrollViewIsScrollingOverrideReason:(id)arg0 ;
-(void)cancelScrolling;
-(void)cleanUpAfterTransition;
-(void)clearVisibleColumnRange;
-(void)dealloc;
-(void)didAddSubview:(id)arg0 ;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)didTransitionAnimated:(BOOL)arg0 ;
-(void)enumerateIconListViewsUsingBlock:(id)arg0 ;
-(void)enumerateIconListViewsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateScrollViewPageViewsUsingBlock:(id)arg0 ;
-(void)enumerateScrollableIconViewsUsingBlock:(id)arg0 ;
-(void)fadeContentForMagnificationFraction:(CGFloat)arg0 ;
-(void)fadeContentForMinificationFraction:(CGFloat)arg0 ;
-(void)folder:(id)arg0 didAddList:(id)arg1 ;
-(void)folder:(id)arg0 didMoveList:(id)arg1 fromIndex:(NSUInteger)arg2 toIndex:(NSUInteger)arg3 ;
-(void)folder:(id)arg0 didRemoveLists:(id)arg1 atIndexes:(id)arg2 ;
-(void)folder:(id)arg0 listHiddenDidChange:(id)arg1 ;
-(void)folder:(id)arg0 listHiddenWillChange:(id)arg1 ;
-(void)folder:(id)arg0 willRemoveLists:(id)arg1 atIndexes:(id)arg2 ;
-(void)folderWillChange:(id)arg0 ;
-(void)getLeadingVisiblePageIndex:(*NSInteger)arg0 trailingVisiblePageIndex:(*NSInteger)arg1 ;
-(void)iconListView:(id)arg0 iconDragItem:(id)arg1 willAnimateDropWithAnimator:(id)arg2 ;
-(void)iconListView:(id)arg0 iconDropSession:(id)arg1 didPauseAtLocation:(struct CGPoint )arg2 ;
-(void)iconListView:(id)arg0 iconDropSessionDidEnter:(id)arg1 ;
-(void)iconListView:(id)arg0 iconDropSessionDidExit:(id)arg1 ;
-(void)iconListView:(id)arg0 performIconDrop:(id)arg1 ;
-(void)iconListView:(id)arg0 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg1 ;
-(void)iconListView:(id)arg0 willUseIconView:(id)arg1 forDroppingIconDragItem:(id)arg2 ;
-(void)iconScrollViewDidCancelTouchTracking:(id)arg0 ;
-(void)iconScrollViewWillCancelTouchTracking:(id)arg0 ;
-(void)layoutIconListsWithAnimationType:(NSInteger)arg0 forceRelayout:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)minimumHomeScreenScaleDidChange;
-(void)noteUserIsInteractingWithIcons;
-(void)pageControl:(id)arg0 didMoveCurrentPageToPage:(NSInteger)arg1 withScrubbing:(BOOL)arg2 ;
-(void)pageControlDidBeginScrubbing:(id)arg0 ;
-(void)pageControlDidEndScrubbing:(id)arg0 ;
-(void)pageControlDidReceiveButtonTap:(id)arg0 ;
-(void)prepareForTransition;
-(void)prepareToOpen;
-(void)removeScrollViewIsScrollingOverrideReason:(id)arg0 ;
-(void)resetContentOffsetToCurrentPageAnimated:(BOOL)arg0 ;
-(void)returnScalingView;
-(void)scrollUsingDecelerationAnimationToPageIndex:(NSInteger)arg0 withCompletionHandler:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrolling:(id)arg0 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)scrollingDisabledGestureDidUpdate:(id)arg0 ;
-(void)setContentAlpha:(CGFloat)arg0 ;
-(void)setNeedsLayout;
-(void)tearDownListViews;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)transitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)updateAccessibilityTintColors;
-(void)updateIconListIndexAndVisibility;
-(void)updateIconListIndexAndVisibility:(BOOL)arg0 ;
-(void)updateIconListViews;
-(void)updateVisibleColumnRange;
-(void)updateVisibleColumnRangeWithTotalLists:(NSUInteger)arg0 iconVisibilityHandling:(NSInteger)arg1 ;
-(void)validateVisibleColumnRange;
-(void)willMoveToWindow:(id)arg0 ;
-(void)willTransitionAnimated:(BOOL)arg0 withSettings:(id)arg1 ;


@end


#endif