// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKDASHBOARDLEADERBOARDSETDATASOURCE_H
#define GKDASHBOARDLEADERBOARDSETDATASOURCE_H

@class GKGameRecord, NSDictionary, NSArray;


#import "GKCollectionDataSource.h"

@interface GKDashboardLeaderboardSetDataSource : GKCollectionDataSource

@property (retain, nonatomic) GKGameRecord *gameRecord; // ivar: _gameRecord
@property (retain, nonatomic) NSDictionary *leaderboardAssetNames; // ivar: _leaderboardAssetNames
@property (retain, nonatomic) NSDictionary *leaderboardSetAssetNames; // ivar: _leaderboardSetAssetNames
@property (retain, nonatomic) NSArray *leaderboardSets; // ivar: _leaderboardSets


-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(CGFloat)preferredCollectionHeight;
-(NSInteger)itemCount;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithGameRecord:(id)arg0 ;
-(id)itemForIndexPath:(id)arg0 ;
-(id)sectionHeaderText;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(id)arg0 ;
-(void)removeLeaderboardSetsWithoutImages;
-(void)setupCollectionView:(id)arg0 ;


@end


#endif