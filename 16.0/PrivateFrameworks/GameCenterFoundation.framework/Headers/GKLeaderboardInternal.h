// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKLEADERBOARDINTERNAL_H
#define GKLEADERBOARDINTERNAL_H

@class NSString, NSDictionary, NSDate, NSArray;


#import "GKInternalRepresentation.h"
#import "GKPlayerInternal.h"
#import "GKScoreInternal.h"

@interface GKLeaderboardInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *baseLeaderboardID; // ivar: _baseLeaderboardID
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSString *context; // ivar: _context
@property (retain, nonatomic) GKPlayerInternal *creator; // ivar: _creator
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) unsigned short friendRank; // ivar: _friendRank
@property (nonatomic) unsigned short friendRankCount; // ivar: _friendRankCount
@property (retain, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (retain, nonatomic) NSDictionary *icons; // ivar: _icons
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSDate *lastSubmittedDate; // ivar: _lastSubmittedDate
@property (retain, nonatomic) NSString *leaderboardSetIdentifier; // ivar: _leaderboardSetIdentifier
@property (retain, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSUInteger maxRange;
@property (nonatomic) unsigned int maxRank; // ivar: _maxRank
@property (retain, nonatomic) NSDate *nextStartDate; // ivar: _nextStartDate
@property (nonatomic) unsigned int overallRank; // ivar: _overallRank
@property (nonatomic) unsigned int overallRankCount; // ivar: _overallRankCount
@property (retain, nonatomic) GKScoreInternal *playerScore; // ivar: _playerScore
@property (retain, nonatomic) NSString *recordID; // ivar: _recordID
@property (retain, nonatomic) NSArray *scores; // ivar: _scores
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger type; // ivar: _type


+(id)secureCodedPropertyKeys;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif