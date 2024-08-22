// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTSERVICETRANSFERREQUEST_H
#define PKACCOUNTSERVICETRANSFERREQUEST_H

@class NSURL, NSString;


#import "PKPaymentRequest.h"
#import "PKCurrencyAmount.h"
#import "PKAccount.h"
#import "PKBankAccountInformation.h"
#import "PKPeerPaymentAccount.h"
#import "PKPaymentPass.h"

@interface PKAccountServiceTransferRequest : PKPaymentRequest {
    NSUInteger _featureIdentifier;
    PKCurrencyAmount *_currencyAmount;
}


@property (readonly, nonatomic) PKAccount *account; // ivar: _account
@property (readonly, copy, nonatomic) NSURL *accountBaseURL; // ivar: _accountBaseURL
@property (readonly, copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) PKBankAccountInformation *defaultBankAccount; // ivar: _defaultBankAccount
@property (readonly, nonatomic) PKPeerPaymentAccount *peerPaymentAccount; // ivar: _peerPaymentAccount
@property (readonly, nonatomic) PKPaymentPass *peerPaymentPass; // ivar: _peerPaymentPass
@property (readonly, nonatomic) BOOL supportsSplitPayment;
@property (readonly, nonatomic) NSUInteger transferType; // ivar: _transferType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAccountServicePaymentRequest:(id)arg0 ;
-(NSUInteger)hash;
-(id)_bankAccountsForFundingSources:(id)arg0 ;
-(id)initWithAccount:(id)arg0 peerPaymentAccount:(id)arg1 peerPaymentPass:(id)arg2 transferType:(NSUInteger)arg3 fundingSources:(id)arg4 currencyAmount:(id)arg5 ;
-(id)initWithAccount:(id)arg0 peerPaymentAccount:(id)arg1 peerPaymentPass:(id)arg2 transferType:(NSUInteger)arg3 fundingSources:(id)arg4 currencyAmount:(id)arg5 paymentDate:(id)arg6 objectSettings:(id)arg7 ;
-(id)initWithCoder:(id)arg0 ;
-(id)paymentSummaryItemsWithFundingSources:(NSUInteger)arg0 bankAccount:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)paymentAmountsWithFundingSources:(NSUInteger)arg0 apc:(*id)arg1 ach:(*id)arg2 ;


@end


#endif