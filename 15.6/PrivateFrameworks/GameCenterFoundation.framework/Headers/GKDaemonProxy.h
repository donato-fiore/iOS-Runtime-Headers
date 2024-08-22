// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKDAEMONPROXY_H
#define GKDAEMONPROXY_H

@class NSXPCConnection, NSHashTable, NSString, NSDictionary;
@protocol NSXPCConnectionDelegate, GKClientProtocol, OS_dispatch_queue, OS_dispatch_semaphore, GKDaemonProxyDataUpdateDelegate, GKDaemonProxyNetworkActivityIndicatorDelegate;


#import "GKServiceProxy.h"

@interface GKDaemonProxy : GKServiceProxy <NSXPCConnectionDelegate, GKClientProtocol>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *authenticationQueue; // ivar: _authenticationQueue
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *concurrentRequestSemaphore; // ivar: _concurrentRequestSemaphore
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (weak, nonatomic) NSObject<GKDaemonProxyDataUpdateDelegate> *dataUpdateDelegate; // ivar: _dataUpdateDelegate
@property (retain, nonatomic) NSHashTable *dataUpdateDelegates; // ivar: _dataUpdateDelegates
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int hostPID; // ivar: _hostPID
@property (retain, nonatomic) NSDictionary *interfaceLookup; // ivar: _interfaceLookup
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *invocationQueue; // ivar: _invocationQueue
@property (weak, nonatomic) NSObject<GKDaemonProxyNetworkActivityIndicatorDelegate> *networkActivityIndicatorDelegate; // ivar: _networkActivityIndicatorDelegate
@property (readonly) Class superclass;


+(id)daemonProxy;
+(id)proxiesForPlayer;
+(id)proxyForPlayer:(id)arg0 ;
+(void)getActiveFriendRequestCount:(id)arg0 ;
+(void)messagesDidReceiveGameCenterURL:(id)arg0 ;
+(void)messagesDidReceiveGameCenterURL:(id)arg0 senderHandle:(id)arg1 contactID:(id)arg2 ;
+(void)removeProxyForPlayer:(id)arg0 ;
-(BOOL)hasAuthenticatedAccount;
-(id)accountName;
-(id)authenticatedCredential;
-(id)authenticatedLocalPlayersWithStatus:(NSUInteger)arg0 ;
-(id)authenticatedPlayerID;
-(id)authenticatedPlayerInfo;
-(id)getGamedFiredUp;
-(id)init;
-(id)localizedMessageFromDictionary:(id)arg0 forBundleID:(id)arg1 ;
-(id)replyQueueForRequestSelector:(SEL)arg0 ;
-(id)userInfoForPlayerID:(id)arg0 deviceID:(id)arg1 data:(id)arg2 discoveryInfo:(id)arg3 ;
-(void)_resetServiceLookup;
-(void)acceptInviteWithNotification:(id)arg0 ;
-(void)acceptMultiplayerGameInvite;
-(void)achievementSelected:(id)arg0 ;
-(void)addDataUpdateDelegate:(id)arg0 ;
-(void)addInterface:(id)arg0 toLookup:(id)arg1 ;
-(void)authenticatedPlayersDidChange:(id)arg0 reply:(id)arg1 ;
-(void)beginNetworkActivity;
-(void)buildInterfaceLookup;
-(void)cancelGameInvite:(id)arg0 ;
-(void)cancelInviteWithNotification:(id)arg0 ;
-(void)challengeCompleted:(id)arg0 ;
-(void)challengeReceived:(id)arg0 ;
-(void)completedChallengeSelected:(id)arg0 ;
-(void)completedOptimisticAuthenticationWithResponse:(id)arg0 error:(id)arg1 ;
-(void)connection:(id)arg0 handleInvocation:(id)arg1 isReply:(BOOL)arg2 ;
-(void)declineInviteWithNotification:(id)arg0 ;
-(void)didConnectToParticipantWithID:(id)arg0 ;
-(void)didDisconnectFromParticipantWithID:(id)arg0 ;
-(void)didReceiveData:(id)arg0 reliably:(BOOL)arg1 forRecipients:(id)arg2 fromSender:(id)arg3 ;
-(void)dispatchCompletedChallenge:(id)arg0 ;
-(void)endNetworkActivity;
-(void)fetchTurnBasedData;
-(void)friendRequestSelected:(id)arg0 ;
-(void)getAccountNameWithHandler:(id)arg0 ;
-(void)getAuthenticatedPlayerIDWithHandler:(id)arg0 ;
-(void)loadRemoteImageDataForClientForURL:(id)arg0 reply:(id)arg1 ;
-(void)localPlayerAcceptedCustomTournamentInvite;
-(void)nearbyDataReceivedForPlayerID:(id)arg0 deviceID:(id)arg1 data:(id)arg2 ;
-(void)nearbyPlayerFoundForPlayerID:(id)arg0 deviceID:(id)arg1 discoveryInfo:(id)arg2 ;
-(void)nearbyPlayerLostForPlayerID:(id)arg0 deviceID:(id)arg1 ;
-(void)receivedChallengeSelected:(id)arg0 ;
-(void)refreshContentsForDataType:(unsigned int)arg0 userInfo:(id)arg1 ;
-(void)relayPushNotification:(id)arg0 ;
-(void)removeDataUpdateDelegate:(id)arg0 ;
-(void)requestSandboxExtension:(id)arg0 ;
-(void)resetLoginCancelCount;
-(void)resetNetworkActivity;
-(void)resetServiceLookup;
-(void)respondedToNearbyInvite:(id)arg0 ;
-(void)scoreSelected:(id)arg0 ;
-(void)session:(id)arg0 addedPlayer:(id)arg1 ;
-(void)session:(id)arg0 didReceiveData:(id)arg1 fromPlayer:(id)arg2 ;
-(void)session:(id)arg0 didReceiveMessage:(id)arg1 withData:(id)arg2 fromPlayer:(id)arg3 ;
-(void)session:(id)arg0 player:(id)arg1 didChangeConnectionState:(NSInteger)arg2 ;
-(void)session:(id)arg0 player:(id)arg1 didSaveData:(id)arg2 ;
-(void)session:(id)arg0 removedPlayer:(id)arg1 ;
-(void)setBadgeCount:(NSUInteger)arg0 forType:(NSUInteger)arg1 ;
-(void)setCurrentGame:(id)arg0 serverEnvironment:(NSInteger)arg1 reply:(id)arg2 ;
-(void)setLogBits:(int)arg0 ;
-(void)setPreferencesValues:(id)arg0 ;
-(void)setTestGame:(id)arg0 ;


@end


#endif