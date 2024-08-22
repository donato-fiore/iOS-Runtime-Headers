// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTRANSACTIONRECEIPTAUTHORIZATIONRESPONSE_H
#define PKTRANSACTIONRECEIPTAUTHORIZATIONRESPONSE_H

@class NSString, NSData;


#import "PKPaymentWebServiceResponse.h"

@interface PKTransactionReceiptAuthorizationResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSString *authorizationToken; // ivar: _authorizationToken
@property (copy, nonatomic) NSString *conversationIdentifier; // ivar: _conversationIdentifier
@property (readonly, nonatomic) NSData *signature; // ivar: _signature


-(id)initWithData:(id)arg0 ;


@end


#endif