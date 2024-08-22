// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKAUTHORIZATIONVALIDATOR_H
#define AKAUTHORIZATIONVALIDATOR_H


#import <Foundation/Foundation.h>


@interface AKAuthorizationValidator : NSObject



+(BOOL)_requirePasscodeSet;
+(BOOL)canPerformAuthorizationRequest:(id)arg0 error:(*id)arg1 ;
+(BOOL)canPerformCredentialRequest:(id)arg0 error:(*id)arg1 ;
+(BOOL)canPerformPasswordRequest:(id)arg0 error:(*id)arg1 ;
+(BOOL)shouldContinueWithResponse:(id)arg0 error:(*id)arg1 ;


@end


#endif