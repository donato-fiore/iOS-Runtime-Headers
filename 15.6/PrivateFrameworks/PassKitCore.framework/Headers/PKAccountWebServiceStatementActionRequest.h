// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTWEBSERVICESTATEMENTACTIONREQUEST_H
#define PKACCOUNTWEBSERVICESTATEMENTACTIONREQUEST_H

@class NSString, NSURL;


#import "PKAccountWebServiceRequest.h"

@interface PKAccountWebServiceStatementActionRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (nonatomic) NSInteger action; // ivar: _action
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (copy, nonatomic) NSString *statementIdentifier; // ivar: _statementIdentifier


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;


@end


#endif