// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTWEBSERVICEPROMOTIONSREQUEST_H
#define PKACCOUNTWEBSERVICEPROMOTIONSREQUEST_H

@class NSString, NSDate, NSURL;


#import "PKAccountWebServiceRequest.h"

@interface PKAccountWebServicePromotionsRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSDate *addedSinceDate; // ivar: _addedSinceDate
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;


@end


#endif