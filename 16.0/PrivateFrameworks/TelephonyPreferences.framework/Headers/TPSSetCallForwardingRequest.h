// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSSETCALLFORWARDINGREQUEST_H
#define TPSSETCALLFORWARDINGREQUEST_H

@class CTCallForwardingValue;


#import "TPSRequest.h"

@interface TPSSetCallForwardingRequest : TPSRequest

@property (readonly, nonatomic) CTCallForwardingValue *value; // ivar: _value


+(id)unarchivedObjectClasses;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRequest:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSubscriptionContext:(id)arg0 ;
-(id)initWithSubscriptionContext:(id)arg0 value:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif