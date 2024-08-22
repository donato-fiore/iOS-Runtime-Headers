// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11POSTERBOARD23POSTERRACKSTACKEDLAYOUT_H
#define _TTC11POSTERBOARD23POSTERRACKSTACKEDLAYOUT_H

@class UICollectionViewLayout;



@interface _TtC11PosterBoard23PosterRackStackedLayout : UICollectionViewLayout {
    ? layoutMode;
    ? selectedSectionIndex;
    ? sectionRevealProgressProvider;
    ? hidesHomeCardsUnlessHomePeeking;
    ? alongsideCompactLayoutShouldScaleFurtherBack;
    ? layoutModeTransitioningTo;
    ? itemSize;
    ? minimumLineSpacing;
    ? sectionInset;
    ? scrollDirection;
    ? zoomCardSizeMultiplier;
    ? cardSizeMultiplier;
    ? peekingCardSizeMultiplier;
    ? alongsideCardUpscale;
    ? alongsideCardLesserUpscale;
    ? maximumVerticalRevealFraction;
    ? overhangMultiplier;
    ? zoomCardSizeOverlapMultiplier;
    ? selectedFrontBaseOffset;
    ? unselectedFrontBaseOffset;
    ? unselectedFrontShovedMultiplier;
    ? unselectedFrontParallaxLeadingMultiplier;
    ? unselectedFrontParallaxTrailingMultiplier;
    ? backBaseOffset;
    ? backParallaxMultiplier;
    ? contentBounds;
    ? cachedAttributes;
    ? cachedSupplementaryHeaderAttributes;
    ? cachedSupplementaryFooterAttributes;
    ? sectionRevealProgresses;
    ? sectionIndexPathsToDelete;
    ? indexPathToMaintainForTransition;
}


@property (nonatomic, readonly) CGSize collectionViewContentSize;
@property (nonatomic, readonly) BOOL flipsHorizontallyInOppositeLayoutDirection;


-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg0 ;
-(id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 ;
-(void)finalizeCollectionViewUpdates;
-(void)finalizeLayoutTransition;
-(void)prepareForCollectionViewUpdates:(id)arg0 ;
-(void)prepareForTransitionFromLayout:(id)arg0 ;
-(void)prepareForTransitionToLayout:(id)arg0 ;
-(void)prepareLayout;


@end


#endif