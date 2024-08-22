// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSPMUTABLESLEEPSCHEDULE_H
#define HKSPMUTABLESLEEPSCHEDULE_H

@class NSString, NSDate, NSDictionary, NSSet;
@protocol HKSPMutableObject, HKSPObject;


#import "HKSPSleepSchedule.h"
#import "HKSPChangeSet.h"
#import "HKSPSleepScheduleDayOccurrence.h"

@interface HKSPMutableSleepSchedule : HKSPSleepSchedule <HKSPMutableObject>



@property (readonly, nonatomic) HKSPChangeSet *changeSet; // ivar: _changeSet
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) HKSPSleepScheduleDayOccurrence *fridayOccurrence;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (retain, nonatomic) HKSPSleepScheduleDayOccurrence *mondayOccurrence;
@property (readonly, nonatomic) NSObject<HKSPObject> *originalObject;
@property (retain, nonatomic) HKSPSleepScheduleDayOccurrence *overrideDayOccurrence;
@property (readonly, nonatomic) NSDictionary *relationshipChanges;
@property (retain, nonatomic) HKSPSleepScheduleDayOccurrence *saturdayOccurrence;
@property (readonly, nonatomic) NSSet *significantChanges;
@property (nonatomic) CGFloat sleepDurationGoal;
@property (retain, nonatomic) HKSPSleepScheduleDayOccurrence *sundayOccurrence;
@property (readonly) Class superclass;
@property (retain, nonatomic) HKSPSleepScheduleDayOccurrence *thursdayOccurrence;
@property (retain, nonatomic) HKSPSleepScheduleDayOccurrence *tuesdayOccurrence;
@property (readonly, nonatomic) NSUInteger version;
@property (retain, nonatomic) HKSPSleepScheduleDayOccurrence *wednesdayOccurrence;
@property (nonatomic) NSUInteger windDownMinutes;
@property (nonatomic) CGFloat windDownTime;


+(BOOL)supportsSecureCoding;
-(BOOL)_hasChangeForDayOccurrenceKey:(id)arg0 dayOccurrence:(id)arg1 ;
-(BOOL)_hasChangeToScheduleEnabled;
-(BOOL)_shouldRemoveOverrideOccurrence:(id)arg0 ;
-(BOOL)hasChangeAffectingScheduling;
-(BOOL)hasChangeToSleepDurationGoal;
-(BOOL)hasChangeToWindDownTime;
-(BOOL)hasOverrideOccurrenceRemoval;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)lastOverrideOccurrenceWakeUpComponents;
-(id)mutableCopy;
-(void)_modifyDayOccurrencesForWeekdays:(NSUInteger)arg0 block:(id)arg1 ;
-(void)_updateBackingOccurrencesForOccurrence:(id)arg0 ;
-(void)_updateOverrideOccurrenceForOccurrence:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)freeze;
-(void)removeOccurrence:(id)arg0 ;
-(void)saveOccurrence:(id)arg0 ;


@end


#endif