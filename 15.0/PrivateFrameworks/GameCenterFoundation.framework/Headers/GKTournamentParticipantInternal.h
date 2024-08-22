// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKTOURNAMENTPARTICIPANTINTERNAL_H
#define GKTOURNAMENTPARTICIPANTINTERNAL_H

@class NSString;


#import "GKInternalRepresentation.h"
#import "GKPlayerInternal.h"

@interface GKTournamentParticipantInternal : GKInternalRepresentation

@property (nonatomic) BOOL cheatingIndicator; // ivar: _cheatingIndicator
@property (nonatomic) NSInteger participantState; // ivar: _participantState
@property (retain, nonatomic) GKPlayerInternal *player; // ivar: _player
@property (nonatomic) NSInteger playerGroup; // ivar: _playerGroup
@property (nonatomic) NSInteger replayCount; // ivar: _replayCount
@property (nonatomic) NSInteger score; // ivar: _score
@property (retain, nonatomic) NSString *tournamentID; // ivar: _tournamentID


+(id)secureCodedPropertyKeys;


@end


#endif