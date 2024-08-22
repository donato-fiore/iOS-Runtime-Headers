// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTPUSHPROVISIONINGSHARINGIDENTIFIERSRESPONSE_H
#define PKPAYMENTPUSHPROVISIONINGSHARINGIDENTIFIERSRESPONSE_H

@class NSArray;


#import "PKPaymentWebServiceResponse.h"

@interface PKPaymentPushProvisioningSharingIdentifiersResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSArray *sharedCredentials; // ivar: _sharedCredentials


-(id)initWithData:(id)arg0 ;


@end


#endif