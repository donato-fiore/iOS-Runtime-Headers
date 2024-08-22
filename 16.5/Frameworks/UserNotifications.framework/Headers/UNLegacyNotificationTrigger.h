// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNLEGACYNOTIFICATIONTRIGGER_H
#define UNLEGACYNOTIFICATIONTRIGGER_H

@class NSDate, NSCalendar, NSTimeZone;


#import "UNNotificationTrigger.h"

@interface UNLegacyNotificationTrigger : UNNotificationTrigger

@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) int remainingRepeatCount; // ivar: _remainingRepeatCount
@property (copy, nonatomic) NSCalendar *repeatCalendar; // ivar: _repeatCalendar
@property (nonatomic) NSUInteger repeatInterval; // ivar: _repeatInterval
@property (copy, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (nonatomic) int totalRepeatCount; // ivar: _totalRepeatCount


+(BOOL)supportsSecureCoding;
+(id)triggerWithDate:(id)arg0 timeZone:(id)arg1 remainingRepeatCount:(int)arg2 totalRepeatCount:(int)arg3 repeatInterval:(NSUInteger)arg4 repeatCalendar:(id)arg5 ;
+(id)triggerWithDate:(id)arg0 timeZone:(id)arg1 repeatInterval:(NSUInteger)arg2 repeatCalendar:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)willTriggerAfterDate:(id)arg0 withRequestedDate:(id)arg1 ;
-(CGFloat)_retroactiveTriggerHysteresis;
-(NSUInteger)hash;
-(id)_initWithDate:(id)arg0 timeZone:(id)arg1 remainingRepeatCount:(int)arg2 totalRepeatCount:(int)arg3 repeatInterval:(NSUInteger)arg4 repeatCalendar:(id)arg5 ;
-(id)_nextTriggerDateAfterDate:(id)arg0 withRequestedDate:(id)arg1 defaultTimeZone:(id)arg2 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)nextTriggerDateAfterDate:(id)arg0 withRequestedDate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif