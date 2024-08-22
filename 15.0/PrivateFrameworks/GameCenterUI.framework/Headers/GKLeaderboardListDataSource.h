// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKLEADERBOARDLISTDATASOURCE_H
#define GKLEADERBOARDLISTDATASOURCE_H

@class NSDictionary, UICollectionView, GKLeaderboardSet, NSMutableArray, NSTimer;


#import "GKLeaderboardCollectionDataSource.h"

@interface GKLeaderboardListDataSource : GKLeaderboardCollectionDataSource

@property (retain, nonatomic) NSDictionary *assetNames; // ivar: _assetNames
@property (weak, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) GKLeaderboardSet *leaderboardSet; // ivar: _leaderboardSet
@property (retain, nonatomic) NSMutableArray *leaderboards; // ivar: _leaderboards
@property (retain, nonatomic) NSTimer *timer; // ivar: _timer


-(NSInteger)itemCount;
-(id)initWithGameRecord:(id)arg0 leaderboardSet:(id)arg1 ;
-(id)itemForIndexPath:(id)arg0 ;
-(id)title;
-(struct CGSize )standardCellSizeForCollectionView:(id)arg0 ;
-(void)dealloc;
-(void)handleSelectionInCollectionView:(id)arg0 forItemAtIndexPath:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(id)arg0 ;
-(void)prepareCell:(id)arg0 forItemAtIndexPath:(id)arg1 ;
-(void)removeLeaderboardsWithoutImages;
-(void)setupCollectionView:(id)arg0 ;
-(void)setupTimer;
-(void)updateHighlightsInSectionHeader:(id)arg0 ;


@end


#endif