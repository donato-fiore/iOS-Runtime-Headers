// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKVPANNONCERESPONSE_H
#define PKVPANNONCERESPONSE_H

@class NSString;


#import "PKPaymentWebServiceResponse.h"

@interface PKVPANNonceResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSString *nonce; // ivar: _nonce


-(id)initWithData:(id)arg0 ;


@end


#endif