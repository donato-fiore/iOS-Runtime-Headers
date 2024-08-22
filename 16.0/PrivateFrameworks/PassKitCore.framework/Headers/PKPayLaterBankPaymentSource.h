// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERBANKPAYMENTSOURCE_H
#define PKPAYLATERBANKPAYMENTSOURCE_H

@protocol NSSecureCoding;


#import "PKPayLaterPaymentSource.h"
#import "PKAccountPaymentFundingSource.h"

@interface PKPayLaterBankPaymentSource : PKPayLaterPaymentSource <NSSecureCoding>



@property (readonly, nonatomic) PKAccountPaymentFundingSource *accountPaymentFundingSource; // ivar: _accountPaymentFundingSource


+(BOOL)supportsSecureCoding;
-(NSUInteger)type;
-(id)identifier;
-(id)initWithAccountPaymentFundingSource:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)name;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif