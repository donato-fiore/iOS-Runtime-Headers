// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKSHIDEVENTDEFERRINGRULE_H
#define BKSHIDEVENTDEFERRINGRULE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BKSHIDEventDeferringPredicate.h"
#import "BKSHIDEventDeferringTarget.h"

@interface BKSHIDEventDeferringRule : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) BKSHIDEventDeferringPredicate *predicate; // ivar: _predicate
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, copy, nonatomic) BKSHIDEventDeferringTarget *target; // ivar: _target


+(BOOL)supportsSecureCoding;
+(id)ruleForDeferringEventsMatchingPredicate:(id)arg0 toTarget:(id)arg1 withReason:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithPredicate:(id)arg0 target:(id)arg1 reason:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif