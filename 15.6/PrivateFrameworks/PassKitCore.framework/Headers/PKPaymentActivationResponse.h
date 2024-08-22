// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTACTIVATIONRESPONSE_H
#define PKPAYMENTACTIVATIONRESPONSE_H

@class NSURL, NSString, NSDictionary, NSArray;


#import "PKPaymentWebServiceResponse.h"

@interface PKPaymentActivationResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSURL *passURL; // ivar: _passURL
@property (readonly, copy, nonatomic) NSString *previousStepIdentifier; // ivar: _previousStepIdentifier
@property (readonly, copy, nonatomic) NSDictionary *requiredVerificationFieldData; // ivar: _requiredVerificationFieldData
@property (readonly, copy, nonatomic) NSString *stepIdentifier; // ivar: _stepIdentifier
@property (copy, nonatomic) NSArray *verificationChannels; // ivar: _verificationChannels
@property (nonatomic) NSInteger verificationStatus; // ivar: _verificationStatus


+(id)responseWithData:(id)arg0 forPass:(id)arg1 ;
-(id)initWithData:(id)arg0 forPass:(id)arg1 ;


@end


#endif