// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKMATCHREQUESTINTERNAL_H
#define GKMATCHREQUESTINTERNAL_H

@class NSString, NSDictionary, NSArray, NSData;


#import "GKInternalRepresentation.h"
#import "GKTournamentInternal.h"

@interface GKMatchRequestInternal : GKInternalRepresentation

@property (nonatomic) unsigned char defaultNumberOfPlayers; // ivar: _defaultNumberOfPlayers
@property (copy, nonatomic) NSString *inviteMessage; // ivar: _inviteMessage
@property (retain, nonatomic) NSDictionary *localizableInviteMessage; // ivar: _localizableInviteMessage
@property (nonatomic) NSUInteger matchType; // ivar: _matchType
@property (nonatomic) unsigned char maxPlayers; // ivar: _maxPlayers
@property (nonatomic) unsigned char minPlayers; // ivar: _minPlayers
@property (nonatomic) unsigned int playerAttributes; // ivar: _playerAttributes
@property (nonatomic) NSUInteger playerGroup; // ivar: _playerGroup
@property (nonatomic, getter=isPreloadedMatch) BOOL preloadedMatch; // ivar: _preloadedMatch
@property (retain, nonatomic) NSArray *recipientPlayerIDs; // ivar: _recipientPlayerIDs
@property (retain, nonatomic) NSArray *recipients; // ivar: _recipients
@property (nonatomic) BOOL restrictToAutomatch; // ivar: _restrictToAutomatch
@property (retain, nonatomic) NSString *rid; // ivar: _rid
@property (retain, nonatomic) NSData *sessionToken; // ivar: _sessionToken
@property (retain, nonatomic) GKTournamentInternal *tournamentForInvitePool; // ivar: _tournamentForInvitePool
@property (nonatomic) unsigned int version; // ivar: _version


+(id)secureCodedPropertyKeys;
-(BOOL)hasGuestPlayers;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;


@end


#endif