// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTACCOUNTRESPONSE_H
#define PKPEERPAYMENTACCOUNTRESPONSE_H



#import "PKPeerPaymentWebServiceResponse.h"
#import "PKPeerPaymentAccount.h"

@interface PKPeerPaymentAccountResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) PKPeerPaymentAccount *account; // ivar: _account


-(id)initWithData:(id)arg0 ;


@end


#endif