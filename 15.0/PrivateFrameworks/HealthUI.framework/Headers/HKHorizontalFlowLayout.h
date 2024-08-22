// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKHORIZONTALFLOWLAYOUT_H
#define HKHORIZONTALFLOWLAYOUT_H

@class UICollectionViewFlowLayout;



@interface HKHorizontalFlowLayout : UICollectionViewFlowLayout

@property (nonatomic) CGFloat leadingInset;
@property (nonatomic) BOOL snapsToItemBoundaries; // ivar: _snapsToItemBoundaries
@property (nonatomic) BOOL snapsToItemCenters; // ivar: _snapsToItemCenters
@property (nonatomic) CGFloat trailingInset;


+(CGFloat)snapToBoundariesDecelerationRate;
-(id)init;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 withScrollingVelocity:(struct CGPoint )arg1 ;


@end


#endif