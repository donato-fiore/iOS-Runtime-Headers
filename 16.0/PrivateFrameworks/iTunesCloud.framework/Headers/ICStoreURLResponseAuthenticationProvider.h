// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSTOREURLRESPONSEAUTHENTICATIONPROVIDER_H
#define ICSTOREURLRESPONSEAUTHENTICATIONPROVIDER_H

@protocol NSSecureCoding;


#import "ICURLResponseAuthenticationProvider.h"

@interface ICStoreURLResponseAuthenticationProvider : ICURLResponseAuthenticationProvider <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(void)_adjustedAuthenticationPolicyForResponse:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_performAuthenticationUsingRequestContext:(id)arg0 usingVerificationInteractionLevel:(NSInteger)arg1 withCompletionHandler:(id)arg2 ;
-(void)performAuthenticationToHandleResponse:(id)arg0 toRequest:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)performAuthenticationUsingRequestContext:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif