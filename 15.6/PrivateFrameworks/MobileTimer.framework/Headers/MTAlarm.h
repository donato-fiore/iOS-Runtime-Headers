// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTALARM_H
#define MTALARM_H

@class NSUUID, NSURL, NSDate, NSNumber, NSString, NSDictionary;
@protocol MTScheduleable, MTDictionarySerializable, MTSerializable, BSDescriptionProviding, NAEquatable, NSSecureCoding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "MTIntentAlarm.h"
#import "MTSound.h"

@interface MTAlarm : NSObject <MTScheduleable, MTDictionarySerializable, MTSerializable, BSDescriptionProviding, NAEquatable, NSSecureCoding, NSCopying, NSMutableCopying>



@property (readonly, nonatomic) NSUUID *alarmID; // ivar: _alarmID
@property (readonly, nonatomic) NSURL *alarmURL;
@property (nonatomic) BOOL allowsSnooze; // ivar: _allowsSnooze
@property (nonatomic) NSUInteger bedtimeDismissedAction; // ivar: _bedtimeDismissedAction
@property (copy, nonatomic) NSDate *bedtimeDismissedDate; // ivar: _bedtimeDismissedDate
@property (copy, nonatomic) NSDate *bedtimeFiredDate; // ivar: _bedtimeFiredDate
@property (nonatomic) NSUInteger bedtimeHour; // ivar: _bedtimeHour
@property (nonatomic) NSUInteger bedtimeMinute; // ivar: _bedtimeMinute
@property (copy, nonatomic) NSNumber *bedtimeReminder; // ivar: _bedtimeReminder
@property (nonatomic) NSUInteger bedtimeReminderMinutes;
@property (copy, nonatomic) NSDate *bedtimeSnoozeFireDate; // ivar: _bedtimeSnoozeFireDate
@property (copy, nonatomic) id *currentDateProvider; // ivar: _currentDateProvider
@property (nonatomic) NSUInteger day; // ivar: _day
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger dismissedAction; // ivar: _dismissedAction
@property (copy, nonatomic) NSDate *dismissedDate; // ivar: _dismissedDate
@property (readonly, nonatomic) NSString *displayTitle;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (copy, nonatomic) NSDate *firedDate; // ivar: _firedDate
@property (readonly, nonatomic, getter=isFiring) BOOL firing;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger hour; // ivar: _hour
@property (readonly, nonatomic) MTIntentAlarm *intentAlarm;
@property (copy, nonatomic) NSDate *keepOffUntilDate; // ivar: _keepOffUntilDate
@property (copy, nonatomic) NSDate *lastModifiedDate; // ivar: _lastModifiedDate
@property (nonatomic) NSUInteger minute; // ivar: _minute
@property (nonatomic) NSUInteger month; // ivar: _month
@property (readonly, nonatomic) NSDate *nextFireDate;
@property (nonatomic) NSUInteger onboardingVersion; // ivar: _onboardingVersion
@property (copy, nonatomic) NSDate *overriddenForDate; // ivar: _overriddenForDate
@property (nonatomic) NSUInteger playOptions; // ivar: _playOptions
@property (readonly, nonatomic) BOOL playsOnThisDevice;
@property (nonatomic) NSUInteger repeatSchedule; // ivar: _repeatSchedule
@property (readonly, nonatomic) BOOL repeats;
@property (copy, nonatomic) NSDictionary *siriContext; // ivar: _siriContext
@property (nonatomic, getter=isSleepAlarm) BOOL sleepAlarm; // ivar: _sleepAlarm
@property (readonly, nonatomic) NSUInteger sleepDuration;
@property (nonatomic) BOOL sleepMode; // ivar: _sleepMode
@property (nonatomic) NSUInteger sleepModeOptions; // ivar: _sleepModeOptions
@property (nonatomic) BOOL sleepSchedule; // ivar: _sleepSchedule
@property (nonatomic) BOOL sleepTracking; // ivar: _sleepTracking
@property (copy, nonatomic) NSDate *snoozeFireDate; // ivar: _snoozeFireDate
@property (readonly, nonatomic, getter=isSnoozed) BOOL snoozed;
@property (copy, nonatomic) MTSound *sound; // ivar: _sound
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) BOOL timeInBedTracking; // ivar: _timeInBedTracking
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSUInteger year; // ivar: _year


+(BOOL)_date:(id)arg0 isOnDay:(NSInteger)arg1 calendar:(id)arg2 ;
+(BOOL)_isInternalBuild;
+(BOOL)supportsSecureCoding;
+(NSUInteger)defaultPlayOptions;
+(NSUInteger)defaultPlayOptionsIsSleepAlarm:(BOOL)arg0 ;
+(NSUInteger)defaultSleepModeOptions;
+(id)alarm;
+(id)alarmWithHour:(NSUInteger)arg0 minute:(NSUInteger)arg1 ;
+(id)mostRecentlyUpdatedAlarmForAlarms:(id)arg0 ;
+(id)propertiesAffectingBedtime;
+(id)propertiesAffectingNotification;
+(id)propertiesAffectingSnooze;
+(id)propertiesAffectingSync;
+(id)propertiesAffectingWaketime;
+(id)sleepAlarm;
+(id)sleepAlarmWithHour:(NSInteger)arg0 minute:(NSInteger)arg1 ;
+(id)sleepAlarmWithHour:(NSInteger)arg0 minute:(NSInteger)arg1 bedtimeHour:(NSInteger)arg2 bedtimeMinute:(NSInteger)arg3 ;
+(id)sleepAlarmWithHour:(NSInteger)arg0 minute:(NSInteger)arg1 year:(NSInteger)arg2 month:(NSInteger)arg3 day:(NSInteger)arg4 bedtimeHour:(NSInteger)arg5 bedtimeMinute:(NSInteger)arg6 ;
+(id)sleepAlarmWithId:(id)arg0 ;
+(id)sleepAlarmWithSchedule:(NSUInteger)arg0 ;
+(id)sleepScheduleString:(NSUInteger)arg0 ;
-(BOOL)_isEqualToAlarm:(id)arg0 checkLastModified:(BOOL)arg1 ;
-(BOOL)confirmedLastBedtimeReminder;
-(BOOL)isBedtimeSnoozed;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualIgnoringLastModifiedDate:(id)arg0 ;
-(BOOL)isEqualToAlarm:(id)arg0 ;
-(BOOL)isItemEnabled;
-(BOOL)isSingleTime;
-(BOOL)isSingleTimeAlarm;
-(BOOL)isSleepItem;
-(BOOL)isValidDateComponent:(NSInteger)arg0 ;
-(BOOL)overridesAlarm:(id)arg0 trigger:(id)arg1 calendar:(id)arg2 ;
-(BOOL)overridesNextAlarm:(id)arg0 date:(id)arg1 calendar:(id)arg2 ;
-(BOOL)overridesScheduledObject:(id)arg0 calendar:(id)arg1 ;
-(BOOL)shouldBeScheduled;
-(NSInteger)compare:(id)arg0 ;
-(id)_earliestTriggerDateForDate:(id)arg0 ;
-(id)_initCommon;
-(id)_nextDateHelperWithDate:(id)arg0 calendar:(id)arg1 ;
-(id)alarmIntentDisplayString;
-(id)bedtimeComponents;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateComponents;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)getOverriddenDate;
-(id)identifier;
-(id)init;
-(id)initFromDeserializer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurrentTimeFromCurrentDateProvider:(id)arg0 ;
-(id)initWithHour:(NSUInteger)arg0 minute:(NSUInteger)arg1 ;
-(id)initWithHour:(NSUInteger)arg0 minute:(NSUInteger)arg1 currentDateProvider:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)intentLabel;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)nextExpectedBedtimeDateAfterDate:(id)arg0 ;
-(id)nextExpectedWakeUpDateAfterDate:(id)arg0 ;
-(id)nextFireDateAfterDate:(id)arg0 ;
-(id)nextFireDateAfterDate:(id)arg0 includeBedtimeNotification:(BOOL)arg1 ;
-(id)nextTrigger;
-(id)nextTriggerAfterDate:(id)arg0 ;
-(id)nextTriggerAfterDate:(id)arg0 includeBedtimeNotification:(BOOL)arg1 ;
-(id)nextTriggerAfterDate:(id)arg0 includeSnooze:(BOOL)arg1 includeBedtimeNotification:(BOOL)arg2 ;
-(id)nextTriggerAfterDate:(id)arg0 ofType:(NSUInteger)arg1 ;
-(id)nextTriggersAfterDate:(id)arg0 ;
-(id)nextTriggersAfterDate:(id)arg0 includeBedtime:(BOOL)arg1 ;
-(id)nextTriggersAfterDate:(id)arg0 includeSnooze:(BOOL)arg1 includeBedtimeNotification:(BOOL)arg2 ;
-(id)nextTriggersAfterDate:(id)arg0 inclusionOptions:(NSUInteger)arg1 ;
-(id)singleTimeOverrideDateInCalendar:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)timeObject;
-(id)upcomingTriggersAfterDate:(id)arg0 ;
-(void)_copyStateOntoAlarm:(id)arg0 ;
-(void)_updatePropertiesFromDeserializer:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)scheduleOverridenForDate:(id)arg0 ;
-(void)serializeWithSerializer:(id)arg0 ;
-(void)setOverriddenDate:(id)arg0 ;


@end


#endif