// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICEVIRTUALCARDSECURITYCODEACTIVITYREQUEST_H
#define PKACCOUNTWEBSERVICEVIRTUALCARDSECURITYCODEACTIVITYREQUEST_H

@class NSString, NSURL, NSDate;


#import "PKAccountWebServiceRequest.h"

@interface PKAccountWebServiceVirtualCardSecurityCodeActivityRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (nonatomic) NSInteger action; // ivar: _action
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (copy, nonatomic) NSString *securityCodeIdentifier; // ivar: _securityCodeIdentifier
@property (copy, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (copy, nonatomic) NSString *virtualCardIdentifier; // ivar: _virtualCardIdentifier


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;


@end


#endif