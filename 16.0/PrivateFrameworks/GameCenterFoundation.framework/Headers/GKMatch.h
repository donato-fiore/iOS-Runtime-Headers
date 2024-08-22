// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKMATCH_H
#define GKMATCH_H

@class NSMutableSet, GKConnection, NSString, NSMutableDictionary, NSDictionary, NSMutableArray, NSArray, NSData;
@protocol GKSessionDelegate, GKSessionPrivateDelegate, GKMatchDelegate, GKMatchDelegatePrivate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GKThreadsafeDictionary.h"
#import "GKSession.h"

@interface GKMatch : NSObject <GKSessionDelegate, GKSessionPrivateDelegate>



@property (copy, nonatomic) id *chooseHostCompletion; // ivar: _chooseHostCompletion
@property (retain, nonatomic) NSMutableSet *connectedPlayerIDs; // ivar: _connectedPlayerIDs
@property (retain, nonatomic) GKConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GKMatchDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger expectedPlayerCount; // ivar: _expectedPlayerCount
@property (nonatomic) BOOL fastStartStateActive; // ivar: _fastStartStateActive
@property (retain, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (retain, nonatomic) NSMutableDictionary *guestConnections; // ivar: _guestConnections
@property (retain, nonatomic) NSMutableDictionary *guestSessions; // ivar: _guestSessions
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hostScoreForQuery; // ivar: _hostScoreForQuery
@property (retain, nonatomic) NSMutableDictionary *hostScores; // ivar: _hostScores
@property (weak, nonatomic) NSObject<GKMatchDelegatePrivate> *inviteDelegate; // ivar: _inviteDelegateWeak
@property (nonatomic) BOOL needHostScore; // ivar: _needHostScore
@property (retain, nonatomic) NSDictionary *networkStatistics; // ivar: _networkStatistics
@property (retain, nonatomic) NSMutableArray *opponentIDs; // ivar: _opponentIDs
@property (nonatomic) unsigned int packetSequenceNumber; // ivar: _packetSequenceNumber
@property (retain, nonatomic) NSMutableDictionary *playerEventQueues; // ivar: _playerEventQueues
@property (retain, nonatomic) NSMutableDictionary *playerPushTokens; // ivar: _playerPushTokens
@property (readonly, nonatomic) NSArray *players;
@property (retain, nonatomic) GKThreadsafeDictionary *playersByIdentifier; // ivar: _playersByIdentifier
@property (retain, nonatomic) NSMutableDictionary *playersByJoinType; // ivar: _playersByJoinType
@property (nonatomic) BOOL recentlyBecameActive; // ivar: _recentlyBecameActive
@property (retain, nonatomic) NSMutableArray *reinvitedPlayers; // ivar: _reinvitedPlayers
@property (nonatomic) NSInteger rematchCount; // ivar: _rematchCount
@property (retain, nonatomic) NSString *rematchID; // ivar: _rematchID
@property (retain, nonatomic) NSData *selfBlob; // ivar: _selfBlob
@property (retain, nonatomic) GKSession *session; // ivar: _session
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateChangeQueue; // ivar: _stateChangeQueue
@property (readonly) Class superclass;
@property (nonatomic) unsigned char version; // ivar: _version


-(BOOL)connected:(id)arg0 ;
-(BOOL)haveAllHostScores;
-(BOOL)selectHostIfRequestedAndAllScored;
-(BOOL)sendData:(id)arg0 toPlayers:(id)arg1 dataMode:(NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)sendData:(id)arg0 toPlayers:(id)arg1 withDataMode:(NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)sendDataToAllPlayers:(id)arg0 withDataMode:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)sendInviteData:(id)arg0 error:(*id)arg1 ;
-(BOOL)sharePlaySendData:(id)arg0 toPlayers:(id)arg1 error:(*id)arg2 ;
-(BOOL)shouldStartRelay:(id)arg0 ;
-(id)allIDs;
-(id)connectedPlayers;
-(id)dataFromBase64String:(id)arg0 ;
-(id)guestPlayers;
-(id)init;
-(id)nearbyConnectionData;
-(id)packet:(unsigned char)arg0 data:(id)arg1 ;
-(id)peerFromPlayer:(id)arg0 ;
-(id)playerForSession:(id)arg0 ;
-(id)playerFromPeer:(id)arg0 ;
-(id)playerIDs;
-(id)stringForGKPeerConnectionState:(int)arg0 ;
-(id)stringForGKPlayerConnectionState:(NSInteger)arg0 ;
-(id)voiceChatWithName:(id)arg0 ;
-(void)_delegate:(id)arg0 didReceiveData:(id)arg1 forRecipient:(id)arg2 fromPlayer:(id)arg3 ;
-(void)acceptRelayResponse:(id)arg0 player:(id)arg1 ;
-(void)addHostScore:(int)arg0 forPlayer:(id)arg1 ;
-(void)addPlayerToGroup:(id)arg0 ;
-(void)addPlayers:(id)arg0 ;
-(void)applicationWillEnterForeground:(id)arg0 ;
-(void)applicationWillTerminateNotification:(id)arg0 ;
-(void)calculateHostScore;
-(void)chooseBestHostPlayerWithCompletionHandler:(id)arg0 ;
-(void)chooseBestHostingPlayerWithCompletionHandler:(id)arg0 ;
-(void)clearSession;
-(void)conditionallyReinvitePlayer:(id)arg0 sessionToken:(id)arg1 ;
-(void)conditionallyRelaunchPlayer:(id)arg0 ;
-(void)connectToGuestPlayer:(id)arg0 withHostPlayer:(id)arg1 ;
-(void)connectToNearbyPlayer:(id)arg0 withConnectionData:(id)arg1 ;
-(void)connectToPlayers:(id)arg0 withPeerDictionaries:(id)arg1 version:(unsigned char)arg2 sessionToken:(id)arg3 cdxTicket:(id)arg4 ;
-(void)dealloc;
-(void)deferStateCallbackForPlayer:(id)arg0 state:(NSInteger)arg1 ;
-(void)disconnect;
-(void)disconnectGuestSessions;
-(void)getLocalConnectionDataWithCompletionHandler:(id)arg0 ;
-(void)initRelayConnectionForPlayer:(id)arg0 ;
-(void)initRelayInfoFromCallback:(id)arg0 forPlayer:(id)arg1 ;
-(void)initRelayInfoFromPush:(id)arg0 forPlayer:(id)arg1 ;
-(void)initRelayInfoFromServerResponse:(id)arg0 forPlayer:(id)arg1 ;
-(void)initRelayResponse:(id)arg0 player:(id)arg1 ;
-(void)inviteeComboMatched:(NSInteger)arg0 ;
-(void)localPlayerDidChange:(id)arg0 ;
-(void)preLoadInviter:(id)arg0 sessionToken:(id)arg1 ;
-(void)preemptRelay:(id)arg0 ;
-(void)putMultiplayerGroup;
-(void)queueData:(id)arg0 withEventQueueForPlayer:(id)arg1 forRecipient:(id)arg2 ;
-(void)receiveData:(id)arg0 fromPeer:(id)arg1 inSession:(id)arg2 context:(*void)arg3 ;
-(void)receivedChooseHostData:(id)arg0 fromPlayer:(id)arg1 ;
-(void)receivedPlayerSyncData:(id)arg0 ;
-(void)reinviteeAcceptedNotification:(id)arg0 ;
-(void)reinviteeDeclinedNotification:(id)arg0 ;
-(void)relayPush:(id)arg0 ;
-(void)relayPushNotification:(id)arg0 ;
-(void)rematchWithCompletionHandler:(id)arg0 ;
-(void)requestRelayInitForPlayer:(id)arg0 ;
-(void)requestRelayUpdateForPlayer:(id)arg0 ;
-(void)sendConnectingStateCallbackToDelegate:(id)arg0 forPlayers:(id)arg1 ;
-(void)sendData:(id)arg0 forRecipient:(id)arg1 fromPlayer:(id)arg2 ;
-(void)sendHostScoreAsQuery:(BOOL)arg0 ;
-(void)sendQueuedPacketsForPlayer:(id)arg0 ;
-(void)sendQueuedStatesAndPackets;
-(void)sendStateCallbackForPlayer:(id)arg0 state:(NSInteger)arg1 ;
-(void)sendStateCallbackToDelegate:(id)arg0 forPlayer:(id)arg1 state:(NSInteger)arg2 ;
-(void)sendVersionData:(unsigned char)arg0 ;
-(void)sendVersionData:(unsigned char)arg0 toPeer:(id)arg1 ;
-(void)session:(id)arg0 connectionWithPeerFailed:(id)arg1 withError:(id)arg2 ;
-(void)session:(id)arg0 didFailWithError:(id)arg1 ;
-(void)session:(id)arg0 initiateRelay:(id)arg1 forPeer:(id)arg2 ;
-(void)session:(id)arg0 networkStatisticsChanged:(id)arg1 ;
-(void)session:(id)arg0 peer:(id)arg1 didChangeState:(int)arg2 ;
-(void)session:(id)arg0 updateRelay:(id)arg1 forPeer:(id)arg2 ;
-(void)sharePlayDataReceivedNotification:(id)arg0 ;
-(void)sharePlayReceiveData:(id)arg0 fromPlayerID:(id)arg1 ;
-(void)syncPlayers:(id)arg0 forJoinType:(int)arg1 toInvitees:(id)arg2 ;
-(void)updateJoinedPlayer:(id)arg0 joinType:(int)arg1 ;
-(void)updateRelayConnectionForPlayer:(id)arg0 ;
-(void)updateRelayInfo:(id)arg0 forPlayer:(id)arg1 ;
-(void)updateRelayInfoFromCallback:(id)arg0 forPlayer:(id)arg1 ;
-(void)updateRematchID;
-(void)updateStateForPlayer:(id)arg0 state:(NSInteger)arg1 ;
// -(void)withEventQueueForPlayer:(id)arg0 create:(id)arg1 perform:(unk)arg2  ;
-(void)withEventQueueForPlayer:(id)arg0 createIfNeeded:(BOOL)arg1 perform:(id)arg2 ;
-(void)withEventQueueForPlayer:(id)arg0 perform:(id)arg1 ;


@end


#endif