// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNMECARDSHARINGONBOARDINGAVATARCAROUSELLAYOUT_H
#define CNMECARDSHARINGONBOARDINGAVATARCAROUSELLAYOUT_H

@class UICollectionViewFlowLayout;



@interface CNMeCardSharingOnboardingAvatarCarouselLayout : UICollectionViewFlowLayout



+(id)indexPathForNearestItemToCenterWithOffset:(struct CGPoint )arg0 collectionView:(id)arg1 layout:(id)arg2 ;
-(CGFloat)pageOffsetForIndex:(NSInteger)arg0 ;
-(CGFloat)pagingLength;
-(CGFloat)pagingOrigin;
-(NSInteger)selectedPageIndex;
-(id)indexesForElementsInRect:(struct CGRect )arg0 visibleBounds:(struct CGRect )arg1 numberOfItems:(NSInteger)arg2 ;
-(struct CGRect )frameForElementAtIndex:(NSInteger)arg0 visibleBounds:(struct CGRect )arg1 ;


@end


#endif