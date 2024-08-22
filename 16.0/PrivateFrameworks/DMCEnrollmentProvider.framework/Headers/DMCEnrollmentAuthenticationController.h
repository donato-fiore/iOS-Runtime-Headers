// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMCENROLLMENTAUTHENTICATIONCONTROLLER_H
#define DMCENROLLMENTAUTHENTICATIONCONTROLLER_H


#import <Foundation/Foundation.h>


@interface DMCEnrollmentAuthenticationController : NSObject



-(void)authenticateWithAuthenticationResults:(id)arg0 ephemeral:(BOOL)arg1 requireAppleMAID:(BOOL)arg2 presentingViewController:(id)arg3 completionHandler:(id)arg4 ;
-(void)authenticateWithUsername:(id)arg0 password:(id)arg1 ephemeral:(BOOL)arg2 requireAppleMAID:(BOOL)arg3 presentingViewController:(id)arg4 completionHandler:(id)arg5 ;
-(void)fetchAuthenticationModeForUsername:(id)arg0 requireAppleMAID:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif