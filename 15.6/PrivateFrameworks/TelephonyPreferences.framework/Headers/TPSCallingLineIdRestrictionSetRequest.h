// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSCALLINGLINEIDRESTRICTIONSETREQUEST_H
#define TPSCALLINGLINEIDRESTRICTIONSETREQUEST_H



#import "TPSCallingLineIdRestrictionRequest.h"

@interface TPSCallingLineIdRestrictionSetRequest : TPSCallingLineIdRestrictionRequest

@property (readonly, nonatomic) NSInteger state; // ivar: _state


+(id)unarchivedObjectClasses;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRequest:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSubscriptionContext:(id)arg0 ;
-(id)initWithSubscriptionContext:(id)arg0 state:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif