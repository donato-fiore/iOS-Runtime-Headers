// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTWEBSERVICEFINANCINGPLANNONCEREQUEST_H
#define PKACCOUNTWEBSERVICEFINANCINGPLANNONCEREQUEST_H

@class NSString, NSURL;


#import "PKAccountWebServiceRequest.h"
#import "PKPaymentAugmentBaseRequest.h"

@interface PKAccountWebServiceFinancingPlanNonceRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) PKPaymentAugmentBaseRequest *augmentBaseRequest; // ivar: _augmentBaseRequest
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (copy, nonatomic) NSString *planIdentifier; // ivar: _planIdentifier


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;


@end


#endif