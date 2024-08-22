// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKDASHBOARDMULTIPLAYERPICKERDATASOURCEOBSOLETE_H
#define GKDASHBOARDMULTIPLAYERPICKERDATASOURCEOBSOLETE_H

@class NSArray, NSMutableArray, NSMutableDictionary;
@protocol GKDashboardMultiplayerPickerDatasourceDelegateObsolete, GKDashboardNearbyBrowserDelegate;


#import "GKCollectionDataSource.h"
#import "GKContactDataSource.h"

@interface GKDashboardMultiplayerPickerDataSourceObsolete : GKCollectionDataSource

@property (nonatomic) BOOL browsingForNearbyPlayers; // ivar: _browsingForNearbyPlayers
@property (retain, nonatomic) NSArray *contactPlayers; // ivar: _contactPlayers
@property (retain, nonatomic) GKContactDataSource *contactSource; // ivar: _contactSource
@property (retain, nonatomic) NSArray *coreRecentPlayers; // ivar: _coreRecentPlayers
@property (weak, nonatomic) NSObject<GKDashboardMultiplayerPickerDatasourceDelegateObsolete> *delegate; // ivar: _delegate
@property (nonatomic) BOOL didLoad; // ivar: _didLoad
@property (nonatomic) BOOL excludesContacts; // ivar: _excludesContacts
@property (retain, nonatomic) NSArray *friendPlayers; // ivar: _friendPlayers
@property (nonatomic) NSInteger friendSortFilterScope; // ivar: _friendSortFilterScope
@property (readonly, nonatomic) BOOL hasFriends;
@property (retain, nonatomic) NSArray *hiddenPlayers; // ivar: _hiddenPlayers
@property (readonly, nonatomic) BOOL isShowingNearbyInstructionCell;
@property (nonatomic) NSInteger maxSelectable; // ivar: _maxSelectable
@property (nonatomic) NSObject<GKDashboardNearbyBrowserDelegate> *nearbyDelegate; // ivar: _nearbyDelegate
@property (nonatomic) BOOL nearbyOnly; // ivar: _nearbyOnly
@property (retain, nonatomic) NSMutableArray *nearbyPlayers; // ivar: _nearbyPlayers
@property (copy, nonatomic) id *nearbyPlayersChangedHandler; // ivar: _nearbyPlayersChangedHandler
@property (retain, nonatomic) NSMutableDictionary *playerStates; // ivar: _playerStates
@property (retain, nonatomic) NSArray *recentPlayers; // ivar: _recentPlayers
@property (retain, nonatomic) NSArray *searchPlayers; // ivar: _searchPlayers
@property (readonly, nonatomic) NSArray *selectedPlayers;
@property (nonatomic) BOOL showsAllFriends; // ivar: _showsAllFriends
@property (nonatomic) BOOL showsAllSuggestions; // ivar: _showsAllSuggestions
@property (retain, nonatomic) NSArray *suggestedPlayers; // ivar: _suggestedPlayers
@property (nonatomic) BOOL supportsNearby; // ivar: _supportsNearby
@property (readonly, nonatomic) NSInteger unmodifiedItemCount;


-(BOOL)_canShowMoreSuggestions;
-(BOOL)cellSelectableStateAtIndexPath:(id)arg0 playerState:(NSUInteger)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)isPlayerAtIndexPathCoreRecent:(id)arg0 ;
-(BOOL)isShowingAddFriendsFooter;
-(CGFloat)playerCellHeightInCollectionView:(id)arg0 ;
-(CGFloat)preferredCollectionHeight;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)itemCount;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSUInteger)cornerMaskForItemAtIndexPath:(id)arg0 ;
-(NSUInteger)cornerMaskForSectionHeader;
-(id)alternateSearchKeyForSection:(NSInteger)arg0 ;
-(id)attributedFriendFilterTitle;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)filterHiddenPlayersPredicate;
-(id)firstIndexPathForPlayer:(id)arg0 ;
-(id)fullContactWithIdentifier:(id)arg0 ;
-(id)headerTextForSection:(NSInteger)arg0 ;
-(id)indexPathForFirstPlayer;
-(id)indexPathsForPlayer:(id)arg0 ;
-(id)initWithMaxSelectable:(NSInteger)arg0 hiddenPlayers:(id)arg1 nearbyOnly:(BOOL)arg2 ;
-(id)playerForIndexPath:(id)arg0 ;
-(id)playerForPlayerID:(id)arg0 ;
-(id)playersForSection:(NSInteger)arg0 ignoreSearch:(BOOL)arg1 ;
-(id)searchKeyForSection:(NSInteger)arg0 ;
-(struct CGSize )boundingSizeForItemsInCollectionView:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)clearSelection;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(id)arg0 ;
-(void)searchTextHasChanged;
-(void)setNearbyPlayer:(id)arg0 reachable:(BOOL)arg1 ;
-(void)setNearbyPlayerID:(id)arg0 reachable:(BOOL)arg1 ;
-(void)setupCollectionView:(id)arg0 ;
-(void)sortPlayersByNickname:(id)arg0 ;
-(void)sortPlayersByRecentlyPlayed:(id)arg0 ;


@end


#endif