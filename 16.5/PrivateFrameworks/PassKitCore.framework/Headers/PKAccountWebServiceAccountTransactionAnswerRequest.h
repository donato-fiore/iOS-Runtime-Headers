// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICEACCOUNTTRANSACTIONANSWERREQUEST_H
#define PKACCOUNTWEBSERVICEACCOUNTTRANSACTIONANSWERREQUEST_H

@class NSString, NSDictionary, NSURL;


#import "PKAccountWebServiceRequest.h"

@interface PKAccountWebServiceAccountTransactionAnswerRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSString *accountUserAltDSID; // ivar: _accountUserAltDSID
@property (copy, nonatomic) NSDictionary *answers; // ivar: _answers
@property (copy, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (copy, nonatomic) NSString *transactionIdentifier; // ivar: _transactionIdentifier


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;


@end


#endif