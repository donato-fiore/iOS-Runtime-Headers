// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTRANSACTIONRECEIPTAUTHORIZATIONREQUEST_H
#define PKTRANSACTIONRECEIPTAUTHORIZATIONREQUEST_H

@class NSString;


#import "PKPaymentWebServiceRequest.h"

@interface PKTransactionReceiptAuthorizationRequest : PKPaymentWebServiceRequest

@property (readonly, nonatomic) NSString *cardNumberSuffix; // ivar: _cardNumberSuffix
@property (readonly, nonatomic) NSString *receiptIdentifier; // ivar: _receiptIdentifier
@property (readonly, nonatomic) NSString *receiptServiceIdentifier; // ivar: _receiptServiceIdentifier


-(id)initWithReceiptServiceIdentifier:(id)arg0 receiptIdentifier:(id)arg1 cardNumberSuffix:(id)arg2 ;
-(void)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 webService:(id)arg2 completion:(id)arg3 ;


@end


#endif