// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYWEBSERVICEDOCUMENTSUBMISSIONREQUEST_H
#define PKAPPLYWEBSERVICEDOCUMENTSUBMISSIONREQUEST_H

@class NSString, NSData, NSURL, NSArray;


#import "PKApplyWebServiceRequest.h"

@interface PKApplyWebServiceDocumentSubmissionRequest : PKApplyWebServiceRequest

@property (copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (copy, nonatomic) NSData *backImageData; // ivar: _backImageData
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (copy, nonatomic) NSArray *certificates; // ivar: _certificates
@property (nonatomic) NSInteger channel; // ivar: _channel
@property (copy, nonatomic) NSString *documentCountryCode; // ivar: _documentCountryCode
@property (nonatomic) NSUInteger documentType; // ivar: _documentType
@property (nonatomic) NSUInteger featureIdentifier; // ivar: _featureIdentifier
@property (copy, nonatomic) NSData *frontImageData; // ivar: _frontImageData
@property (copy, nonatomic) NSString *odiAssessment; // ivar: _odiAssessment
@property (copy, nonatomic) NSData *uploadedDocumentData; // ivar: _uploadedDocumentData


+(BOOL)supportsSecureCoding;
-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif