// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPEERPAYMENTRECIPIENTRESPONSE_H
#define PKPEERPAYMENTRECIPIENTRESPONSE_H



#import "PKPeerPaymentWebServiceResponse.h"
#import "PKPeerPaymentRecipient.h"

@interface PKPeerPaymentRecipientResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) PKPeerPaymentRecipient *recipient; // ivar: _recipient


-(id)initWithData:(id)arg0 ;


@end


#endif