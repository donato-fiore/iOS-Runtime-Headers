// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTSCHEDULEDPAYMENT_H
#define PKACCOUNTSCHEDULEDPAYMENT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"
#import "PKAccountPaymentFundingSource.h"

@interface PKAccountScheduledPayment : NSObject <NSSecureCoding>



@property (retain, nonatomic) PKCurrencyAmount *currencyAmount; // ivar: _currencyAmount
@property (retain, nonatomic) PKAccountPaymentFundingSource *fundingSource; // ivar: _fundingSource


+(BOOL)supportsSecureCoding;
-(id)hashComponentWithCertificatesResponse:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurrencyAmount:(id)arg0 fundingSource:(id)arg1 ;
-(id)jsonDictionaryRepresentationWithCertificatesResponse:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif