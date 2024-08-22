// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSSETCALLWAITINGREQUEST_H
#define TPSSETCALLWAITINGREQUEST_H



#import "TPSCallWaitingRequest.h"

@interface TPSSetCallWaitingRequest : TPSCallWaitingRequest

@property (readonly, nonatomic) BOOL enabled; // ivar: _enabled


+(id)unarchivedObjectClasses;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRequest:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSubscriptionContext:(id)arg0 ;
-(id)initWithSubscriptionContext:(id)arg0 enabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif