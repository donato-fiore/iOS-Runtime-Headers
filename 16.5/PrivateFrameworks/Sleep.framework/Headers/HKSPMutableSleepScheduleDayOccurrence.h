// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSPMUTABLESLEEPSCHEDULEDAYOCCURRENCE_H
#define HKSPMUTABLESLEEPSCHEDULEDAYOCCURRENCE_H

@class NSDateComponents, NSString, NSDate, NSDictionary, NSSet;
@protocol HKSPMutableObject, HKSPObject;


#import "HKSPSleepScheduleDayOccurrence.h"
#import "HKSPAlarmConfiguration.h"
#import "HKSPChangeSet.h"

@interface HKSPMutableSleepScheduleDayOccurrence : HKSPSleepScheduleDayOccurrence <HKSPMutableObject>



@property (retain, nonatomic) HKSPAlarmConfiguration *alarmConfiguration;
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


+(BOOL)supportsSecureCoding;
-(BOOL)hasChangeAffectingScheduling;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)generateSleepScheduleOccurrenceWithWeekdays:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopy;
-(void)encodeWithCoder:(id)arg0 ;
-(void)freeze;


@end


#endif