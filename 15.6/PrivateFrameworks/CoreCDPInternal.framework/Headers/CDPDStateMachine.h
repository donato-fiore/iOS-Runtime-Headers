// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPDSTATEMACHINE_H
#define CDPDSTATEMACHINE_H

@class CDPInheritanceTrustController, CDPContext;
@protocol CDPDSecureBackupDelegate, CDPDCircleDelegate, OS_dispatch_queue, CDPStateUIProviderInternal;

#import <Foundation/Foundation.h>

#import "CDPDCircleController.h"
#import "CDPDPCSController.h"
#import "CDPDSecureBackupController.h"

@interface CDPDStateMachine : NSObject <CDPDSecureBackupDelegate, CDPDCircleDelegate>

 {
    CDPInheritanceTrustController *_inheritanceTrustController;
    NSObject<OS_dispatch_queue> *_beneficiaryTrustQueue;
}


@property (nonatomic) BOOL attemptedCDPEnable; // ivar: _attemptedCDPEnable
@property (retain, nonatomic) CDPDCircleController *circleController; // ivar: _circleController
@property (retain, nonatomic) CDPContext *context; // ivar: _context
@property (retain, nonatomic) CDPDPCSController *pcsController; // ivar: _pcsController
@property (retain, nonatomic) CDPDSecureBackupController *secureBackupController; // ivar: _secureBackupController
@property (retain, nonatomic) NSObject<CDPStateUIProviderInternal> *uiProvider; // ivar: _uiProvider


-(BOOL)_disableAsyncModeRequested;
-(BOOL)_isICloudKeychainDisabledByManagementProfile;
-(BOOL)shouldAllowCDPEnrollment;
-(BOOL)synchronizeCircleViewsForSecureBackupContext:(id)arg0 ;
-(id)_beneficiaryTrustQueue;
-(id)_predicateForRecordUpgradeCheck;
-(id)_predicateForRecordUpgradeCheckIgnoringBottled;
-(id)_predicateForRepair;
-(id)circlePeerIDForSecureBackupController:(id)arg0 ;
-(id)contextForController:(id)arg0 ;
-(id)initWithContext:(id)arg0 uiProvider:(id)arg1 ;
-(id)secureChannelContextForController:(id)arg0 ;
-(void)_attemptBackupRecoveryByPromptingForRemoteSecretWithLocalSecret:(id)arg0 localSecretType:(NSUInteger)arg1 useCachedSecret:(BOOL)arg2 circleJoinResult:(id)arg3 completion:(id)arg4 ;
-(void)_attemptBackupRecoveryWithLocalSecret:(id)arg0 type:(NSUInteger)arg1 useCachedSecret:(BOOL)arg2 circleJoinResult:(id)arg3 completion:(id)arg4 ;
-(void)_attemptBeneficiaryTrustWithInheritanceKey:(id)arg0 retryCount:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_attemptCDPEnable:(id)arg0 ;
-(void)_authenticatedRepairCloudDataProtectionStateWithCompletion:(id)arg0 ;
-(void)_authenticatedShouldPerformRepairWithOptionForceFetch:(BOOL)arg0 completion:(id)arg1 ;
-(void)_confirmCDPEligibilityWithCompletion:(id)arg0 ;
-(void)_disableCloudDataProtectionWithCompletion:(id)arg0 ;
-(void)_disableRecoveryKeyWithCompletion:(id)arg0 ;
-(void)_enableCustodianRecoveryIfAvailableForContext:(id)arg0 ;
-(void)_enableKVSForAccount:(id)arg0 store:(id)arg1 completion:(id)arg2 ;
-(void)_enableSecureBackupWithCircleJoinResult:(id)arg0 completion:(id)arg1 ;
-(void)_enrollOrDisableCDPAfterEnabledStateVerified:(id)arg0 ;
-(void)_handleBeneficiaryTrustWithCompletion:(id)arg0 ;
-(void)_handleCloudDataProtectionStateWithCompletion:(id)arg0 ;
-(void)_handleInteractiveRecoveryFlowWithCircleJoinResult:(id)arg0 completion:(id)arg1 ;
-(void)_handleJoinResult:(id)arg0 completion:(id)arg1 ;
-(void)_handlePreflightError:(id)arg0 completion:(id)arg1 ;
-(void)_handleRecoveryResetRequestWithCompletion:(id)arg0 ;
-(void)_handleiCDPStatusCheckError:(id)arg0 completion:(id)arg1 ;
-(void)_performInteractivelyAuthenticatedRepair:(id)arg0 ;
-(void)_performSilentlyAuthenticatedRepair:(id)arg0 ;
-(void)_postRecoveryEnableSecureBackupWithContext:(id)arg0 completion:(id)arg1 ;
-(void)_preflightAccountStateWithContext:(id)arg0 completion:(id)arg1 ;
-(void)_recoverSecureBackupWithCircleJoinResult:(id)arg0 completion:(id)arg1 ;
-(void)_refreshAndAuthenticateWithContext:(id)arg0 ;
-(void)_resetAccountCDPStateWithCompletion:(id)arg0 ;
-(void)circleController:(id)arg0 secureBackupRecordsArePresentWithCompletion:(id)arg1 ;
-(void)dealloc;
-(void)handleCloudDataProtectionStateWithCompletion:(id)arg0 ;
-(void)promptForAdoptionOfMultipleICSCWithCompletion:(id)arg0 ;
-(void)promptForLocalSecretWithCompletion:(id)arg0 ;
-(void)repairCloudDataProtectionStateWithCompletion:(id)arg0 ;
-(void)shouldPerformRepairWithOptionForceFetch:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif