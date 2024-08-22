// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HLPURLSESSIONACAUTHHANDLER_H
#define HLPURLSESSIONACAUTHHANDLER_H

@class NSString, PPCExtensibleSSOAuthenticator;
@protocol HLPURLSessionCustomAuthHandling, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HLPURLSessionACAuthContext.h"

@interface HLPURLSessionACAuthHandler : NSObject <HLPURLSessionCustomAuthHandling>



@property (copy, nonatomic) HLPURLSessionACAuthContext *authContext; // ivar: _authContext
@property (readonly, copy, nonatomic) HLPURLSessionACAuthContext *authenticationContext; // ivar: _authenticationContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PPCExtensibleSSOAuthenticator *ssoAuthenticator; // ivar: _ssoAuthenticator
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue


+(BOOL)canAuthenticateWithURLResponse:(id)arg0 ;
-(id)customHeaderFields;
-(id)initWithAuthenticationContext:(id)arg0 ;
-(void)authenticateWithCompletion:(id)arg0 ;


@end


#endif