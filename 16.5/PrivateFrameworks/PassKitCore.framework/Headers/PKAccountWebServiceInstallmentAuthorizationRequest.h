// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICEINSTALLMENTAUTHORIZATIONREQUEST_H
#define PKACCOUNTWEBSERVICEINSTALLMENTAUTHORIZATIONREQUEST_H

@class NSString, NSDecimalNumber, NSURL, NSData, CNPostalAddress;
@protocol PKAccountWebServiceApplePayTrustProtocol;


#import "PKAccountWebServiceRequest.h"
#import "PKApplePayTrustHashResponse.h"

@interface PKAccountWebServiceInstallmentAuthorizationRequest : PKAccountWebServiceRequest <PKAccountWebServiceApplePayTrustProtocol>



@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSDecimalNumber *authorizationAmount; // ivar: _authorizationAmount
@property (retain, nonatomic) NSURL *baseURL; // ivar: baseURL
@property (copy, nonatomic) NSString *bindToken; // ivar: _bindToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKApplePayTrustHashResponse *hashResponse; // ivar: hashResponse
@property (copy, nonatomic) NSString *installmentGroupIdentifier; // ivar: _installmentGroupIdentifier
@property (copy, nonatomic) NSData *publicKeyHash; // ivar: _publicKeyHash
@property (retain, nonatomic) CNPostalAddress *shippingAddress; // ivar: _shippingAddress
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(Class)signatureResponseClass;
-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;
-(id)endpointComponents;
-(id)initWithCoder:(id)arg0 ;
-(id)manifestHashWithReferenceIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif