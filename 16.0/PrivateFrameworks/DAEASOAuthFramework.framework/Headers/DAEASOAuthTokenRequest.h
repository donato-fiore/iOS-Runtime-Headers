// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DAEASOAUTHTOKENREQUEST_H
#define DAEASOAUTHTOKENREQUEST_H


#import <Foundation/Foundation.h>


@interface DAEASOAuthTokenRequest : NSObject



+(id)_urlRequestForTokenRequestURI:(id)arg0 params:(id)arg1 clientID:(id)arg2 ;
+(id)claimsValueWithClaimsChallenge:(id)arg0 ;
+(id)oauthTokenRefreshRequestForTokenRequestURI:(id)arg0 clientID:(id)arg1 scope:(id)arg2 refreshToken:(id)arg3 claims:(id)arg4 ;
+(id)urlRequestForTokenRequestURI:(id)arg0 clientID:(id)arg1 redirectURI:(id)arg2 authCode:(id)arg3 scope:(id)arg4 codeVerifier:(id)arg5 claims:(id)arg6 ;


@end


#endif