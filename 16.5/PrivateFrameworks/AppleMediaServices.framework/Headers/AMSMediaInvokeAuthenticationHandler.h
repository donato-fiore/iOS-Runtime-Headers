// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMEDIAINVOKEAUTHENTICATIONHANDLER_H
#define AMSMEDIAINVOKEAUTHENTICATIONHANDLER_H


#import <Foundation/Foundation.h>


@interface AMSMediaInvokeAuthenticationHandler : NSObject



+(BOOL)isInvokeAuthenticationEnabled;
+(NSUInteger)_authenticationTypeForResponse:(id)arg0 ;
+(id)_authenticateRequestWithAuthType:(NSUInteger)arg0 taskInfo:(id)arg1 ;
+(id)_performAuthRequest:(id)arg0 redirectURL:(id)arg1 taskInfo:(id)arg2 ;
+(id)_presentAuthRequest:(id)arg0 taskInfo:(id)arg1 ;
+(id)performAuthFromResponse:(id)arg0 taskInfo:(id)arg1 ;


@end


#endif