// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTWEBSERVICEACCOUNTUPDATEUSERINFOREQUEST_H
#define PKACCOUNTWEBSERVICEACCOUNTUPDATEUSERINFOREQUEST_H

@class NSString, NSURL, NSArray, CNContact;


#import "PKAccountWebServiceRequest.h"
#import "PKPaymentDeviceMetadata.h"

@interface PKAccountWebServiceAccountUpdateUserInfoRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (copy, nonatomic) NSArray *certificates; // ivar: _certificates
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata; // ivar: _deviceMetadata
@property (retain, nonatomic) NSString *encryptionVersion; // ivar: _encryptionVersion
@property (nonatomic) NSUInteger featureIdentifier; // ivar: _featureIdentifier
@property (copy, nonatomic) NSString *odiAssessment; // ivar: _odiAssessment
@property (retain, nonatomic) NSString *ssn; // ivar: _ssn


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;


@end


#endif