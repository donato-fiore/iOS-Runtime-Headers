// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AASIGNINFLOWCONTROLLER_H
#define AASIGNINFLOWCONTROLLER_H

@class ACAccountStore, CDPContext, NSDictionary, CUMessageSession;
@protocol CDPStateUIProvider, AASignInFlowControllerDelegate;

#import <Foundation/Foundation.h>


@interface AASignInFlowController : NSObject {
    ACAccountStore *_accountStore;
    CDPContext *_cdpContextForAccount;
    NSDictionary *_authResults;
    BOOL _pendingSignIn;
    BOOL _existingAccount;
}


@property (weak, nonatomic) NSObject<CDPStateUIProvider> *cdpUIProvider; // ivar: _cdpUIProvider
@property (weak, nonatomic) NSObject<AASignInFlowControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL ignoreLockAssertErrors; // ivar: _ignoreLockAssertErrors
@property (retain, nonatomic) CUMessageSession *messageSession; // ivar: _messageSession
@property (nonatomic) BOOL shouldAutomaticallySaveSignInResults; // ivar: _shouldAutomaticallySaveSignInResults


-(BOOL)_isDuplicateAccountError:(NSInteger)arg0 ;
-(BOOL)_shouldEnableDataclassesForAccount:(id)arg0 ;
-(BOOL)_shouldStashLoginResponse;
-(NSUInteger)_findMyActivationAction;
-(id)_aaErrorForErrorCode:(NSInteger)arg0 ;
-(id)_aaErrorForErrorCode:(NSInteger)arg0 withUnderlyingError:(id)arg1 ;
-(id)_aaMessageForErrorCode:(NSInteger)arg0 ;
-(id)_createNewAppleAccountWithAuthResults:(id)arg0 accountCreationError:(*id)arg1 ;
-(id)_nameForCloudService;
-(id)_titleForSignInFailureAlert;
-(id)_titleForVerificationFailureAlert;
-(id)_updateOrCreateAppleAccountForAuthResults:(id)arg0 accountCreationError:(*id)arg1 ;
-(id)_userPersonaUniqueString;
-(id)init;
-(void)_addKeysAndEnrollCDPStateForAccount:(id)arg0 withCDPContext:(id)arg1 completion:(id)arg2 ;
-(void)_backgroundSaveAccount:(id)arg0 withDataclassEnablement:(BOOL)arg1 completion:(id)arg2 ;
-(void)_createCDPContextForPrimaryAccount:(id)arg0 withAuthResults:(id)arg1 ;
-(void)_delegate_enableFindMyWithCompletion:(id)arg0 ;
-(void)_delegate_presentAccountCreationError:(id)arg0 completion:(id)arg1 ;
-(void)_delegate_presentGenericTermsUIforAccount:(id)arg0 serverError:(id)arg1 completion:(id)arg2 ;
-(void)_delegate_presentValidationAlertForError:(id)arg0 forAccount:(id)arg1 completion:(id)arg2 ;
-(void)_delegate_saveAccount:(id)arg0 withDataclassEnablement:(BOOL)arg1 completion:(id)arg2 ;
-(void)_enableFindMyIfPossibleWithAccount:(id)arg0 completion:(id)arg1 ;
-(void)_enrollCDPStateForAccount:(id)arg0 withCDPContext:(id)arg1 completion:(id)arg2 ;
-(void)_prepareExistingAppleAccountForSignIn:(id)arg0 withAuthResults:(id)arg1 accountCreationError:(*id)arg2 ;
-(void)_registerAndVerifyLoginForiCloudAccount:(id)arg0 withCompletion:(id)arg1 ;
-(void)_saveAccount:(id)arg0 withAllDataclassesEnabledIfPossibleWithCompletion:(id)arg1 ;
-(void)_saveAccount:(id)arg0 withDataclassEnablement:(BOOL)arg1 completion:(id)arg2 ;
-(void)_saveTermsWithAuthResults:(id)arg0 account:(id)arg1 ;
-(void)_stashLoginResponseWithAuthenticationResults:(id)arg0 appleAccount:(id)arg1 ;
-(void)_updateAppleAccount:(id)arg0 withAuthenticationResults:(id)arg1 ;
-(void)_updateAppleAccountIfNecessary:(id)arg0 withAltDSID:(id)arg1 rawPassword:(id)arg2 ;
-(void)_validateAndEnrollCDPStateForAccount:(id)arg0 withCDPContext:(id)arg1 completion:(id)arg2 ;
-(void)_verifyLoginResponseForiCloudAccount:(id)arg0 withSuccess:(BOOL)arg1 error:(id)arg2 completion:(id)arg3 ;
-(void)prewarmOperationsWithCompletion:(id)arg0 ;
-(void)signInWithIDMSAuthenticationResults:(id)arg0 completion:(id)arg1 ;


@end


#endif