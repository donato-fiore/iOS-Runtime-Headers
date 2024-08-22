// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKPLAYERACTIVITYRELATIONSHIPLEADERBOARD_H
#define GKPLAYERACTIVITYRELATIONSHIPLEADERBOARD_H

@class NSArray;


#import "GKPlayerActivityRelationshipBase.h"
#import "GKLeaderboardInternal.h"

@interface GKPlayerActivityRelationshipLeaderboard : GKPlayerActivityRelationshipBase

@property (retain, nonatomic) GKLeaderboardInternal *leaderboardInternal; // ivar: _leaderboardInternal
@property (nonatomic) NSInteger leaderboardType; // ivar: _leaderboardType
@property (retain, nonatomic) NSArray *scores; // ivar: _scores


+(id)secureCodedPropertyKeys;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif