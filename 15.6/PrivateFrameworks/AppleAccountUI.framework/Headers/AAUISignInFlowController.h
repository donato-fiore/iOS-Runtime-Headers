// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAUISIGNINFLOWCONTROLLER_H
#define AAUISIGNINFLOWCONTROLLER_H

@class ACAccountStore, ACAccountType, NSMutableDictionary, NSLock, NSString, CUMessageSession, UIViewController;
@protocol AAUIGenericTermsRemoteUIDelegate, AAUISignInOperationDelegate;

#import <Foundation/Foundation.h>

#import "AAUIGenericTermsRemoteUI.h"

@interface AAUISignInFlowController : NSObject <AAUIGenericTermsRemoteUIDelegate, AAUISignInOperationDelegate>

 {
    ACAccountStore *_accountStore;
    ACAccountType *_appleAccountType;
    AAUIGenericTermsRemoteUI *_genericTermsRemoteUI;
    id *_pendingCompletion;
    NSMutableDictionary *_cdpContextsByAccountID;
    NSLock *_cdpContextsByAccountIDLock;
}


@property (nonatomic) NSUInteger activationAction; // ivar: _activationAction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreLockAssertErrors; // ivar: _ignoreLockAssertErrors
@property (retain, nonatomic) CUMessageSession *messageSession; // ivar: _messageSession
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (nonatomic) BOOL shouldAutomaticallySaveSignInResults; // ivar: _shouldAutomaticallySaveSignInResults
@property (nonatomic) BOOL shouldHideActivationLockAlert;
@property (nonatomic) BOOL shouldStashLoginResponse; // ivar: _shouldStashLoginResponse
@property (readonly) Class superclass;


-(id)_appleAccountType;
-(id)_messageForErrorAlert:(NSInteger)arg0 ;
-(id)_titleForError:(id)arg0 account:(id)arg1 ;
-(id)init;
-(void)_hasActivationLockSupportedWatchWithCompletion:(id)arg0 ;
-(void)_presentExistingAccountAlert:(id)arg0 ;
-(void)_presentUnableToSaveAccountAlert;
-(void)_presentValidationErrorAlert:(id)arg0 forAccount:(id)arg1 completion:(id)arg2 ;
-(void)_promptToEnableFindMyIfPossibleWithAccount:(id)arg0 completion:(id)arg1 ;
-(void)_saveAccount:(id)arg0 withAllDataclassesEnabledIfPossibleWithCompletion:(id)arg1 ;
-(void)_showGenericTermsUIforAccount:(id)arg0 completion:(id)arg1 ;
-(void)_stashLoginResponseWithAuthenticationResults:(id)arg0 completion:(id)arg1 ;
-(void)_updateAppleAccountIfNecessary:(id)arg0 withAltDSID:(id)arg1 rawPassword:(id)arg2 ;
-(void)_validateCDPStateForAccount:(id)arg0 withCDPContext:(id)arg1 completion:(id)arg2 ;
-(void)_verifyLoginResponseForiCloudAccount:(id)arg0 withSuccess:(BOOL)arg1 response:(id)arg2 error:(id)arg3 completion:(id)arg4 ;
-(void)genericTermsRemoteUI:(id)arg0 didFinishWithSuccess:(BOOL)arg1 ;
-(void)prewarmOperationsWithCompletion:(id)arg0 ;
-(void)signInOperationManager:(id)arg0 didSaveAccount:(id)arg1 error:(id)arg2 ;
-(void)signInWithIDMSAuthenticationResults:(id)arg0 completion:(id)arg1 ;


@end


#endif