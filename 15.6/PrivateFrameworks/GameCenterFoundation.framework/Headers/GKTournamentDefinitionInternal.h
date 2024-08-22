// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKTOURNAMENTDEFINITIONINTERNAL_H
#define GKTOURNAMENTDEFINITIONINTERNAL_H

@class NSString;


#import "GKInternalRepresentation.h"
#import "GKRecurrenceRule.h"

@interface GKTournamentDefinitionInternal : GKInternalRepresentation

@property (nonatomic) CGFloat PreRegistrationTime; // ivar: _PreRegistrationTime
@property (nonatomic) NSInteger autoTournamentIndex; // ivar: _autoTournamentIndex
@property (nonatomic) NSInteger creationMethod; // ivar: _creationMethod
@property (nonatomic) NSInteger customMaxPlayers; // ivar: _customMaxPlayers
@property (nonatomic) NSInteger customMaxReplays; // ivar: _customMaxReplays
@property (nonatomic) NSInteger customMinPlayers; // ivar: _customMinPlayers
@property (nonatomic) NSInteger customScoringMethods; // ivar: _customScoringMethods
@property (nonatomic) NSInteger customSeedingMethods; // ivar: _customSeedingMethods
@property (nonatomic) BOOL customTournamentAllowIcon; // ivar: _customTournamentAllowIcon
@property (nonatomic) CGFloat customTournamentDuration; // ivar: _customTournamentDuration
@property (retain, nonatomic) NSString *customTournamentIcon; // ivar: _customTournamentIcon
@property (retain, nonatomic) NSString *customTournamentName; // ivar: _customTournamentName
@property (nonatomic) NSInteger customTournamentNameFormat; // ivar: _customTournamentNameFormat
@property (nonatomic) NSInteger maxPlayerShards; // ivar: _maxPlayerShards
@property (nonatomic) NSInteger maxPlayers; // ivar: _maxPlayers
@property (nonatomic) NSInteger maxReplays; // ivar: _maxReplays
@property (nonatomic) NSInteger minPlayers; // ivar: _minPlayers
@property (nonatomic) NSInteger participationType; // ivar: _participationType
@property (retain, nonatomic) GKRecurrenceRule *recurrenceRule; // ivar: _recurrenceRule
@property (nonatomic) NSInteger scoringMethod; // ivar: _scoringMethod
@property (nonatomic) NSInteger seedingMethod; // ivar: _seedingMethod
@property (retain, nonatomic) NSString *tournamentDefinitionID; // ivar: _tournamentDefinitionID
@property (retain, nonatomic) NSString *tournamentDescription; // ivar: _tournamentDescription
@property (nonatomic) CGFloat tournamentDuration; // ivar: _tournamentDuration
@property (retain, nonatomic) NSString *tournamentIcon; // ivar: _tournamentIcon
@property (retain, nonatomic) NSString *tournamentName; // ivar: _tournamentName
@property (nonatomic) NSInteger tournamentNameFormat; // ivar: _tournamentNameFormat
@property (nonatomic) NSInteger tournamentType; // ivar: _tournamentType
@property (nonatomic) CGFloat typicalGameplayDuration; // ivar: _typicalGameplayDuration


+(id)secureCodedPropertyKeys;


@end


#endif