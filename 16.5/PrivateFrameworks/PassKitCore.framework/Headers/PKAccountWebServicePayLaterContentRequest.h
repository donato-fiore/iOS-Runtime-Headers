// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICEPAYLATERCONTENTREQUEST_H
#define PKACCOUNTWEBSERVICEPAYLATERCONTENTREQUEST_H

@class NSString, NSURL;


#import "PKAccountWebServiceRequest.h"

@interface PKAccountWebServicePayLaterContentRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (nonatomic) NSUInteger type; // ivar: _type


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;
-(id)bodyDictionary;
-(id)contextString;


@end


#endif