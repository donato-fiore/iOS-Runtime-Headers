// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAMPCARDINFOFORMERCHANTREQUEST_H
#define PKAMPCARDINFOFORMERCHANTREQUEST_H

@class NSString;


#import "PKPaymentWebServiceRequest.h"

@interface PKAMPCardInfoForMerchantRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *merchantIdentifier; // ivar: _merchantIdentifier


-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 ;
-(id)initWithMerchantIdentifier:(id)arg0 ;


@end


#endif