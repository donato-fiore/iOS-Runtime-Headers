// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DAEASOAUTHFLOWCONTROLLER_H
#define DAEASOAUTHFLOWCONTROLLER_H

@class NSString, NSData;
@protocol SL_OOPAuthFlowDelegate, UIWebViewDelegate;

#import <Foundation/Foundation.h>

#import "DAEASOAuthPKCEChallenge.h"

@interface DAEASOAuthFlowController : NSObject <SL_OOPAuthFlowDelegate, UIWebViewDelegate>

 {
    id *_completion;
}


@property (retain, nonatomic) DAEASOAuthPKCEChallenge *challenge; // ivar: _challenge
@property (retain, nonatomic) NSString *claimsChallenge; // ivar: _claimsChallenge
@property (copy, nonatomic) NSString *clientID; // ivar: _clientID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *easEndPoint; // ivar: _easEndPoint
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *issuer; // ivar: _issuer
@property (retain, nonatomic) NSData *jwksData; // ivar: _jwksData
@property (retain, nonatomic) NSString *jwksURI; // ivar: _jwksURI
@property (nonatomic) NSUInteger oauthType; // ivar: _oauthType
@property (copy, nonatomic) NSString *oauthURI; // ivar: _oauthURI
@property (copy, nonatomic) NSString *redirectURI; // ivar: _redirectURI
@property (retain, nonatomic) NSString *state; // ivar: _state
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *tokenRequestURI; // ivar: _tokenRequestURI
@property (copy, nonatomic) NSString *username; // ivar: _username


+(id)upgradeAuthorizationEndpoint:(id)arg0 ;
+(id)upgradeTokenEndpoint:(id)arg0 ;
-(BOOL)shouldHideWebViewForLoadWithRequest:(id)arg0 ;
-(id)_accountDescription;
-(id)_urlRequestForOAuthTokenFromAuthCode:(id)arg0 codeVerifier:(id)arg1 claims:(id)arg2 ;
-(id)authURLForUsername:(id)arg0 ;
-(id)authURLForUsername:(id)arg0 originalAuthURL:(id)arg1 ;
-(id)initWithOAuthType:(NSUInteger)arg0 authURI:(id)arg1 username:(id)arg2 claims:(id)arg3 ;
-(id)initialRedirectURL;
-(id)requestForAuthURL:(id)arg0 ;
-(void)_exchangeAuthCode:(id)arg0 codeVerifier:(id)arg1 claims:(id)arg2 forTokensAndUsernameWithCompletion:(id)arg3 ;
-(void)_exchangeAuthCode:(id)arg0 codeVerifier:(id)arg1 claims:(id)arg2 forTokensWithCompletion:(id)arg3 ;
-(void)exchangeAuthCode:(id)arg0 codeVerifier:(id)arg1 claims:(id)arg2 forTokensAndUsernameWithCompletion:(id)arg3 ;
-(void)retrieveJWKSDataFromURI:(id)arg0 withCompletion:(id)arg1 ;
-(void)retrieveOpenIDMetadataFromURI:(id)arg0 withCompletion:(id)arg1 ;
-(void)setAuthFlowCompletion:(id)arg0 ;
-(void)webViewDidFinishLoadWithPageTitleSupplier:(id)arg0 ;


@end


#endif