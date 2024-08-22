// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MDMAUTHENTICATIONHELPER_H
#define MDMAUTHENTICATIONHELPER_H


#import <Foundation/Foundation.h>


@interface MDMAuthenticationHelper : NSObject



+(NSUInteger)enrollmentMethodFromAuthenticateString:(id)arg0 outParams:(*id)arg1 ;
+(void)performExchangeMAIDForBearerTokenAtURL:(id)arg0 rmAccountIdentifier:(id)arg1 anchorCertificateRefs:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif