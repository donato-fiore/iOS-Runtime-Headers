// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger layoutDirection; // ivar: _layoutDirection
@property (readonly, nonatomic) CGFloat scale;
@property (readonly) Class superclass;


-(BOOL)_isIndexVisible:(NSUInteger)arg0 ;
-(BOOL)clipsToUnobscuredMarginAtIndex:(NSUInteger)arg0 ;
-(BOOL)isHomeAffordanceSupportedForAppLayout:(id)arg0 ;
-(BOOL)shouldAnimateInsertionOrRemovalOfAppLayout:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(BOOL)shouldBringCardToFrontDuringInsertionOrRemoval;
-(CGFloat)_cardHeaderHeight;
-(CGFloat)_cornerRadius;
-(CGFloat)_horizontalSpacing;
-(CGFloat)_verticalSpacing;
-(CGFloat)contentPageViewScaleForAppLayout:(id)arg0 withScale:(CGFloat)arg1 ;
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
-(NSUInteger)_appLayoutIndexForSpaceIndex:(NSUInteger)arg0 ;
-(NSUInteger)_columnForIndex:(NSUInteger)arg0 ;
-(NSUInteger)_firstTrailingIndexForContentOffset:(struct CGPoint )arg0 ;
-(NSUInteger)_indexOfLeadingCard;
-(NSUInteger)_numberOfColumns;
-(NSUInteger)_numberOfSpaces;
-(NSUInteger)_rowForIndex:(NSUInteger)arg0 ;
-(NSUInteger)indexToScrollToAfterInsertingAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)indexToScrollToAfterRemovingIndex:(NSUInteger)arg0 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutsToCacheFullsizeSnapshots;
-(id)appLayoutsToCacheSnapshots;
-(id)handleScrollEvent:(id)arg0 ;
-(id)handleSwitcherSettingsChangedEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithAlignment:(NSUInteger)arg0 layoutDirection:(NSUInteger)arg1 ;
-(id)scrollViewAttributes;
-(id)visibleAppLayouts;
-(id)visibleHomeAffordanceLayoutElements;
-(struct CGPoint )adjustedOffsetForOffset:(struct CGPoint )arg0 translation:(struct CGPoint )arg1 startPoint:(struct CGPoint )arg2 locationInView:(struct CGPoint )arg3 horizontalVelocity:(*CGFloat)arg4 verticalVelocity:(*CGFloat)arg5 ;
-(struct CGPoint )contentOffsetForIndex:(NSUInteger)arg0 alignment:(NSInteger)arg1 ;
-(struct CGPoint )restingOffsetForScrollOffset:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 ;
-(struct CGRect )_frameForIndex:(NSUInteger)arg0 ignoringScrollOffset:(BOOL)arg1 ;
-(struct CGRect )_frameWithScaleAppliedForIndex:(NSUInteger)arg0 ignoringScrollOffset:(BOOL)arg1 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct CGSize )_contentSize;
-(struct CGSize )_fittedContentSize;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;
-(struct _NSRange )visibleAppLayoutRangeForContentOffset:(struct CGPoint )arg0 ;
-(void)_applyPrototypeSettings;
-(void)didMoveToParentModifier:(id)arg0 ;
-(void)resetAdjustedScrollingState;


@end


#endif