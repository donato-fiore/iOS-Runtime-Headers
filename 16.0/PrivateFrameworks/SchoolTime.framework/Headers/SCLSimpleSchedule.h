// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCLSIMPLESCHEDULE_H
#define SCLSIMPLESCHEDULE_H



#import "SCLSchedule.h"
#import "SCLScheduleTime.h"

@interface SCLSimpleSchedule : SCLSchedule

@property (readonly, copy, nonatomic) SCLScheduleTime *endTime; // ivar: _endTime
@property (readonly, nonatomic) NSInteger repeatSchedule; // ivar: _repeatSchedule
@property (readonly, copy, nonatomic) SCLScheduleTime *startTime; // ivar: _startTime


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSimpleSchedule:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)recurrences;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif