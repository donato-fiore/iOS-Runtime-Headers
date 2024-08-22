// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKDASHBOARDCHALLENGEPLAYERPICKERDATASOURCE_H
#define GKDASHBOARDCHALLENGEPLAYERPICKERDATASOURCE_H

@class GKChallenge, NSMutableDictionary, NSArray;


#import "GKCollectionDataSource.h"

@interface GKDashboardChallengePlayerPickerDataSource : GKCollectionDataSource

@property (retain, nonatomic) GKChallenge *challenge; // ivar: _challenge
@property (retain, nonatomic) NSMutableDictionary *playerAchievementDates; // ivar: _playerAchievementDates
@property (retain, nonatomic) NSMutableDictionary *playerStates; // ivar: _playerStates
@property (retain, nonatomic) NSArray *players; // ivar: _players
@property (retain, nonatomic) NSArray *searchPlayers; // ivar: _searchPlayers
@property (readonly, nonatomic) NSArray *selectedPlayers;


-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(CGFloat)preferredCollectionHeight;
-(NSInteger)itemCount;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)currentPlayers;
-(id)indexPathForPlayer:(id)arg0 ;
-(id)initWithChallenge:(id)arg0 ;
-(id)itemForIndexPath:(id)arg0 ;
-(id)playerForIndexPath:(id)arg0 ;
-(id)searchKeyForSection:(NSInteger)arg0 ;
-(id)sectionHeaderText;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)clearSelection;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(id)arg0 ;
-(void)searchTextHasChanged;
-(void)setupCollectionView:(id)arg0 ;


@end


#endif