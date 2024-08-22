// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKTOURNAMENTPLAYERSTANDINGS_H
#define GKTOURNAMENTPLAYERSTANDINGS_H


#import <Foundation/Foundation.h>

#import "GKTournamentPlayerStandingsInternal.h"

@interface GKTournamentPlayerStandings : NSObject

@property (readonly, nonatomic) NSInteger friendCount;
@property (readonly, nonatomic) NSInteger friendRank;
@property (readonly, nonatomic) NSInteger globalPlayerCount;
@property (readonly, nonatomic) NSInteger globalRank;
@property (retain) GKTournamentPlayerStandingsInternal *internal; // ivar: _internal
@property (readonly, nonatomic) NSInteger replayCount;
@property (readonly, nonatomic) NSInteger score;
@property (readonly, nonatomic) NSInteger topScore;


-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithInternalRepresentation:(id)arg0 ;


@end


#endif