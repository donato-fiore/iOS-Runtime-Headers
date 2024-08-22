// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICEPASSDETAILSREQUEST_H
#define PKACCOUNTWEBSERVICEPASSDETAILSREQUEST_H

@class NSString, NSURL;


#import "PKAccountWebServiceRequest.h"
#import "PKPaymentDeviceMetadata.h"

@interface PKAccountWebServicePassDetailsRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata; // ivar: _deviceMetadata


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 deviceIdentifier:(id)arg1 ;


@end


#endif