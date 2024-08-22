// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMIXEDGRIDSWITCHERMODIFIER_H
#define SBMIXEDGRIDSWITCHERMODIFIER_H

@class NSMutableDictionary;


#import "SBSwitcherModifier.h"

@interface SBMixedGridSwitcherModifier : SBSwitcherModifier {
    CGPoint _previousContentOffset;
    BOOL _isScrollingForward;
    SBSwitcherModifier *_gridModifier;
    BOOL _hasForegroundFullScreenApp;
    BOOL _isSwitcherVisible;
    BOOL _cachedVisibleAppsRangeIsValid;
    _NSRange _cachedVisibleAppsRange;
    BOOL _isScrolling;
    NSInteger _floatingConfiguration;
    NSUInteger _lastAppLayoutsGenerationCount;
    NSUInteger _cachedIndexOfFirstMainAppLayout;
    CGFloat _cachedFullScreenCardScale;
    CGSize _cachedContentSize;
    NSMutableDictionary *_cachedFrameForIndex;
    ? _cachesValidity;
}


@property (nonatomic) BOOL disableFullScreenCardScaleRounding; // ivar: _disableFullScreenCardScaleRounding
@property (readonly, nonatomic) CGSize floatingCardSize; // ivar: _floatingCardSize
@property (readonly, nonatomic) CGSize fullScreenCardSize; // ivar: _fullScreenCardSize
@property (nonatomic) NSUInteger lowDensityGridLayoutAlignment; // ivar: _lowDensityGridLayoutAlignment
@property (nonatomic) NSUInteger maximumNumberOfFullScreenCardsForSingleRow; // ivar: _maximumNumberOfFullScreenCardsForSingleRow
@property (nonatomic) BOOL reversesFloatingCardDirection; // ivar: _reversesFloatingCardDirection


-(BOOL)_isDoubleStackingFullScreenCards;
-(BOOL)_isIndexFullScreen:(NSUInteger)arg0 ;
-(BOOL)canFocusableAppLayoutBeEffectivelyObscured:(id)arg0 ;
-(BOOL)canLayoutRoleParticipateInSwitcherDragAndDrop:(NSInteger)arg0 appLayout:(id)arg1 ;
-(BOOL)clipsToUnobscuredMarginAtIndex:(NSUInteger)arg0 ;
-(BOOL)isIndexFullyVisible:(NSUInteger)arg0 ;
-(BOOL)isIndexRubberbandableForSwipeToKill:(NSUInteger)arg0 ;
-(BOOL)isIndexVisible:(NSUInteger)arg0 ;
-(BOOL)isLayoutRoleDraggable:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleKillable:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(BOOL)shouldAnimateInsertionOrRemovalOfAppLayout:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(BOOL)shouldBringCardToFrontDuringInsertionOrRemoval;
-(BOOL)shouldSuppressHighlightEffectForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)shouldTetherItemsAndAccessoriesInAppLayout:(id)arg0 ;
-(CGFloat)_cachedFullScreenCardScale;
-(CGFloat)_cardCornerRadiusInSwitcher;
-(CGFloat)_cardHeaderHeight;
-(CGFloat)_floatingCardScale;
-(CGFloat)_fullScreenCardScale;
-(CGFloat)_horizontalSpacing;
-(CGFloat)_verticalSpacing;
-(CGFloat)backgroundOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)blurViewIconScaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)contentPageViewScaleForAppLayout:(id)arg0 ;
-(CGFloat)contentViewScale;
-(CGFloat)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(NSUInteger)arg0 ;
-(CGFloat)firstFloatingCardPeekingWidth;
-(CGFloat)minimumTranslationToKillIndex:(NSUInteger)arg0 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)shadowOffsetForIndex:(NSUInteger)arg0 ;
-(CGFloat)shadowOpacityForLayoutRole:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(CGFloat)snapshotScaleForAppLayout:(id)arg0 ;
-(CGFloat)splitViewInnerCornerRadius;
-(CGFloat)titleAndIconOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)titleOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)unadjustedScaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)visibleMarginForItemContainerAtIndex:(NSUInteger)arg0 ;
-(NSInteger)headerStyleForIndex:(NSUInteger)arg0 ;
-(NSInteger)shadowStyleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSUInteger)_indexOfFirstFloatingLayoutFromAppLayouts:(id)arg0 ;
-(NSUInteger)_indexOfLeadingCard;
-(NSUInteger)_numberOfFloatingColumns;
-(NSUInteger)_numberOfFullScreenAppLayouts;
-(NSUInteger)_numberOfFullScreenColumns;
-(NSUInteger)_numberOfFullScreenRows;
-(NSUInteger)_numberOfOffScreenTrailingFloatingCardsForContentOffset:(struct CGPoint )arg0 ;
-(NSUInteger)_numberOfOffScreenTrailingFullScreenCardsForContentOffset:(struct CGPoint )arg0 ;
-(NSUInteger)_subtreeIndexForIndex:(NSUInteger)arg0 indexOfFirstMainAppLayout:(NSUInteger)arg1 ;
-(NSUInteger)indexOfFirstMainAppLayoutFromAppLayouts:(id)arg0 ;
-(NSUInteger)indexToScrollToAfterInsertingAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)indexToScrollToAfterRemovingIndex:(NSUInteger)arg0 ;
-(NSUInteger)numberOfFloatingAppLayouts;
-(NSUInteger)slideOverTongueDirection;
-(id)_appLayoutWithPrimaryLeafAppLayout:(id)arg0 sideLeafAppLayout:(id)arg1 configuration:(NSInteger)arg2 ;
-(id)_cacheKeyForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg0 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutsToCacheFullsizeSnapshots;
-(id)appLayoutsToCacheSnapshots;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)handleScrollEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithFullScreenCardSize:(struct CGSize )arg0 floatingCardSize:(struct CGSize )arg1 ;
-(id)neighboringAppLayoutsForFocusedAppLayout:(id)arg0 ;
-(id)responseForProposedChildResponse:(id)arg0 childModifier:(id)arg1 event:(id)arg2 ;
-(id)scrollViewAttributes;
-(id)switcherDropRegionContextForDraggingLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atLocation:(struct CGPoint )arg2 ;
-(id)topMostLayoutElements;
-(id)visibleAppLayouts;
-(struct CGPoint )adjustedOffsetForOffset:(struct CGPoint )arg0 translation:(struct CGPoint )arg1 startPoint:(struct CGPoint )arg2 locationInView:(struct CGPoint )arg3 horizontalVelocity:(*CGFloat)arg4 verticalVelocity:(*CGFloat)arg5 ;
-(struct CGPoint )contentOffsetForIndex:(NSUInteger)arg0 alignment:(NSInteger)arg1 ;
-(struct CGPoint )restingOffsetForScrollOffset:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 ;
-(struct CGRect )_adjustedFrame:(struct CGRect )arg0 forFloatingAppIndex:(NSUInteger)arg1 ;
-(struct CGRect )_frameForIndex:(NSUInteger)arg0 applyScrollViewContentOffset:(BOOL)arg1 ;
-(struct CGRect )_unpaddedCoplanarFrameForIndex:(NSUInteger)arg0 doubleStack:(BOOL)arg1 count:(NSUInteger)arg2 cardSize:(struct CGSize )arg3 scale:(CGFloat)arg4 contentWidth:(CGFloat)arg5 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct CGSize )_contentSize;
-(struct CGSize )_fittedContentSize;
-(struct CGSize )_fittedFloatingContentSize;
-(struct CGSize )_fittedFullScreenContentSize;
-(struct CGSize )_minimumFullScreenContentSize;
-(struct CGSize )_scaledCardSizeForIndex:(NSUInteger)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;
-(struct _NSRange )_floatingAppsStackRange;
-(struct _NSRange )_visibleAppLayoutRangeForContentOffset:(struct CGPoint )arg0 ;
-(struct _NSRange )_visibleAppLayoutRangeForContentOffset:(struct CGPoint )arg0 lastVisibleIndex:(NSUInteger)arg1 ;
-(struct _NSRange )rangeOfVisibleAppLayouts;
-(void)_invalidateCachesIfNeeded;
-(void)didMoveToParentModifier:(id)arg0 ;
-(void)resetAdjustedScrollingState;


@end


#endif