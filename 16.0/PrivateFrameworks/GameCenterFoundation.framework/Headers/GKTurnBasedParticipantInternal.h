// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKTURNBASEDPARTICIPANTINTERNAL_H
#define GKTURNBASEDPARTICIPANTINTERNAL_H

@class NSString, NSDate;


#import "GKInternalRepresentation.h"
#import "GKPlayerInternal.h"

@interface GKTurnBasedParticipantInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *inviteMessage; // ivar: _inviteMessage
@property (retain, nonatomic) GKPlayerInternal *invitedBy; // ivar: _invitedBy
@property (readonly, nonatomic) BOOL isAutomatchParticipant;
@property (retain, nonatomic) NSDate *lastTurnDate; // ivar: _lastTurnDate
@property (nonatomic) unsigned int matchOutcome; // ivar: _matchOutcome
@property (retain, nonatomic) GKPlayerInternal *player; // ivar: _player
@property (readonly, nonatomic) NSString *playerID;
@property (retain, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (nonatomic) unsigned char slot; // ivar: _slot
@property (retain, nonatomic) NSString *status; // ivar: _status
@property (retain, nonatomic) NSDate *timeoutDate; // ivar: _timeoutDate


+(id)secureCodedPropertyKeys;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)descriptionSubstitutionMap;
-(id)serverRepresentation;


@end


#endif