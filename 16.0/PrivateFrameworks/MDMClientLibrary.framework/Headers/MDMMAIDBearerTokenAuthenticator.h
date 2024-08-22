// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MDMMAIDBEARERTOKENAUTHENTICATOR_H
#define MDMMAIDBEARERTOKENAUTHENTICATOR_H

@class NSArray, NSString;
@protocol MDMAuthenticatorProtocol;

#import <Foundation/Foundation.h>


@interface MDMMAIDBearerTokenAuthenticator : NSObject <MDMAuthenticatorProtocol>



@property (retain, nonatomic) NSArray *anchorCertificateRefs; // ivar: _anchorCertificateRefs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *personaID; // ivar: _personaID
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *token; // ivar: _token


+(id)_createAuthInvalidError;
+(id)_createGeneralServerError;
+(id)_createManagedAppleAccountInvalidatedError;
+(id)_createMissingBearerTokenError;
+(id)authenticationMethod;
+(id)authenticatorWithAnchorCertificateRefs:(id)arg0 ;
-(BOOL)authenticateRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)canRefreshToken;
-(BOOL)doesWebAuthentication;
-(BOOL)validAuthParams:(id)arg0 ;
-(id)initWithRMAccountID:(id)arg0 ;
-(id)initWithTokens:(id)arg0 ;
-(id)prepareForReauthenticationWithAuthParams:(id)arg0 accountID:(id)arg1 error:(*id)arg2 ;
-(void)_executeExchangeRequestWithURL:(id)arg0 accountID:(id)arg1 completionHandler:(id)arg2 ;
-(void)_processTokenResponse:(id)arg0 data:(id)arg1 error:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchTokenWithAuthParams:(id)arg0 accountID:(id)arg1 completionHandler:(id)arg2 ;
-(void)refreshTokenWithAuthParams:(id)arg0 accountID:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif