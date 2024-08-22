// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTWEBSERVICEACCOUNTACTIONREQUEST_H
#define PKACCOUNTWEBSERVICEACCOUNTACTIONREQUEST_H

@class NSString, NSURL;


#import "PKAccountWebServiceRequest.h"
#import "PKAccountAction.h"

@interface PKAccountWebServiceAccountActionRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSString *accountUserAltDSID; // ivar: _accountUserAltDSID
@property (retain, nonatomic) PKAccountAction *action; // ivar: _action
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;


@end


#endif