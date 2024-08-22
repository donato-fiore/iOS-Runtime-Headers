// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKSCORECHALLENGEINTERNAL_H
#define GKSCORECHALLENGEINTERNAL_H



#import "GKChallengeInternal.h"
#import "GKLeaderboardInternal.h"
#import "GKScoreInternal.h"

@interface GKScoreChallengeInternal : GKChallengeInternal

@property (retain, nonatomic) GKLeaderboardInternal *leaderboard; // ivar: _leaderboard
@property (copy, nonatomic) GKScoreInternal *score; // ivar: _score


+(id)internalRepresentation;
+(id)secureCodedPropertyKeys;
-(NSUInteger)type;
-(id)serverRepresentationForReceivingPlayer:(id)arg0 ;
-(id)titleText;


@end


#endif