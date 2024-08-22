// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STALARM_H
#define STALARM_H

@class NSString;
@protocol NSCopying;


#import "STSiriModelObject.h"

@interface STAlarm : STSiriModelObject <NSCopying>



@property (nonatomic) NSInteger bedtimeHour; // ivar: _bedtimeHour
@property (nonatomic) NSInteger bedtimeMinute; // ivar: _bedtimeMinute
@property (nonatomic) NSInteger daysOfWeek; // ivar: _daysOfWeek
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic) NSInteger hourOfDay; // ivar: _hourOfDay
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) NSInteger minuteOfHour; // ivar: _minuteOfHour
@property (nonatomic, getter=isOverrideAlarm) BOOL overrideAlarm; // ivar: _overrideAlarm
@property (nonatomic, getter=isSleepAlarm) BOOL sleepAlarm; // ivar: _sleepAlarm


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif