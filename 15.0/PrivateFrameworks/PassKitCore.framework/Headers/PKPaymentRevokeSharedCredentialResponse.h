// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTREVOKESHAREDCREDENTIALRESPONSE_H
#define PKPAYMENTREVOKESHAREDCREDENTIALRESPONSE_H

@class NSURL;


#import "PKPaymentWebServiceResponse.h"

@interface PKPaymentRevokeSharedCredentialResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSURL *passURL; // ivar: _passURL


-(id)initWithData:(id)arg0 ;


@end


#endif