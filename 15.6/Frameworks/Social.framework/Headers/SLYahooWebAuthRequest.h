// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLYAHOOWEBAUTHREQUEST_H
#define SLYAHOOWEBAUTHREQUEST_H

@class NSString;
@protocol SLWebAuthRequest_Internal, SLWebAuthRequest;

#import <Foundation/Foundation.h>


@interface SLYahooWebAuthRequest : NSObject <SLWebAuthRequest_Internal, SLWebAuthRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(BOOL)urlPageWillContainAuthorizationCode:(id)arg0 ;
+(id)_parametersForClientID:(id)arg0 redirectURI:(id)arg1 scope:(id)arg2 username:(id)arg3 ;
+(id)authCodeFromURLRequest:(id)arg0 ;
+(id)requestForURL:(id)arg0 ;
+(id)urlForClientID:(id)arg0 redirectURI:(id)arg1 scope:(id)arg2 username:(id)arg3 authRequestURL:(id)arg4 ;
+(id)urlForClientID:(id)arg0 redirectURI:(id)arg1 scope:(id)arg2 username:(id)arg3 authRequestURL:(id)arg4 codeChallenge:(id)arg5 ;
+(id)urlRequestForClientID:(id)arg0 redirectURI:(id)arg1 scope:(id)arg2 username:(id)arg3 authRequestURL:(id)arg4 ;
+(void)clearCookiesFromStorage:(id)arg0 authRequestURL:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif