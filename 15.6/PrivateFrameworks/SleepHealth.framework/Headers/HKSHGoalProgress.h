// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSHGOALPROGRESS_H
#define HKSHGOALPROGRESS_H

@class NSDateComponents, HKQuantity, NSNumber;

#import <Foundation/Foundation.h>


@interface HKSHGoalProgress : NSObject

@property (readonly, copy, nonatomic) NSDateComponents *averageBedtime; // ivar: _averageBedtime
@property (readonly, copy, nonatomic) HKQuantity *averageBedtimeMiss; // ivar: _averageBedtimeMiss
@property (readonly, copy, nonatomic) HKQuantity *averageInBedDuration; // ivar: _averageInBedDuration
@property (readonly, copy, nonatomic) HKQuantity *averageSleepDuration; // ivar: _averageSleepDuration
@property (readonly, copy, nonatomic) HKQuantity *averageSleepDurationGoalMiss; // ivar: _averageSleepDurationGoalMiss
@property (readonly, copy, nonatomic) NSDateComponents *averageSleepEndTime; // ivar: _averageSleepEndTime
@property (readonly, copy, nonatomic) NSDateComponents *averageSleepStartTime; // ivar: _averageSleepStartTime
@property (readonly, copy, nonatomic) NSDateComponents *averageWakeTime; // ivar: _averageWakeTime
@property (readonly, nonatomic) NSInteger bedtimeAchievedCount; // ivar: _bedtimeAchievedCount
@property (readonly, nonatomic) ? morningIndexRange; // ivar: _morningIndexRange
@property (readonly, nonatomic) NSInteger sleepAnalysisAsleepCount; // ivar: _sleepAnalysisAsleepCount
@property (readonly, nonatomic) NSInteger sleepAnalysisCount; // ivar: _sleepAnalysisCount
@property (readonly, nonatomic) NSInteger sleepAnalysisInBedCount; // ivar: _sleepAnalysisInBedCount
@property (readonly, nonatomic) NSInteger sleepDurationGoalAchievedCount; // ivar: _sleepDurationGoalAchievedCount
@property (readonly, nonatomic) NSInteger sleepDurationGoalStreakCount; // ivar: _sleepDurationGoalStreakCount
@property (readonly, copy, nonatomic) NSNumber *standardDeviationActualTimeAsleep; // ivar: _standardDeviationActualTimeAsleep
@property (readonly, copy, nonatomic) NSNumber *standardDeviationActualVsScheduledTimeAsleep; // ivar: _standardDeviationActualVsScheduledTimeAsleep
@property (readonly, copy, nonatomic) NSNumber *standardDeviationScheduledTimeAsleep; // ivar: _standardDeviationScheduledTimeAsleep


+(id)goalProgressWithMorningIndexRange:(struct ? )arg0 sleepAnalysisAsleepCount:(NSInteger)arg1 sleepAnalysisInBedCount:(NSInteger)arg2 sleepAnalysisCount:(NSInteger)arg3 averageSleepDuration:(id)arg4 averageInBedDuration:(id)arg5 bedtimeAchievedCount:(NSInteger)arg6 sleepDurationGoalAchievedCount:(NSInteger)arg7 sleepDurationGoalStreakCount:(NSInteger)arg8 averageBedtimeMiss:(id)arg9 averageSleepDurationGoalMiss:(id)arg10 averageBedtime:(id)arg11 averageWakeTime:(id)arg12 averageSleepStartTime:(id)arg13 averageSleepEndTime:(id)arg14 standardDeviationActualTimeAsleep:(id)arg15 standardDeviationScheduledTimeAsleep:(id)arg16 standardDeviationActualVsScheduledTimeAsleep:(id)arg17 ;


@end


#endif