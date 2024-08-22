// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKCHALLENGEDATASOURCE_H
#define GKCHALLENGEDATASOURCE_H



#import "GKDashboardChallengeDataSource.h"

@interface GKChallengeDataSource : GKDashboardChallengeDataSource



-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)setupCollectionView:(id)arg0 ;


@end


#endif