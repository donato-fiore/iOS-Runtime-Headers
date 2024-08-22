// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKMULTIPLAYERDATASOURCEOBSOLETE_H
#define GKMULTIPLAYERDATASOURCEOBSOLETE_H

@class NSMutableOrderedSet, NSArray, NSMutableDictionary;
@protocol GKMultiplayerDataSourceDelegateObsolete;


#import "GKBasicCollectionViewDataSource.h"

@interface GKMultiplayerDataSourceObsolete : GKBasicCollectionViewDataSource

@property (readonly, nonatomic) BOOL autoMatching; // ivar: _autoMatching
@property (nonatomic) BOOL automatchAddedToMinInHeader; // ivar: _automatchAddedToMinInHeader
@property (nonatomic) NSInteger automatchPlayerCount; // ivar: _automatchPlayerCount
@property (readonly, nonatomic) BOOL canCancelCurrentMatchmaking;
@property (weak, nonatomic) NSObject<GKMultiplayerDataSourceDelegateObsolete> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL haveNonGuestPlayers;
@property (nonatomic) BOOL invitingEnabled; // ivar: _invitingEnabled
@property (nonatomic) NSInteger maxPlayers; // ivar: _maxPlayers
@property (nonatomic) NSInteger minPlayers; // ivar: _minPlayers
@property (retain, nonatomic) NSMutableOrderedSet *orderedPlayerIDList; // ivar: _orderedPlayerIDList
@property (readonly, nonatomic) NSArray *participants;
@property (retain, nonatomic) NSMutableDictionary *playerStatus; // ivar: _playerStatus
@property (retain, nonatomic) NSMutableOrderedSet *players; // ivar: _players
@property (nonatomic) BOOL removingEnabled; // ivar: _removingEnabled


-(BOOL)havePendingPlayers;
-(BOOL)shouldRevertStatus:(NSInteger)arg0 ;
-(BOOL)shouldUpdateStatus:(NSInteger)arg0 withNewStatus:(NSInteger)arg1 ;
-(NSInteger)maxAvailablePlayers;
-(NSInteger)statusForPlayer:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)currentPlayers;
-(id)currentPlayersNotInvitedViaMessages;
-(id)currentRemotePlayers;
-(id)firstInvitedContactPlayer;
-(id)guestPlayers;
-(id)init;
-(id)participantForAutoMatchNumber:(NSInteger)arg0 ;
-(id)participantForPlayer:(id)arg0 ;
-(id)playersWithStatus:(NSInteger)arg0 ;
-(id)readyPlayers;
-(struct _NSRange )playerRange;
-(void)addPlayers:(id)arg0 withStatus:(NSInteger)arg1 complete:(id)arg2 ;
-(void)addPlayers:(id)arg0 withStatus:(NSInteger)arg1 replaceAutomatches:(BOOL)arg2 complete:(id)arg3 ;
-(void)configureCollectionView:(id)arg0 ;
-(void)didChangeMode;
-(void)failedToInvitePlayers;
-(void)refreshContentsForDataType:(unsigned int)arg0 userInfo:(id)arg1 updateNotifier:(id)arg2 ;
-(void)refreshParticipantsStatuses;
-(void)refreshStatusForParticipant:(id)arg0 ;
-(void)removePlayers:(id)arg0 complete:(id)arg1 ;
-(void)replaceContactPlayers:(id)arg0 withNormalPlayers:(id)arg1 complete:(id)arg2 ;
-(void)reportMultiplayerSelection:(id)arg0 ;
-(void)restoreOrderOfPlayers;
-(void)revertFailedPlayers;
-(void)setStatus:(NSInteger)arg0 forPlayers:(id)arg1 complete:(id)arg2 ;
-(void)updateDataStructuresForRemovedPlayer:(id)arg0 ;
-(void)updateParticipants;


@end


#endif