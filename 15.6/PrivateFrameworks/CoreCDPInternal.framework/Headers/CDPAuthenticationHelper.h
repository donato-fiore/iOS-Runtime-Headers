// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPAUTHENTICATIONHELPER_H
#define CDPAUTHENTICATIONHELPER_H


#import <Foundation/Foundation.h>


@interface CDPAuthenticationHelper : NSObject



+(id)_authContextForContext:(id)arg0 ;
+(id)_contextForPrimaryAccount;
+(id)_contextForPrimaryAccountSilentAuth;
+(void)_authWithContext:(id)arg0 completion:(id)arg1 ;
+(void)silentAuthenticationForContext:(id)arg0 withCompletion:(id)arg1 ;
+(void)silentAuthenticationForPrimaryAccountWithCompletion:(id)arg0 ;


@end


#endif