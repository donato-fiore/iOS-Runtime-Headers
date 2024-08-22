// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SLGOOGLEAUTHCONTROLLER_H
#define SLGOOGLEAUTHCONTROLLER_H

@class SLWebAuthController, ACAccount, ACAccountStore, ASWebAuthenticationSession;



@interface SLGoogleAuthController : SLWebAuthController {
    ACAccount *_account;
    ACAccountStore *_accountStore;
    id *_presentationBlock;
    ASWebAuthenticationSession *_authenticationSession;
}




+(id)_identityFromUsername:(id)arg0 displayName:(id)arg1 token:(id)arg2 refreshToken:(id)arg3 ;
// +(id)googleAuthControllerWithAccount:(id)arg0 accountStore:(id)arg1 presentationBlock:(id)arg2 completion:(unk)arg3  ;
// +(id)googleAuthControllerWithPresentationBlock:(id)arg0 completion:(unk)arg1  ;
// +(id)googleAuthControllerWithYouTubeUsername:(id)arg0 presentationBlock:(id)arg1 completion:(unk)arg2  ;
+(void)_presentInternetOfflineError;
+(void)_presentUsernameMismatchAlert;
// -(id)_initWithAccount:(id)arg0 accountStore:(id)arg1 username:(id)arg2 youTube:(BOOL)arg3 presentationBlock:(id)arg4 completion:(unk)arg5  ;
-(id)_redirectPathForURI:(id)arg0 ;
-(id)_webClient;
-(id)initWithAccount:(id)arg0 accountStore:(id)arg1 presentationBlock:(id)arg2 ;
-(id)initWithAccountDescription:(id)arg0 presentationBlock:(id)arg1 ;
-(void)_completeWithIdentity:(id)arg0 error:(id)arg1 ;
-(void)_didRedirectToURL:(id)arg0 codeVerifier:(id)arg1 ;
-(void)_dismissAndCompleteWithIdentity:(id)arg0 error:(id)arg1 ;
-(void)cancelAuthorization;
-(void)dealloc;


@end


#endif