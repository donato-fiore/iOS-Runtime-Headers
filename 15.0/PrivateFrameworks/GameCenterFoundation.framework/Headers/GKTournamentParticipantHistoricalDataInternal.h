// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKTOURNAMENTPARTICIPANTHISTORICALDATAINTERNAL_H
#define GKTOURNAMENTPARTICIPANTHISTORICALDATAINTERNAL_H

@class NSMutableArray, NSString;


#import "GKInternalRepresentation.h"
#import "GKPlayerInternal.h"

@interface GKTournamentParticipantHistoricalDataInternal : GKInternalRepresentation

@property (nonatomic) NSInteger averageRank; // ivar: _averageRank
@property (nonatomic) NSInteger averageScore; // ivar: _averageScore
@property (nonatomic) NSInteger bestScore; // ivar: _bestScore
@property (nonatomic) NSInteger highestRank; // ivar: _highestRank
@property (retain, nonatomic) NSMutableArray *historicalRanks; // ivar: _historicalRanks
@property (nonatomic) NSInteger latestRank; // ivar: _latestRank
@property (nonatomic) NSInteger latestScore; // ivar: _latestScore
@property (retain, nonatomic) GKPlayerInternal *player; // ivar: _player
@property (retain, nonatomic) NSString *tournamentDefinitionID; // ivar: _tournamentDefinitionID
@property (nonatomic) NSInteger tournamentsPlayed; // ivar: _tournamentsPlayed


+(id)secureCodedPropertyKeys;


@end


#endif