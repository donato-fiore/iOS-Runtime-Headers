// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKAPPLEIDAUTHENTICATIONCONTEXTMANAGER_H
#define AKAPPLEIDAUTHENTICATIONCONTEXTMANAGER_H

@class NSMutableDictionary, NSString;
@protocol AKAppleIDAuthenticationClientProtocol, OS_dispatch_queue, AKAppleIDAuthenticationDelegate;

#import <Foundation/Foundation.h>

#import "AKAppleIDAuthenticationController.h"

@interface AKAppleIDAuthenticationContextManager : NSObject <AKAppleIDAuthenticationClientProtocol>

 {
    NSMutableDictionary *_authContextsByUUID;
    AKAppleIDAuthenticationController *_authController;
    NSObject<OS_dispatch_queue> *_authContextsQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AKAppleIDAuthenticationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_clientSideContextForServerContext:(id)arg0 ;
-(id)initWithAuthenticationController:(id)arg0 ;
-(id)registerContext:(id)arg0 ;
-(void)dismissBasicLoginUIForContext:(id)arg0 completion:(id)arg1 ;
-(void)dismissKeepUsingUIForContext:(id)arg0 withCompletion:(id)arg1 ;
-(void)dismissNativeRecoveryUIForContext:(id)arg0 completion:(id)arg1 ;
-(void)dismissSecondFactorUIForContext:(id)arg0 completion:(id)arg1 ;
-(void)dismissServerProvidedUIForContext:(id)arg0 completion:(id)arg1 ;
-(void)eraseAnisetteForContext:(id)arg0 withCompletion:(id)arg1 ;
-(void)fetchAnisetteDataForContext:(id)arg0 provisionIfNecessary:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)launchOutOfProcessAuthentication:(id)arg0 surrogateID:(id)arg1 withErrorHandler:(id)arg2 ;
-(void)legacyAnisetteDataForContext:(id)arg0 DSID:(id)arg1 withCompletion:(id)arg2 ;
-(void)presentBasicLoginUIForContext:(id)arg0 completion:(id)arg1 ;
-(void)presentBiometricOrPasscodeValidationForContext:(id)arg0 completion:(id)arg1 ;
-(void)presentKeepUsingUIForContext:(id)arg0 appleID:(id)arg1 completion:(id)arg2 ;
-(void)presentLoginAlertForContext:(id)arg0 withError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(id)arg4 ;
-(void)presentNativeRecoveryUIForContext:(id)arg0 recoveryContext:(id)arg1 completion:(id)arg2 ;
-(void)presentSecondFactorAlertForContext:(id)arg0 withError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(id)arg4 ;
-(void)presentSecondFactorUIForContext:(id)arg0 completion:(id)arg1 ;
-(void)presentServerProvidedUIForContext:(id)arg0 withConfiguration:(id)arg1 completion:(id)arg2 ;
-(void)provisionAnisetteForContext:(id)arg0 withCompletion:(id)arg1 ;
-(void)shouldContinueWithAuthenticationResults:(id)arg0 error:(id)arg1 forContextID:(id)arg2 completion:(id)arg3 ;
-(void)syncAnisetteForContext:(id)arg0 withSIMData:(id)arg1 completion:(id)arg2 ;
-(void)unregisterContext:(id)arg0 ;


@end


#endif