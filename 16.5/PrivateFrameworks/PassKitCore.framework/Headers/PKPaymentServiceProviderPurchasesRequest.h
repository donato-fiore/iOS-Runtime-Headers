// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSERVICEPROVIDERPURCHASESREQUEST_H
#define PKPAYMENTSERVICEPROVIDERPURCHASESREQUEST_H

@class NSString;


#import "PKPaymentWebServiceRequest.h"

@interface PKPaymentServiceProviderPurchasesRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (copy, nonatomic) NSString *productIdentifier; // ivar: _productIdentifier
@property (copy, nonatomic) NSString *purchaseState; // ivar: _purchaseState
@property (copy, nonatomic) NSString *serviceProviderIdentifier; // ivar: _serviceProviderIdentifier
@property (copy, nonatomic) NSString *targetDeviceSerialNumber; // ivar: _targetDeviceSerialNumber


-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 ;
-(id)initWithPurchaseState:(id)arg0 serviceProviderIdentifier:(id)arg1 productIdentifier:(id)arg2 actionIdentifier:(id)arg3 serviceProviderCountryCode:(id)arg4 ;


@end


#endif