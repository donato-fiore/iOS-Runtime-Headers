// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTCENTERINGCOLLECTIONVIEWHELPER_H
#define AVTCENTERINGCOLLECTIONVIEWHELPER_H


#import <Foundation/Foundation.h>


@interface AVTCenteringCollectionViewHelper : NSObject



// +(id)indexPathForItemBeingScrolledTowardFromOffset:(struct CGPoint )arg0 currentOffset:(struct CGPoint )arg1 nearestItemToCenter:(id)arg2 itemCount:(NSUInteger)arg3 itemOffsetProvider:(id)arg4 ratio:(unk)arg5  ;
+(id)indexPathForNearestItemToCenterWithOffset:(struct CGPoint )arg0 collectionView:(id)arg1 ;
+(struct CGPoint )contentOffsetForCenteringPoint:(struct CGPoint )arg0 collectionView:(id)arg1 ;
+(struct UIEdgeInsets )insetsForBounds:(struct CGRect )arg0 withFirstCellSize:(struct CGSize )arg1 lastCellSize:(struct CGSize )arg2 ;


@end


#endif