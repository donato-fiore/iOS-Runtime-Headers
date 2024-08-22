// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKDASHBOARDMULTIPLAYERPICKERDATASOURCE_H
#define GKDASHBOARDMULTIPLAYERPICKERDATASOURCE_H

@class NSMutableArray, NSString, NSArray, NSMutableDictionary, NSMutableSet;
@protocol _TtP12GameCenterUI33GKSuggestionsPlayerSelectionProxy_, _TtP12GameCenterUI37GKExpandedGroupViewControllerDelegate_, GKDashboardPickerPlayerGroupCellDelegate, GKDashboardMultiplayerPickerDatasourceDelegate, GKDashboardNearbyBrowserDelegate;


#import "GKCollectionDataSource.h"
#import "GKContactDataSource.h"
#import "_TtC12GameCenterUI26GKSuggestionsContainerCell.h"

@interface GKDashboardMultiplayerPickerDataSource : GKCollectionDataSource <_TtP12GameCenterUI33GKSuggestionsPlayerSelectionProxy_, _TtP12GameCenterUI37GKExpandedGroupViewControllerDelegate_, GKDashboardPickerPlayerGroupCellDelegate>



@property (nonatomic) BOOL browsingForNearbyPlayers; // ivar: _browsingForNearbyPlayers
@property (retain, nonatomic) NSMutableArray *contactPlayers; // ivar: _contactPlayers
@property (retain, nonatomic) GKContactDataSource *contactSource; // ivar: _contactSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GKDashboardMultiplayerPickerDatasourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didLoad; // ivar: _didLoad
@property (retain, nonatomic) NSArray *friendPlayers; // ivar: _friendPlayers
@property (nonatomic) NSInteger friendSortFilterScope; // ivar: _friendSortFilterScope
@property (readonly, nonatomic) BOOL hasFriends;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isShowingNearbyExpanded; // ivar: _isShowingNearbyExpanded
@property (nonatomic) NSInteger maxSelectable; // ivar: _maxSelectable
@property (nonatomic) NSObject<GKDashboardNearbyBrowserDelegate> *nearbyDelegate; // ivar: _nearbyDelegate
@property (nonatomic) BOOL nearbyOnly; // ivar: _nearbyOnly
@property (retain, nonatomic) NSMutableArray *nearbyPlayers; // ivar: _nearbyPlayers
@property (copy, nonatomic) id *nearbyPlayersChangedHandler; // ivar: _nearbyPlayersChangedHandler
@property (nonatomic) int numberOfFriendsToShowInitially; // ivar: _numberOfFriendsToShowInitially
@property (retain, nonatomic) NSMutableDictionary *playerStates; // ivar: _playerStates
@property (retain, nonatomic) NSMutableSet *previouslyInvitedPlayers; // ivar: _previouslyInvitedPlayers
@property (retain, nonatomic) NSArray *searchPlayersAndGroups; // ivar: _searchPlayersAndGroups
@property (retain, nonatomic) NSMutableSet *selectedMessageGroups; // ivar: _selectedMessageGroups
@property (readonly, nonatomic) NSArray *selectedPlayers;
@property (nonatomic) BOOL selectionShouldSkipDelegateResponse; // ivar: _selectionShouldSkipDelegateResponse
@property (nonatomic) BOOL showingExpandedSearch; // ivar: _showingExpandedSearch
@property (nonatomic) BOOL showsAllFriends; // ivar: _showsAllFriends
@property (retain, nonatomic) NSMutableArray *suggestedPlayerGroups; // ivar: _suggestedPlayerGroups
@property (retain, nonatomic) NSArray *suggestedPlayers; // ivar: _suggestedPlayers
@property (weak, nonatomic) _TtC12GameCenterUI26GKSuggestionsContainerCell *suggestionContainerCell; // ivar: _suggestionContainerCell
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsNearby; // ivar: _supportsNearby
@property (readonly, nonatomic) NSInteger unmodifiedItemCount;


-(BOOL)_canShowMoreFriends;
-(BOOL)canSelectPlayerGroup:(id)arg0 atIndexPath:(id)arg1 inCollectionView:(id)arg2 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)isPlayerAtIndexPathCoreRecent:(id)arg0 ;
-(BOOL)isShowingAddFriendsFooter;
-(BOOL)playerIsSelectable:(id)arg0 ;
-(BOOL)playerIsSelected:(id)arg0 ;
-(BOOL)shouldSelectPlayerGroup:(id)arg0 ;
-(CGFloat)playerCellHeightInCollectionView:(id)arg0 ;
-(CGFloat)preferredCollectionHeight;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)getMaxPlayerCount;
-(NSInteger)getSelectedPlayerCount;
-(NSInteger)itemCount;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSUInteger)cornerMaskForItemAtIndexPath:(id)arg0 ;
-(NSUInteger)cornerMaskForSectionHeader;
-(id)alternateSearchKeyForSection:(NSInteger)arg0 ;
-(id)attributedFriendFilterTitle;
-(id)candidateIndexPaths;
-(id)collectionView;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)firstIndexPathForPlayer:(id)arg0 ;
-(id)fullContactWithIdentifier:(id)arg0 ;
-(id)getSuggestedPlayerGroups;
-(id)headerTextForSection:(NSInteger)arg0 ;
-(id)indexPathForFirstPlayer;
-(id)indexPathForPlayer:(id)arg0 inSection:(NSUInteger)arg1 ;
-(id)indexPathsForPlayer:(id)arg0 ;
-(id)initWithMaxSelectable:(NSInteger)arg0 previouslyInvitedPlayers:(id)arg1 nearbyOnly:(BOOL)arg2 ;
-(id)playerCellForItemAtIndexPath:(id)arg0 inCollectionView:(id)arg1 ;
-(id)playerForIndexPath:(id)arg0 ;
-(id)playerForPlayerID:(id)arg0 ;
-(id)playerGroupCellForItemAtIndexPath:(id)arg0 inCollectionView:(id)arg1 ;
-(id)playersForSection:(NSInteger)arg0 ignoreSearch:(BOOL)arg1 ;
-(id)searchKeyForSection:(NSInteger)arg0 ;
-(id)suggestionsCellForItemAtIndexPath:(id)arg0 inCollectionView:(id)arg1 ;
-(struct CGSize )boundingSizeForItemsInCollectionView:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)clearSelection;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)deselectItemAtIndexPath:(id)arg0 animated:(BOOL)arg1 ;
-(void)didAddRecipientPlayers:(id)arg0 ;
-(void)didAttemptSelectingAlreadySelectedPlayers:(id)arg0 inGroup:(id)arg1 ;
-(void)didDeselectPlayerGroup:(id)arg0 indexPath:(id)arg1 dataSourceIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)didDeselectPlayers:(id)arg0 indexPath:(id)arg1 dataSourceIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)didExceedAvailablePlayers;
-(void)didPickContact:(id)arg0 ;
-(void)didRemoveRecipientPlayers:(id)arg0 ;
-(void)didSelectPlayerGroup:(id)arg0 indexPath:(id)arg1 dataSourceIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)didSelectPlayers:(id)arg0 indexPath:(id)arg1 dataSourceIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)donateGroupToPeopleSuggester:(id)arg0 ;
-(void)expandPlayerGroup:(id)arg0 atIndexPath:(id)arg1 inCollectionView:(id)arg2 ;
-(void)expandedGroupViewControllerWillDismiss;
-(void)handleLongPressGesture:(id)arg0 ;
-(void)loadDataWithCompletionHandler:(id)arg0 ;
-(void)pickerWillSendInvites;
-(void)searchTextHasChanged;
-(void)selectItemAtIndexPath:(id)arg0 animated:(BOOL)arg1 scrollPosition:(NSUInteger)arg2 ;
-(void)setNearbyPlayer:(id)arg0 reachable:(BOOL)arg1 ;
-(void)setNearbyPlayerID:(id)arg0 reachable:(BOOL)arg1 ;
-(void)setupCollectionView:(id)arg0 ;
-(void)showSelectionLimitAlert;
-(void)sortPlayersByNickname:(id)arg0 ;
-(void)sortPlayersByRecentlyPlayed:(id)arg0 ;
-(void)updateMessageGroupsPlayerSelection;
-(void)updatePlayerGroups:(id)arg0 forPlayers:(id)arg1 excludedIndexPath:(id)arg2 ;
-(void)updateSelectionStateForCollectionView:(id)arg0 indexPaths:(id)arg1 ;
-(void)updateStateForUnreachableNearbyPlayer:(id)arg0 ;
-(void)updateVisibleItemsWithPlayers:(id)arg0 indexPath:(id)arg1 dataSourceIdentifier:(id)arg2 completion:(id)arg3 ;


@end


#endif