// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKTURNBASEDMATCHINTERNAL_H
#define GKTURNBASEDMATCHINTERNAL_H

@class NSString, NSDate, NSArray, NSDictionary, NSData;


#import "GKInternalRepresentation.h"
#import "GKPlayerInternal.h"
#import "GKGameInternal.h"

@interface GKTurnBasedMatchInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (nonatomic) char currentParticipant; // ivar: _currentParticipant
@property (retain, nonatomic) GKPlayerInternal *currentPlayer; // ivar: _currentPlayer
@property (retain, nonatomic) NSDate *deletionDate; // ivar: _deletionDate
@property (retain, nonatomic) NSArray *exchanges; // ivar: _exchanges
@property (retain, nonatomic) GKGameInternal *game; // ivar: _game
@property (retain, nonatomic) NSDate *lastTurnDate; // ivar: _lastTurnDate
@property (retain, nonatomic) NSString *lastTurnPlayerID; // ivar: _lastTurnPlayerID
@property (retain, nonatomic) NSDictionary *localizableMessage; // ivar: _localizableMessage
@property (retain, nonatomic) NSData *matchData; // ivar: _matchData
@property (retain, nonatomic) NSString *matchDataVersion; // ivar: _matchDataVersion
@property (retain, nonatomic) NSString *matchID; // ivar: _matchID
@property (nonatomic) unsigned char maxPlayers; // ivar: _maxPlayers
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (nonatomic) unsigned char minPlayers; // ivar: _minPlayers
@property (retain, nonatomic) NSArray *participants; // ivar: _participants
@property (nonatomic) NSInteger platform; // ivar: _platform
@property (retain, nonatomic) NSString *reason; // ivar: _reason
@property (retain, nonatomic) NSString *shortBundleVersion; // ivar: _shortBundleVersion
@property (nonatomic) unsigned int state; // ivar: _state
@property (retain, nonatomic) NSString *status; // ivar: _status
@property (nonatomic) unsigned int turnNumber; // ivar: _turnNumber


+(id)secureCodedPropertyKeys;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)activeExchangeCount;
-(NSInteger)localPlayerParticipantIndex;
-(NSInteger)previousParticipantIndex;
-(NSUInteger)hash;
-(id)descriptionSubstitutionMap;


@end


#endif