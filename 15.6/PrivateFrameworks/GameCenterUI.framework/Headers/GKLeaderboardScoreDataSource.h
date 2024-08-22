// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKLEADERBOARDSCOREDATASOURCE_H
#define GKLEADERBOARDSCOREDATASOURCE_H

@class NSString, UICollectionView, NSArray, GKLeaderboard, GKLeaderboardEntry, NSSet;
@protocol GKLeaderboardScoreDelegate;


#import "GKGameLayerCollectionDataSource.h"
#import "GKLeaderboardAddFriendsCell.h"

@interface GKLeaderboardScoreDataSource : GKGameLayerCollectionDataSource

@property (nonatomic) NSInteger addFriendCellItem; // ivar: _addFriendCellItem
@property (retain, nonatomic) NSString *additionalNextDataLoadToken; // ivar: _additionalNextDataLoadToken
@property (retain, nonatomic) NSString *additionalPreviousDataLoadToken; // ivar: _additionalPreviousDataLoadToken
@property (nonatomic) BOOL autoScrollToLocalPlayerPosition; // ivar: _autoScrollToLocalPlayerPosition
@property (nonatomic) NSInteger bottomLoadingCellItem; // ivar: _bottomLoadingCellItem
@property (weak, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) NSArray *entries; // ivar: _entries
@property (nonatomic) BOOL firstLoad; // ivar: _firstLoad
@property (nonatomic) NSInteger friendCount; // ivar: _friendCount
@property (nonatomic) BOOL isLoadingData; // ivar: _isLoadingData
@property (nonatomic) BOOL isLoadingNextData; // ivar: _isLoadingNextData
@property (nonatomic) BOOL isLoadingPreviousData; // ivar: _isLoadingPreviousData
@property (retain, nonatomic) GKLeaderboard *leaderboard; // ivar: _leaderboard
@property (nonatomic) NSInteger leaderboardOccurrence; // ivar: _leaderboardOccurrence
@property (weak, nonatomic) NSObject<GKLeaderboardScoreDelegate> *leaderboardScoreDelegate; // ivar: _leaderboardScoreDelegate
@property (retain, nonatomic) GKLeaderboardEntry *localPlayerEntry; // ivar: _localPlayerEntry
@property (retain, nonatomic) NSSet *localPlayerFriendIDs; // ivar: _localPlayerFriendIDs
@property (nonatomic) NSInteger maxRange; // ivar: _maxRange
@property (nonatomic) NSInteger noFriendsCellItem; // ivar: _noFriendsCellItem
@property (nonatomic) NSInteger playerScope;
@property (nonatomic) BOOL restrictToFriendsOnly; // ivar: _restrictToFriendsOnly
@property (retain, nonatomic) GKLeaderboardAddFriendsCell *sizingAddFriendsCell; // ivar: _sizingAddFriendsCell
@property (nonatomic) NSInteger startingRank; // ivar: _startingRank
@property (nonatomic) NSInteger timeScope;
@property (nonatomic) NSInteger topLoadingCellItem; // ivar: _topLoadingCellItem


-(BOOL)hasData;
-(CGFloat)cellSpacing;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(NSInteger)itemCount;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 contextMenuConfigurationForItemAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)collectionView:(id)arg0 previewForDismissingContextMenuWithConfiguration:(id)arg1 ;
-(id)collectionView:(id)arg0 previewForHighlightingContextMenuWithConfiguration:(id)arg1 ;
-(id)initWithGameRecord:(id)arg0 leaderboard:(id)arg1 ;
-(id)itemForIndexPath:(id)arg0 ;
-(id)makeContextMenuForCell:(id)arg0 withScore:(id)arg1 ;
-(id)targetedPreviewForUIContextMenuConfiguration:(id)arg0 inCollectionView:(id)arg1 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)handleSelectionInCollectionView:(id)arg0 forItemAtIndexPath:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(id)arg0 ;
-(void)loadInitialDataWithCompletionHandler:(id)arg0 ;
-(void)loadMoreDataWithStartIndex:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)processEntries:(id)arg0 localPlayerEntry:(id)arg1 totalPlayerCount:(NSInteger)arg2 error:(id)arg3 completionHandler:(id)arg4 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setupCollectionView:(id)arg0 ;


@end


#endif