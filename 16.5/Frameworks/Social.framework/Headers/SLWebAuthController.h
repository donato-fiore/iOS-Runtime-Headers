// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLWEBAUTHCONTROLLER_H
#define SLWEBAUTHCONTROLLER_H

@class UIViewController, ACAccount, ACAccountStore, NSExtension, NSError, NSString;
@protocol SLWebClient;



@interface SLWebAuthController : UIViewController {
    ACAccount *_account;
    ACAccountStore *_accountStore;
    id *_presentationBlock;
    UIViewController *_serviceViewController;
    NSExtension *_extension;
    NSError *_extensionCancellationError;
    BOOL _extensionRequestDidComplete;
}


@property (readonly) NSString *_extentionIdentifier; // ivar: __extentionIdentifier
@property (readonly) NSObject<SLWebClient> *_webClient; // ivar: __webClient
@property (copy, nonatomic) id *completion; // ivar: _completion


-(id)_extensionItemForAccount:(id)arg0 accountDescription:(id)arg1 username:(id)arg2 youTube:(BOOL)arg3 ;
-(id)_init;
-(id)init;
-(id)initWithAccount:(id)arg0 accountStore:(id)arg1 presentationBlock:(id)arg2 ;
-(id)initWithAccountDescription:(id)arg0 presentationBlock:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_commonInitializationWithAccount:(id)arg0 accountStore:(id)arg1 username:(id)arg2 accountDescription:(id)arg3 youTube:(BOOL)arg4 presentationBlock:(id)arg5 ;
-(void)_didInstantiateRemoteViewController;
-(void)_dismissAndCompleteWithIdentity:(id)arg0 error:(id)arg1 extensionCompletion:(id)arg2 ;
-(void)_extensionRequestDidCancelWithError:(id)arg0 ;
-(void)_extensionRequestDidCompleteWithTokens:(id)arg0 extensionCompletion:(id)arg1 ;
-(void)_presentInternetOfflineError;
-(void)_presentUsernameMismatchAlert;
-(void)loadView;


@end


#endif