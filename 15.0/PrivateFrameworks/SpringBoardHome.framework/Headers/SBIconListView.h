// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBICONLISTVIEW_H
#define SBICONLISTVIEW_H

@class UIView, NSMutableArray, NSMapTable, NSHashTable, NSMutableDictionary, NSString, NSArray, _UILegibilitySettings, NSLayoutConstraint;
@protocol SBIconObserver, PTSettingsKeyObserver, SBIconListModelObserver, SBIconViewQuerying, BSDescriptionProviding, SBIconListViewDragDelegate, SBIconViewProviding, SBIconListLayout, SBIconListLayoutDelegate, SBIconListLayoutProvider, SBIconWidgetIntroductionDelegate;


#import "SBIconListViewDraggingDestinationDelegate.h"
#import "SBIconListViewLayoutMetrics.h"
#import "SBHIconSettings.h"
#import "SBHIconEditingSettings.h"
#import "SBIconListViewIconLocationTransitionHandler.h"
#import "SBFolderIconImageCache.h"
#import "SBHIconImageCache.h"
#import "SBIconListModel.h"
#import "SBIconWidgetIntroductionView.h"
#import "SBIconWidgetIntroductionPopoverView.h"

@interface SBIconListView : UIView <SBIconObserver, PTSettingsKeyObserver, SBIconListModelObserver, SBIconViewQuerying, BSDescriptionProviding>

 {
    NSMutableArray *_removedIcons;
    BOOL _needsLayout;
    BOOL _inLayout;
    BOOL _rotating;
    BOOL _ignoreNextWindowChange;
    BOOL _performingSpecialIconAnimations;
    NSMapTable *_iconViews;
    NSMapTable *_specialIconAnimations;
    NSMapTable *_pausedLayoutForIconViews;
    NSHashTable *_iconVisibilityAssertions;
    NSMutableDictionary *_groupNamesToCaptureOnlyBackgroundViews;
    NSMapTable *_iconsToCaptureOnlyBackgroundAssertions;
    SBIconListViewDraggingDestinationDelegate *_draggingDelegate;
    *__CFRunLoopObserver _layoutRunLoopObserver;
    NSHashTable *_layoutObservers;
    SBIconListViewLayoutMetrics *_cachedMetrics;
    NSMutableArray *_wrappingFocusGuideViews;
    CGFloat _desiredLaserPaddingX;
    CGFloat _desiredLaserPaddingY;
    BOOL _laserPadUsesAllAvailableSpace;
    SBHIconSettings *_iconSettings;
    SBHIconEditingSettings *_iconEditingSettings;
}


@property (readonly, nonatomic) BOOL adaptsOrientationToTraitCollection;
@property (nonatomic) UIEdgeInsets additionalLayoutInsets; // ivar: _additionalLayoutInsets
@property (nonatomic) BOOL addsFocusGuidesForWrapping; // ivar: _addsFocusGuidesForWrapping
@property (nonatomic) BOOL adjustsColumnPositionsForFullScreenWidth; // ivar: _adjustsColumnPositionsForFullScreenWidth
@property (readonly, nonatomic) CGSize alignmentIconSize;
@property (nonatomic) BOOL alignsIconsOnPixelBoundaries; // ivar: _alignsIconsOnPixelBoundaries
@property (nonatomic) BOOL automaticallyAdjustsLayoutMetricsToFit; // ivar: _automaticallyAdjustsLayoutMetricsToFit
@property (nonatomic) NSUInteger automaticallyReversedLayoutOrientations; // ivar: _automaticallyReversedLayoutOrientations
@property (readonly, nonatomic) Class baseIconViewClass;
@property (nonatomic) BOOL boundsSizeTracksContentSize; // ivar: _boundsSizeTracksContentSize
@property (retain, nonatomic) SBIconListViewIconLocationTransitionHandler *currentIconLocationTransitionHandler; // ivar: _currentIconLocationTransitionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<SBIconListViewDragDelegate> *dragDelegate; // ivar: _dragDelegate
@property (nonatomic, getter=isDragSpringloadingEnabled) BOOL dragSpringloadingEnabled; // ivar: _dragSpringloadingEnabled
@property (nonatomic, getter=isEditing) BOOL editing; // ivar: _editing
@property (readonly, nonatomic) CGSize effectiveIconSpacing;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (retain, nonatomic) SBFolderIconImageCache *folderIconImageCache; // ivar: _folderIconImageCache
@property (readonly, nonatomic, getter=isFull) BOOL full;
@property (readonly, nonatomic) NSUInteger gridCellInfoOptions;
@property (readonly, nonatomic) SBHIconGridSize gridSizeForCurrentOrientation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat horizontalIconPadding;
@property (readonly, nonatomic) NSUInteger iconColumnsForCurrentOrientation;
@property (nonatomic) CGFloat iconContentScale; // ivar: _iconContentScale
@property (copy, nonatomic) NSString *iconDragTypeIdentifier; // ivar: _iconDragTypeIdentifier
@property (retain, nonatomic) SBHIconImageCache *iconImageCache; // ivar: _iconImageCache
@property (readonly, nonatomic) CGRect iconLayoutRect;
@property (copy, nonatomic) NSString *iconLocation; // ivar: _iconLocation
@property (readonly, nonatomic) NSUInteger iconRowsForCurrentOrientation;
@property (readonly, nonatomic) NSUInteger iconRowsForSpacingCalculation;
@property (nonatomic) CGSize iconSpacing; // ivar: _iconSpacing
@property (nonatomic) NSUInteger iconViewConfigurationOptions; // ivar: _iconViewConfigurationOptions
@property (weak, nonatomic) NSObject<SBIconViewProviding> *iconViewProvider; // ivar: _iconViewProvider
@property (readonly, nonatomic) NSUInteger iconViewUserVisibilityStatus;
@property (readonly, copy, nonatomic) NSArray *icons;
@property (readonly, nonatomic) NSUInteger iconsInRowForSpacingCalculation;
@property (readonly, nonatomic) BOOL iconsNeedLayout;
@property (nonatomic) BOOL isWidgetIntroductionVertical; // ivar: _isWidgetIntroductionVertical
@property (readonly, nonatomic) NSObject<SBIconListLayout> *layout;
@property (weak, nonatomic) NSObject<SBIconListLayoutDelegate> *layoutDelegate; // ivar: _layoutDelegate
@property (nonatomic) NSInteger layoutInsetsMode; // ivar: _layoutInsetsMode
@property (readonly, nonatomic) SBIconListViewLayoutMetrics *layoutMetrics;
@property (retain, nonatomic) NSObject<SBIconListLayoutProvider> *layoutProvider; // ivar: _layoutProvider
@property (nonatomic, getter=isLayoutReversed) BOOL layoutReversed; // ivar: _layoutReversed
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (readonly, nonatomic) NSUInteger maximumIconCount;
@property (retain, nonatomic) SBIconListModel *model; // ivar: _model
@property (readonly, nonatomic) NSUInteger numberOfDisplayedIconViews;
@property (nonatomic, getter=isOccluded) BOOL occluded; // ivar: _occluded
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic) BOOL pausesIconsForScrolling; // ivar: _pausesIconsForScrolling
@property (nonatomic) SBIconListPredictedVisibleColumn predictedVisibleColumn; // ivar: _predictedVisibleColumn
@property (nonatomic) SBIconListPredictedVisibleRow predictedVisibleRow; // ivar: _predictedVisibleRow
@property (retain, nonatomic) SBIconWidgetIntroductionView *pronouncedContainerView; // ivar: _pronouncedContainerView
@property (nonatomic, getter=isPurged) BOOL purged; // ivar: _purged
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTransitioningIconLocation) BOOL transitioningIconLocation;
@property (readonly, nonatomic) NSInteger userInterfaceLayoutDirection;
@property (nonatomic) NSUInteger userInterfaceLayoutDirectionHandling; // ivar: _userInterfaceLayoutDirectionHandling
@property (readonly, nonatomic, getter=isVertical) BOOL vertical;
@property (readonly, nonatomic) CGFloat verticalIconPadding;
@property (nonatomic) _NSRange visibleColumnRange; // ivar: _visibleColumnRange
@property (readonly, copy, nonatomic) NSArray *visibleIcons;
@property (nonatomic) _NSRange visibleRowRange; // ivar: _visibleRowRange
@property (nonatomic, getter=isVisiblySettled) BOOL visiblySettled; // ivar: _visiblySettled
@property (nonatomic) BOOL wantsFastIconReordering; // ivar: _wantsFastIconReordering
@property (weak, nonatomic) NSObject<SBIconWidgetIntroductionDelegate> *widgetIntroductionDelegate; // ivar: _widgetIntroductionDelegate
@property (retain, nonatomic) SBIconWidgetIntroductionPopoverView *widgetIntroductionPopover; // ivar: _widgetIntroductionPopover
@property (retain, nonatomic) NSLayoutConstraint *widgetIntroductionPopoverLeadingAnchorConstraint; // ivar: _widgetIntroductionPopoverLeadingAnchorConstraint
@property (retain, nonatomic) NSLayoutConstraint *widgetIntroductionPopoverTopAnchorConstraint; // ivar: _widgetIntroductionPopoverTopAnchorConstraint


+(NSInteger)rotationAnchor;
+(NSUInteger)defaultIconViewConfigurationOptions;
+(NSUInteger)gridCellInfoOptionsWithInterfaceOrientation:(NSInteger)arg0 reversedLayout:(BOOL)arg1 ;
+(id)builtInAnimatorForAnimationType:(NSInteger)arg0 ;
+(id)clusterAnimator;
+(id)defaultAnimator;
+(id)dominoAnimator;
+(id)layoutMetricsForParameters:(struct SBIconListLayoutMetricsParameters *)arg0 listModel:(id)arg1 ;
+(id)multiStageAnimator;
+(struct CGRect )defaultFrameForOrientation:(NSInteger)arg0 ;
-(BOOL)_allowsFocusToLeaveViaHeading:(NSUInteger)arg0 ;
-(BOOL)_iconIsAtEndOfRowAndHasPlaceholderBefore:(id)arg0 metrics:(id)arg1 ;
-(BOOL)_iconMatchingCoordinateBeginsInThatRow:(struct SBIconCoordinate )arg0 metrics:(id)arg1 ;
-(BOOL)allowsAddingIconCount:(NSUInteger)arg0 ;
-(BOOL)containsIcon:(id)arg0 ;
-(BOOL)containsWidget;
-(BOOL)getIconStartGridCellIndex:(*NSUInteger)arg0 gridSize:(struct SBHIconGridSize *)arg1 forGridCellIndex:(NSUInteger)arg2 metrics:(id)arg3 ;
-(BOOL)isDisplayingIcon:(id)arg0 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocations:(id)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg0 ;
-(BOOL)isDisplayingIconView:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isDisplayingWidgetIntroduction;
-(BOOL)isDock;
-(BOOL)isLayoutPausedForIconView:(id)arg0 ;
-(BOOL)isRTL;
-(BOOL)isShowingAllIcons;
-(BOOL)shouldReparentView:(id)arg0 ;
-(CGFloat)_leadingSpacingForWidgetIntroductionPopoverView;
-(CGFloat)_topSpacingForWidgetIntroductionPopoverView;
-(CGFloat)continuousCornerRadiusForGridSizeClass:(NSUInteger)arg0 ;
-(CGFloat)horizontalBumpForColumn:(NSUInteger)arg0 metrics:(id)arg1 ;
-(NSInteger)dragPlacementForMovingIcon:(id)arg0 toPoint:(struct CGPoint )arg1 overIcon:(id)arg2 options:(NSUInteger)arg3 ;
-(NSUInteger)bestGridCellIndexForInsertingIcon:(id)arg0 atCoordinate:(struct SBIconCoordinate )arg1 ;
-(NSUInteger)bestIndexForInsertingIcon:(id)arg0 atCoordinate:(struct SBIconCoordinate )arg1 ;
-(NSUInteger)columnAtPoint:(struct CGPoint )arg0 ;
-(NSUInteger)columnAtPoint:(struct CGPoint )arg0 fractionOfDistanceThroughColumn:(*CGFloat)arg1 ;
-(NSUInteger)columnAtPoint:(struct CGPoint )arg0 metrics:(id)arg1 fractionOfDistanceThroughColumn:(*CGFloat)arg2 ;
-(NSUInteger)gridCellIndexForCoordinate:(struct SBIconCoordinate )arg0 metrics:(id)arg1 ;
-(NSUInteger)iconGridSizeClassForIconGridSize:(struct SBHIconGridSize )arg0 ;
-(NSUInteger)iconIndexForCoordinate:(struct SBIconCoordinate )arg0 metrics:(id)arg1 ;
-(NSUInteger)iconIndexForGridCellIndex:(NSUInteger)arg0 metrics:(id)arg1 ;
-(NSUInteger)indexForCoordinate:(struct SBIconCoordinate )arg0 forOrientation:(NSInteger)arg1 ;
-(NSUInteger)indexForCoordinate:(struct SBIconCoordinate )arg0 forOrientation:(NSInteger)arg1 metrics:(id)arg2 ;
-(NSUInteger)indexOfIcon:(id)arg0 ;
-(NSUInteger)rowAtPoint:(struct CGPoint )arg0 ;
-(NSUInteger)rowAtPoint:(struct CGPoint )arg0 metrics:(id)arg1 ;
-(NSUInteger)rowForIcon:(id)arg0 ;
-(id)beginTransitionToIconLocation:(id)arg0 reason:(id)arg1 ;
-(id)dequeueReusableIconView;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)displayedIconViewForIcon:(id)arg0 ;
-(id)firstIconViewForIcon:(id)arg0 ;
-(id)firstIconViewForIcon:(id)arg0 excludingLocations:(id)arg1 ;
-(id)firstIconViewForIcon:(id)arg0 inLocations:(id)arg1 ;
-(id)gridCellInfo;
-(id)iconAtCoordinate:(struct SBIconCoordinate )arg0 metrics:(id)arg1 ;
-(id)iconAtGridCellIndex:(NSUInteger)arg0 metrics:(id)arg1 ;
-(id)iconAtPoint:(struct CGPoint )arg0 index:(*NSUInteger)arg1 ;
-(id)iconViewForCoordinate:(struct SBIconCoordinate )arg0 ;
-(id)iconViewForIcon:(id)arg0 ;
-(id)iconViewForIcon:(id)arg0 location:(id)arg1 ;
-(id)iconVisibilityInfoForRect:(struct CGRect )arg0 normalized:(BOOL)arg1 ;
-(id)initWithModel:(id)arg0 layoutProvider:(id)arg1 iconLocation:(id)arg2 orientation:(NSInteger)arg3 iconViewProvider:(id)arg4 ;
-(id)layoutMetricsForOrientation:(NSInteger)arg0 ;
-(id)makeIconView;
-(id)removedIcons;
-(id)requireAllIconsShownForReason:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)tintColor;
-(id)visibleGridCellIndexes;
-(id)visibleGridCellIndexesWithMetrics:(id)arg0 ;
-(id)visibleIconIndexes;
-(id)widgetIconsForIntroductionContainerView;
-(struct CGPoint )_alignedIconPointForPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )_overrideOriginForIconAtRowIndex:(NSUInteger)arg0 columnIndex:(NSUInteger)arg1 gridSize:(struct SBHIconGridSize )arg2 metrics:(id)arg3 ;
-(struct CGPoint )centerForIcon:(id)arg0 ;
-(struct CGPoint )centerForIcon:(id)arg0 metrics:(id)arg1 ;
-(struct CGPoint )centerForIconAtIndex:(NSUInteger)arg0 ;
-(struct CGPoint )centerForIconAtIndex:(NSUInteger)arg0 metrics:(id)arg1 ;
-(struct CGPoint )centerForIconCoordinate:(struct SBIconCoordinate )arg0 ;
-(struct CGPoint )centerForIconCoordinate:(struct SBIconCoordinate )arg0 metrics:(id)arg1 ;
-(struct CGPoint )fractionalCoordinateAtPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )originForIcon:(id)arg0 ;
-(struct CGPoint )originForIconAtCoordinate:(struct SBIconCoordinate )arg0 ;
-(struct CGPoint )originForIconAtCoordinate:(struct SBIconCoordinate )arg0 metrics:(id)arg1 ;
-(struct CGPoint )originForIconAtCoordinate:(struct SBIconCoordinate )arg0 metrics:(id)arg1 options:(NSUInteger)arg2 ;
-(struct CGPoint )originForIconAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )rectForCellAtIconCoordinate:(struct SBIconCoordinate )arg0 metrics:(id)arg1 options:(NSUInteger)arg2 ;
-(struct CGRect )rectForDefaultSizedCellAtCoordinate:(struct SBIconCoordinate )arg0 metrics:(id)arg1 ;
-(struct CGRect )rectForDefaultSizedCellsOfSize:(struct SBHIconGridSize )arg0 startingAtCoordinate:(struct SBIconCoordinate )arg1 metrics:(id)arg2 ;
-(struct CGRect )rectForDefaultSizedCellsOfSizeClass:(NSUInteger)arg0 startingAtCoordinate:(struct SBIconCoordinate )arg1 metrics:(id)arg2 ;
-(struct CGRect )rectForIcon:(id)arg0 ;
-(struct CGRect )rectForIconAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )rectForIconCoordinate:(struct SBIconCoordinate )arg0 ;
-(struct CGRect )rectForIconCoordinate:(struct SBIconCoordinate )arg0 metrics:(id)arg1 ;
-(struct CGSize )alignmentIconViewSize;
-(struct CGSize )iconImageSize;
-(struct CGSize )iconImageSizeForGridSizeClass:(NSUInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct SBHIconGridRange )gridRangeForIconAtIndex:(NSUInteger)arg0 ;
-(struct SBHIconGridRange )iconGridRangeForIndex:(NSUInteger)arg0 metrics:(id)arg1 ;
-(struct SBHIconGridSize )iconGridSizeForClass:(NSUInteger)arg0 ;
-(struct SBIconCoordinate )_coordinateAfterCoordinate:(struct SBIconCoordinate )arg0 rows:(NSUInteger)arg1 columns:(NSUInteger)arg2 metrics:(id)arg3 ;
-(struct SBIconCoordinate )_coordinateBeforeCoordinate:(struct SBIconCoordinate )arg0 rows:(NSUInteger)arg1 columns:(NSUInteger)arg2 metrics:(id)arg3 ;
-(struct SBIconCoordinate )coordinateAtPoint:(struct CGPoint )arg0 ;
-(struct SBIconCoordinate )coordinateForIcon:(id)arg0 ;
-(struct SBIconCoordinate )coordinateForIconAtIndex:(NSUInteger)arg0 ;
-(struct SBIconCoordinate )iconCoordinateForGridCellIndex:(NSUInteger)arg0 metrics:(id)arg1 ;
-(struct SBIconCoordinate )iconCoordinateForIndex:(NSUInteger)arg0 forOrientation:(NSInteger)arg1 ;
-(struct SBIconCoordinate )iconCoordinateForIndex:(NSUInteger)arg0 metrics:(id)arg1 ;
-(struct SBIconImageInfo )iconImageInfoForGridSizeClass:(NSUInteger)arg0 ;
-(struct UIEdgeInsets )cursorHitTestingInsetsForIconSpacing:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )layoutInsetsForOrientation:(NSInteger)arg0 ;
-(struct _NSRange )_allIconsVisibleColumnOrRowRange;
-(void)_addIconViewsForIcons:(id)arg0 ;
-(void)_addIconViewsForIcons:(id)arg0 metrics:(id)arg1 ;
-(void)_applyIconPaddingSettings;
-(void)_captureOnlyBackgroundAssertionDidInvalidate:(id)arg0 ;
-(void)_cleanupIconViewsForRemovedIcons:(id)arg0 ;
-(void)_getRTLAwareRowIndex:(*NSInteger)arg0 columnIndex:(*NSInteger)arg1 forGridCellIndex:(NSUInteger)arg2 iconGridSize:(struct SBHIconGridSize )arg3 metrics:(id)arg4 ;
-(void)_insertCaptureOnlyBackgroundViewForInsertingIconViewIfNecessary:(id)arg0 ;
-(void)_insertOrRemoveCaptureOnlyBackgroundViewIfNecessaryForIconView:(id)arg0 ;
-(void)_removeCaptureOnlyBackgroundViewForRemovedIconIfNecessary:(id)arg0 ;
-(void)_removeIconViewsForIcons:(id)arg0 ;
-(void)_setupLayoutRunLoopObserver;
-(void)_teardownLayoutRunloopObserverIfNeeded;
-(void)_updateEditingStateForIcons:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateVisibleIconViewsWithOldVisibleGridCellIndexes:(id)arg0 metrics:(id)arg1 ;
-(void)addDragObserver:(id)arg0 forDropSession:(id)arg1 ;
-(void)addIconViewConfigurationOption:(NSUInteger)arg0 ;
-(void)addLayoutObserver:(id)arg0 ;
-(void)addPronouncedContainerViewWithDelegate:(id)arg0 vertical:(BOOL)arg1 ;
-(void)bringWidgetIntroductionPopoverToFront;
-(void)configureIconView:(id)arg0 forIcon:(id)arg1 ;
-(void)dealloc;
-(void)didAddIconView:(id)arg0 ;
-(void)didAddSubview:(id)arg0 ;
-(void)didMoveToWindow;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateDisplayedIconViewsUsingBlock:(id)arg0 ;
-(void)enumerateIconViewsUsingBlock:(id)arg0 ;
-(void)enumerateIconsUsingBlock:(id)arg0 ;
-(void)enumerateVisibleIconsUsingBlock:(id)arg0 ;
-(void)fadeInIcon:(id)arg0 ;
-(void)fadeInIconView:(id)arg0 ;
-(void)getLayoutMetricsParameters:(struct SBIconListLayoutMetricsParameters *)arg0 ;
-(void)getLayoutMetricsParameters:(struct SBIconListLayoutMetricsParameters *)arg0 orientation:(NSInteger)arg1 ;
-(void)hideAllIcons;
-(void)iconGridSizeClassDidChange:(id)arg0 ;
-(void)iconList:(id)arg0 didAddIcon:(id)arg1 ;
-(void)iconList:(id)arg0 didMoveIcon:(id)arg1 ;
-(void)iconList:(id)arg0 didRemoveIcon:(id)arg1 ;
-(void)iconList:(id)arg0 didReplaceIcon:(id)arg1 withIcon:(id)arg2 ;
-(void)iconLocationTransitionHandler:(id)arg0 completeTransition:(BOOL)arg1 ;
-(void)iconLocationTransitionHandler:(id)arg0 setProgress:(CGFloat)arg1 ;
-(void)ignoreNextWindowChange;
-(void)layoutAndCreateIcon:(id)arg0 ;
-(void)layoutAndCreateIcon:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)layoutIconsIfNeeded:(CGFloat)arg0 ;
-(void)layoutIconsIfNeededUsingAnimator:(id)arg0 options:(NSUInteger)arg1 ;
-(void)layoutIconsIfNeededWithAnimationType:(NSInteger)arg0 options:(NSUInteger)arg1 ;
-(void)markIcon:(id)arg0 asNeedingAnimation:(NSInteger)arg1 ;
-(void)pauseLayout:(BOOL)arg0 forIconView:(id)arg1 withReason:(id)arg2 ;
-(void)performDefaultAnimatedLayoutUpdateForIconView:(id)arg0 withParameters:(struct SBIconListLayoutAnimationParameters )arg1 ;
-(void)performDefaultAnimatedRemovalForIconViews:(id)arg0 completionHandler:(id)arg1 ;
-(void)performSpecialIconAnimation:(NSInteger)arg0 icon:(id)arg1 completionHandler:(id)arg2 ;
-(void)performSpecialIconAnimationsWithCompletionHandler:(id)arg0 ;
-(void)performZoomOutSpecialIconAnimationWithIcon:(id)arg0 completionHandler:(id)arg1 ;
-(void)popIcon:(id)arg0 ;
-(void)popIconView:(id)arg0 ;
-(void)removeAllIconAnimations;
-(void)removeAllIconViews;
-(void)removeIconView:(id)arg0 ;
-(void)removeIconViewConfigurationOption:(NSUInteger)arg0 ;
-(void)removeLayoutObserver:(id)arg0 ;
-(void)removePronouncedContainerView;
-(void)removeShowAllIconsAssertion:(id)arg0 ;
-(void)setAlphaForAllIcons:(CGFloat)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)showAllIcons;
-(void)startAnimatingPronouncedContainerAndPopoverView;
-(void)stopAnimatingPronouncedContainerAndPopoverView;
-(void)updateEditingStateAnimated:(BOOL)arg0 ;
-(void)updateReversedLayoutBasedOnOrientation;
-(void)willMoveToWindow:(id)arg0 ;
-(void)willRotateWithTransitionCoordinator:(id)arg0 ;


@end


#endif