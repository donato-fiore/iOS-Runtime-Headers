// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPDRECOVERYVALIDATEDJOINFLOWCONTROLLER_H
#define CDPDRECOVERYVALIDATEDJOINFLOWCONTROLLER_H

@class NSString;
@protocol CDPDRemoteDeviceSecretValidatorDelegate;


#import "CDPDRecoveryFlowController.h"

@interface CDPDRecoveryValidatedJoinFlowController : CDPDRecoveryFlowController <CDPDRemoteDeviceSecretValidatorDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)secretValidator:(id)arg0 shouldAcceptRecoveryError:(*id)arg1 ;
-(NSUInteger)_escapeOfferForDevices:(id)arg0 remoteApproval:(BOOL)arg1 forMultipleICSC:(BOOL)arg2 ;
-(id)_accountResetRecoveryOptionWithCompletion:(id)arg0 ;
-(id)_cancelRecoveryOptionWithCompletion:(id)arg0 ;
-(id)_entryLimitNoResetForRepairForDevice:(id)arg0 ;
-(id)_entryLimitRecoveryKeyAvailableBodyForDevice:(id)arg0 ;
-(id)_entryLimitResetAvailableBodyForDevice:(id)arg0 ;
-(id)_entryLimitSignInBodyForDevice:(id)arg0 ;
-(id)_entryLimitTitleForDevice:(id)arg0 ;
-(id)_fallbackRecoveryOptionWithCompletion:(id)arg0 ;
-(id)_hardLimitErrorBodyWithDevice:(id)arg0 ;
-(id)_hardLimitUserInfoForDevice:(id)arg0 ;
-(id)_infoDictionaryWithTitle:(id)arg0 andBody:(id)arg1 ;
-(id)_resetDataErrorForCurrentContextWithRecoveryIndexMap:(id)arg0 ;
-(id)_resetProtectedDataErrorUnrecoverable;
-(id)_skipSignInRecoveryOptionWithCompletion:(id)arg0 ;
-(id)_softLimitErrorBodyForDevice:(id)arg0 ;
-(id)_userInfoForLimit:(NSUInteger)arg0 withDevice:(id)arg1 ;
-(id)recoveryValidatorWithDevices:(id)arg0 forMultipleICSC:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)_handleHardLimitErrorForCurrentContextWithDevice:(id)arg0 completion:(id)arg1 ;
-(void)_handleLimit:(NSUInteger)arg0 forDevice:(id)arg1 completion:(id)arg2 ;
-(void)_handleSoftLimitErrorForCurrentContextWithDevice:(id)arg0 completion:(id)arg1 ;
-(void)_populateUserInfo:(id)arg0 recoveryIndexHandlers:(id)arg1 withRecoveryOption:(id)arg2 ;
-(void)_showAccountResetConfirmationWithCompletion:(id)arg0 ;
-(void)_showAccountResetConfirmationWithoutRecovery:(id)arg0 ;
-(void)_showEntryLimitError:(id)arg0 withRecoveryOptionHandlers:(id)arg1 defaultIndex:(NSInteger)arg2 completion:(id)arg3 ;
-(void)beginInteractiveRecoveryForDevices:(id)arg0 isUsingMultipleICSC:(BOOL)arg1 usingValidator:(id)arg2 ;
-(void)cancelRemoteSecretValidatorApplicationToJoinCircle:(id)arg0 ;
-(void)remoteSecretValidator:(id)arg0 applyToJoinCircleWithJoinHandler:(id)arg1 ;
-(void)remoteSecretValidator:(id)arg0 attemptCustodianRecoveryWithInfo:(id)arg1 completion:(id)arg2 ;
-(void)secretValidator:(id)arg0 didFailRecovery:(id)arg1 withError:(id)arg2 completion:(id)arg3 ;
-(void)secretValidator:(id)arg0 recoverSecureBackupWithContext:(id)arg1 completion:(id)arg2 ;
-(void)secretValidatorWillAttemptRecovery;


@end


#endif