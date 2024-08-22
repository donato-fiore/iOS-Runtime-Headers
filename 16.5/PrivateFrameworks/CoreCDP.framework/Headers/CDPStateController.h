// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPSTATECONTROLLER_H
#define CDPSTATECONTROLLER_H



#import "CDPController.h"

@interface CDPStateController : CDPController



-(BOOL)deleteRecoveryKeyWithError:(*id)arg0 ;
-(BOOL)isDeviceEscrowRecordRecoverable:(*id)arg0 ;
-(BOOL)isManateeAvailable:(*id)arg0 ;
-(BOOL)isRecoveryKeyAvailableWithError:(*id)arg0 ;
-(BOOL)shouldPerformRepairWithOptionForceFetch:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)shouldPerformSilentEscrowRecordRepairUsingCache:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)updateLastSilentEscrowRecordRepairAttemptDate:(id)arg0 error:(*id)arg1 ;
-(id)generateRandomRecoveryKey:(*id)arg0 ;
-(id)init;
-(void)attemptToEscrowPreRecord:(id)arg0 completion:(id)arg1 ;
-(void)attemptToEscrowPreRecord:(id)arg0 preRecordUUID:(id)arg1 secretType:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)deleteRecoveryKey:(id)arg0 ;
-(void)deviceEscrowRecordRecoverableWithContext:(id)arg0 completion:(id)arg1 ;
-(void)fetchEscrowRecordDevicesWithContext:(id)arg0 usingCache:(BOOL)arg1 completion:(id)arg2 ;
-(void)finishCyrusFlowAfterTermsAgreementWithContext:(id)arg0 ;
-(void)finishOfflineLocalSecretChangeWithCompletion:(id)arg0 ;
-(void)generateEscrowRecordReportUsingCache:(BOOL)arg0 completion:(id)arg1 ;
-(void)generateNewRecoveryKey:(id)arg0 ;
-(void)handleCloudDataProtectionStateWithCompletion:(id)arg0 ;
-(void)handleURLActionWithInfo:(id)arg0 ;
-(void)handleURLActionWithInfo:(id)arg0 completion:(id)arg1 ;
-(void)isRecoveryKeyAvailableWithCompletion:(id)arg0 ;
-(void)localSecretChangedTo:(id)arg0 secretType:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)performSilentEscrowRecordRepairWithCompletion:(id)arg0 ;
-(void)recoverAndSynchronizeWithSquirrel:(id)arg0 ;
-(void)recoverWithSquirrel:(id)arg0 ;
-(void)repairCloudDataProtectionStateWithCompletion:(id)arg0 ;
-(void)shouldPerformRepairWithOptionForceFetch:(BOOL)arg0 completion:(id)arg1 ;
-(void)shouldPerformSilentEscrowRecordRepairUsingCache:(BOOL)arg0 completion:(id)arg1 ;
-(void)startCircleApplicationApprovalServer:(id)arg0 ;
-(void)startCircleApplicationApprovalServerSkipEscrowFetches:(id)arg0 ;
-(void)startSilentEscrowRecordRepairWithCompletion:(id)arg0 ;
-(void)verifyRecoveryKey:(id)arg0 ;


@end


#endif