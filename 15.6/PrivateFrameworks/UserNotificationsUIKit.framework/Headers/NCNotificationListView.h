// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCNOTIFICATIONLISTVIEW_H
#define NCNOTIFICATIONLISTVIEW_H

@class UIScrollView, UIView, NSMutableSet, UILabel, NSMutableDictionary;
@protocol NCNotificationListViewDataSource;



@interface NCNotificationListView : UIScrollView

@property (nonatomic, getter=isActiveRevealTransitioning) BOOL activeRevealTransitioning; // ivar: _activeRevealTransitioning
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (nonatomic) CGFloat backgroundViewHorizontalOutsetMargin; // ivar: _backgroundViewHorizontalOutsetMargin
@property (nonatomic) CGSize cachedSize; // ivar: _cachedSize
@property (nonatomic, getter=isCachedSizeValid) BOOL cachedSizeValid; // ivar: _cachedSizeValid
@property (readonly, nonatomic) NSUInteger count;
@property (weak, nonatomic) NSObject<NCNotificationListViewDataSource> *dataSource; // ivar: _dataSource
@property (nonatomic) CGFloat featuredLeadingViewOcclusionTranslation; // ivar: _featuredLeadingViewOcclusionTranslation
@property (retain, nonatomic) UIView *footerView; // ivar: _footerView
@property (nonatomic) CGFloat footerViewVerticalMargin; // ivar: _footerViewVerticalMargin
@property (nonatomic, getter=isGrouped) BOOL grouped; // ivar: _grouped
@property (nonatomic) CGFloat groupedTranslation; // ivar: _groupedTranslation
@property (nonatomic) NSUInteger groupingAnimationStyle; // ivar: _groupingAnimationStyle
@property (retain, nonatomic) UIView *headerView; // ivar: _headerView
@property (nonatomic, getter=isHiddenBelowStack) BOOL hiddenBelowStack; // ivar: _hiddenBelowStack
@property (nonatomic) CGFloat horizontalInsetMargin; // ivar: _horizontalInsetMargin
@property (retain, nonatomic) UIView *hoverView; // ivar: _hoverView
@property (nonatomic, getter=isHoverViewHidden) BOOL hoverViewHidden; // ivar: _hoverViewHidden
@property (retain, nonatomic) NSMutableSet *insertedViewIndices; // ivar: _insertedViewIndices
@property (nonatomic) BOOL leadingContentShouldFillList; // ivar: _leadingContentShouldFillList
@property (nonatomic, getter=isLeadingRevealView) BOOL leadingRevealView; // ivar: _leadingRevealView
@property (readonly, nonatomic, getter=isNotificationListViewCurrentlyVisible) BOOL notificationListViewCurrentlyVisible;
@property (nonatomic) NSUInteger numberOfFeaturedLeadingViews; // ivar: _numberOfFeaturedLeadingViews
@property (nonatomic) CGAffineTransform overrideTopViewDimmingTransform; // ivar: _overrideTopViewDimmingTransform
@property (nonatomic, getter=hasPerformedFirstLayout) BOOL performedFirstLayout; // ivar: _performedFirstLayout
@property (nonatomic, getter=isPerformingContentRevealAnimation) BOOL performingContentRevealAnimation; // ivar: _performingContentRevealAnimation
@property (nonatomic, getter=isPerformingGroupingAnimation) BOOL performingGroupingAnimation; // ivar: _performingGroupingAnimation
@property (nonatomic, getter=isPerformingHeaderReloadAnimation) BOOL performingHeaderReloadAnimation; // ivar: _performingHeaderReloadAnimation
@property (nonatomic, getter=isPerformingRevealAnimation) BOOL performingRevealAnimation; // ivar: _performingRevealAnimation
@property (nonatomic, getter=isPerformingStackVisibilityAnimation) BOOL performingStackVisibilityAnimation; // ivar: _performingStackVisibilityAnimation
@property (nonatomic, getter=isPerformingVisibleRectAdjustment) BOOL performingVisibleRectAdjustment; // ivar: _performingVisibleRectAdjustment
@property (retain, nonatomic) NSMutableSet *reloadedViewIndices; // ivar: _reloadedViewIndices
@property (nonatomic) NSUInteger removedViewIndex; // ivar: _removedViewIndex
@property (nonatomic) NSUInteger revealIndexOffset; // ivar: _revealIndexOffset
@property (nonatomic) CGFloat revealPercentage; // ivar: _revealPercentage
@property (nonatomic, getter=isRevealed) BOOL revealed; // ivar: _revealed
@property (nonatomic) BOOL showStackBelowLeadingView; // ivar: _showStackBelowLeadingView
@property (nonatomic, getter=isSubviewPerformingGroupingAnimation) BOOL subviewPerformingGroupingAnimation; // ivar: _subviewPerformingGroupingAnimation
@property (nonatomic) BOOL supportsGrouping; // ivar: _supportsGrouping
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSMutableSet *viewsPerformingAnimation; // ivar: _viewsPerformingAnimation
@property (nonatomic) CGRect visibleRect; // ivar: _visibleRect
@property (retain, nonatomic) NSMutableDictionary *visibleViews; // ivar: _visibleViews


-(BOOL)_isAnimationStyleDissolve;
-(BOOL)_isFeaturedLeadingViewAtIndex:(NSUInteger)arg0 ;
-(BOOL)_isGrouping;
-(BOOL)_isShowingFeaturedLeadingViews;
-(BOOL)_isTopSubviewHeightLessThanVisibleRect;
-(BOOL)_isViewWithinVisibleRectForHeight:(CGFloat)arg0 layoutOffset:(CGFloat)arg1 ;
-(BOOL)_isVisibleView:(id)arg0 ;
-(BOOL)_shouldPerformClipping;
-(BOOL)isVisibleForViewAtIndex:(NSUInteger)arg0 ;
-(CGFloat)_adjustedFrictionForRevealAnimation;
-(CGFloat)_adjustedTensionForRevealAnimation;
-(CGFloat)_heightForFeaturedLeadingView;
-(CGFloat)_heightForFeaturedLeadingViewInRect:(struct CGRect )arg0 ;
-(CGFloat)_layoutViewIfNecessaryAtIndex:(NSUInteger)arg0 layoutOffset:(CGFloat)arg1 startingLayoutOffset:(CGFloat)arg2 ;
-(CGFloat)_positionOffsetForRevealHintingForHeaderView;
-(CGFloat)_positionOffsetForRevealHintingForItemAtIndex:(NSUInteger)arg0 ;
-(CGFloat)_revealAnimationDelayForObjectAtIndex:(NSUInteger)arg0 ;
-(CGFloat)_verticalVelocityForSuperview;
-(CGFloat)_widthForFeaturedLeadingView;
-(CGFloat)_widthForFeaturedLeadingViewInRect:(struct CGRect )arg0 ;
-(CGFloat)_widthForListViewInRect:(struct CGRect )arg0 ;
-(CGFloat)layoutOffsetForViewAtIndex:(NSUInteger)arg0 ;
-(id)_listViewForView:(id)arg0 ;
-(id)_visibleViewAtIndex:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGAffineTransform )_scaleTransformForGroupingAnimationForViewAtIndex:(NSUInteger)arg0 leadingViewHeight:(CGFloat)arg1 ;
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
// -(void)_performAnimationForView:(id)arg0 atIndex:(NSUInteger)arg1 animationBlock:(id)arg2 completionBlock:(unk)arg3  ;
-(void)_performInsertionAnimationForView:(id)arg0 ;
-(void)_performRemovalAnimationForView:(id)arg0 ;
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
-(void)_updateStackedViewsForGrouping:(BOOL)arg0 ;
-(void)_updateStoredVisibleViewsForViewInsertedAtIndex:(NSUInteger)arg0 ;
-(void)_updateStoredVisibleViewsForViewRemovedAtIndex:(NSUInteger)arg0 ;
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
-(void)removeViewAtIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)revealNotificationContentBelowGroupedViewIfNecessary:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif