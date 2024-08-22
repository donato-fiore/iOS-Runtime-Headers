// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPDRECOVERYKEYCONTROLLER_H
#define CDPDRECOVERYKEYCONTROLLER_H

@class CDPContext, NSString;
@protocol CDPDRecoveryKeyValidatorInternalDelegate, CDPDDeviceSecretValidatorDelegate, CDPDCircleProxy, CDPDAuthProviderInternal, CDPDOctagonTrustProxy, CDPAuthProviderInternal, CDPDSecureBackupProxy, CDPStateUIProviderInternal;

#import <Foundation/Foundation.h>

#import "CDPDPCSController.h"
#import "CDPDSecureBackupController.h"

@interface CDPDRecoveryKeyController : NSObject <CDPDRecoveryKeyValidatorInternalDelegate, CDPDDeviceSecretValidatorDelegate>

 {
    CDPContext *_context;
    CDPDPCSController *_pcsController;
    CDPDSecureBackupController *_secureBackupController;
}


@property (retain, nonatomic) NSObject<CDPDCircleProxy> *circleProxy; // ivar: _circleProxy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<CDPDAuthProviderInternal> *internalAuthProvider; // ivar: _internalAuthProvider
@property (retain, nonatomic) NSObject<CDPDOctagonTrustProxy> *otProxy; // ivar: _otProxy
@property (retain, nonatomic) NSObject<CDPAuthProviderInternal> *recoveryAuthProvider; // ivar: _recoveryAuthProvider
@property (retain, nonatomic) NSObject<CDPDSecureBackupProxy> *sbProxy; // ivar: _sbProxy
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<CDPStateUIProviderInternal> *uiProvider; // ivar: _uiProvider


-(BOOL)isRecoveryKeyAvailableWithError:(*id)arg0 ;
-(BOOL)secretValidator:(id)arg0 shouldContinueValidationAfterError:(id)arg1 ;
-(id)generateRecoveryKeyWithInfo:(id)arg0 error:(*id)arg1 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 uiProvider:(id)arg1 ;
-(id)initWithContext:(id)arg0 uiProvider:(id)arg1 authProvider:(id)arg2 ;
-(id)initWithContext:(id)arg0 uiProvider:(id)arg1 authProvider:(id)arg2 circleProxy:(id)arg3 secureBackupProxy:(id)arg4 octagonTrustProxy:(id)arg5 pcsProxy:(id)arg6 ;
-(void)dealloc;
-(void)deleteRecoveryKey:(id)arg0 ;
-(void)enableBackupWithRecoveryKey:(id)arg0 completion:(id)arg1 ;
-(void)generateNewRecoveryKey:(id)arg0 ;
-(void)generateRandomRecoveryKey:(id)arg0 ;
-(void)recoverAndSynchronizeStateWithServer:(id)arg0 ;
-(void)recoverDataUsingMasterKeyWithCompletion:(id)arg0 ;
-(void)recoverState:(id)arg0 ;
-(void)secretValidator:(id)arg0 recoverSecureBackupWithContext:(id)arg1 completion:(id)arg2 ;
-(void)secretValidator:(id)arg0 validateRecoveryKeyWithContext:(id)arg1 completion:(id)arg2 ;
-(void)verifyRecoveryKey:(id)arg0 ;


@end


#endif