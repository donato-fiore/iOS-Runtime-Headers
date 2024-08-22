// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUAVALANCHEREVIEWCOLLECTIONVIEWLAYOUT_H
#define PUAVALANCHEREVIEWCOLLECTIONVIEWLAYOUT_H

@class NSIndexPath;
@protocol PUAvalancheReviewCollectionViewLayoutDelegate;


#import "PUHorizontalCollectionViewLayout.h"

@interface PUAvalancheReviewCollectionViewLayout : PUHorizontalCollectionViewLayout

@property (weak, nonatomic) NSObject<PUAvalancheReviewCollectionViewLayoutDelegate> *delegate;
@property (nonatomic) UIOffset sharingBadgeOffset; // ivar: _sharingBadgeOffset
@property (retain, nonatomic) NSIndexPath *zoomingCellIndexPath; // ivar: _zoomingCellIndexPath


-(BOOL)_shouldInvalidateCachedLayoutForBoundsChange:(struct CGRect )arg0 ;
-(BOOL)_supportsAdvancedTransitionAnimations;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(id)_badgeLayoutAttributesForItemLayoutAttributes:(id)arg0 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(struct CGRect )_floatingSelectionBadgeFrameForItemFrame:(struct CGRect )arg0 visibleItemFrame:(struct CGRect )arg1 atIndexPath:(id)arg2 ;


@end


#endif