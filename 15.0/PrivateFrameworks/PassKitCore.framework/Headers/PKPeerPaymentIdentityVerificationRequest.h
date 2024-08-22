// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPEERPAYMENTIDENTITYVERIFICATIONREQUEST_H
#define PKPEERPAYMENTIDENTITYVERIFICATIONREQUEST_H

@class NSArray, NSString;


#import "PKPeerPaymentWebServiceRequest.h"

@interface PKPeerPaymentIdentityVerificationRequest : PKPeerPaymentWebServiceRequest

@property (copy, nonatomic) NSArray *certificates; // ivar: _certificates
@property (nonatomic) BOOL devSigned; // ivar: _devSigned
@property (copy, nonatomic) NSString *prerequisiteIdentifier; // ivar: _prerequisiteIdentifier


-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 deviceIdentifier:(id)arg2 deviceScore:(id)arg3 deviceMetadata:(id)arg4 ;


@end


#endif