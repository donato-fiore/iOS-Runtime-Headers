// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICEFINANCINGPLANPAYMENTINTENTRESPONSE_H
#define PKACCOUNTWEBSERVICEFINANCINGPLANPAYMENTINTENTRESPONSE_H

@class NSDictionary, NSArray, NSString, NSSet;
@protocol NSSecureCoding;


#import "PKPaginatedAccountWebServiceResponse.h"
#import "PKCurrencyAmount.h"

@interface PKAccountWebServiceFinancingPlanPaymentIntentResponse : PKPaginatedAccountWebServiceResponse <NSSecureCoding>

 {
    NSDictionary *_bankAcceptedFundingSources;
}


@property (copy, nonatomic) NSArray *acceptedFundingSources; // ivar: _acceptedFundingSources
@property (retain, nonatomic) NSArray *lastUsedFundingSources; // ivar: _lastUsedFundingSources
@property (nonatomic) NSUInteger merchantCapabilities; // ivar: _merchantCapabilities
@property (copy, nonatomic) NSString *merchantIdentifier; // ivar: _merchantIdentifier
@property (retain, nonatomic) PKCurrencyAmount *minimumAmount; // ivar: _minimumAmount
@property (retain, nonatomic) PKCurrencyAmount *payoffAmount; // ivar: _payoffAmount
@property (copy, nonatomic) NSSet *supportedRepaymentCountries; // ivar: _supportedRepaymentCountries
@property (copy, nonatomic) NSArray *supportedRepaymentNetworks; // ivar: _supportedRepaymentNetworks
@property (nonatomic) NSUInteger supportedRepaymentTypes; // ivar: _supportedRepaymentTypes
@property (retain, nonatomic) PKCurrencyAmount *totalSavedInterest; // ivar: _totalSavedInterest


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFinancingPlanPaymentIntentResponse:(id)arg0 ;
-(NSUInteger)hash;
-(id)bankAcceptedFundingSources;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif