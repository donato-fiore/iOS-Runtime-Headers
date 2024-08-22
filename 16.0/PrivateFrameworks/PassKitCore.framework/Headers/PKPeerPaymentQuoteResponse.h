// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTQUOTERESPONSE_H
#define PKPEERPAYMENTQUOTERESPONSE_H



#import "PKPeerPaymentWebServiceResponse.h"
#import "PKPeerPaymentQuote.h"

@interface PKPeerPaymentQuoteResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) PKPeerPaymentQuote *quote; // ivar: _quote


-(id)initWithData:(id)arg0 ;


@end


#endif