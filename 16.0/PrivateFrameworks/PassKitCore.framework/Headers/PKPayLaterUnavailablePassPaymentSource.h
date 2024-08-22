// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERUNAVAILABLEPASSPAYMENTSOURCE_H
#define PKPAYLATERUNAVAILABLEPASSPAYMENTSOURCE_H

@protocol NSSecureCoding;


#import "PKPayLaterPaymentSource.h"
#import "PKPayLaterFinancingPlanFundingSource.h"

@interface PKPayLaterUnavailablePassPaymentSource : PKPayLaterPaymentSource <NSSecureCoding>



@property (readonly, nonatomic) PKPayLaterFinancingPlanFundingSource *fundingSource; // ivar: _fundingSource


+(BOOL)supportsSecureCoding;
-(NSUInteger)type;
-(id)identifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFundingSource:(id)arg0 ;
-(id)name;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif