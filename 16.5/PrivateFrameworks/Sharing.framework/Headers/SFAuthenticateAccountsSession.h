// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFAUTHENTICATEACCOUNTSSESSION_H
#define SFAUTHENTICATEACCOUNTSSESSION_H

@class ACAccountStore, AAUIGenericTermsRemoteUI, HMHomeManager, TRSession, NSMutableArray, TROperationQueue, NSString, UIViewController;
@protocol AAUIGenericTermsRemoteUIDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFSession.h"
#import "SFDeviceOperationCDPSetup.h"
#import "SFDeviceOperationHomeKitSetup.h"
#import "SFDevice.h"

@interface SFAuthenticateAccountsSession : NSObject <AAUIGenericTermsRemoteUIDelegate>

 {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    NSUInteger _startTicks;
    int _accountsState;
    ACAccountStore *_accountStore;
    int _iCloudTermsState;
    AAUIGenericTermsRemoteUI *_termsRemoteUI;
    SFSession *_sfSession;
    int _sfSessionState;
    BOOL _sessionSecured;
    int _pairVerifyState;
    int _pairSetupState;
    int _infoExchangeState;
    unsigned int _targetedAccountTypes;
    NSUInteger _problemFlags;
    NSUInteger _peerFeatureFlags;
    HMHomeManager *_homeManager;
    int _trSessionState;
    TRSession *_trSession;
    NSMutableArray *_trOperations;
    TROperationQueue *_trOperationQueue;
    BOOL _trAuthenticationEnabled;
    int _trAuthenticationState;
    SFDeviceOperationCDPSetup *_cdpSetupOperation;
    int _cdpState;
    SFDeviceOperationHomeKitSetup *_homeKitSetupOperation;
    int _homeKitSetupState;
    int _finishState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SFDevice *peerDevice; // ivar: _peerDevice
@property (retain, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (copy, nonatomic) id *promptForPINHandler; // ivar: _promptForPINHandler
@property (readonly) Class superclass;


+(id)_myGameCenterAccount;
-(id)_availableAccountsToSignIn;
-(id)_trTargetedServices;
-(id)init;
-(int)__validateAccountsWithAccountStore:(id)arg0 ;
-(int)_runFinish;
-(int)_runHomeKitSetup;
-(int)_runInfoExchange;
-(int)_runPairSetup;
-(int)_runPairVerify;
-(int)_runRepairCDP;
-(int)_runSFSessionStart;
-(int)_runTRAuthentication;
-(int)_runTRSessionStart;
-(int)_validateAccounts;
-(int)_validateiCloudAccountTerms;
-(void)__runFinishWithSFSession:(id)arg0 ;
-(void)_cleanup;
-(void)_handleShowTermsUI:(id)arg0 responseHandler:(id)arg1 ;
-(void)_presentiCloudTermsUIWithAccount:(id)arg0 ;
-(void)_reportError:(id)arg0 ;
-(void)_run;
-(void)_runInfoExchangeRequest;
-(void)_runInfoExchangeResponse:(id)arg0 error:(id)arg1 ;
-(void)activate;
-(void)dealloc;
-(void)genericTermsRemoteUI:(id)arg0 didFinishWithSuccess:(BOOL)arg1 ;
-(void)invalidate;
-(void)pairSetupTryPIN:(id)arg0 ;


@end


#endif