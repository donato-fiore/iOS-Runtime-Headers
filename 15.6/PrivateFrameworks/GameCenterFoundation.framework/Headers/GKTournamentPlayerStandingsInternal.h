// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKTOURNAMENTPLAYERSTANDINGSINTERNAL_H
#define GKTOURNAMENTPLAYERSTANDINGSINTERNAL_H



#import "GKInternalRepresentation.h"

@interface GKTournamentPlayerStandingsInternal : GKInternalRepresentation

@property (nonatomic) NSInteger friendCount; // ivar: _friendCount
@property (nonatomic) NSInteger friendRank; // ivar: _friendRank
@property (nonatomic) NSInteger globalPlayerCount; // ivar: _globalPlayerCount
@property (nonatomic) NSInteger globalRank; // ivar: _globalRank
@property (nonatomic) NSInteger participantState; // ivar: _participantState
@property (nonatomic) NSInteger replayCount; // ivar: _replayCount
@property (nonatomic) NSInteger score; // ivar: _score
@property (nonatomic) NSInteger topScore; // ivar: _topScore


+(id)secureCodedPropertyKeys;


@end


#endif