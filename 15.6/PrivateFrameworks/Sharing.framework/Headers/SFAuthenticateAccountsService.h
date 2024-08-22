// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFAUTHENTICATEACCOUNTSSERVICE_H
#define SFAUTHENTICATEACCOUNTSSERVICE_H

@class ACAccountStore, NSMutableArray, NSArray, HMDeviceSetupOperationHandler;
@protocol CDPStateUIProvider, SFAuthenticateAccountsServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFService.h"
#import "SFSession.h"

@interface SFAuthenticateAccountsService : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    SFService *_sfService;
    SFSession *_sfSession;
    ACAccountStore *_accountStore;
    id<CDPStateUIProvider> *_cdpUIProvider;
    NSMutableArray *_authenticatedAccounts;
    NSArray *_knownHomeUserIdentifiers;
    HMDeviceSetupOperationHandler *_homeKitSetupHandler;
}


@property (weak, nonatomic) NSObject<SFAuthenticateAccountsServiceDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) BOOL homeKitSetupDidSucceed; // ivar: _homeKitSetupDidSucceed
@property (nonatomic) BOOL isHomeKitSetupNeeded; // ivar: _isHomeKitSetupNeeded
@property (nonatomic) BOOL isHomeSharingSetupNeeded; // ivar: _isHomeSharingSetupNeeded
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (nonatomic) unsigned int targetedAccountTypes; // ivar: _targetedAccountTypes


-(BOOL)_shouldSignInAccountsInInfoRequest:(id)arg0 ;
-(NSInteger)_nextServiceTypeForTRAccountServices:(id)arg0 ;
-(NSUInteger)_nextTRServiceTypeForTRAccountServices:(id)arg0 ;
-(id)init;
-(unsigned int)_accountTypeForTRAccountService:(NSUInteger)arg0 ;
-(void)__runAuthenticateiCloudWithAuthResults:(id)arg0 completion:(id)arg1 ;
-(void)_activate;
-(void)_authenticateAccount:(id)arg0 serviceType:(NSInteger)arg1 companionDevice:(id)arg2 anisetteDataProvider:(id)arg3 completion:(id)arg4 ;
-(void)_authenticateAccount:(id)arg0 serviceType:(NSInteger)arg1 password:(id)arg2 completion:(id)arg3 ;
-(void)_authenticateGameCenterWithAuthResults:(id)arg0 completion:(id)arg1 ;
-(void)_authenticateWithServiceType:(NSUInteger)arg0 authResults:(id)arg1 completion:(id)arg2 ;
-(void)_authenticateWithServiceTypes:(id)arg0 authResults:(id)arg1 completion:(id)arg2 ;
-(void)_authenticateiCloudWithAuthResults:(id)arg0 completion:(id)arg1 ;
-(void)_authenticateiTunesWithAuthResults:(id)arg0 completion:(id)arg1 ;
-(void)_cleanup;
-(void)_handleInfoExchange:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handleRequest:(id)arg0 flags:(unsigned int)arg1 session:(id)arg2 responseHandler:(id)arg3 ;
-(void)_handleSessionEnded:(id)arg0 ;
-(void)_handleSessionStarted:(id)arg0 ;
-(void)_handleTRCompanionAuthenticationRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handleTRProxyAuthenticationRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handleTRProxyDeviceRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_invalidate;
-(void)_saveAccount:(id)arg0 completion:(id)arg1 ;
-(void)_saveRemoteVerifiedAccount:(id)arg0 completion:(id)arg1 ;
-(void)_sfServiceStart;
-(void)activate;
-(void)invalidate;


@end


#endif