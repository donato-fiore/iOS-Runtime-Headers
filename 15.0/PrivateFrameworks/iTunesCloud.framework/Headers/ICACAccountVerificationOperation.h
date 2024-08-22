// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICACACCOUNTVERIFICATIONOPERATION_H
#define ICACACCOUNTVERIFICATIONOPERATION_H

@class NSString;
@protocol AMSAuthenticateTaskDelegate;


#import "ICUserVerificationOperation.h"

@interface ICACAccountVerificationOperation : ICUserVerificationOperation <AMSAuthenticateTaskDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)authenticateTask:(id)arg0 handleDialogRequest:(id)arg1 completion:(id)arg2 ;
-(void)execute;
-(void)finishWithError:(id)arg0 ;


@end


#endif