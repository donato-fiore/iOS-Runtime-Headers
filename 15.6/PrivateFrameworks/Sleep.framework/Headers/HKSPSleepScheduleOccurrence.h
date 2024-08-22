// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSPSLEEPSCHEDULEOCCURRENCE_H
#define HKSPSLEEPSCHEDULEOCCURRENCE_H

@class NSDateComponents, NSString, NSDate, NSDictionary, NSSet;
@protocol BSDescriptionProviding, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "HKSPAlarmConfiguration.h"
#import "HKSPSleepScheduleDayOccurrence.h"

@interface HKSPSleepScheduleOccurrence : NSObject <BSDescriptionProviding, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSMutableCopying>



@property (readonly, nonatomic) HKSPAlarmConfiguration *alarmConfiguration;
@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *backingOccurrence; // ivar: _backingOccurrence
@property (readonly, copy, nonatomic) NSDateComponents *bedtimeComponents;
@property (readonly, nonatomic) BOOL crossesDayBoundary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInitialized;
@property (readonly, nonatomic) BOOL isRepeating;
@property (readonly, nonatomic) BOOL isSingleDayOverride;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSDictionary *relationshipChanges;
@property (readonly, nonatomic) NSSet *significantChanges;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL usesDefaultBedtimeAndWakeUpComponents;
@property (readonly, nonatomic) NSUInteger version; // ivar: _version
@property (readonly, copy, nonatomic) NSDateComponents *wakeUpComponents;
@property (readonly, nonatomic) NSUInteger weekdays; // ivar: _weekdays


+(BOOL)supportsSecureCoding;
+(id)occurrenceWithWeekdays:(NSUInteger)arg0 backingOccurrence:(id)arg1 ;
-(BOOL)_equateTo:(id)arg0 builderBuilderBlock:(id)arg1 ;
-(BOOL)isAlarmEquivalentToOverrideOccurrence:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentTo:(id)arg0 ;
-(BOOL)isEquivalentToOverrideOccurrence:(id)arg0 ;
-(BOOL)isValidOccurrence;
-(BOOL)overrideAppliesToOccurrence:(id)arg0 gregorianCalendar:(id)arg1 ;
-(BOOL)overridesWakeUpForOccurrenceOnDate:(id)arg0 gregorianCalendar:(id)arg1 ;
-(NSInteger)overrideDayInCalendar:(id)arg0 ;
-(id)bedtimeDateForWakeUpDate:(id)arg0 gregorianCalendar:(id)arg1 ;
-(id)changesFromOccurrence:(id)arg0 ;
-(id)convertToScheduledOccurrenceOnSameDaysAsOccurrence:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initFromObject:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopy;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)nextDateIntervalWithWakeUpAfterDate:(id)arg0 gregorianCalendar:(id)arg1 ;
-(id)overrideOccurrenceTemplateForCurrentDate:(id)arg0 gregorianCalendar:(id)arg1 ;
-(id)overrideOccurrenceWithWakeUpComponents:(id)arg0 bedtimeComponents:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)wakeUpDateForDate:(id)arg0 day:(NSInteger)arg1 searchBackwards:(BOOL)arg2 gregorianCalendar:(id)arg3 ;
-(id)wakeUpDateForDate:(id)arg0 searchBackwards:(BOOL)arg1 gregorianCalendar:(id)arg2 ;
-(void)copyFromObject:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif