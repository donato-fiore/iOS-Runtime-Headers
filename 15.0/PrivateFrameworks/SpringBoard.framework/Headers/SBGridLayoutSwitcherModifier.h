// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBGRIDLAYOUTSWITCHERMODIFIER_H
#define SBGRIDLAYOUTSWITCHERMODIFIER_H

@class NSString;
@protocol PTSettingsKeyObserver;


#import "SBSwitcherModifier.h"

@interface SBGridLayoutSwitcherModifier : SBSwitcherModifier <PTSettingsKeyObserver>

 {
    CGPoint _previousContentOffset;
    BOOL _isScrollingForward;
}


@property (nonatomic) NSUInteger alignment; // ivar: _alignment
@property (nonatomic) CGFloat cardScale; // ivar: _unroundedCardScale
@property (nonatomic) BOOL centersContentVertically; // ivar: _centersContentVertically
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGSize fixedCardSize; // ivar: _fixedCardSize
@property (nonatomic) NSUInteger fixedGroupingSize; // ivar: _fixedGroupingSize
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger layoutDirection; // ivar: _layoutDirection
@property (nonatomic) NSUInteger scrollAxis; // ivar: _scrollAxis
@property (readonly) Class superclass;
@property (nonatomic, getter=isUsingFixedCardSize) BOOL usesFixedCardSize; // ivar: _usesFixedCardSize


-(BOOL)_isIndexVisible:(NSUInteger)arg0 ;
-(BOOL)clipsToUnobscuredMarginAtIndex:(NSUInteger)arg0 ;
-(BOOL)isHomeAffordanceSupportedForAppLayout:(id)arg0 ;
-(BOOL)isResizeGrabberVisibleForAppLayout:(id)arg0 ;
-(BOOL)shouldAnimateInsertionOrRemovalOfAppLayout:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(BOOL)shouldBringCardToFrontDuringInsertionOrRemoval;
-(CGFloat)_cardCornerRadiusInSwitcher;
-(CGFloat)_cardHeaderHeight;
-(CGFloat)_gridSwitcherPageScale;
-(CGFloat)_horizontalSpacing;
-(CGFloat)_leadingPadding;
-(CGFloat)_trailingPadding;
-(CGFloat)_verticalSpacing;
-(CGFloat)contentPageViewScaleForAppLayout:(id)arg0 ;
-(CGFloat)contentViewScale;
-(CGFloat)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(NSUInteger)arg0 ;
-(CGFloat)minimumTranslationToKillIndex:(NSUInteger)arg0 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)rotationAngleForIndex:(NSUInteger)arg0 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)shadowOffsetForIndex:(NSUInteger)arg0 ;
-(CGFloat)shadowOpacityForLayoutRole:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(CGFloat)snapshotScaleForAppLayout:(id)arg0 ;
-(CGFloat)titleAndIconOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)titleOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)visibleMarginForItemContainerAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)_columnForIndex:(NSUInteger)arg0 ;
-(NSUInteger)_firstTrailingIndexForContentOffset:(struct CGPoint )arg0 ;
-(NSUInteger)_indexOfLeadingCard;
-(NSUInteger)_numberOfColumns;
-(NSUInteger)_numberOfRows;
-(NSUInteger)_rowForIndex:(NSUInteger)arg0 ;
-(NSUInteger)indexToScrollToAfterInsertingAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)indexToScrollToAfterRemovingIndex:(NSUInteger)arg0 ;
-(NSUInteger)numberOfRows;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutsToCacheFullsizeSnapshots;
-(id)appLayoutsToCacheSnapshots;
-(id)handleScrollEvent:(id)arg0 ;
-(id)handleSwitcherSettingsChangedEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithScrollAxis:(NSUInteger)arg0 fixedGroupingSize:(NSUInteger)arg1 cardScale:(CGFloat)arg2 alignment:(NSUInteger)arg3 layoutDirection:(NSUInteger)arg4 ;
-(id)scrollViewAttributes;
-(id)visibleAppLayouts;
-(id)visibleHomeAffordanceLayoutElements;
-(struct CGPoint )adjustedOffsetForOffset:(struct CGPoint )arg0 translation:(struct CGPoint )arg1 startPoint:(struct CGPoint )arg2 locationInView:(struct CGPoint )arg3 horizontalVelocity:(*CGFloat)arg4 verticalVelocity:(*CGFloat)arg5 ;
-(struct CGPoint )contentOffsetForIndex:(NSUInteger)arg0 alignment:(NSInteger)arg1 ;
-(struct CGPoint )restingOffsetForScrollOffset:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 ;
-(struct CGRect )_frameForIndex:(NSUInteger)arg0 ignoringScrollOffset:(BOOL)arg1 ;
-(struct CGRect )_frameWithScaleAppliedForIndex:(NSUInteger)arg0 ignoringScrollOffset:(BOOL)arg1 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct CGSize )_cardSize;
-(struct CGSize )_contentSize;
-(struct CGSize )_fittedContentSize;
-(struct CGSize )_scaledCardSize;
-(struct CGSize )fittedContentSize;
-(struct CGSize )spacing;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;
-(struct _NSRange )visibleAppLayoutRangeForContentOffset:(struct CGPoint )arg0 ;
-(void)_applyPrototypeSettings;
-(void)didMoveToParentModifier:(id)arg0 ;
-(void)resetAdjustedScrollingState;


@end


#endif