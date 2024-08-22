// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTPREPARETRANSACTIONDETAILSREQUEST_H
#define PKPAYMENTPREPARETRANSACTIONDETAILSREQUEST_H

@class NSDecimalNumber, NSString;


#import "PKPaymentWebServiceRequest.h"
#import "PKPaymentMerchantSession.h"

@interface PKPaymentPrepareTransactionDetailsRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (retain, nonatomic) PKPaymentMerchantSession *merchantSession; // ivar: _merchantSession
@property (copy, nonatomic) NSString *secureElementIdentifier; // ivar: _secureElementIdentifier


+(id)serverSupportedLanguages;
-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 ;
-(id)initWithMerchantSession:(id)arg0 secureElementIdentifier:(id)arg1 amount:(id)arg2 currencyCode:(id)arg3 ;


@end


#endif