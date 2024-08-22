// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSPMUTABLESLEEPSCHEDULEOCCURRENCE_H
#define HKSPMUTABLESLEEPSCHEDULEOCCURRENCE_H

@class NSDateComponents, NSString, NSDate, NSDictionary, NSSet;
@protocol HKSPMutableObject, HKSPObject;


#import "HKSPSleepScheduleOccurrence.h"
#import "HKSPAlarmConfiguration.h"
#import "HKSPSleepScheduleDayOccurrence.h"
#import "HKSPChangeSet.h"

@interface HKSPMutableSleepScheduleOccurrence : HKSPSleepScheduleOccurrence <HKSPMutableObject>



@property (retain, nonatomic) HKSPAlarmConfiguration *alarmConfiguration;
@property (retain, nonatomic) HKSPSleepScheduleDayOccurrence *backingOccurrence;
@property (copy, nonatomic) NSDateComponents *bedtimeComponents;
@property (readonly, nonatomic) HKSPChangeSet *changeSet; // ivar: _changeSet
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSObject<HKSPObject> *originalObject;
@property (readonly, nonatomic) NSDictionary *relationshipChanges;
@property (readonly, nonatomic) NSSet *significantChanges;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger version;
@property (copy, nonatomic) NSDateComponents *wakeUpComponents;
@property (nonatomic) NSUInteger weekdays;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTemplateOccurrence:(id)arg0 ;
-(id)mutableCopy;
-(void)applyHourAndMinuteFromBedtimeComponents:(id)arg0 wakeUpComponents:(id)arg1 gregorianCalendar:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)freeze;
-(void)turnOffAlarm;
-(void)turnOffWeekdays:(NSUInteger)arg0 ;
-(void)turnOnAlarm;
-(void)turnOnWeekdays:(NSUInteger)arg0 ;


@end


#endif