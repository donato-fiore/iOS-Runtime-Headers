// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDELETEMERCHANTTOKENREQUEST_H
#define PKDELETEMERCHANTTOKENREQUEST_H

@class NSString;


#import "PKPaymentWebServiceRequest.h"

@interface PKDeleteMerchantTokenRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *merchantTokenId; // ivar: _merchantTokenId


-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 ;


@end


#endif