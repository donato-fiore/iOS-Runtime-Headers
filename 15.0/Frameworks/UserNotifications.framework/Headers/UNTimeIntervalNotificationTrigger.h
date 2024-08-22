// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UNTIMEINTERVALNOTIFICATIONTRIGGER_H
#define UNTIMEINTERVALNOTIFICATIONTRIGGER_H



#import "UNNotificationTrigger.h"

@interface UNTimeIntervalNotificationTrigger : UNNotificationTrigger

@property (readonly, nonatomic) CGFloat timeInterval; // ivar: _timeInterval


+(BOOL)supportsSecureCoding;
+(id)triggerWithTimeInterval:(CGFloat)arg0 repeats:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithTimeInterval:(CGFloat)arg0 repeats:(BOOL)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)nextTriggerDate;
-(id)nextTriggerDateAfterDate:(id)arg0 withRequestedDate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif