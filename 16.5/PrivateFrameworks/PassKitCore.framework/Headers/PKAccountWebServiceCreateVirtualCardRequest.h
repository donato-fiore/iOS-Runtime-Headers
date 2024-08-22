// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICECREATEVIRTUALCARDREQUEST_H
#define PKACCOUNTWEBSERVICECREATEVIRTUALCARDREQUEST_H

@class NSString, NSURL;
@protocol NSSecureCoding;


#import "PKAccountWebServiceRequest.h"
#import "PKVirtualCardEncryptionFields.h"

@interface PKAccountWebServiceCreateVirtualCardRequest : PKAccountWebServiceRequest <NSSecureCoding>



@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (retain, nonatomic) PKVirtualCardEncryptionFields *encryptionFields; // ivar: _encryptionFields
@property (nonatomic) NSInteger type; // ivar: _type


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;


@end


#endif