// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTWEBSERVICEPAYLATERFINANCINGPLANDISPUTESENDEMAILREQUEST_H
#define PKACCOUNTWEBSERVICEPAYLATERFINANCINGPLANDISPUTESENDEMAILREQUEST_H

@class NSString, NSURL;


#import "PKAccountWebServiceRequest.h"

@interface PKAccountWebServicePayLaterFinancingPlanDisputeSendEmailRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (copy, nonatomic) NSString *disputeIdentifier; // ivar: _disputeIdentifier
@property (copy, nonatomic) NSString *planIdentifier; // ivar: _planIdentifier


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;


@end


#endif