// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKLEADERBOARDENTRY_H
#define GKLEADERBOARDENTRY_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>

#import "GKLeaderboardEntryInternal.h"
#import "GKPlayer.h"

@interface GKLeaderboardEntry : NSObject

@property (readonly, nonatomic) NSUInteger context;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *formattedScore;
@property (retain) GKLeaderboardEntryInternal *internal; // ivar: _internal
@property (readonly, nonatomic) GKPlayer *player;
@property (readonly, nonatomic) NSInteger rank;
@property (readonly, nonatomic) NSInteger score;


+(id)formattedDifferenceBetweenFirstScore:(id)arg0 secondScore:(id)arg1 ;
-(id)_gkScore;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithInternalRepresentation:(id)arg0 ;


@end


#endif