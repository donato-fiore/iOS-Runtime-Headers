// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSLEEPSCHEDULE_H
#define HKSLEEPSCHEDULE_H

@class NSDateComponents, NSNumber;
@protocol NSSecureCoding, NSCopying;


#import "HKSample.h"

@interface HKSleepSchedule : HKSample <NSSecureCoding, NSCopying>



@property (copy, nonatomic, setter=_setBedTimeComponents:) NSDateComponents *bedTimeComponents; // ivar: _bedTimeComponents
@property (copy, nonatomic, setter=_setOverrideDayIndex:) NSNumber *overrideDayIndex; // ivar: _overrideDayIndex
@property (copy, nonatomic, setter=_setWakeTimeComponents:) NSDateComponents *wakeTimeComponents; // ivar: _wakeTimeComponents
@property (nonatomic, setter=_setWeekdays:) NSUInteger weekdays; // ivar: _weekdays


+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsEquivalence;
+(BOOL)supportsSecureCoding;
+(id)_sleepScheduleWithDate:(id)arg0 weekdays:(NSUInteger)arg1 wakeTimeComponents:(id)arg2 bedTimeComponents:(id)arg3 overrideDayIndex:(id)arg4 device:(id)arg5 metadata:(id)arg6 config:(id)arg7 ;
+(id)sleepScheduleWithDate:(id)arg0 weekdays:(NSUInteger)arg1 wakeTimeComponents:(id)arg2 bedTimeComponents:(id)arg3 overrideDayIndex:(id)arg4 device:(id)arg5 metadata:(id)arg6 ;
-(BOOL)hasEquivalentOverrideDayToSleepSchedule:(id)arg0 ;
-(BOOL)hasEquivalentTimesToSleepSchedule:(id)arg0 ;
-(BOOL)isEquivalent:(id)arg0 ;
-(id)_validateWithConfiguration:(struct HKObjectValidationConfiguration )arg0 ;
-(id)bedtimeDateIntervalForMorningIndex:(NSInteger)arg0 calendar:(id)arg1 ;
-(id)bedtimeDateIntervalForWakeTime:(id)arg0 calendar:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)wakeDateComponentsForMorningIndex:(NSInteger)arg0 calendar:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif