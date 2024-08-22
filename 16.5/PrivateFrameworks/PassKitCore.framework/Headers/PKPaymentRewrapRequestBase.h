// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTREWRAPREQUESTBASE_H
#define PKPAYMENTREWRAPREQUESTBASE_H

@class NSData, NSString, NSArray, NSDictionary;


#import "PKPaymentWebServiceRequest.h"
#import "PKAccount.h"
#import "PKPaymentPass.h"
#import "PKPaymentApplication.h"
#import "PKWrappedPayment.h"

@interface PKPaymentRewrapRequestBase : PKPaymentWebServiceRequest

@property (retain, nonatomic) PKAccount *account; // ivar: _account
@property (copy, nonatomic) NSData *applicationData; // ivar: _applicationData
@property (nonatomic) NSInteger cryptogramType; // ivar: _cryptogramType
@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (copy, nonatomic) NSString *deviceAssessments; // ivar: _deviceAssessments
@property (readonly, nonatomic) NSArray *endpointComponents;
@property (copy, nonatomic) NSDictionary *fundingSourceDetails; // ivar: _fundingSourceDetails
@property (copy, nonatomic) NSString *initiative; // ivar: _initiative
@property (copy, nonatomic) NSString *initiativeContext; // ivar: _initiativeContext
@property (nonatomic) BOOL isDeferredPayment; // ivar: _isDeferredPayment
@property (copy, nonatomic) NSString *merchantTokenManagementURL; // ivar: _merchantTokenManagementURL
@property (copy, nonatomic) NSArray *multiTokenContexts; // ivar: _multiTokenContexts
@property (retain, nonatomic) PKPaymentPass *pass; // ivar: _pass
@property (retain, nonatomic) PKPaymentApplication *paymentApplication; // ivar: _paymentApplication
@property (copy, nonatomic) NSString *paymentHash; // ivar: _paymentHash
@property (copy, nonatomic) NSDictionary *serviceProviderData; // ivar: _serviceProviderData
@property (copy, nonatomic) NSString *shippingAddressHash; // ivar: _shippingAddressHash
@property (nonatomic) NSInteger type; // ivar: _type
@property (retain, nonatomic) PKWrappedPayment *wrappedPayment; // ivar: _wrappedPayment


-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 rewrapData:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)bodyDictionary;


@end


#endif