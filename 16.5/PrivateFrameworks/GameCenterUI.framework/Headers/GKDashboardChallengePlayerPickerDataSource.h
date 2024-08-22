// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKDASHBOARDCHALLENGEPLAYERPICKERDATASOURCE_H
#define GKDASHBOARDCHALLENGEPLAYERPICKERDATASOURCE_H

@class GKChallenge, NSArray, NSMutableSet, NSMutableDictionary;


#import "GKCollectionDataSource.h"

@interface GKDashboardChallengePlayerPickerDataSource : GKCollectionDataSource

@property (retain, nonatomic) GKChallenge *challenge; // ivar: _challenge
@property (retain, nonatomic) NSArray *friendSuggestions; // ivar: _friendSuggestions
@property (copy, nonatomic) id *inviteFriendHandler; // ivar: _inviteFriendHandler
@property (retain, nonatomic) NSMutableSet *invitedFriendContactIdentifiers; // ivar: _invitedFriendContactIdentifiers
@property (retain, nonatomic) NSMutableDictionary *playerAchievementDates; // ivar: _playerAchievementDates
@property (retain, nonatomic) NSMutableDictionary *playerStates; // ivar: _playerStates
@property (retain, nonatomic) NSArray *players; // ivar: _players
@property (retain, nonatomic) NSArray *searchPlayers; // ivar: _searchPlayers
@property (readonly, nonatomic) NSArray *selectedPlayers;
@property (nonatomic) BOOL showingAllFriendSuggestions; // ivar: _showingAllFriendSuggestions
@property (nonatomic) BOOL showingFriendSuggestions; // ivar: _showingFriendSuggestions


-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(CGFloat)preferredCollectionHeight;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)itemCount;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)addInvitedFriendContactIdentifier:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)currentPlayers;
-(id)headerTextForSection:(NSInteger)arg0 ;
-(id)indexPathForPlayer:(id)arg0 ;
-(id)initWithChallenge:(id)arg0 ;
-(id)itemForIndexPath:(id)arg0 ;
-(id)playerForIndexPath:(id)arg0 ;
-(id)searchKeyForSection:(NSInteger)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)clearSelection;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(id)arg0 ;
-(void)searchTextHasChanged;
-(void)setupCollectionView:(id)arg0 ;


@end


#endif