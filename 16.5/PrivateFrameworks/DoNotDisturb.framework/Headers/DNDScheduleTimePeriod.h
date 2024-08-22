// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSCHEDULETIMEPERIOD_H
#define DNDSCHEDULETIMEPERIOD_H

@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DNDScheduleTime.h"

@interface DNDScheduleTimePeriod : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) DNDScheduleTime *endTime; // ivar: _endTime
@property (readonly, copy, nonatomic) DNDScheduleTime *startTime; // ivar: _startTime
@property (readonly, nonatomic) NSUInteger weekdays; // ivar: _weekdays


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithPeriod:(id)arg0 ;
-(id)_initWithStartTime:(id)arg0 endTime:(id)arg1 weekdays:(NSUInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif