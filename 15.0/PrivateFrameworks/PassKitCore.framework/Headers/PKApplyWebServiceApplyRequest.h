// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKAPPLYWEBSERVICEAPPLYREQUEST_H
#define PKAPPLYWEBSERVICEAPPLYREQUEST_H

@class NSString, NSURL, NSArray;


#import "PKApplyWebServiceRequest.h"
#import "PKApplyWebServiceRequestAuthenticationContext.h"
#import "PKPaymentDeviceMetadata.h"
#import "PKPaymentInstallmentConfiguration.h"
#import "PKFeatureApplicationInvitationDetails.h"

@interface PKApplyWebServiceApplyRequest : PKApplyWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (nonatomic) NSInteger applicationType; // ivar: _applicationType
@property (retain, nonatomic) PKApplyWebServiceRequestAuthenticationContext *authenticationContext; // ivar: _authenticationContext
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (copy, nonatomic) NSArray *certificates; // ivar: _certificates
@property (copy, nonatomic) NSString *coreIDVNextStepToken; // ivar: _coreIDVNextStepToken
@property (retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata; // ivar: _deviceMetadata
@property (nonatomic) NSUInteger featureIdentifier; // ivar: _featureIdentifier
@property (nonatomic) NSUInteger featureProduct; // ivar: _featureProduct
@property (retain, nonatomic) PKPaymentInstallmentConfiguration *installmentConfiguration; // ivar: _installmentConfiguration
@property (retain, nonatomic) PKFeatureApplicationInvitationDetails *invitationDetails; // ivar: _invitationDetails
@property (copy, nonatomic) NSString *previousContextIdentifier; // ivar: _previousContextIdentifier
@property (copy, nonatomic) NSString *referenceIdentifier; // ivar: _referenceIdentifier


+(BOOL)supportsSecureCoding;
-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif