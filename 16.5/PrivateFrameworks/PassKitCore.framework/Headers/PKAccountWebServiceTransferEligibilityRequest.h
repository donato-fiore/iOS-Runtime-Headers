// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICETRANSFERELIGIBILITYREQUEST_H
#define PKACCOUNTWEBSERVICETRANSFERELIGIBILITYREQUEST_H

@class NSString, NSURL;


#import "PKAccountWebServiceRequest.h"
#import "PKCurrencyAmount.h"

@interface PKAccountWebServiceTransferEligibilityRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (retain, nonatomic) PKCurrencyAmount *currencyAmount; // ivar: _currencyAmount
@property (nonatomic) NSUInteger type; // ivar: _type


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;


@end


#endif