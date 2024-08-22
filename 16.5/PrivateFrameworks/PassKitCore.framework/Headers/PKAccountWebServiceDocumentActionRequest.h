// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICEDOCUMENTACTIONREQUEST_H
#define PKACCOUNTWEBSERVICEDOCUMENTACTIONREQUEST_H

@class NSString, NSURL;


#import "PKAccountWebServiceRequest.h"

@interface PKAccountWebServiceDocumentActionRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (nonatomic) NSInteger action; // ivar: _action
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (copy, nonatomic) NSString *documentIdentifier; // ivar: _documentIdentifier


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;


@end


#endif