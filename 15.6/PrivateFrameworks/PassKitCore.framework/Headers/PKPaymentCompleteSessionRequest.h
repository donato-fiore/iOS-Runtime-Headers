// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTCOMPLETESESSIONREQUEST_H
#define PKPAYMENTCOMPLETESESSIONREQUEST_H



#import "PKPaymentRewrapRequestBase.h"
#import "PKPaymentMerchantSession.h"

@interface PKPaymentCompleteSessionRequest : PKPaymentRewrapRequestBase

@property (retain, nonatomic) PKPaymentMerchantSession *merchantSession; // ivar: _merchantSession


-(id)bodyDictionary;
-(id)endpointComponents;


@end


#endif