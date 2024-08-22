// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMCAUTHENTICATIONHELPER_H
#define DMCAUTHENTICATIONHELPER_H


#import <Foundation/Foundation.h>


@interface DMCAuthenticationHelper : NSObject



+(NSUInteger)enrollmentMethodFromAuthenticateString:(id)arg0 outURL:(*id)arg1 ;
+(id)_createGeneralServerError;
+(id)_createManagedAppleAccountInvalidatedError;
+(id)_createMissingBearerTokenError;
+(void)performExchangeMAIDForBearerTokenAtURL:(id)arg0 rmAccountIdentifier:(id)arg1 anchorCertificateRefs:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif