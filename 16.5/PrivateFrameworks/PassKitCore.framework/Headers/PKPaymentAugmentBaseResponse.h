// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTAUGMENTBASERESPONSE_H
#define PKPAYMENTAUGMENTBASERESPONSE_H

@class NSData;


#import "PKPaymentWebServiceResponse.h"

@interface PKPaymentAugmentBaseResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSInteger cryptogramType; // ivar: _cryptogramType
@property (readonly, copy, nonatomic) NSData *networkMerchantIdentifier; // ivar: _networkMerchantIdentifier


-(id)initWithData:(id)arg0 ;


@end


#endif