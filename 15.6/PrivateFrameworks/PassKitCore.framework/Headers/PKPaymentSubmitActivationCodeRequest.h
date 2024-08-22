// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSUBMITACTIVATIONCODEREQUEST_H
#define PKPAYMENTSUBMITACTIVATIONCODEREQUEST_H

@class NSString, NSData;


#import "PKPaymentWebServiceRequest.h"
#import "PKPaymentPass.h"

@interface PKPaymentSubmitActivationCodeRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) PKPaymentPass *pass; // ivar: _pass
@property (copy, nonatomic) NSString *verificationCode; // ivar: _verificationCode
@property (copy, nonatomic) NSData *verificationData; // ivar: _verificationData


-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 ;


@end


#endif