// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKACCOUNTWEBSERVICECREATEDZONEREQUEST_H
#define PKACCOUNTWEBSERVICECREATEDZONEREQUEST_H

@class NSString, NSURL;


#import "PKAccountWebServiceRequest.h"

@interface PKAccountWebServiceCreatedZoneRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (copy, nonatomic) NSString *containerName; // ivar: _containerName
@property (copy, nonatomic) NSString *zoneName; // ivar: _zoneName


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;


@end


#endif