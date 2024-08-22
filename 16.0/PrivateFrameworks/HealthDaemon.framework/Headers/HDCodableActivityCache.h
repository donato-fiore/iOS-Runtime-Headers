// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCODABLEACTIVITYCACHE_H
#define HDCODABLEACTIVITYCACHE_H

@class PBCodable, NSMutableArray, NSString;
@protocol HDDecoding, NSCopying;


#import "HDCodableSample.h"

@interface HDCodableActivityCache : PBCodable <HDDecoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat activeHours; // ivar: _activeHours
@property (nonatomic) CGFloat activeHoursGoal; // ivar: _activeHoursGoal
@property (nonatomic) CGFloat activeHoursGoalDate; // ivar: _activeHoursGoalDate
@property (nonatomic) NSInteger activityMoveMode; // ivar: _activityMoveMode
@property (nonatomic) CGFloat briskMinutes; // ivar: _briskMinutes
@property (nonatomic) CGFloat briskMinutesGoal; // ivar: _briskMinutesGoal
@property (nonatomic) CGFloat briskMinutesGoalDate; // ivar: _briskMinutesGoalDate
@property (nonatomic) NSInteger cacheIndex; // ivar: _cacheIndex
@property (retain, nonatomic) NSMutableArray *dailyBriskMinutesStatistics; // ivar: _dailyBriskMinutesStatistics
@property (retain, nonatomic) NSMutableArray *dailyEnergyBurnedStatistics; // ivar: _dailyEnergyBurnedStatistics
@property (retain, nonatomic) NSMutableArray *dailyMoveMinutesStatistics; // ivar: _dailyMoveMinutesStatistics
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat deepBreathingDuration; // ivar: _deepBreathingDuration
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat energyBurned; // ivar: _energyBurned
@property (nonatomic) CGFloat energyBurnedGoal; // ivar: _energyBurnedGoal
@property (nonatomic) CGFloat energyBurnedGoalDate; // ivar: _energyBurnedGoalDate
@property (nonatomic) NSInteger flightsClimbed; // ivar: _flightsClimbed
@property (nonatomic) BOOL hasActiveHours;
@property (nonatomic) BOOL hasActiveHoursGoal;
@property (nonatomic) BOOL hasActiveHoursGoalDate;
@property (nonatomic) BOOL hasActivityMoveMode;
@property (nonatomic) BOOL hasBriskMinutes;
@property (nonatomic) BOOL hasBriskMinutesGoal;
@property (nonatomic) BOOL hasBriskMinutesGoalDate;
@property (nonatomic) BOOL hasCacheIndex;
@property (nonatomic) BOOL hasDeepBreathingDuration;
@property (nonatomic) BOOL hasEnergyBurned;
@property (nonatomic) BOOL hasEnergyBurnedGoal;
@property (nonatomic) BOOL hasEnergyBurnedGoalDate;
@property (nonatomic) BOOL hasFlightsClimbed;
@property (nonatomic) BOOL hasMoveMinutes;
@property (nonatomic) BOOL hasMoveMinutesGoal;
@property (nonatomic) BOOL hasMoveMinutesGoalDate;
@property (nonatomic) BOOL hasPushCount;
@property (readonly, nonatomic) BOOL hasSample;
@property (nonatomic) BOOL hasSequence;
@property (nonatomic) BOOL hasStepCount;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) BOOL hasWalkingAndRunningDistance;
@property (nonatomic) BOOL hasWheelchairUse;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat moveMinutes; // ivar: _moveMinutes
@property (nonatomic) CGFloat moveMinutesGoal; // ivar: _moveMinutesGoal
@property (nonatomic) CGFloat moveMinutesGoalDate; // ivar: _moveMinutesGoalDate
@property (nonatomic) NSInteger pushCount; // ivar: _pushCount
@property (retain, nonatomic) HDCodableSample *sample; // ivar: _sample
@property (nonatomic) NSInteger sequence; // ivar: _sequence
@property (nonatomic) NSInteger stepCount; // ivar: _stepCount
@property (readonly) Class superclass;
@property (nonatomic) NSInteger version; // ivar: _version
@property (nonatomic) CGFloat walkingAndRunningDistance; // ivar: _walkingAndRunningDistance
@property (nonatomic) NSInteger wheelchairUse; // ivar: _wheelchairUse


-(BOOL)applyToObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dailyBriskMinutesStatisticsAtIndex:(NSUInteger)arg0 ;
-(id)dailyEnergyBurnedStatisticsAtIndex:(NSUInteger)arg0 ;
-(id)dailyMoveMinutesStatisticsAtIndex:(NSUInteger)arg0 ;
-(id)decodedEnergyBurnedGoalQuantity;
-(id)decodedEnergyBurnedQuantity;
-(id)decodedWalkingAndRunningDistanceQuantity;
-(id)dictionaryRepresentation;
-(void)addDailyBriskMinutesStatistics:(id)arg0 ;
-(void)addDailyEnergyBurnedStatistics:(id)arg0 ;
-(void)addDailyMoveMinutesStatistics:(id)arg0 ;
-(void)clearDailyBriskMinutesStatistics;
-(void)clearDailyEnergyBurnedStatistics;
-(void)clearDailyMoveMinutesStatistics;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif