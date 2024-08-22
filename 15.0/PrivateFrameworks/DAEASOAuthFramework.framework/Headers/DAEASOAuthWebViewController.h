// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DAEASOAUTHWEBVIEWCONTROLLER_H
#define DAEASOAUTHWEBVIEWCONTROLLER_H

@class UIViewController, ACAccount, ACAccountStore, NSExtension, NSError, NSString;
@protocol UIWebViewDelegate;



@interface DAEASOAuthWebViewController : UIViewController <UIWebViewDelegate>

 {
    ACAccount *_account;
    ACAccountStore *_accountStore;
    id *_presentationBlock;
    UIViewController *_serviceViewController;
    NSExtension *_extension;
    NSError *_extensionCancellationError;
    BOOL _extensionRequestDidComplete;
    NSString *_authURI;
    NSUInteger _oauthType;
    BOOL _isFirstTimeSetup;
}


@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)presentInternetOfflineError;
+(void)presentUsernameMismatchAlert;
-(id)initWithAccount:(id)arg0 accountStore:(id)arg1 authURI:(id)arg2 accountType:(NSUInteger)arg3 userName:(id)arg4 accountDescription:(id)arg5 isFirstTimeSetup:(BOOL)arg6 presentationBlock:(id)arg7 ;
-(id)initWithAccount:(id)arg0 accountStore:(id)arg1 presentationBlock:(id)arg2 ;
-(id)initWithAccountDescription:(id)arg0 presentationBlock:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_commonInitializationWithAccount:(id)arg0 accountStore:(id)arg1 username:(id)arg2 accountDescription:(id)arg3 presentationBlock:(id)arg4 ;
-(void)_didInstantiateRemoteViewController;
-(void)_dismissAndCompleteWithIdentity:(id)arg0 error:(id)arg1 extensionCompletion:(id)arg2 ;
-(void)_extensionRequestDidCancelWithError:(id)arg0 ;
-(void)_extensionRequestDidCompleteWithTokens:(id)arg0 extensionCompletion:(id)arg1 ;
-(void)loadView;


@end


#endif