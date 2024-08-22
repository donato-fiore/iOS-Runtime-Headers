// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKACCOUNTWEBSERVICESHAREDACCOUNTCLOUDSTOREREQUEST_H
#define PKACCOUNTWEBSERVICESHAREDACCOUNTCLOUDSTOREREQUEST_H

@class NSString, NSURL;


#import "PKAccountWebServiceRequest.h"

@interface PKAccountWebServiceSharedAccountCloudStoreRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;


@end


#endif