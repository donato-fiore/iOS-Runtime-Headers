// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPDRECOVERYFLOWCONTROLLER_H
#define CDPDRECOVERYFLOWCONTROLLER_H

@class NSString, CDPRecoveryFlowContext;
@protocol CDPDDeviceSecretValidatorDelegate, CDPStateUIProviderInternal, CDPRemoteDeviceSecretValidatorProtocol;

#import <Foundation/Foundation.h>

#import "CDPDCircleController.h"
#import "CDPDSecureBackupController.h"

@interface CDPDRecoveryFlowController : NSObject <CDPDDeviceSecretValidatorDelegate>



@property (retain, nonatomic) CDPDCircleController *circleController; // ivar: _circleController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CDPRecoveryFlowContext *recoveryContext; // ivar: _recoveryContext
@property (retain, nonatomic) CDPDSecureBackupController *secureBackupController; // ivar: _secureBackupController
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<CDPStateUIProviderInternal> *uiProvider; // ivar: _uiProvider
@property (retain, nonatomic) NSObject<CDPRemoteDeviceSecretValidatorProtocol> *validator; // ivar: _validator


-(BOOL)secretValidator:(id)arg0 shouldContinueValidationAfterError:(id)arg1 ;
-(NSUInteger)_escapeOfferForDevices:(id)arg0 ;
-(id)initWithContext:(id)arg0 uiProvider:(id)arg1 secureBackupController:(id)arg2 circleProxy:(id)arg3 ;
-(id)recoveryValidatorWithDevices:(id)arg0 forMultipleICSC:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)beginInteractiveRecoveryForDevices:(id)arg0 isUsingMultipleICSC:(BOOL)arg1 usingValidator:(id)arg2 ;
-(void)beginRecovery:(id)arg0 ;
-(void)dealloc;
-(void)retrieveInflatedDevices:(id)arg0 ;
-(void)secretValidator:(id)arg0 recoverSecureBackupWithContext:(id)arg1 completion:(id)arg2 ;


@end


#endif