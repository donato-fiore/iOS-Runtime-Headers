// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKCUSTOMTOURNAMENTREQUESTINTERNAL_H
#define GKCUSTOMTOURNAMENTREQUESTINTERNAL_H

@class NSString, NSDate;


#import "GKInternalRepresentation.h"
#import "GKPlayerInternal.h"
#import "GKTournamentDefinitionInternal.h"

@interface GKCustomTournamentRequestInternal : GKInternalRepresentation

@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) NSString *icon; // ivar: _icon
@property (nonatomic) BOOL isCreatorInTournament; // ivar: _isCreatorInTournament
@property (nonatomic) NSInteger maxPlayers; // ivar: _maxPlayers
@property (nonatomic) NSInteger maxReplays; // ivar: _maxReplays
@property (nonatomic) NSInteger minPlayers; // ivar: _minPlayers
@property (nonatomic) NSInteger scoringMethod; // ivar: _scoringMethod
@property (nonatomic) NSInteger seedingMethod; // ivar: _seedingMethod
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime
@property (retain, nonatomic) GKPlayerInternal *tournamentCreator; // ivar: _tournamentCreator
@property (retain, nonatomic) GKTournamentDefinitionInternal *tournamentDefinition; // ivar: _tournamentDefinition
@property (retain, nonatomic) NSString *tournamentName; // ivar: _tournamentName


+(id)customTournamentRequestWithTournamentDefinition:(id)arg0 player:(id)arg1 ;
+(id)secureCodedPropertyKeys;


@end


#endif