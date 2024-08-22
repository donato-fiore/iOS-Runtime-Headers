// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDAWDHEALTHKITACHIEVEMENTSTATISTICS_H
#define HDAWDHEALTHKITACHIEVEMENTSTATISTICS_H

@class PBCodable;
@protocol NSCopying;



@interface HDAWDHealthKitAchievementStatistics : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger consecutiveBriskMinuteGoalsMet; // ivar: _consecutiveBriskMinuteGoalsMet
@property (nonatomic) NSInteger consecutiveCompleteDays; // ivar: _consecutiveCompleteDays
@property (nonatomic) NSInteger consecutiveStandingHoursGoalsMet; // ivar: _consecutiveStandingHoursGoalsMet
@property (nonatomic) NSInteger currentCalorieGoalConsecutiveCompleteDays; // ivar: _currentCalorieGoalConsecutiveCompleteDays
@property (nonatomic) BOOL hasConsecutiveBriskMinuteGoalsMet;
@property (nonatomic) BOOL hasConsecutiveCompleteDays;
@property (nonatomic) BOOL hasConsecutiveStandingHoursGoalsMet;
@property (nonatomic) BOOL hasCurrentCalorieGoalConsecutiveCompleteDays;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif