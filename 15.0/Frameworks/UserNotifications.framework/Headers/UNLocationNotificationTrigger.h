// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UNLOCATIONNOTIFICATIONTRIGGER_H
#define UNLOCATIONNOTIFICATIONTRIGGER_H

@class CLRegion;


#import "UNNotificationTrigger.h"

@interface UNLocationNotificationTrigger : UNNotificationTrigger

@property (readonly, copy, nonatomic) CLRegion *region; // ivar: _region


+(BOOL)supportsSecureCoding;
+(id)triggerWithRegion:(id)arg0 repeats:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)willTriggerAfterDate:(id)arg0 withRequestedDate:(id)arg1 ;
-(NSUInteger)hash;
-(id)_initWithRegion:(id)arg0 repeats:(BOOL)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif