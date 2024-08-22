// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPAUTHENTICATIONHELPER_H
#define CDPAUTHENTICATIONHELPER_H


#import <Foundation/Foundation.h>


@interface CDPAuthenticationHelper : NSObject



+(id)_authContextForContext:(id)arg0 ;
+(id)_contextForPrimaryAccount;
+(id)_contextForPrimaryAccountSilentAuth;
+(id)authController;
+(void)_authWithContext:(id)arg0 completion:(id)arg1 ;
+(void)silentAuthenticationForContext:(id)arg0 withCompletion:(id)arg1 ;
+(void)silentAuthenticationForPrimaryAccountWithClientAppName:(id)arg0 clientAppBundleId:(id)arg1 withCompletion:(id)arg2 ;
+(void)silentAuthenticationForPrimaryAccountWithCompletion:(id)arg0 ;


@end


#endif