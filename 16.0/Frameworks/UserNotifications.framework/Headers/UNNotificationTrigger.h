// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNNOTIFICATIONTRIGGER_H
#define UNNOTIFICATIONTRIGGER_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UNNotificationTrigger : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL repeats; // ivar: _repeats


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)willTriggerAfterDate:(id)arg0 withRequestedDate:(id)arg1 ;
-(CGFloat)_retroactiveTriggerHysteresis;
-(NSUInteger)hash;
-(id)_init;
-(id)_initWithRepeats:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)nextTriggerDate;
-(id)nextTriggerDateAfterDate:(id)arg0 withRequestedDate:(id)arg1 ;
-(id)nextTriggerDateAfterLastTriggerDate:(id)arg0 withRequestedDate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif