// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICEDOCUMENTREQUEST_H
#define PKACCOUNTWEBSERVICEDOCUMENTREQUEST_H

@class NSString, NSURL, NSDate;


#import "PKAccountWebServiceRequest.h"

@interface PKAccountWebServiceDocumentRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (copy, nonatomic) NSDate *beginDate; // ivar: _beginDate
@property (copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (nonatomic) NSInteger type; // ivar: _type


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;


@end


#endif