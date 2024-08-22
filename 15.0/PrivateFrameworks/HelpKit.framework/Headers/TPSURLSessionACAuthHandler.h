// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSURLSESSIONACAUTHHANDLER_H
#define TPSURLSESSIONACAUTHHANDLER_H

@class NSString, PPCExtensibleSSOAuthenticator;
@protocol TPSURLSessionCustomAuthHandling, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TPSURLSessionACAuthContext.h"

@interface TPSURLSessionACAuthHandler : NSObject <TPSURLSessionCustomAuthHandling>



@property (copy, nonatomic) TPSURLSessionACAuthContext *authContext; // ivar: _authContext
@property (readonly, copy, nonatomic) TPSURLSessionACAuthContext *authenticationContext; // ivar: _authenticationContext
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