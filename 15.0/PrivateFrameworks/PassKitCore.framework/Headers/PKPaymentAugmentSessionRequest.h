// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTAUGMENTSESSIONREQUEST_H
#define PKPAYMENTAUGMENTSESSIONREQUEST_H



#import "PKPaymentAugmentBaseRequest.h"
#import "PKPaymentMerchantSession.h"

@interface PKPaymentAugmentSessionRequest : PKPaymentAugmentBaseRequest

@property (retain, nonatomic) PKPaymentMerchantSession *merchantSession; // ivar: _merchantSession


+(id)augmentSessionRequestWithBaseRequest:(id)arg0 ;
-(id)bodyDictionary;
-(id)endpointComponents;


@end


#endif