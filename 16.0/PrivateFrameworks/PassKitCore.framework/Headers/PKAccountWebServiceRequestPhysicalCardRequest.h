// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTWEBSERVICEREQUESTPHYSICALCARDREQUEST_H
#define PKACCOUNTWEBSERVICEREQUESTPHYSICALCARDREQUEST_H

@class NSString, NSURL, NSData;
@protocol PKAccountWebServiceApplePayTrustProtocol, NSSecureCoding;


#import "PKAccountWebServiceRequest.h"
#import "PKPaymentDeviceMetadata.h"
#import "PKApplePayTrustHashResponse.h"
#import "PKPhysicalCardOrder.h"

@interface PKAccountWebServiceRequestPhysicalCardRequest : PKAccountWebServiceRequest <PKAccountWebServiceApplePayTrustProtocol, NSSecureCoding>



@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSString *accountUserAltDSID; // ivar: _accountUserAltDSID
@property (retain, nonatomic) NSURL *baseURL; // ivar: baseURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata; // ivar: _deviceMetadata
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKApplePayTrustHashResponse *hashResponse; // ivar: hashResponse
@property (retain, nonatomic) PKPhysicalCardOrder *order; // ivar: _order
@property (copy, nonatomic) NSData *publicKeyHash; // ivar: _publicKeyHash
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