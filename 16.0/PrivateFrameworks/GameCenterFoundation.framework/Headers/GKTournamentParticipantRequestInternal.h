// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKTOURNAMENTPARTICIPANTREQUESTINTERNAL_H
#define GKTOURNAMENTPARTICIPANTREQUESTINTERNAL_H

@class NSArray;


#import "GKInternalRepresentation.h"

@interface GKTournamentParticipantRequestInternal : GKInternalRepresentation

@property (nonatomic) NSInteger count; // ivar: _count
@property (nonatomic) BOOL friendsOnly; // ivar: _friendsOnly
@property (retain, nonatomic) NSArray *participantStates; // ivar: _participantStates
@property (nonatomic) NSInteger startIndex; // ivar: _startIndex


+(id)secureCodedPropertyKeys;


@end


#endif