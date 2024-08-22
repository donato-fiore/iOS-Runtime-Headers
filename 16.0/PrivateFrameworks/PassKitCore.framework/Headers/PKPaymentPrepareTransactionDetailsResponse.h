// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTPREPARETRANSACTIONDETAILSRESPONSE_H
#define PKPAYMENTPREPARETRANSACTIONDETAILSRESPONSE_H

@class NSDecimalNumber, NSDictionary, NSString;


#import "PKPaymentWebServiceResponse.h"

@interface PKPaymentPrepareTransactionDetailsResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (readonly, nonatomic) NSDictionary *instructionsDictionary; // ivar: _instructionsDictionary
@property (readonly, nonatomic) NSString *secureElementIdentifier; // ivar: _secureElementIdentifier


-(id)initWithData:(id)arg0 ;


@end


#endif