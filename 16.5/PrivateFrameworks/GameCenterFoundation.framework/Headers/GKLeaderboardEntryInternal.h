// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKLEADERBOARDENTRYINTERNAL_H
#define GKLEADERBOARDENTRYINTERNAL_H

@class NSString, NSDate;


#import "GKInternalRepresentation.h"
#import "GKPlayerInternal.h"

@interface GKLeaderboardEntryInternal : GKInternalRepresentation

@property (copy, nonatomic) NSString *baseLeaderboardID; // ivar: _baseLeaderboardID
@property (nonatomic) NSUInteger context; // ivar: _context
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (copy, nonatomic) NSString *formattedScore; // ivar: _formattedScore
@property (retain, nonatomic) GKPlayerInternal *player; // ivar: _player
@property (nonatomic) NSInteger rank; // ivar: _rank
@property (nonatomic) NSInteger score; // ivar: _score
@property (nonatomic) NSInteger state; // ivar: _state


+(id)secureCodedPropertyKeys;


@end


#endif