// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTNONCEREQUEST_H
#define PKPAYMENTNONCEREQUEST_H

@class NSString;


#import "PKPaymentAugmentBaseRequest.h"

@interface PKPaymentNonceRequest : PKPaymentAugmentBaseRequest

@property (copy, nonatomic) NSString *merchantIdentifier; // ivar: _merchantIdentifier
@property (nonatomic) BOOL useLegacyGetAPI; // ivar: _useLegacyGetAPI


+(id)nonceRequestWithBaseRequest:(id)arg0 ;
-(id)_legacyGetURLRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 ;
-(id)bodyDictionary;
-(id)endpointComponents;


@end


#endif