// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKLEADERBOARDSUMMARYINTERNAL_H
#define GKLEADERBOARDSUMMARYINTERNAL_H

@class NSString;


#import "GKInternalRepresentation.h"

@interface GKLeaderboardSummaryInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *baseLeaderboardID; // ivar: _baseLeaderboardID
@property (nonatomic) NSUInteger context; // ivar: _context
@property (nonatomic) NSUInteger duration; // ivar: _duration
@property (retain, nonatomic) NSString *formattedScoreValue; // ivar: _formattedScoreValue
@property (nonatomic) NSUInteger friendRank; // ivar: _friendRank
@property (retain, nonatomic) NSString *groupID; // ivar: _groupID
@property (retain, nonatomic) NSString *leaderboardID; // ivar: _leaderboardID
@property (nonatomic) NSUInteger nextStartDate; // ivar: _nextStartDate
@property (nonatomic) NSUInteger rank; // ivar: _rank
@property (nonatomic) NSUInteger scoreValue; // ivar: _scoreValue
@property (nonatomic) NSUInteger startDate; // ivar: _startDate
@property (nonatomic) NSUInteger status; // ivar: _status
@property (retain, nonatomic) NSString *timeScope; // ivar: _timeScope
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSUInteger totalEntries; // ivar: _totalEntries
@property (nonatomic) NSUInteger totalFriendEntries; // ivar: _totalFriendEntries
@property (retain, nonatomic) NSString *type; // ivar: _type


+(id)secureCodedPropertyKeys;


@end


#endif