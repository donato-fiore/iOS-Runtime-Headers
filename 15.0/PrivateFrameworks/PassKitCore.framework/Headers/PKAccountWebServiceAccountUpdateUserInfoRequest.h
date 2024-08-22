// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKACCOUNTWEBSERVICEACCOUNTUPDATEUSERINFOREQUEST_H
#define PKACCOUNTWEBSERVICEACCOUNTUPDATEUSERINFOREQUEST_H

@class NSString, NSURL, CNContact;


#import "PKAccountWebServiceRequest.h"
#import "PKAccountWebServiceCertificatesResponse.h"

@interface PKAccountWebServiceAccountUpdateUserInfoRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (retain, nonatomic) PKAccountWebServiceCertificatesResponse *certificatesResponse; // ivar: _certificatesResponse
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) NSString *ssn; // ivar: _ssn


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;


@end


#endif