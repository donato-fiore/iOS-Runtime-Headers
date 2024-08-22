// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICEFINANCINGPLANPAYMENTINTENTREQUEST_H
#define PKACCOUNTWEBSERVICEFINANCINGPLANPAYMENTINTENTREQUEST_H

@class NSString, NSURL;


#import "PKAccountWebServiceRequest.h"

@interface PKAccountWebServiceFinancingPlanPaymentIntentRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (nonatomic) NSUInteger intent; // ivar: _intent
@property (copy, nonatomic) NSString *planIdentifier; // ivar: _planIdentifier


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;


@end


#endif