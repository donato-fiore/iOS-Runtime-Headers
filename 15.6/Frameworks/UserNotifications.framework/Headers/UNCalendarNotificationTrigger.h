// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UNCALENDARNOTIFICATIONTRIGGER_H
#define UNCALENDARNOTIFICATIONTRIGGER_H

@class NSDateComponents;


#import "UNNotificationTrigger.h"

@interface UNCalendarNotificationTrigger : UNNotificationTrigger

@property (readonly, copy, nonatomic) NSDateComponents *dateComponents; // ivar: _dateComponents


+(BOOL)supportsSecureCoding;
+(id)triggerWithDateMatchingComponents:(id)arg0 repeats:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithDateComponents:(id)arg0 repeats:(BOOL)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)nextTriggerDate;
-(id)nextTriggerDateAfterDate:(id)arg0 withRequestedDate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif