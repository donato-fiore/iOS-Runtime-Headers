// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKLEADERBOARDSETDATASOURCE_H
#define GKLEADERBOARDSETDATASOURCE_H

@class NSDictionary, NSArray;


#import "GKLeaderboardCollectionDataSource.h"

@interface GKLeaderboardSetDataSource : GKLeaderboardCollectionDataSource

@property (retain, nonatomic) NSDictionary *leaderboardAssetNames; // ivar: _leaderboardAssetNames
@property (retain, nonatomic) NSDictionary *leaderboardSetAssetNames; // ivar: _leaderboardSetAssetNames
@property (retain, nonatomic) NSArray *leaderboardSets; // ivar: _leaderboardSets


-(NSInteger)allowedColumnCount:(NSInteger)arg0 ;
-(NSInteger)itemCount;
-(id)itemForIndexPath:(id)arg0 ;
-(id)title;
-(struct CGSize )standardCellSizeForCollectionView:(id)arg0 ;
-(void)handleSelectionInCollectionView:(id)arg0 forItemAtIndexPath:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(id)arg0 ;
-(void)prepareCell:(id)arg0 forItemAtIndexPath:(id)arg1 ;
-(void)presentLeaderboardsListWithSet:(id)arg0 segueToLeaderboard:(id)arg1 ;
-(void)removeLeaderboardSetsWithoutImages;
-(void)updateHighlightsInSectionHeader:(id)arg0 ;


@end


#endif