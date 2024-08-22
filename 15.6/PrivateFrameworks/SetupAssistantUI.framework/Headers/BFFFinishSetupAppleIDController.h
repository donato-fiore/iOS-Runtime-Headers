// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BFFFINISHSETUPAPPLEIDCONTROLLER_H
#define BFFFINISHSETUPAPPLEIDCONTROLLER_H

@class AAUISignInController, NSString;
@protocol AAUISignInControllerDelegate, BFFFinishSetupFlowControlling;

#import <Foundation/Foundation.h>

#import "BFFFinishSetupAppleIDController.h"

@interface BFFFinishSetupAppleIDController : NSObject <AAUISignInControllerDelegate, BFFFinishSetupFlowControlling>

 {
    BFFFinishSetupAppleIDController *_selfReference;
    AAUISignInController *_signInController;
}


@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)finishSetupAppleIDController;
-(id)viewControllerWithCompletion:(id)arg0 ;
-(void)signInController:(id)arg0 didCompleteWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)signInControllerDidCancel:(id)arg0 ;


@end


#endif