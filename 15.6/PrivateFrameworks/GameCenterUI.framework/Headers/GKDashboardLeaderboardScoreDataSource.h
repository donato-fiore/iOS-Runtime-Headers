// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKDASHBOARDLEADERBOARDSCOREDATASOURCE_H
#define GKDASHBOARDLEADERBOARDSCOREDATASOURCE_H

@class GKGameRecord, GKLeaderboard, NSArray, UIFont;


#import "GKCollectionDataSource.h"

@interface GKDashboardLeaderboardScoreDataSource : GKCollectionDataSource

@property (nonatomic) BOOL forceInitialShowMore; // ivar: _forceInitialShowMore
@property (retain, nonatomic) GKGameRecord *gameRecord; // ivar: _gameRecord
@property (retain, nonatomic) GKLeaderboard *leaderboard; // ivar: _leaderboard
@property (readonly, nonatomic) BOOL needsShowMoreCell;
@property (readonly, nonatomic) BOOL needsShowcaseCell;
@property (nonatomic) NSInteger playerScope;
@property (retain, nonatomic) NSArray *scores; // ivar: _scores
@property (readonly, nonatomic) UIFont *sectionHeaderFont;
@property (nonatomic, getter=isShowingMoreScores) BOOL showingMoreScores; // ivar: _showingMoreScores
@property (nonatomic) NSInteger timeScope;
@property (nonatomic) SEL timeScopeAction; // ivar: _timeScopeAction
@property (weak, nonatomic) id *timeScopeTarget; // ivar: _timeScopeTarget
@property (nonatomic) NSInteger visibleItemCount; // ivar: _visibleItemCount


-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)hasFriendsButton;
-(BOOL)isShowMoreIndexPath:(id)arg0 ;
-(BOOL)isShowcaseIndexPath:(id)arg0 ;
-(CGFloat)preferredCollectionHeight;
-(NSInteger)itemCount;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithGameRecord:(id)arg0 leaderboard:(id)arg1 ;
-(id)itemForIndexPath:(id)arg0 ;
-(id)sectionHeaderText;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(id)arg0 ;
-(void)revealMoreItemsInCollectionView:(id)arg0 section:(NSInteger)arg1 completion:(id)arg2 ;
-(void)sectionHeaderButtonPressed:(id)arg0 ;
-(void)setupCollectionView:(id)arg0 ;
-(void)showMoreInCollectionView:(id)arg0 section:(NSInteger)arg1 ;


@end


#endif