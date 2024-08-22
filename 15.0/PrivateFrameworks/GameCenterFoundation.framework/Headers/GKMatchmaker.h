// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKMATCHMAKER_H
#define GKMATCHMAKER_H

@class NSMutableArray, NSMutableSet, NSSet, NSDictionary, NSString, GKDiscovery, NSMutableDictionary, NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GKDispatchGroup.h"
#import "GKMatchRequest.h"
#import "GKMatch.h"

@interface GKMatchmaker : NSObject

@property (retain, nonatomic) NSMutableArray *acceptedInviteesTokens; // ivar: _acceptedInviteesTokens
@property (readonly, nonatomic) BOOL allInviteesDidRespond;
@property (retain, nonatomic) NSMutableSet *autoMatchedPlayers; // ivar: _autoMatchedPlayers
@property (retain, nonatomic) GKDispatchGroup *compatibilityHashGroup; // ivar: _compatibilityHashGroup
@property (retain, nonatomic) GKMatchRequest *currentMatchRequest; // ivar: _currentMatchRequest
@property (nonatomic) BOOL generatingCompatiblityHashes; // ivar: _generatingCompatiblityHashes
@property (readonly, nonatomic) BOOL hasInviteListener;
@property (nonatomic) NSUInteger inviteApproach; // ivar: _inviteApproach
@property (copy, nonatomic) id *inviteHandler; // ivar: _inviteHandler
@property (retain, nonatomic) NSMutableSet *invitedInvitees; // ivar: _invitedInvitees
@property (retain, nonatomic) NSMutableSet *invitedNearbyPlayers; // ivar: _invitedNearbyPlayers
@property (retain, nonatomic) NSMutableSet *invitedShareInvitees; // ivar: _invitedShareInvitees
@property (copy, nonatomic) id *inviteeResponseHandler; // ivar: _inviteeResponseHandler
@property (retain, nonatomic) NSSet *invitees; // ivar: _invitees
@property (retain) NSDictionary *inviteesByUserID; // ivar: _inviteesByUserID
@property (retain, nonatomic) NSString *inviterPlayerID; // ivar: _inviterPlayerID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lookForInviteQueue; // ivar: _lookForInviteQueue
@property (retain, nonatomic) GKMatch *match; // ivar: _match
@property int matching; // ivar: _matching
@property (nonatomic) BOOL nearbyAdvertising; // ivar: _nearbyAdvertising
@property (nonatomic) BOOL nearbyBrowsing; // ivar: _nearbyBrowsing
@property (retain, nonatomic) NSSet *nearbyCompatibleShortVersionHashes; // ivar: _nearbyCompatibleShortVersionHashes
@property (retain, nonatomic) NSSet *nearbyCompatibleVersionHashes; // ivar: _nearbyCompatibleVersionHashes
@property (retain, nonatomic) GKDiscovery *nearbyDiscovery; // ivar: _nearbyDiscovery
@property (nonatomic) BOOL nearbyDiscoverySetup; // ivar: _nearbyDiscoverySetup
@property (retain, nonatomic) NSMutableDictionary *nearbyInvites; // ivar: _nearbyInvites
@property (copy, nonatomic) id *nearbyPlayerHandler; // ivar: _nearbyPlayerHandler
@property (copy, nonatomic) id *nearbyPlayerIDHandler; // ivar: _nearbyPlayerIDHandler
@property (retain) NSMutableDictionary *nearbyPlayers; // ivar: _nearbyPlayers
@property (nonatomic) CGFloat nearbyQueryAllowance; // ivar: _nearbyQueryAllowance
@property (retain, nonatomic) NSDate *nearbyQueryLastCheckDate; // ivar: _nearbyQueryLastCheckDate
@property (copy, nonatomic) id *recipientResponseHandler; // ivar: _recipientResponseHandler
@property (nonatomic) BOOL serverHosted; // ivar: _serverHosted
@property (retain, nonatomic) NSMutableArray *shareInvitees; // ivar: _shareInvitees
@property (retain, nonatomic) NSMutableSet *siblingInvitees; // ivar: _siblingInvitees
@property (nonatomic) BOOL wasNearbyBrowsing; // ivar: _wasNearbyBrowsing


+(id)descriptionForNearbyDictionary:(id)arg0 ;
+(id)sharedMatchmaker;
+(id)syncQueue;
-(BOOL)canPlayMultiplayerGameWithPlayers:(id)arg0 ;
-(BOOL)removeInvitee:(id)arg0 ;
-(BOOL)shouldRespondToNearbyQuery;
-(NSInteger)currentEnvironment;
-(NSInteger)responseForDeclineReason:(NSInteger)arg0 ;
-(id)_nearbyDeviceWithDeviceID:(id)arg0 ;
-(id)allInvitedInvitees;
-(id)compatibilityHashQueue;
-(id)declineReasonString:(NSInteger)arg0 ;
-(id)hashForBundleID:(id)arg0 version:(id)arg1 platform:(NSInteger)arg2 ;
-(id)hashForCurrentGameUsingBundleVersion;
-(id)hashForCurrentGameUsingShortBundleVersionAndPlatform;
-(id)init;
-(id)nearbyDeviceWithDeviceID:(id)arg0 ;
-(id)nearbyDevicesForPlayer:(id)arg0 withState:(NSInteger)arg1 ;
-(id)nearbyInviteFromPlayer:(id)arg0 ;
-(id)profileDictionaryForLocalPlayer;
-(id)unreleasedHash;
-(int)numberOfNearbyDevicesForPlayer:(id)arg0 withState:(NSInteger)arg1 ;
-(void)_request:(id)arg0 match:(id)arg1 rematchID:(id)arg2 serverHosted:(BOOL)arg3 playerCount:(NSInteger)arg4 connectionData:(id)arg5 completionHandler:(id)arg6 ;
-(void)acceptNearbyInvite:(id)arg0 connectionData:(id)arg1 ;
-(void)addPlayersForHostedMatchRequest:(id)arg0 existingPlayerCount:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)addPlayersToMatch:(id)arg0 matchRequest:(id)arg1 completionHandler:(id)arg2 ;
-(void)applicationDidEnterBackgroundNotification:(id)arg0 ;
-(void)applicationWillEnterForegroundNotification:(id)arg0 ;
-(void)applicationWillTerminateNotification:(id)arg0 ;
-(void)cancel;
-(void)cancelInviteToPlayer:(id)arg0 ;
-(void)cancelNearbyInvitesToPlayers:(id)arg0 ;
-(void)cancelPendingInviteToPlayer:(id)arg0 ;
-(void)cancelPendingInvitesAndMarkInviteComplete:(BOOL)arg0 ;
-(void)cancelSentNearbyInvites;
-(void)createLeaderboardForRequest:(id)arg0 withHandler:(id)arg1 ;
-(void)dealloc;
-(void)declineNearbyInviteFromDevice:(id)arg0 reason:(NSInteger)arg1 ;
-(void)declineReceivedNearbyInvites;
-(void)determineIfShouldRespondToNearbyPlayer:(id)arg0 handler:(id)arg1 ;
-(void)doneMatchmaking;
-(void)establishNearbyFriendRelationships:(id)arg0 fromDevice:(id)arg1 ;
-(void)findMatchForRequest:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)findPlayersForHostedMatchRequest:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)findPlayersForHostedRequest:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)findRematchForMatch:(id)arg0 completionHandler:(id)arg1 ;
-(void)finishMatchmakingForMatch:(id)arg0 ;
-(void)finishedAuthenticating;
-(void)foundNearbyDeviceID:(id)arg0 discoveryInfo:(id)arg1 ;
-(void)generateHashedCompatibiltySetWithHandler:(id)arg0 ;
-(void)getHashedCompatibilitySetsWithHandler:(id)arg0 ;
-(void)handleNearbyInvite:(id)arg0 fromDevice:(id)arg1 ;
-(void)handleNearbyInviteResponse:(id)arg0 fromDevice:(id)arg1 ;
-(void)handleNearbyProfileQuery:(id)arg0 fromDevice:(id)arg1 ;
-(void)handleNearbyProfileResponse:(id)arg0 fromDevice:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)inviteAnyNearbyPlayersWithRequest:(id)arg0 handler:(id)arg1 ;
-(void)invitePlayersWithRequest:(id)arg0 serverHosted:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)invitePlayersWithRequest:(id)arg0 serverHosted:(BOOL)arg1 onlineConnectionData:(id)arg2 completionHandler:(id)arg3 ;
-(void)inviteeAcceptedNotification:(id)arg0 ;
-(void)inviteeDeclinedNotification:(id)arg0 ;
-(void)loadConnectivitySettingsWithCompletionHandler:(id)arg0 ;
-(void)loadPhotoDataDictionaryWithHandler:(id)arg0 ;
-(void)loadURLForMatch:(id)arg0 matchRequest:(id)arg1 completionHandler:(id)arg2 ;
-(void)localPlayerAcceptedGameInvite;
-(void)localPlayerAcceptedGameInviteNotification:(id)arg0 ;
-(void)localPlayerAcceptedNearbyInvite:(id)arg0 ;
-(void)localPlayerRespondedToNearbyInvite:(id)arg0 ;
-(void)lookForInvite;
-(void)lostNearbyDeviceID:(id)arg0 ;
-(void)matchForInvite:(id)arg0 completionHandler:(id)arg1 ;
-(void)matchForNearbyInvite:(id)arg0 handler:(id)arg1 ;
-(void)matchForRemoteInvite:(id)arg0 completionHandler:(id)arg1 ;
-(void)matchWithRequest:(id)arg0 currentMatch:(id)arg1 hostedCurrentPlayerCount:(NSInteger)arg2 serverHosted:(BOOL)arg3 rematchID:(id)arg4 completionHandler:(id)arg5 ;
-(void)nearbyDataReceived:(id)arg0 ;
-(void)nearbyInviteWasCancelled:(id)arg0 fromDevice:(id)arg1 ;
-(void)nearbyPlayerFound:(id)arg0 ;
-(void)nearbyPlayerLost:(id)arg0 ;
-(void)performSync:(id)arg0 ;
-(void)presentNearbyInvite:(id)arg0 fromDevice:(id)arg1 ;
-(void)queryActivityWithCompletionHandler:(id)arg0 ;
-(void)queryPlayerGroupActivity:(NSUInteger)arg0 withCompletionHandler:(id)arg1 ;
-(void)receivedData:(id)arg0 fromNearbyDeviceID:(id)arg1 ;
-(void)reduceRecipientsForMatchRequest:(id)arg0 toPlayersWithPlayerIDs:(id)arg1 ;
-(void)registeredListentersChanged;
-(void)removeNearbyInviteFromPlayer:(id)arg0 ;
-(void)reportPlayerConnectedWithPlayerID:(id)arg0 forMatch:(id)arg1 ;
-(void)reportResponse:(NSInteger)arg0 forInvitees:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)respondToHostedInvite:(id)arg0 completionHandler:(id)arg1 ;
-(void)saveNearbyInvite:(id)arg0 fromPlayer:(id)arg1 ;
-(void)sendProfileResponseToDevice:(id)arg0 ;
-(void)setConnectivitySettings:(id)arg0 ;
-(void)setNearbyDevice:(id)arg0 reachable:(BOOL)arg1 ;
-(void)setNearbyPlayerAccepted:(id)arg0 connectionData:(id)arg1 ;
-(void)setNearbyPlayerAccepted:(id)arg0 deviceID:(id)arg1 connectionData:(id)arg2 ;
-(void)setNearbyPlayerDeclined:(id)arg0 deviceID:(id)arg1 reason:(NSInteger)arg2 ;
-(void)setNearbyPlayerDeclined:(id)arg0 reason:(NSInteger)arg1 ;
-(void)setNearbyPlayerFailed:(id)arg0 ;
-(void)setNearbyPlayerFailed:(id)arg0 deviceID:(id)arg1 ;
-(void)setupNearbyDiscovery;
-(void)startBrowsingForNearbyPlayersWithHandler:(id)arg0 ;
-(void)startBrowsingForNearbyPlayersWithReachableHandler:(id)arg0 ;
-(void)startNearbyAdvertising;
-(void)startNearbyBrowsing;
-(void)stopBrowsingForNearbyPlayers;
-(void)stopNearbyAdvertising;
-(void)stopNearbyBrowsing;
-(void)updateNearbyAdvertising;
-(void)userCancelledMatching;


@end


#endif