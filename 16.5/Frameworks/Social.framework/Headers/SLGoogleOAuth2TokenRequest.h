// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLGOOGLEOAUTH2TOKENREQUEST_H
#define SLGOOGLEOAUTH2TOKENREQUEST_H

@class NSString;
@protocol SLWebOAuth2TokenRequest;

#import <Foundation/Foundation.h>


@interface SLGoogleOAuth2TokenRequest : NSObject <SLWebOAuth2TokenRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_urlRequestForParams:(id)arg0 tokenURL:(id)arg1 ;
+(id)urlRequestForClientID:(id)arg0 secret:(id)arg1 redirectURI:(id)arg2 authCode:(id)arg3 tokenURL:(id)arg4 ;
+(id)urlRequestForClientID:(id)arg0 secret:(id)arg1 redirectURI:(id)arg2 authCode:(id)arg3 tokenURL:(id)arg4 codeVerifier:(id)arg5 ;
+(id)urlRequestForClientID:(id)arg0 secret:(id)arg1 refreshToken:(id)arg2 tokenURL:(id)arg3 ;


@end


#endif