// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTWEBSERVICEVIRTUALCARDLEGACYCREDENTIALSREQUEST_H
#define PKACCOUNTWEBSERVICEVIRTUALCARDLEGACYCREDENTIALSREQUEST_H

@class NSString, NSURL;


#import "PKAccountWebServiceRequest.h"
#import "PKAccountVirtualCardEncryptionFields.h"

@interface PKAccountWebServiceVirtualCardLegacyCredentialsRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (retain, nonatomic) PKAccountVirtualCardEncryptionFields *encryptionFields; // ivar: _encryptionFields
@property (copy, nonatomic) NSString *virtualCardIdentifier; // ivar: _virtualCardIdentifier


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;


@end


#endif