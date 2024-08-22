// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSPANALYTICSDAILYREPORTEVENT_H
#define HKSPANALYTICSDAILYREPORTEVENT_H

@class NSString, NSDictionary, NSArray, NSNumber;
@protocol HKSPAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface HKSPAnalyticsDailyReportEvent : NSObject <HKSPAnalyticsEvent>



@property (copy, nonatomic) NSString *activeWatchProductType; // ivar: _activeWatchProductType
@property (nonatomic) BOOL alarmFriday; // ivar: _alarmFriday
@property (nonatomic) BOOL alarmMonday; // ivar: _alarmMonday
@property (nonatomic) BOOL alarmSaturday; // ivar: _alarmSaturday
@property (nonatomic) BOOL alarmSunday; // ivar: _alarmSunday
@property (nonatomic) BOOL alarmThursday; // ivar: _alarmThursday
@property (nonatomic) BOOL alarmTuesday; // ivar: _alarmTuesday
@property (nonatomic) BOOL alarmWednesday; // ivar: _alarmWednesday
@property (nonatomic) BOOL bedTimeWindDownRemindersEnabled; // ivar: _bedTimeWindDownRemindersEnabled
@property (copy, nonatomic) NSString *biologicalSex; // ivar: _biologicalSex
@property (nonatomic) BOOL chargeRemindersEnabled; // ivar: _chargeRemindersEnabled
@property (nonatomic) NSInteger daysWornWatchToSleepInLast30Days; // ivar: _daysWornWatchToSleepInLast30Days
@property (nonatomic) NSInteger daysWornWatchToSleepInLast7Days; // ivar: _daysWornWatchToSleepInLast7Days
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didWearWatchToSleepLastNight; // ivar: _didWearWatchToSleepLastNight
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *eventPayload;
@property (copy, nonatomic) NSString *hapticToneIdentifierFriday; // ivar: _hapticToneIdentifierFriday
@property (copy, nonatomic) NSString *hapticToneIdentifierMonday; // ivar: _hapticToneIdentifierMonday
@property (copy, nonatomic) NSString *hapticToneIdentifierSaturday; // ivar: _hapticToneIdentifierSaturday
@property (copy, nonatomic) NSString *hapticToneIdentifierSunday; // ivar: _hapticToneIdentifierSunday
@property (copy, nonatomic) NSString *hapticToneIdentifierThursday; // ivar: _hapticToneIdentifierThursday
@property (copy, nonatomic) NSString *hapticToneIdentifierTuesday; // ivar: _hapticToneIdentifierTuesday
@property (copy, nonatomic) NSString *hapticToneIdentifierWednesday; // ivar: _hapticToneIdentifierWednesday
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL interactedWithWindDownLast24Hrs; // ivar: _interactedWithWindDownLast24Hrs
@property (nonatomic) BOOL isDefaultScheduleFriday; // ivar: _isDefaultScheduleFriday
@property (nonatomic) BOOL isDefaultScheduleMonday; // ivar: _isDefaultScheduleMonday
@property (nonatomic) BOOL isDefaultScheduleSaturday; // ivar: _isDefaultScheduleSaturday
@property (nonatomic) BOOL isDefaultScheduleSunday; // ivar: _isDefaultScheduleSunday
@property (nonatomic) BOOL isDefaultScheduleThursday; // ivar: _isDefaultScheduleThursday
@property (nonatomic) BOOL isDefaultScheduleTuesday; // ivar: _isDefaultScheduleTuesday
@property (nonatomic) BOOL isDefaultScheduleWednesday; // ivar: _isDefaultScheduleWednesday
@property (nonatomic) BOOL isImproveHealthAndActivitySubmissionAllowed; // ivar: _isImproveHealthAndActivitySubmissionAllowed
@property (readonly, nonatomic) NSArray *keysRequiringIHAGating;
@property (nonatomic) BOOL scheduleChangePast24Hours; // ivar: _scheduleChangePast24Hours
@property (nonatomic) BOOL scheduleChangePast7days; // ivar: _scheduleChangePast7days
@property (nonatomic) BOOL scheduleDisabled; // ivar: _scheduleDisabled
@property (nonatomic) BOOL scheduleFriday; // ivar: _scheduleFriday
@property (nonatomic) BOOL scheduleMigration; // ivar: _scheduleMigration
@property (nonatomic) BOOL scheduleMonday; // ivar: _scheduleMonday
@property (nonatomic) BOOL scheduleSaturday; // ivar: _scheduleSaturday
@property (nonatomic) BOOL scheduleSunday; // ivar: _scheduleSunday
@property (nonatomic) BOOL scheduleThursday; // ivar: _scheduleThursday
@property (nonatomic) BOOL scheduleTuesday; // ivar: _scheduleTuesday
@property (nonatomic) BOOL scheduleWednesday; // ivar: _scheduleWednesday
@property (nonatomic) BOOL scheduledSleepModeEnabled; // ivar: _scheduledSleepModeEnabled
@property (nonatomic) CGFloat sleepGoal; // ivar: _sleepGoal
@property (copy, nonatomic) NSNumber *stddevActualTimeAsleep; // ivar: _stddevActualTimeAsleep
@property (copy, nonatomic) NSNumber *stddevActualVsScheduledTimeAsleep; // ivar: _stddevActualVsScheduledTimeAsleep
@property (copy, nonatomic) NSNumber *stddevScheduledTimeAsleep; // ivar: _stddevScheduledTimeAsleep
@property (readonly) Class superclass;
@property (nonatomic) BOOL timeInBedTrackingEnabled; // ivar: _timeInBedTrackingEnabled
@property (nonatomic) BOOL useSleepScreen; // ivar: _useSleepScreen
@property (copy, nonatomic) NSNumber *userAge; // ivar: _userAge
@property (nonatomic) BOOL wakeUpResultsEnabled; // ivar: _wakeUpResultsEnabled
@property (nonatomic) BOOL watchSleepTrackingEnabled; // ivar: _watchSleepTrackingEnabled
@property (nonatomic) NSInteger weekendDaysWornWatchToSleepInLast7Days; // ivar: _weekendDaysWornWatchToSleepInLast7Days
@property (copy, nonatomic) NSNumber *weeksSinceOnboardedSleepSchedule; // ivar: _weeksSinceOnboardedSleepSchedule
@property (copy, nonatomic) NSNumber *weeksSinceOnboardedSleepTracking; // ivar: _weeksSinceOnboardedSleepTracking
@property (copy, nonatomic) NSNumber *weeksSinceOnboardedWindDownActions; // ivar: _weeksSinceOnboardedWindDownActions




@end


#endif