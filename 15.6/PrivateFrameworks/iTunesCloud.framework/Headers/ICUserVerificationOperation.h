// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICUSERVERIFICATIONOPERATION_H
#define ICUSERVERIFICATIONOPERATION_H



#import "ICAsyncOperation.h"
#import "ICUserVerificationRequest.h"

@interface ICUserVerificationOperation : ICAsyncOperation

@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler
@property (readonly, copy, nonatomic) ICUserVerificationRequest *verificationRequest; // ivar: _verificationRequest


+(id)operationWithVerificationRequest:(id)arg0 ;
-(void)execute;


@end


#endif