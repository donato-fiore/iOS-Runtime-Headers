// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCOMPETITION_H
#define ASCOMPETITION_H

@class NSUUID, NSDate, NSDateComponents, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ASCompetition : NSObject <NSCopying>



@property (retain, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (nonatomic) NSInteger currentCacheIndex; // ivar: _currentCacheIndex
@property (retain, nonatomic) NSDate *currentDateOverride; // ivar: _currentDateOverride
@property (retain, nonatomic) NSDateComponents *durationDateComponents; // ivar: _durationDateComponents
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSInteger endDateCacheIndex;
@property (readonly, nonatomic) BOOL hasCalculatedFinalScore;
@property (readonly, nonatomic) BOOL hasPushedFinalScore;
@property (readonly, nonatomic) BOOL isDailyScoreCapped;
@property (readonly, nonatomic) BOOL isFirstDayOfCompetition;
@property (readonly, nonatomic) BOOL isLastDayOfCompetition;
@property (readonly, nonatomic) BOOL isScoreTied;
@property (readonly, nonatomic) NSDate *lastDayOfCompetition;
@property (nonatomic) NSInteger lastPushedCacheIndex; // ivar: _lastPushedCacheIndex
@property (nonatomic) NSUInteger maximumNumberOfPointsPerDay; // ivar: _maximumNumberOfPointsPerDay
@property (readonly, nonatomic) NSUInteger myDailyAverageScore;
@property (readonly, nonatomic) NSUInteger myTotalScore;
@property (readonly, nonatomic) NSUInteger numberOfDaysRemaining;
@property (readonly, nonatomic) NSUInteger opponentDailyAverageScore;
@property (retain, nonatomic) NSArray *opponentScores; // ivar: _opponentScores
@property (readonly, nonatomic) NSUInteger opponentTotalScore;
@property (retain, nonatomic) NSArray *preferredVictoryBadgeStyles; // ivar: _preferredVictoryBadgeStyles
@property (retain, nonatomic) NSArray *scores; // ivar: _scores
@property (readonly, nonatomic) NSInteger stage;
@property (readonly, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDateComponents *startDateComponents; // ivar: _startDateComponents
@property (readonly, nonatomic) unsigned int victoryBadgeStyle;


+(id)codableDatabaseCompetitionsFromCompetitions:(id)arg0 withFriendWithUUID:(id)arg1 withType:(NSInteger)arg2 ;
+(id)competitionWithCodableCompetition:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCompetition:(id)arg0 ;
-(BOOL)isParticipantWinning:(NSInteger)arg0 ;
-(NSUInteger)dailyScoreForParticipant:(NSInteger)arg0 onDate:(id)arg1 ;
-(id)_scoresForParticipant:(NSInteger)arg0 ;
-(id)codableCompetition;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currentDate;
-(id)daysWonByParticipant:(NSInteger)arg0 ;
-(id)description;
-(id)init;


@end


#endif