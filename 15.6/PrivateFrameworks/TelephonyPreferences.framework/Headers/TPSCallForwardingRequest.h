// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSCALLFORWARDINGREQUEST_H
#define TPSCALLFORWARDINGREQUEST_H



#import "TPSCallClassRequest.h"

@interface TPSCallForwardingRequest : TPSCallClassRequest

@property (readonly, nonatomic) int reason; // ivar: _reason


+(id)unarchivedObjectClasses;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRequest:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSubscriptionContext:(id)arg0 callClass:(int)arg1 ;
-(id)initWithSubscriptionContext:(id)arg0 reason:(int)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif