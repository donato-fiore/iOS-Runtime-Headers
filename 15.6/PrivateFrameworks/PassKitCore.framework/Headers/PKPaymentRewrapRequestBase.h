// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTREWRAPREQUESTBASE_H
#define PKPAYMENTREWRAPREQUESTBASE_H

@class NSData, NSString, NSArray, NSDictionary;


#import "PKPaymentWebServiceRequest.h"
#import "PKPaymentPass.h"
#import "PKPaymentApplication.h"
#import "PKWrappedPayment.h"

@interface PKPaymentRewrapRequestBase : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSData *applicationData; // ivar: _applicationData
@property (nonatomic) NSInteger cryptogramType; // ivar: _cryptogramType
@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (copy, nonatomic) NSString *deviceAssessments; // ivar: _deviceAssessments
@property (readonly, nonatomic) NSArray *endpointComponents;
@property (retain, nonatomic) PKPaymentPass *pass; // ivar: _pass
@property (retain, nonatomic) PKPaymentApplication *paymentApplication; // ivar: _paymentApplication
@property (copy, nonatomic) NSDictionary *serviceProviderData; // ivar: _serviceProviderData
@property (copy, nonatomic) NSString *shippingAddressHash; // ivar: _shippingAddressHash
@property (nonatomic) NSInteger type; // ivar: _type
@property (retain, nonatomic) PKWrappedPayment *wrappedPayment; // ivar: _wrappedPayment


-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 rewrapData:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)bodyDictionary;


@end


#endif