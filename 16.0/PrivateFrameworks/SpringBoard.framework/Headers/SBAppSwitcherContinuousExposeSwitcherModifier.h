// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPSWITCHERCONTINUOUSEXPOSESWITCHERMODIFIER_H
#define SBAPPSWITCHERCONTINUOUSEXPOSESWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"

@interface SBAppSwitcherContinuousExposeSwitcherModifier : SBSwitcherModifier {
    CGPoint _previousContentOffset;
    BOOL _isScrollingForward;
}




-(BOOL)_isIndexVisible:(NSUInteger)arg0 ;
-(BOOL)clipsToUnobscuredMarginAtIndex:(NSUInteger)arg0 ;
-(BOOL)isHomeAffordanceSupportedForAppLayout:(id)arg0 ;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)shouldAccessoryDrawShadowForAppLayout:(id)arg0 ;
-(BOOL)shouldAnimateInsertionOrRemovalOfAppLayout:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(BOOL)shouldBringCardToFrontDuringInsertionOrRemoval;
-(BOOL)wantsSpaceAccessoryViewPointerInteractionsForAppLayout:(id)arg0 ;
-(CGFloat)_cardHeaderHeight;
-(CGFloat)_cornerRadius;
-(CGFloat)_horizontalSpacing;
-(CGFloat)_leftStripMidY;
-(CGFloat)_maxWidthForTopCardInGroupWithCount:(NSUInteger)arg0 ;
-(CGFloat)_verticalSpacing;
-(CGFloat)contentPageViewScaleForAppLayout:(id)arg0 withScale:(CGFloat)arg1 ;
-(CGFloat)contentViewScale;
-(CGFloat)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(NSUInteger)arg0 ;
-(CGFloat)homeScreenAlpha;
-(CGFloat)homeScreenBackdropBlurProgress;
-(CGFloat)homeScreenDimmingAlpha;
-(CGFloat)minimumTranslationToKillIndex:(NSUInteger)arg0 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)rotationAngleForIndex:(NSUInteger)arg0 ;
-(CGFloat)scale;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)shadowOffsetForIndex:(NSUInteger)arg0 ;
-(CGFloat)shadowOpacityForLayoutRole:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(CGFloat)snapshotScaleForAppLayout:(id)arg0 ;
-(CGFloat)titleAndIconOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)titleOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)visibleMarginForItemContainerAtIndex:(NSUInteger)arg0 ;
-(NSInteger)headerStyleForIndex:(NSUInteger)arg0 ;
-(NSInteger)homeScreenBackdropBlurType;
-(NSInteger)shadowStyleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSInteger)wallpaperStyle;
-(NSUInteger)_columnForIndex:(NSUInteger)arg0 ;
-(NSUInteger)_firstAppLayoutIndexForContinuousExposeIdentifierAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)_firstTrailingIndexForContentOffset:(struct CGPoint )arg0 ;
-(NSUInteger)_indexOfAppLayoutInAppLayoutsForContinuousExposeIdentifier:(id)arg0 ;
-(NSUInteger)_indexOfLeadingAppLayout;
-(NSUInteger)_numberOfColumns;
-(NSUInteger)_numberOfSpaces;
-(NSUInteger)_rowForIndex:(NSUInteger)arg0 ;
-(NSUInteger)indexToScrollToAfterInsertingAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)indexToScrollToAfterRemovingIndex:(NSUInteger)arg0 ;
-(id)_appLayoutsToCacheSnapshotsWithVisibleRange:(struct _NSRange )arg0 numberOfSnapshotsToCache:(NSUInteger)arg1 biasForward:(BOOL)arg2 ;
-(id)_overlappingModelForAppLayout:(id)arg0 ;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg0 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutsToCacheFullsizeSnapshots;
-(id)appLayoutsToCacheSnapshots;
-(id)handleScrollEvent:(id)arg0 ;
-(id)handleSwitcherSettingsChangedEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)init;
-(id)scrollViewAttributes;
-(id)topMostLayoutElements;
-(id)visibleAppLayouts;
-(id)visibleHomeAffordanceLayoutElements;
-(struct CGPoint )adjustedOffsetForOffset:(struct CGPoint )arg0 translation:(struct CGPoint )arg1 startPoint:(struct CGPoint )arg2 locationInView:(struct CGPoint )arg3 horizontalVelocity:(*CGFloat)arg4 verticalVelocity:(*CGFloat)arg5 ;
-(struct CGPoint )anchorPointForIndex:(NSUInteger)arg0 ;
-(struct CGPoint )contentOffsetForIndex:(NSUInteger)arg0 alignment:(NSInteger)arg1 ;
-(struct CGPoint )restingOffsetForScrollOffset:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 ;
-(struct CGRect )_frameForIndex:(NSUInteger)arg0 ignoringScrollOffset:(BOOL)arg1 ;
-(struct CGRect )_frameWithScaleAppliedForIndex:(NSUInteger)arg0 ignoringScrollOffset:(BOOL)arg1 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withBounds:(struct CGRect )arg2 ;
-(struct CGSize )_contentSize;
-(struct CGSize )_fittedContentSize;
-(struct CGSize )_scaledCardSize;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;
-(struct _NSRange )visibleSpaceRangeForContentOffset:(struct CGPoint )arg0 ;
-(void)_applyPrototypeSettings;
-(void)didMoveToParentModifier:(id)arg0 ;
-(void)resetAdjustedScrollingState;


@end


#endif