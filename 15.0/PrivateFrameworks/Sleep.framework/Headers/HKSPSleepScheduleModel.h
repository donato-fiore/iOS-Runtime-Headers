// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSPSLEEPSCHEDULEMODEL_H
#define HKSPSLEEPSCHEDULEMODEL_H

@class NSString, NSDate;
@protocol NSCopying, NAEquatable, NAHashable;

#import <Foundation/Foundation.h>

#import "HKSPSleepEventRecord.h"
#import "HKSPSleepSchedule.h"
#import "HKSPSleepSettings.h"

@interface HKSPSleepScheduleModel : NSObject <NSCopying, NAEquatable, NAHashable>



@property (readonly, nonatomic) BOOL chargingRemindersEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL goodMorningAlertNotificationEnabled;
@property (readonly, nonatomic) BOOL goodMorningScreenEnabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *lastModifiedDate;
@property (readonly, copy, nonatomic) HKSPSleepEventRecord *sleepEventRecord; // ivar: _sleepEventRecord
@property (readonly, copy, nonatomic) HKSPSleepSchedule *sleepSchedule; // ivar: _sleepSchedule
@property (readonly, copy, nonatomic) HKSPSleepSettings *sleepSettings; // ivar: _sleepSettings
@property (readonly) Class superclass;


+(id)sleepScheduleModelWithSleepSchedule:(id)arg0 sleepSettings:(id)arg1 sleepEventRecord:(id)arg2 ;
+(id)templateModelForSchedule:(id)arg0 ;
-(BOOL)chargingRemindersEnabledWithLogObject:(id)arg0 ;
-(BOOL)goodMorningAlertNotificationsEnabledWithLogObject:(id)arg0 ;
-(BOOL)goodMorningScreenEnabledWithLogObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentTo:(id)arg0 ;
-(NSInteger)alarmStatusForOccurrence:(id)arg0 ;
-(id)_timelineResultsDueAfterDate:(id)arg0 ;
-(id)_upcomingEventsDueAfterDate:(id)arg0 searchBackwards:(BOOL)arg1 ;
-(id)_upcomingResolvedOccurrencesDueAfterDate:(id)arg0 searchBackwards:(BOOL)arg1 ;
-(id)computeConfirmedWakeUpUntilDateForEarlyWakeUpDate:(id)arg0 ;
-(id)computeConfirmedWakeUpUntilDateForOverrideWakeUpDate:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)modelByApplyingChangesFromOccurrence:(id)arg0 ;
-(id)nextEventDueAfterDate:(id)arg0 ;
-(id)nextEventWithIdentifier:(id)arg0 dueAfterDate:(id)arg1 ;
-(id)nextOccurrenceAfterDate:(id)arg0 ;
-(id)nextOccurrenceAfterDate:(id)arg0 repeatingWithinInterval:(CGFloat)arg1 ;
-(id)nextResolvedOccurrenceAfterDate:(id)arg0 ;
-(id)nextResolvedOccurrenceAfterDate:(id)arg0 repeatingWithinInterval:(CGFloat)arg1 ;
-(id)previousEventWithIdentifier:(id)arg0 dueBeforeDate:(id)arg1 ;
-(id)previousEventsDueBeforeDate:(id)arg0 ;
-(id)previousOccurrenceBeforeDate:(id)arg0 ;
-(id)previousResolvedOccurrenceBeforeDate:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)timelineForDate:(id)arg0 ;
-(id)upcomingEventsDueAfterDate:(id)arg0 ;
-(id)upcomingOccurrenceAfterDate:(id)arg0 ;
-(id)upcomingResolvedOccurrenceAfterDate:(id)arg0 ;


@end


#endif