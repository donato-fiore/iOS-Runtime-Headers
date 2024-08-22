// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSPSLEEPSCHEDULE_H
#define HKSPSLEEPSCHEDULE_H

@class NSString, NSDate, NSArray, NSDictionary, NSSet;
@protocol BSDescriptionProviding, HKSPXPCObject, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSMutableCopying, HKSPSyncAnchor;

#import <Foundation/Foundation.h>

#import "HKSPSleepScheduleDayOccurrence.h"
#import "HKSPSleepScheduleOccurrence.h"

@interface HKSPSleepSchedule : NSObject <BSDescriptionProviding, HKSPXPCObject, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSMutableCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *fridayOccurrence; // ivar: _fridayOccurrence
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDefaultSchedule;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate; // ivar: _lastModifiedDate
@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *mondayOccurrence; // ivar: _mondayOccurrence
@property (readonly, nonatomic) NSArray *occurrences;
@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *overrideDayOccurrence; // ivar: _overrideDayOccurrence
@property (readonly, nonatomic) HKSPSleepScheduleOccurrence *overrideOccurrence;
@property (readonly, nonatomic) NSDictionary *relationshipChanges;
@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *saturdayOccurrence; // ivar: _saturdayOccurrence
@property (readonly, nonatomic) NSSet *significantChanges;
@property (readonly, nonatomic) CGFloat sleepDurationGoal; // ivar: _sleepDurationGoal
@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *sundayOccurrence; // ivar: _sundayOccurrence
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HKSPSyncAnchor> *syncAnchor; // ivar: _syncAnchor
@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *thursdayOccurrence; // ivar: _thursdayOccurrence
@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *tuesdayOccurrence; // ivar: _tuesdayOccurrence
@property (readonly, nonatomic) NSUInteger version; // ivar: _version
@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *wednesdayOccurrence; // ivar: _wednesdayOccurrence
@property (readonly, nonatomic) NSUInteger weekdaysWithOccurrences;
@property (readonly, nonatomic) NSUInteger weekdaysWithoutOccurrences;
@property (readonly, nonatomic) NSUInteger windDownMinutes;
@property (readonly, nonatomic) CGFloat windDownTime; // ivar: _windDownTime


+(BOOL)supportsSecureCoding;
+(id)emptyScheduleWithSyncAnchor:(id)arg0 ;
+(id)innerClasses;
-(BOOL)_equateTo:(id)arg0 builderBuilderBlock:(id)arg1 ;
-(BOOL)isEmptySleepSchedule;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentTo:(id)arg0 ;
-(BOOL)meetsDefaultSleepGoal;
-(CGFloat)maximumAllowableWindDown;
-(id)_unsortedOccurrences;
-(id)_wakeUpComponentsByAddingSleepDurationGoalToBedtimeComponents:(id)arg0 ;
-(id)allowableRangeForModifiedOccurrence:(id)arg0 gregorianCalendar:(id)arg1 ;
-(id)allowableRangeForWeekdays:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)emptyCopy;
-(id)init;
-(id)initFromObject:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopy;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableOccurrenceTemplate;
-(id)objectWithSyncAnchor:(id)arg0 ;
-(id)occurrenceOnDay:(NSInteger)arg0 ;
-(id)occurrencesAfterDate:(id)arg0 gregorianCalendar:(id)arg1 ;
-(id)occurrencesOnDays:(NSUInteger)arg0 ;
-(id)overridenOccurrenceForOverrideOccurrence:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_enumerateDayOccurrencesWithBlock:(id)arg0 ;
-(void)copyFromObject:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif