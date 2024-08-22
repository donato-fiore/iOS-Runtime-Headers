// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKTOURNAMENTINTERNAL_H
#define GKTOURNAMENTINTERNAL_H

@class NSURL, NSDate, NSString;


#import "GKInternalRepresentation.h"
#import "GKScoreInternal.h"
#import "GKPlayerInternal.h"
#import "GKLeaderboardInternal.h"
#import "GKTournamentParticipantInternal.h"
#import "GKTournamentDefinitionInternal.h"

@interface GKTournamentInternal : GKInternalRepresentation

@property (retain, nonatomic) GKScoreInternal *bestScore; // ivar: _bestScore
@property (retain, nonatomic) GKPlayerInternal *customTournamentCreator; // ivar: _customTournamentCreator
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) NSURL *inviteURLForMessages; // ivar: _inviteURLForMessages
@property (retain, nonatomic) GKLeaderboardInternal *leaderboard; // ivar: _leaderboard
@property (retain, nonatomic) GKTournamentParticipantInternal *localParticipant; // ivar: _localParticipant
@property (nonatomic) NSInteger maxPlayers; // ivar: _maxPlayers
@property (nonatomic) NSInteger maxReplays; // ivar: _maxReplays
@property (nonatomic) NSInteger minPlayers; // ivar: _minPlayers
@property (retain, nonatomic) NSDate *nextTournamentBeginDate; // ivar: _nextTournamentBeginDate
@property (retain, nonatomic) NSString *nextTournamentID; // ivar: _nextTournamentID
@property (nonatomic) NSInteger playerCount; // ivar: _playerCount
@property (nonatomic) NSInteger randomSeed; // ivar: _randomSeed
@property (retain, nonatomic) NSDate *registrationBeginDate; // ivar: _registrationBeginDate
@property (retain, nonatomic) NSDate *registrationEndDate; // ivar: _registrationEndDate
@property (nonatomic) NSInteger scoringMethod; // ivar: _scoringMethod
@property (nonatomic) NSInteger seedingMethod; // ivar: _seedingMethod
@property (retain, nonatomic) NSDate *tournamentBeginDate; // ivar: _tournamentBeginDate
@property (retain, nonatomic) GKTournamentDefinitionInternal *tournamentDefinition; // ivar: _tournamentDefinition
@property (retain, nonatomic) NSDate *tournamentEndDate; // ivar: _tournamentEndDate
@property (nonatomic) NSInteger tournamentError; // ivar: _tournamentError
@property (retain, nonatomic) NSString *tournamentID; // ivar: _tournamentID
@property (retain, nonatomic) NSString *tournamentName; // ivar: _tournamentName
@property (nonatomic) NSInteger tournamentNumber; // ivar: _tournamentNumber
@property (nonatomic) NSInteger tournamentState; // ivar: _tournamentState
@property (retain, nonatomic) GKPlayerInternal *winningPlayer; // ivar: _winningPlayer


+(id)defaultCustomTournamentForTournamentDefinition:(id)arg0 ;
+(id)secureCodedPropertyKeys;


@end


#endif