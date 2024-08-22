// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAPPLYWEBSERVICEVERIFICATIONSUBMISSIONREQUEST_H
#define PKAPPLYWEBSERVICEVERIFICATIONSUBMISSIONREQUEST_H

@class NSString, NSURL;


#import "PKApplyWebServiceRequest.h"

@interface PKApplyWebServiceVerificationSubmissionRequest : PKApplyWebServiceRequest

@property (copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (nonatomic) NSUInteger featureIdentifier; // ivar: _featureIdentifier
@property (copy, nonatomic) NSString *odiAssessment; // ivar: _odiAssessment
@property (nonatomic) BOOL skippedVerification; // ivar: _skippedVerification
@property (copy, nonatomic) NSString *verificationData; // ivar: _verificationData
@property (nonatomic) NSUInteger verificationType; // ivar: _verificationType


+(BOOL)supportsSecureCoding;
-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif