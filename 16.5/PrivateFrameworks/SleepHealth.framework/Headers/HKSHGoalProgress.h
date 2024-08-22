// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSHGOALPROGRESS_H
#define HKSHGOALPROGRESS_H

@class HKQuantity, NSDateComponents, NSNumber;

#import <Foundation/Foundation.h>


@interface HKSHGoalProgress : NSObject

@property (readonly, copy, nonatomic) HKQuantity *averageAwakeDuration; // ivar: _averageAwakeDuration
@property (readonly, copy, nonatomic) NSDateComponents *averageBedtime; // ivar: _averageBedtime
@property (readonly, copy, nonatomic) HKQuantity *averageBedtimeMiss; // ivar: _averageBedtimeMiss
@property (readonly, copy, nonatomic) HKQuantity *averageCoreSleepDuration; // ivar: _averageCoreSleepDuration
@property (readonly, copy, nonatomic) HKQuantity *averageDeepSleepDuration; // ivar: _averageDeepSleepDuration
@property (readonly, copy, nonatomic) HKQuantity *averageInBedDuration; // ivar: _averageInBedDuration
@property (readonly, copy, nonatomic) NSDateComponents *averageInBedEndTime; // ivar: _averageInBedEndTime
@property (readonly, copy, nonatomic) NSDateComponents *averageInBedStartTime; // ivar: _averageInBedStartTime
@property (readonly, copy, nonatomic) HKQuantity *averageREMSleepDuration; // ivar: _averageREMSleepDuration
@property (readonly, copy, nonatomic) HKQuantity *averageSleepDuration; // ivar: _averageSleepDuration
@property (readonly, copy, nonatomic) HKQuantity *averageSleepDurationGoalMiss; // ivar: _averageSleepDurationGoalMiss
@property (readonly, copy, nonatomic) NSDateComponents *averageSleepEndTime; // ivar: _averageSleepEndTime
@property (readonly, copy, nonatomic) NSDateComponents *averageSleepStartTime; // ivar: _averageSleepStartTime
@property (readonly, copy, nonatomic) HKQuantity *averageUnspecifiedSleepDuration; // ivar: _averageUnspecifiedSleepDuration
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


+(id)goalProgressWithMorningIndexRange:(struct ? )arg0 sleepAnalysisAsleepCount:(NSInteger)arg1 sleepAnalysisInBedCount:(NSInteger)arg2 sleepAnalysisCount:(NSInteger)arg3 averageSleepDuration:(id)arg4 averageInBedDuration:(id)arg5 averageREMSleepDuration:(id)arg6 averageCoreSleepDuration:(id)arg7 averageDeepSleepDuration:(id)arg8 averageUnspecifiedSleepDuration:(id)arg9 averageAwakeDuration:(id)arg10 bedtimeAchievedCount:(NSInteger)arg11 sleepDurationGoalAchievedCount:(NSInteger)arg12 sleepDurationGoalStreakCount:(NSInteger)arg13 averageBedtimeMiss:(id)arg14 averageSleepDurationGoalMiss:(id)arg15 averageBedtime:(id)arg16 averageWakeTime:(id)arg17 averageInBedStartTime:(id)arg18 averageInBedEndTime:(id)arg19 averageSleepStartTime:(id)arg20 averageSleepEndTime:(id)arg21 standardDeviationActualTimeAsleep:(id)arg22 standardDeviationScheduledTimeAsleep:(id)arg23 standardDeviationActualVsScheduledTimeAsleep:(id)arg24 ;


@end


#endif