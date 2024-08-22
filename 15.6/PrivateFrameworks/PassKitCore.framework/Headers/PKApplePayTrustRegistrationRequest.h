// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKAPPLEPAYTRUSTREGISTRATIONREQUEST_H
#define PKAPPLEPAYTRUSTREGISTRATIONREQUEST_H



#import "PKPaymentWebServiceRequest.h"
#import "PKApplePayTrustKey.h"

@interface PKApplePayTrustRegistrationRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) PKApplePayTrustKey *applePayTrustKey; // ivar: _applePayTrustKey


-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 ;


@end


#endif