// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPINTERNALDATAPRIVACYCONTROLLER_H
#define CDPINTERNALDATAPRIVACYCONTROLLER_H

@protocol CDPAppleAccountProxy, CDPDAuthProviderInternal, CDPDSecureBackupProxy;

#import <Foundation/Foundation.h>


@interface CDPInternalDataPrivacyController : NSObject

@property (retain, nonatomic) NSObject<CDPAppleAccountProxy> *appleAccountInterface; // ivar: _appleAccountInterface
@property (retain, nonatomic) NSObject<CDPDAuthProviderInternal> *authKitInterface; // ivar: _authKitInterface
@property (retain, nonatomic) NSObject<CDPDSecureBackupProxy> *securityInterface; // ivar: _securityInterface


-(BOOL)_shouldContinueAfterPrimaryAccountCheckWithContext:(id)arg0 completion:(id)arg1 ;
-(id)initWithAuthKitInterface:(id)arg0 appleAccountInterface:(id)arg1 securityInterface:(id)arg2 ;
-(void)_deviceCheckForDataPrivacyDidCompleteWithContext:(id)arg0 devicesLosingAccountAccess:(id)arg1 deviceListFetchError:(id)arg2 finalCompletion:(id)arg3 ;
-(void)_didEnableDataPrivacyOnAuthKitWithContext:(id)arg0 enableError:(id)arg1 finalCompletion:(id)arg2 ;
-(void)_didEnableDataPrivacyOnSecurityWithContext:(id)arg0 enableError:(id)arg1 finalCompletion:(id)arg2 ;
-(void)_didFinishCheckingForRecoveryOptionsWithContext:(id)arg0 completion:(id)arg1 ;
-(void)_shouldContinueAfterRecoveryOptionsCheckWithContext:(id)arg0 completion:(id)arg1 ;
-(void)disableDataPrivacyWithCompletion:(id)arg0 ;
-(void)enableDataPrivacyWithContext:(id)arg0 completion:(id)arg1 ;
-(void)statusForDataPrivacyWithCompletion:(id)arg0 ;
-(void)updateDataPrivacyWithContext:(id)arg0 completion:(id)arg1 ;


@end


#endif