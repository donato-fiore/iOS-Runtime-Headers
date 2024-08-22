// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUIGENERICTERMSREMOTEUI_H
#define AAUIGENERICTERMSREMOTEUI_H

@class UINavigationController, NSSet, ACAccount, ACAccountStore, NSDictionary, NSString, UIViewController, RemoteUIController, RUIServerHookHandler;
@protocol RemoteUIControllerDelegate, AAUIGenericTermsRemoteUIDelegate;

#import <Foundation/Foundation.h>

#import "AAUIServerHookHandlerDelegate.h"

@interface AAUIGenericTermsRemoteUI : NSObject <RemoteUIControllerDelegate>

 {
    UINavigationController *_parentNavController;
    UINavigationController *_genericTermsUIViewController;
    NSSet *_termsEntries;
    BOOL _isModal;
    BOOL _isPreferringPassword;
    BOOL _didRenewCredentials;
}


@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (retain, nonatomic) NSDictionary *additionalHeaders; // ivar: _additionalHeaders
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUIGenericTermsRemoteUIDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AAUIServerHookHandlerDelegate *hookHandlerDelegate; // ivar: _hookHandlerDelegate
@property (readonly, weak, nonatomic) UIViewController *originatingViewController; // ivar: _originatingViewController
@property (retain, nonatomic) RemoteUIController *remoteUIController; // ivar: _remoteUIController
@property (retain, nonatomic) RUIServerHookHandler *serverHookHandler; // ivar: _serverHookHandler
@property (readonly) Class superclass;


-(BOOL)_isUnauthorizedError:(id)arg0 ;
-(id)_authContextForRenewCredentials;
-(id)_sessionConfiguration;
-(id)_viewControllerForAlertPresentation;
-(id)initWithAccount:(id)arg0 inStore:(id)arg1 ;
-(id)initWithAccount:(id)arg0 inStore:(id)arg1 termsEntries:(id)arg2 ;
-(void)_addHeadersToRequest:(id)arg0 ;
-(void)_agreeToTermsWithURLString:(id)arg0 preferPassword:(BOOL)arg1 completion:(id)arg2 ;
-(void)_cleanUpAndDismissWithSuccess:(BOOL)arg0 agreeURL:(id)arg1 ;
-(void)_cleanupRUILoader;
-(void)_displayConnectionErrorAndDismiss;
-(void)_loadRequestPreferringPassword:(BOOL)arg0 ;
-(void)_renewCredentialsWithCompletion:(id)arg0 ;
-(void)_sendAcceptedTermsInfo:(id)arg0 ;
-(void)_setupActionForButtons;
-(void)presentFromViewController:(id)arg0 modal:(BOOL)arg1 ;
-(void)remoteUIController:(id)arg0 didPresentObjectModel:(id)arg1 modally:(BOOL)arg2 ;
-(void)remoteUIController:(id)arg0 didReceiveObjectModel:(id)arg1 actionSignal:(*NSUInteger)arg2 ;
-(void)remoteUIController:(id)arg0 shouldLoadRequest:(id)arg1 redirectResponse:(id)arg2 withCompletionHandler:(id)arg3 ;
-(void)remoteUIController:(id)arg0 willPresentModalNavigationController:(id)arg1 ;


@end


#endif