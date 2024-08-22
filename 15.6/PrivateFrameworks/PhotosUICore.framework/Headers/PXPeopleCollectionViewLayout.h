// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPEOPLECOLLECTIONVIEWLAYOUT_H
#define PXPEOPLECOLLECTIONVIEWLAYOUT_H

@class UICollectionViewFlowLayout;



@interface PXPeopleCollectionViewLayout : UICollectionViewFlowLayout

@property (nonatomic) NSUInteger firstVisibleCellIndex; // ivar: _firstVisibleCellIndex


-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 withScrollingVelocity:(struct CGPoint )arg1 ;


@end


#endif