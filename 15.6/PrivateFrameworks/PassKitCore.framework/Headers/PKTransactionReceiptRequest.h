// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTRANSACTIONRECEIPTREQUEST_H
#define PKTRANSACTIONRECEIPTREQUEST_H

@class NSString, NSURL, NSData;


#import "PKPaymentWebServiceRequest.h"

@interface PKTransactionReceiptRequest : PKPaymentWebServiceRequest

@property (readonly, nonatomic) NSString *authorizationToken; // ivar: _authorizationToken
@property (copy, nonatomic) NSString *conversationIdentifier; // ivar: _conversationIdentifier
@property (readonly, nonatomic) NSString *receiptIdentifier; // ivar: _receiptIdentifier
@property (readonly, nonatomic) NSURL *receiptProviderURL; // ivar: _receiptProviderURL
@property (readonly, nonatomic) NSData *signature; // ivar: _signature


-(id)_urlRequest;
-(id)initWithReceiptProviderURL:(id)arg0 authorizationToken:(id)arg1 signature:(id)arg2 receiptIdentifier:(id)arg3 ;


@end


#endif