// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MDMBEARERTOKENAUTHENTICATOR_H
#define MDMBEARERTOKENAUTHENTICATOR_H

@class NSString;
@protocol MDMAuthenticatorProtocol;

#import <Foundation/Foundation.h>


@interface MDMBearerTokenAuthenticator : NSObject <MDMAuthenticatorProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *token; // ivar: _token


+(id)_createAuthInvalidError;
+(id)authenticationMethod;
-(BOOL)authenticateRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)canRefreshToken;
-(BOOL)doesWebAuthentication;
-(BOOL)validAuthParams:(id)arg0 ;
-(id)initWithRMAccountID:(id)arg0 ;
-(id)initWithTokens:(id)arg0 ;
-(id)prepareForReauthenticationWithAuthParams:(id)arg0 accountID:(id)arg1 error:(*id)arg2 ;
-(id)webAuthenticationURLForAuthParams:(id)arg0 userIdentifier:(id)arg1 ;
-(void)authTokensWithCallbackURL:(id)arg0 authParams:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif