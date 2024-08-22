// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONLISTVIEW_H
#define NCNOTIFICATIONLISTVIEW_H

@class UIScrollView, UIView, NSMutableSet, UILabel, NSHashTable, NSMutableDictionary;
@protocol NCNotificationListViewDataSource;



@interface NCNotificationListView : UIScrollView

@property (nonatomic, getter=isActiveRevealTransitioning) BOOL activeRevealTransitioning; // ivar: _activeRevealTransitioning
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (nonatomic) CGFloat backgroundViewHorizontalOutsetMargin; // ivar: _backgroundViewHorizontalOutsetMargin
@property (nonatomic) CGSize cachedSize; // ivar: _cachedSize
@property (nonatomic, getter=isCachedSizeValid) BOOL cachedSizeValid; // ivar: _cachedSizeValid
@property (readonly, nonatomic) CGFloat contentLayoutOffset;
@property (readonly, nonatomic) NSUInteger count;
@property (weak, nonatomic) NSObject<NCNotificationListViewDataSource> *dataSource; // ivar: _dataSource
@property (nonatomic) CGFloat featuredLeadingViewOcclusionTranslation; // ivar: _featuredLeadingViewOcclusionTranslation
@property (retain, nonatomic) UIView *footerView; // ivar: _footerView
@property (nonatomic) CGFloat footerViewVerticalMargin; // ivar: _footerViewVerticalMargin
@property (nonatomic, getter=isGrouped) BOOL grouped; // ivar: _grouped
@property (nonatomic) CGFloat groupedOverlapHeightMultiple; // ivar: _groupedOverlapHeightMultiple
@property (nonatomic) CGFloat groupedTranslation; // ivar: _groupedTranslation
@property (nonatomic) NSUInteger groupingAnimationStyle; // ivar: _groupingAnimationStyle
@property (retain, nonatomic) UIView *headerView; // ivar: _headerView
@property (nonatomic, getter=isHiddenBelowStack) BOOL hiddenBelowStack; // ivar: _hiddenBelowStack
@property (nonatomic) CGFloat horizontalInsetMargin; // ivar: _horizontalInsetMargin
@property (retain, nonatomic) UIView *hoverView; // ivar: _hoverView
@property (nonatomic, getter=isHoverViewHidden) BOOL hoverViewHidden; // ivar: _hoverViewHidden
@property (nonatomic) NSUInteger indexForReveal; // ivar: _indexForReveal
@property (retain, nonatomic) NSMutableSet *insertedViewIndices; // ivar: _insertedViewIndices
@property (nonatomic) CGFloat interactionTranslation; // ivar: _interactionTranslation
@property (nonatomic) CGFloat interactionTranslationFocalPointY; // ivar: _interactionTranslationFocalPointY
@property (nonatomic) CGFloat interactionTranslationPercentage; // ivar: _interactionTranslationPercentage
@property (nonatomic) CGFloat interactionVelocity; // ivar: _interactionVelocity
@property (nonatomic) BOOL layoutFromBottom; // ivar: _layoutFromBottom
@property (nonatomic) BOOL leadingContentShouldFillList; // ivar: _leadingContentShouldFillList
@property (nonatomic, getter=isLeadingRevealView) BOOL leadingRevealView; // ivar: _leadingRevealView
@property (readonly, nonatomic, getter=isNotificationListViewCurrentlyVisible) BOOL notificationListViewCurrentlyVisible;
@property (nonatomic) NSUInteger numberOfFeaturedLeadingViews; // ivar: _numberOfFeaturedLeadingViews
@property (retain, nonatomic) UIView *overlayFooterView; // ivar: _overlayFooterView
@property (nonatomic) UIEdgeInsets overlayFooterViewEdgeInsets; // ivar: _overlayFooterViewEdgeInsets
@property (nonatomic) CGAffineTransform overrideTopViewDimmingTransform; // ivar: _overrideTopViewDimmingTransform
@property (nonatomic, getter=hasPerformedFirstLayout) BOOL performedFirstLayout; // ivar: _performedFirstLayout
@property (nonatomic, getter=isPerformingBottomMarginAdjustmentAnimation) BOOL performingBottomMarginAdjustmentAnimation; // ivar: _performingBottomMarginAdjustmentAnimation
@property (nonatomic, getter=isPerformingContentRevealAnimation) BOOL performingContentRevealAnimation; // ivar: _performingContentRevealAnimation
@property (nonatomic, getter=isPerformingGroupingAnimation) BOOL performingGroupingAnimation; // ivar: _performingGroupingAnimation
@property (nonatomic, getter=isPerformingHeaderGroupingAnimation) BOOL performingHeaderGroupingAnimation; // ivar: _performingHeaderGroupingAnimation
@property (nonatomic, getter=isPerformingHeaderReloadAnimation) BOOL performingHeaderReloadAnimation; // ivar: _performingHeaderReloadAnimation
@property (nonatomic, getter=isPerformingInteractionVelocityAnimation) BOOL performingInteractionVelocityAnimation; // ivar: _performingInteractionVelocityAnimation
@property (nonatomic, getter=isPerformingInteractiveTranslationAnimation) BOOL performingInteractiveTranslationAnimation; // ivar: _performingInteractiveTranslationAnimation
@property (nonatomic, getter=isPerformingRevealAnimation) BOOL performingRevealAnimation; // ivar: _performingRevealAnimation
@property (nonatomic, getter=isPerformingRevealTransitionAnimation) BOOL performingRevealTransitionAnimation; // ivar: _performingRevealTransitionAnimation
@property (nonatomic, getter=isPerformingStackVisibilityAnimation) BOOL performingStackVisibilityAnimation; // ivar: _performingStackVisibilityAnimation
@property (nonatomic, getter=isPerformingVisibleRectAdjustment) BOOL performingVisibleRectAdjustment; // ivar: _performingVisibleRectAdjustment
@property (retain, nonatomic) NSMutableSet *reloadedViewIndices; // ivar: _reloadedViewIndices
@property (nonatomic) NSUInteger removedViewIndex; // ivar: _removedViewIndex
@property (nonatomic) NSUInteger revealIndexOffset; // ivar: _revealIndexOffset
@property (nonatomic) CGFloat revealPercentage; // ivar: _revealPercentage
@property (nonatomic, getter=isRevealTransitionScrolling) BOOL revealTransitionScrolling; // ivar: _revealTransitionScrolling
@property (nonatomic, getter=isRevealed) BOOL revealed; // ivar: _revealed
@property (nonatomic) BOOL shouldBottomViewsRollUnder; // ivar: _shouldBottomViewsRollUnder
@property (nonatomic) BOOL showContentForGroupedViews; // ivar: _showContentForGroupedViews
@property (nonatomic) BOOL showStackBelowLeadingView; // ivar: _showStackBelowLeadingView
@property (nonatomic, getter=areSublistsRevealed) BOOL sublistsRevealed; // ivar: _sublistsRevealed
@property (nonatomic, getter=isSubviewPerformingGroupingAnimation) BOOL subviewPerformingGroupingAnimation; // ivar: _subviewPerformingGroupingAnimation
@property (nonatomic) BOOL supportsBottomViewsRollUnder; // ivar: _supportsBottomViewsRollUnder
@property (nonatomic) BOOL supportsGrouping; // ivar: _supportsGrouping
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSMutableSet *viewsPerformingAnimation; // ivar: _viewsPerformingAnimation
@property (retain, nonatomic) NSHashTable *viewsPerformingBottomMarginAdjustmentAnimation; // ivar: _viewsPerformingBottomMarginAdjustmentAnimation
@property (nonatomic) CGRect visibleRect; // ivar: _visibleRect
@property (nonatomic) CGFloat visibleRectBottomMarginForRollUnder; // ivar: _visibleRectBottomMarginForRollUnder
@property (retain, nonatomic) NSMutableDictionary *visibleViews; // ivar: _visibleViews


-(BOOL)_isAnimatingForParentNotificationListView;
-(BOOL)_isAnimationStyleDissolve;
-(BOOL)_isFeaturedLeadingViewAtIndex:(NSUInteger)arg0 ;
-(BOOL)_isGrouping;
-(BOOL)_isLayoutFromBottomUp;
-(BOOL)_isShowingFeaturedLeadingViews;
-(BOOL)_isTopSubviewHeightLessThanVisibleRect;
-(BOOL)_isViewWithinVisibleRectForHeight:(CGFloat)arg0 layoutOffset:(CGFloat)arg1 ;
-(BOOL)_isVisibleView:(id)arg0 ;
-(BOOL)_shouldPerformClipping;
-(BOOL)_shouldRollUnderView:(id)arg0 withHeight:(CGFloat)arg1 layoutOffset:(CGFloat)arg2 ;
-(BOOL)_shouldUpdateTransformedView:(id)arg0 toFrame:(struct CGRect )arg1 alpha:(CGFloat)arg2 transform:(struct CGAffineTransform )arg3 ;
-(BOOL)isRolledUnderView:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(BOOL)isVisibleForViewAtIndex:(NSUInteger)arg0 ;
-(CGFloat)_adjustedFrictionForRevealAnimation;
-(CGFloat)_adjustedTensionForRevealAnimation;
-(CGFloat)_alphaForRollUnderForView:(id)arg0 withHeight:(CGFloat)arg1 layoutOffset:(CGFloat)arg2 ;
-(CGFloat)_animationFriction;
-(CGFloat)_animationTension;
-(CGFloat)_heightForFeaturedLeadingView;
-(CGFloat)_heightForFeaturedLeadingViewInRect:(struct CGRect )arg0 ;
-(CGFloat)_initialLayoutOffset;
-(CGFloat)_layoutViewIfNecessaryAtIndex:(NSUInteger)arg0 layoutOffset:(CGFloat)arg1 startingLayoutOffset:(CGFloat)arg2 ;
-(CGFloat)_positionOffsetForRevealHintingForHeaderView;
-(CGFloat)_positionOffsetForRevealHintingForItemAtIndex:(NSUInteger)arg0 ;
-(CGFloat)_revealAnimationDelayForObjectAtIndex:(NSUInteger)arg0 ;
-(CGFloat)_rollUnderThresholdOffset;
-(CGFloat)_rollUnderTranslationPercentageForView:(id)arg0 withHeight:(CGFloat)arg1 layoutOffset:(CGFloat)arg2 ;
-(CGFloat)_verticalVelocityForSuperview;
-(CGFloat)_widthForFeaturedLeadingView;
-(CGFloat)_widthForFeaturedLeadingViewInRect:(struct CGRect )arg0 ;
-(CGFloat)_widthForListViewInRect:(struct CGRect )arg0 ;
-(CGFloat)layoutOffsetForViewAtIndex:(NSUInteger)arg0 ;
-(id)_listViewForView:(id)arg0 ;
-(id)_visibleViewAtIndex:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGAffineTransform )_scaleTransformForGroupingAnimationForViewAtIndex:(NSUInteger)arg0 leadingViewHeight:(CGFloat)arg1 ;
-(struct CGAffineTransform )_transformForRollUnderForView:(id)arg0 withHeight:(CGFloat)arg1 layoutOffset:(CGFloat)arg2 adjustForContentBelowThreshold:(BOOL)arg3 ;
-(struct CGRect )_frameForViewAtIndex:(NSUInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_adjustContentSizeHeightIfNecessaryForUpdatedHeight:(CGFloat)arg0 ;
-(void)_adjustContentSizeWidthIfNecessary;
-(void)_configureClippingIfNecessary;
-(void)_configureStackDimmingForGroupedView:(id)arg0 transform:(struct CGAffineTransform )arg1 ;
-(void)_layoutBackgroundViewIfNecessary;
-(void)_layoutFooterViewForGroupingIfNecessary;
-(void)_layoutFooterViewIfNecessaryAtLayoutOffset:(CGFloat)arg0 ;
-(void)_layoutForGrouping;
-(void)_layoutForList;
-(void)_layoutGroupedViewForGroupingLayout:(id)arg0 atIndex:(NSUInteger)arg1 isExistingView:(BOOL)arg2 leadingViewHeight:(CGFloat)arg3 ;
-(void)_layoutHeaderViewForGroupingIfNecessaryWithMaxYOffset:(CGFloat)arg0 ;
-(void)_layoutHeaderViewIfNecessaryAtLayoutOffset:(CGFloat)arg0 ;
-(void)_layoutHiddenViewsForGroupingLayoutIfNecessaryWithLeadingViewHeight:(CGFloat)arg0 ;
-(void)_layoutHoverViewIfNecessary;
-(void)_layoutLeadingViewForGroupingLayoutIfNecessary:(id)arg0 hasShadow:(BOOL)arg1 isExistingView:(BOOL)arg2 ;
-(void)_layoutOverlayFooterViewIfNecessary;
// -(void)_performAnimationForView:(id)arg0 atIndex:(NSUInteger)arg1 animationBlock:(id)arg2 completionBlock:(unk)arg3  ;
-(void)_performInsertionAnimationForView:(id)arg0 ;
-(void)_performRemovalAnimationForView:(id)arg0 isHorizontallyDisplaced:(BOOL)arg1 ;
// -(void)_performRetargetableAnimationForView:(id)arg0 animationBlock:(id)arg1 completionBlock:(unk)arg2  ;
// -(void)_performViewAnimationBlock:(id)arg0 completionBlock:(unk)arg1  ;
// -(void)_performViewAnimationBlock:(id)arg0 completionBlock:(unk)arg1 withTension:(id)arg2 friction:(unk)arg3  ;
-(void)_recycleViewIfNecessary:(id)arg0 ;
-(void)_recycleViewIfNecessary:(id)arg0 withDataSource:(id)arg1 ;
-(void)_removeAllStoredVisibleViews;
-(void)_removeStoredVisibleViewAtIndex:(NSUInteger)arg0 ;
-(void)_resetClipping;
-(void)_setContentHiddenForGroupedView:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)_setContentHiddenForView:(id)arg0 contentHidden:(BOOL)arg1 ;
-(void)_setRevealAlphaForView:(id)arg0 desiredAlpha:(CGFloat)arg1 ;
-(void)_setVisibleView:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)_setupClipping;
-(void)_updateBlurFilterForHeaderView:(id)arg0 withAlpha:(CGFloat)arg1 ;
-(void)_updateStackedViewsForGrouping:(BOOL)arg0 ;
-(void)_updateStoredVisibleViewsForViewInsertedAtIndex:(NSUInteger)arg0 ;
-(void)_updateStoredVisibleViewsForViewRemovedAtIndex:(NSUInteger)arg0 ;
-(void)_updateTransformedView:(id)arg0 toFrame:(struct CGRect )arg1 ;
-(void)_updateTransformedView:(id)arg0 toFrame:(struct CGRect )arg1 withTransform:(struct CGAffineTransform )arg2 ;
-(void)_updateVisibleViewsForUpdatedVisibleRect:(struct CGRect )arg0 ;
-(void)didMoveToSuperview;
-(void)insertViewAtIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)invalidateData;
-(void)layoutSubviews;
-(void)recycleVisibleViews;
-(void)reloadFooterViewAnimated:(BOOL)arg0 ;
-(void)reloadHeaderView;
-(void)reloadHoverView;
-(void)reloadViewAtIndex:(NSUInteger)arg0 ;
-(void)removeFooterOverlayViewAnimated:(BOOL)arg0 ;
-(void)removeViewAtIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)removeViewAtIndex:(NSUInteger)arg0 animated:(BOOL)arg1 isHorizontallyDisplaced:(BOOL)arg2 ;
-(void)revealNotificationContentBelowGroupedViewIfNecessary:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)updateBottomViewsRollUnder;
-(void)updateSubviewTranslation:(CGFloat)arg0 ;


@end


#endif