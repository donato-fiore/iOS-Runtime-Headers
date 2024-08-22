// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKSERVICEPROXY_H
#define GKSERVICEPROXY_H

@class NSDictionary;
@protocol GKAccountService, GKAccountServicePrivate, GKAnalyticsService, GKAnalyticsServicePrivate, GKBulletinService, GKBulletinServicePrivate, GKChallengeService, GKChallengeServicePrivate, GKFriendService, GKFriendServicePrivate, GKGameService, GKGameServicePrivate, GKGameSessionService, GKGameSessionServicePrivate, GKGameStatService, GKGameStatServicePrivate, GKMultiplayerService, GKMultiplayerServicePrivate, GKProfileService, GKProfileServicePrivate, GKTournamentService, GKTournamentServicePrivate, GKTurnBasedService, GKTurnBasedServicePrivate, GKUtilityService, GKUtilityServicePrivate;

#import <Foundation/Foundation.h>

#import "GKDaemonProxy.h"
#import "GKPlayerInternal.h"
#import "GKThreadsafeDictionary.h"

@interface GKServiceProxy : NSObject

@property (readonly) NSObject<GKAccountService> *accountService;
@property (readonly) NSObject<GKAccountServicePrivate> *accountServicePrivate;
@property (readonly) NSObject<GKAnalyticsService> *analyticsService;
@property (readonly) NSObject<GKAnalyticsServicePrivate> *analyticsServicePrivate;
@property (retain) GKDaemonProxy *baseProxy; // ivar: _baseProxy
@property (readonly) NSObject<GKBulletinService> *bulletinService;
@property (readonly) NSObject<GKBulletinServicePrivate> *bulletinServicePrivate;
@property (readonly) NSObject<GKChallengeService> *challengeService;
@property (readonly) NSObject<GKChallengeServicePrivate> *challengeServicePrivate;
@property (readonly) NSObject<GKFriendService> *friendService;
@property (readonly) NSObject<GKFriendServicePrivate> *friendServicePrivate;
@property (readonly) NSObject<GKGameService> *gameService;
@property (readonly) NSObject<GKGameServicePrivate> *gameServicePrivate;
@property (readonly) NSObject<GKGameSessionService> *gameSessionService;
@property (readonly) NSObject<GKGameSessionServicePrivate> *gameSessionServicePrivate;
@property (readonly) NSObject<GKGameStatService> *gameStatService;
@property (readonly) NSObject<GKGameStatServicePrivate> *gameStatServicePrivate;
@property (weak) GKPlayerInternal *localPlayer; // ivar: _localPlayer
@property (readonly) NSObject<GKMultiplayerService> *multiplayerService;
@property (readonly) NSObject<GKMultiplayerServicePrivate> *multiplayerServicePrivate;
@property (retain) GKThreadsafeDictionary *pendingRequests; // ivar: _pendingRequests
@property (readonly) NSObject<GKProfileService> *profileService;
@property (readonly) NSObject<GKProfileServicePrivate> *profileServicePrivate;
@property unsigned int serviceGeneration; // ivar: _serviceGeneration
@property (retain) NSDictionary *serviceLookup; // ivar: _serviceLookup
@property (readonly) NSObject<GKTournamentService> *tournamentService;
@property (readonly) NSObject<GKTournamentServicePrivate> *tournamentServicePrivate;
@property (readonly) NSObject<GKTurnBasedService> *turnBasedService;
@property (readonly) NSObject<GKTurnBasedServicePrivate> *turnBasedServicePrivate;
@property (readonly) NSObject<GKUtilityService> *utilityService;
@property (readonly) NSObject<GKUtilityServicePrivate> *utilityServicePrivate;


-(id)initWithPlayer:(id)arg0 ;
-(id)methodSignatureForProtocol:(id)arg0 selector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)requestIdentifierForInvocation:(id)arg0 ;
-(void)addService:(id)arg0 forProtocol:(id)arg1 toLookup:(id)arg2 ;
-(void)buildServiceLookup;
-(void)buildServiceLookupIfNeccessary;
-(void)forwardInvocation:(id)arg0 ;
-(void)replyToDuplicatesForRequest:(id)arg0 withInvocation:(id)arg1 queue:(id)arg2 ;


@end


#endif