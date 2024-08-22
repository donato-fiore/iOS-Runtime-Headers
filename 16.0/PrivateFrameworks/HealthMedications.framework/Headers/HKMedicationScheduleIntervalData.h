// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMEDICATIONSCHEDULEINTERVALDATA_H
#define HKMEDICATIONSCHEDULEINTERVALDATA_H

@class NSNumber, NSDateComponents;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKMedicationScheduleIntervalData : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSNumber *cycleIndex; // ivar: _cycleIndex
@property (readonly, copy, nonatomic) NSNumber *cycleIntervalDays; // ivar: _cycleIntervalDays
@property (readonly, nonatomic) NSUInteger daysOfWeek; // ivar: _daysOfWeek
@property (readonly, copy, nonatomic) NSNumber *dose; // ivar: _dose
@property (readonly, copy, nonatomic) NSDateComponents *startTimeComponent; // ivar: _startTimeComponent


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartTimeComponent:(id)arg0 daysOfWeek:(NSUInteger)arg1 cycleIndex:(id)arg2 cycleIntervalDays:(id)arg3 dose:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif