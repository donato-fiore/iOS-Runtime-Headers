// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTSTATUSRESPONSE_H
#define PKPEERPAYMENTSTATUSRESPONSE_H

@class NSArray, NSData, NSString;


#import "PKPeerPaymentWebServiceResponse.h"

@interface PKPeerPaymentStatusResponse : PKPeerPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, copy, nonatomic) NSData *amountHash; // ivar: _amountHash
@property (readonly, copy, nonatomic) NSString *paymentIdentifier; // ivar: _paymentIdentifier
@property (readonly, nonatomic) NSInteger status; // ivar: _status
@property (readonly, copy, nonatomic) NSString *transactionIdentifier; // ivar: _transactionIdentifier


-(BOOL)amountHashIsValidForAmount:(id)arg0 andCurrency:(id)arg1 ;
-(id)initWithData:(id)arg0 ;


@end


#endif