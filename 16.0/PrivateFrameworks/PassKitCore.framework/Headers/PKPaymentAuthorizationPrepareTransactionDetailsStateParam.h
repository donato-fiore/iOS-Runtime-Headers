// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTAUTHORIZATIONPREPARETRANSACTIONDETAILSSTATEPARAM_H
#define PKPAYMENTAUTHORIZATIONPREPARETRANSACTIONDETAILSSTATEPARAM_H

@class NSString, NSDecimalNumber;


#import "PKPaymentAuthorizationStateParam.h"
#import "PKPaymentMerchantSession.h"

@interface PKPaymentAuthorizationPrepareTransactionDetailsStateParam : PKPaymentAuthorizationStateParam

@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (retain, nonatomic) PKPaymentMerchantSession *merchantSession; // ivar: _merchantSession
@property (copy, nonatomic) NSString *secureElementIdentifier; // ivar: _secureElementIdentifier
@property (copy, nonatomic) NSDecimalNumber *transactionAmount; // ivar: _transactionAmount


+(id)paramWithMerchantSession:(id)arg0 secureElementIdentifier:(id)arg1 transactionAmount:(id)arg2 currencyCode:(id)arg3 ;
-(id)description;


@end


#endif