// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPEERPAYMENTIDENTITYVERIFICATIONREQUIREDRESPONSE_H
#define PKPEERPAYMENTIDENTITYVERIFICATIONREQUIREDRESPONSE_H

@class NSString;


#import "PKPeerPaymentWebServiceResponse.h"

@interface PKPeerPaymentIdentityVerificationRequiredResponse : PKPeerPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSString *prerequisiteIdentifier; // ivar: _prerequisiteIdentifier


-(id)initWithData:(id)arg0 ;


@end


#endif