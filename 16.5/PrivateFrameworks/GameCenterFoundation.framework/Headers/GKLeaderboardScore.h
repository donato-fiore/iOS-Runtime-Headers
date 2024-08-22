// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKLEADERBOARDSCORE_H
#define GKLEADERBOARDSCORE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GKPlayer.h"

@interface GKLeaderboardScore : NSObject

@property (nonatomic) NSUInteger context; // ivar: _context
@property (retain, nonatomic) NSString *leaderboardID; // ivar: _leaderboardID
@property (retain, nonatomic) GKPlayer *player; // ivar: _player
@property (nonatomic) NSInteger value; // ivar: _value


+(id)convertToGKScore:(id)arg0 ;


@end


#endif