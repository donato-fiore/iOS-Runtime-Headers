// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYWEBSERVICECREATEREQUEST_H
#define PKAPPLYWEBSERVICECREATEREQUEST_H

@class NSString, NSURL;


#import "PKApplyWebServiceRequest.h"
#import "PKPaymentInstallmentConfiguration.h"
#import "PKFeatureApplicationInvitationDetails.h"

@interface PKApplyWebServiceCreateRequest : PKApplyWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (nonatomic) NSInteger applicationType; // ivar: _applicationType
@property (retain, nonatomic) NSURL *applyServiceURL; // ivar: _applyServiceURL
@property (nonatomic) NSInteger associatedIntent; // ivar: _associatedIntent
@property (nonatomic) NSInteger channel; // ivar: _channel
@property (nonatomic) NSUInteger featureIdentifier; // ivar: _featureIdentifier
@property (nonatomic) NSUInteger featureProduct; // ivar: _featureProduct
@property (retain, nonatomic) PKPaymentInstallmentConfiguration *installmentConfiguration; // ivar: _installmentConfiguration
@property (retain, nonatomic) PKFeatureApplicationInvitationDetails *invitationDetails; // ivar: _invitationDetails
@property (copy, nonatomic) NSString *odiAssessment; // ivar: _odiAssessment
@property (copy, nonatomic) NSString *preliminaryAssessmentIdentifier; // ivar: _preliminaryAssessmentIdentifier
@property (copy, nonatomic) NSString *referenceIdentifier; // ivar: _referenceIdentifier
@property (nonatomic) NSInteger updateUserInfoSubType; // ivar: _updateUserInfoSubType


+(BOOL)supportsSecureCoding;
-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif