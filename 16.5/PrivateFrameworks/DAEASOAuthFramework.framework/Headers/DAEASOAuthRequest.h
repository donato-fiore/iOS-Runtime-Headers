// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DAEASOAUTHREQUEST_H
#define DAEASOAUTHREQUEST_H


#import <Foundation/Foundation.h>


@interface DAEASOAuthRequest : NSObject



+(BOOL)urlPageWillContainAuthorizationCode:(id)arg0 ;
+(id)authCodeFromRequest:(id)arg0 ;
+(id)errorDescriptionFromRequest:(id)arg0 ;
+(id)errorDomainFromRequest:(id)arg0 ;
+(id)requestForURL:(id)arg0 ;
+(id)stateFromRequest:(id)arg0 ;
+(id)urlForOAuthURI:(id)arg0 clientID:(id)arg1 redirectURI:(id)arg2 scope:(id)arg3 username:(id)arg4 state:(id)arg5 codeChallenge:(id)arg6 codeChallengeMethod:(NSInteger)arg7 ;


@end


#endif