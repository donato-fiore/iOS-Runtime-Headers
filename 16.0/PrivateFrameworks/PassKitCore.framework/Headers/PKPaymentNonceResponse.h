// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTNONCERESPONSE_H
#define PKPAYMENTNONCERESPONSE_H

@class NSData;


#import "PKPaymentAugmentBaseResponse.h"

@interface PKPaymentNonceResponse : PKPaymentAugmentBaseResponse

@property (copy, nonatomic) NSData *nonceData; // ivar: _nonceData


-(id)initWithData:(id)arg0 ;


@end


#endif