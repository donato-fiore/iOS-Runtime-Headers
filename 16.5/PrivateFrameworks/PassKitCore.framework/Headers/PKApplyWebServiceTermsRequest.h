// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYWEBSERVICETERMSREQUEST_H
#define PKAPPLYWEBSERVICETERMSREQUEST_H

@class NSString, NSURL;
@protocol NSSecureCoding;


#import "PKApplyWebServiceRequest.h"
#import "PKPaymentDeviceMetadata.h"
#import "PKPaymentInstallmentConfiguration.h"

@interface PKApplyWebServiceTermsRequest : PKApplyWebServiceRequest <NSSecureCoding>



@property (copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (copy, nonatomic) NSString *applicationTermsIdentifier; // ivar: _applicationTermsIdentifier
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata; // ivar: _deviceMetadata
@property (retain, nonatomic) PKPaymentInstallmentConfiguration *installmentConfiguration; // ivar: _installmentConfiguration
@property (copy, nonatomic) NSString *odiAssessment; // ivar: _odiAssessment
@property (copy, nonatomic) NSString *offerTermsIdentifier; // ivar: _offerTermsIdentifier
@property (copy, nonatomic) NSString *pathIdentifier; // ivar: _pathIdentifier
@property (copy, nonatomic) NSString *pathTermsIdentifier; // ivar: _pathTermsIdentifier
@property (nonatomic) BOOL termsAccepted; // ivar: _termsAccepted


+(BOOL)supportsSecureCoding;
-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif