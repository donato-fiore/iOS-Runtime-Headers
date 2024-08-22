// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTACCOUNTATTESATIONRESPONSE_H
#define PKPAYMENTACCOUNTATTESATIONRESPONSE_H

@class NSData;


#import "PKPaymentWebServiceResponse.h"

@interface PKPaymentAccountAttesationResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSData *attestation; // ivar: _attestation


-(id)initWithData:(id)arg0 ;


@end


#endif