// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTPLANBILLINGDETAILS_H
#define CTPLANBILLINGDETAILS_H

@class NSNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTPlanBillingDetails : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSNumber *planCost; // ivar: _planCost
@property (readonly, nonatomic) NSString *planCurrency; // ivar: _planCurrency
@property (readonly, nonatomic) NSNumber *planDataAmount; // ivar: _planDataAmount
@property (readonly, nonatomic) NSUInteger planDataMeasureUnit; // ivar: _planDataMeasureUnit
@property (readonly, nonatomic) NSString *planName; // ivar: _planName
@property (readonly, nonatomic) NSUInteger planType; // ivar: _planType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 PlanCost:(id)arg1 PlanCurrency:(id)arg2 PlanDataAmount:(id)arg3 PlanDataMeasureUnit:(NSUInteger)arg4 PlanType:(NSUInteger)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif