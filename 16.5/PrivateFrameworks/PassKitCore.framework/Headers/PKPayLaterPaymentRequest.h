// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERPAYMENTREQUEST_H
#define PKPAYLATERPAYMENTREQUEST_H

@class NSDictionary, NSURL, NSString;


#import "PKPaymentRequest.h"
#import "PKAccountWebServiceFinancingPlanPaymentIntentResponse.h"
#import "PKCurrencyAmount.h"
#import "PKBankAccountInformation.h"
#import "PKPayLaterFinancingPlan.h"

@interface PKPayLaterPaymentRequest : PKPaymentRequest {
    NSDictionary *_bankIdentifierToFundingSource;
    PKAccountWebServiceFinancingPlanPaymentIntentResponse *_intentDetails;
    PKCurrencyAmount *_currencyAmount;
}


@property (readonly, copy, nonatomic) NSURL *accountBaseURL; // ivar: _accountBaseURL
@property (readonly, copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, nonatomic) PKBankAccountInformation *defaultBankAccount; // ivar: _defaultBankAccount
@property (readonly, nonatomic) NSString *defaultPassUniqueID; // ivar: _defaultPassUniqueID
@property (readonly, nonatomic) PKPayLaterFinancingPlan *financingPlan; // ivar: _financingPlan
@property (readonly, copy, nonatomic) NSString *payLaterPassUniqueID; // ivar: _payLaterPassUniqueID
@property (readonly, nonatomic) NSUInteger payLaterPaymentIntentType; // ivar: _payLaterPaymentIntentType
@property (readonly, nonatomic) NSUInteger supportedRepaymentTypes; // ivar: _supportedRepaymentTypes


+(BOOL)supportsSecureCoding;
-(BOOL)hasAvailableFundingSource;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPayLaterPaymentRequest:(id)arg0 ;
-(BOOL)showPeerPaymentBalance;
-(NSUInteger)hash;
-(id)_acceptedBankAccountsForAcceptedFundingSources:(id)arg0 ;
-(id)acceptedPassesWithPassLibrary:(id)arg0 peerPaymentAccount:(id)arg1 ;
-(id)accountPaymentFundingSourceForBankIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIntentDetails:(id)arg0 payLaterAccount:(id)arg1 financingPlan:(id)arg2 intent:(NSUInteger)arg3 acceptedFundingSources:(id)arg4 currencyAmount:(id)arg5 hasAdequateAppleCashBalance:(BOOL)arg6 countryCode:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif