// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTVERIFICATIONUPDATEREQUEST_H
#define PKPAYMENTVERIFICATIONUPDATEREQUEST_H

@class NSString;


#import "PKPaymentWebServiceRequest.h"
#import "PKVerificationChannel.h"
#import "PKPaymentPass.h"

@interface PKPaymentVerificationUpdateRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) PKVerificationChannel *channel; // ivar: _channel
@property (retain, nonatomic) PKPaymentPass *pass; // ivar: _pass
@property (copy, nonatomic) NSString *stepIdentifier; // ivar: _stepIdentifier


-(void)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 deviceData:(id)arg3 webService:(id)arg4 certChain:(id)arg5 devSigned:(BOOL)arg6 completion:(id)arg7 ;


@end


#endif