// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSCALLFORWARDINGRESPONSE_H
#define TPSCALLFORWARDINGRESPONSE_H

@class CTCallForwardingValue;


#import "TPSResponse.h"

@interface TPSCallForwardingResponse : TPSResponse

@property (readonly, nonatomic) CTCallForwardingValue *value; // ivar: _value


+(id)unarchivedObjectClasses;
+(id)unarchivedObjectFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToResponse:(id)arg0 ;
-(NSUInteger)hash;
-(id)archivedDataWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSubscriptionContext:(id)arg0 error:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg0 error:(id)arg1 value:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif