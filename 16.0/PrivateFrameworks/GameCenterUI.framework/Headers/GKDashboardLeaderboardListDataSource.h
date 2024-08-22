// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKDASHBOARDLEADERBOARDLISTDATASOURCE_H
#define GKDASHBOARDLEADERBOARDLISTDATASOURCE_H

@class NSDictionary, GKGameRecord, GKLeaderboardSet, NSArray;


#import "GKCollectionDataSource.h"

@interface GKDashboardLeaderboardListDataSource : GKCollectionDataSource

@property (retain, nonatomic) NSDictionary *assetNames; // ivar: _assetNames
@property (retain, nonatomic) GKGameRecord *gameRecord; // ivar: _gameRecord
@property (retain, nonatomic) GKLeaderboardSet *leaderboardSet; // ivar: _leaderboardSet
@property (retain, nonatomic) NSArray *leaderboards; // ivar: _leaderboards


-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(CGFloat)preferredCollectionHeight;
-(NSInteger)itemCount;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithGameRecord:(id)arg0 leaderboardSet:(id)arg1 ;
-(id)itemForIndexPath:(id)arg0 ;
-(id)sectionHeaderText;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(id)arg0 ;
-(void)removeLeaderboardsWithoutImages;
-(void)setupCollectionView:(id)arg0 ;


@end


#endif