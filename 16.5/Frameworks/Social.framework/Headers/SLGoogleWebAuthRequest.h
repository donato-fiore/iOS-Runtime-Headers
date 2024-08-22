// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLGOOGLEWEBAUTHREQUEST_H
#define SLGOOGLEWEBAUTHREQUEST_H

@class NSString;
@protocol SLWebAuthRequest;

#import <Foundation/Foundation.h>


@interface SLGoogleWebAuthRequest : NSObject <SLWebAuthRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)urlPageWillContainAuthorizationCode:(id)arg0 ;
+(id)_parametersForClientID:(id)arg0 redirectURI:(id)arg1 scope:(id)arg2 username:(id)arg3 codeChallenge:(id)arg4 ;
+(id)authCodeFromRedirectURL:(id)arg0 ;
+(id)authCodeFromWebPageTitle:(id)arg0 ;
+(id)requestForURL:(id)arg0 ;
+(id)urlForClientID:(id)arg0 redirectURI:(id)arg1 scope:(id)arg2 username:(id)arg3 authRequestURL:(id)arg4 ;
+(id)urlForClientID:(id)arg0 redirectURI:(id)arg1 scope:(id)arg2 username:(id)arg3 authRequestURL:(id)arg4 codeChallenge:(id)arg5 ;
+(id)urlRequestForClientID:(id)arg0 redirectURI:(id)arg1 scope:(id)arg2 username:(id)arg3 authRequestURL:(id)arg4 ;
+(void)clearCookiesFromStorage:(id)arg0 authRequestURL:(id)arg1 ;


@end


#endif