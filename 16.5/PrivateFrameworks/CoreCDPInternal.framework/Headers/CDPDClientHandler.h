// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPDCLIENTHANDLER_H
#define CDPDCLIENTHANDLER_H

@class NSXPCConnection;
@protocol CDPDaemonProtocol;

#import <Foundation/Foundation.h>

#import "CDPWalrusDaemonService.h"

@interface CDPDClientHandler : NSObject <CDPDaemonProtocol>

 {
    NSXPCConnection *_connection;
    NSUInteger _entitlements;
    NSUInteger _clientType;
    id *_notificationObject;
    CDPWalrusDaemonService *_walrusDaemonService;
}




-(BOOL)_allowDataRecovery;
-(BOOL)_allowFollowUps;
-(BOOL)_allowRecoveryKey;
-(BOOL)_allowStateMachineAccess;
-(BOOL)_allowUtilityAccess;
-(id)initWithConnection:(id)arg0 entitlements:(NSUInteger)arg1 clientType:(NSUInteger)arg2 ;
-(void)_performRecoveryWithContext:(id)arg0 uiProvider:(id)arg1 authProvider:(id)arg2 errorProviuder:(id)arg3 resultParser:(id)arg4 secureBackUpController:(id)arg5 completion:(id)arg6 ;
-(void)_removeObserver;
-(void)_reportCDPJoinMetricsWithContext:(id)arg0 didJoin:(BOOL)arg1 withError:(id)arg2 ;
-(void)_startObservingConnectionStateForRepairWithStateMachine:(id)arg0 context:(id)arg1 ;
-(void)attemptToEscrowPreRecord:(id)arg0 context:(id)arg1 completion:(id)arg2 ;
-(void)attemptToEscrowPreRecord:(id)arg0 preRecordUUID:(id)arg1 secretType:(NSUInteger)arg2 context:(id)arg3 completion:(id)arg4 ;
-(void)broadcastWalrusStateChange;
-(void)clearFollowUpWithContext:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)deleteRecoveryKeyWithContext:(id)arg0 uiProvider:(id)arg1 completion:(id)arg2 ;
-(void)deviceEscrowRecordRecoverableWithContext:(id)arg0 completion:(id)arg1 ;
-(void)fetchEscrowRecordDevicesWithContext:(id)arg0 usingCache:(BOOL)arg1 completion:(id)arg2 ;
-(void)fetchTermsAcceptanceForAccount:(id)arg0 completion:(id)arg1 ;
-(void)finishCyrusFlowAfterTermsAgreementWithContext:(id)arg0 uiProvider:(id)arg1 completion:(id)arg2 ;
-(void)finishOfflineLocalSecretChangeWithContext:(id)arg0 uiProvider:(id)arg1 completion:(id)arg2 ;
-(void)generateEscrowRecordStatusReportForContext:(id)arg0 usingCache:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)generateNewRecoveryKeyWithContext:(id)arg0 uiProvider:(id)arg1 completion:(id)arg2 ;
-(void)generateRandomRecoveryKeyWithContext:(id)arg0 completion:(id)arg1 ;
-(void)handleCloudDataProtectionStateWithContext:(id)arg0 uiProvider:(id)arg1 completion:(id)arg2 ;
-(void)hasLocalSecretWithCompletion:(id)arg0 ;
-(void)isICDPEnabledForDSID:(id)arg0 checkWithServer:(BOOL)arg1 completion:(id)arg2 ;
-(void)isOTEnabledForContext:(id)arg0 completion:(id)arg1 ;
-(void)isRecoveryKeyAvailableWithCompletion:(id)arg0 ;
-(void)isUserVisibleKeychainSyncEnabledWithCompletion:(id)arg0 ;
-(void)localSecretChangedTo:(id)arg0 secretType:(NSUInteger)arg1 context:(id)arg2 uiProvider:(id)arg3 completion:(id)arg4 ;
-(void)pcsKeysForServices:(id)arg0 completion:(id)arg1 ;
-(void)performRecoveryWithContext:(id)arg0 uiProvider:(id)arg1 authProvider:(id)arg2 completion:(id)arg3 ;
-(void)performSilentEscrowRecordRepairWithContext:(id)arg0 completion:(id)arg1 ;
-(void)postFollowUpWithContext:(id)arg0 completion:(id)arg1 ;
-(void)recoverAndSynchronizeSquirrelWithContext:(id)arg0 uiProvider:(id)arg1 completion:(id)arg2 ;
-(void)recoverSquirrelWithContext:(id)arg0 uiProvider:(id)arg1 completion:(id)arg2 ;
-(void)removeNonViewAwarePeersFromCircleWithContext:(id)arg0 completion:(id)arg1 ;
-(void)repairCloudDataProtectionStateWithContext:(id)arg0 uiProvider:(id)arg1 completion:(id)arg2 ;
-(void)repairWalrusWithCompletion:(id)arg0 ;
-(void)saveTermsAcceptance:(id)arg0 completion:(id)arg1 ;
-(void)setUserVisibleKeychainSyncEnabled:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)shouldPerformRepairForContext:(id)arg0 forceFetch:(BOOL)arg1 completion:(id)arg2 ;
-(void)shouldPerformSilentEscrowRecordRepairWithContext:(id)arg0 usingCache:(BOOL)arg1 completion:(id)arg2 ;
-(void)startCircleApplicationApprovalServerWithContext:(id)arg0 completion:(id)arg1 ;
-(void)startSilentEscrowRecordRepairWithContext:(id)arg0 completion:(id)arg1 ;
-(void)statusForDataPrivacyWithCompletion:(id)arg0 ;
-(void)updateDataPrivacyWithContext:(id)arg0 completion:(id)arg1 ;
-(void)updateLastSilentEscrowRecordRepairAttemptDate:(id)arg0 context:(id)arg1 completion:(id)arg2 ;
-(void)updateWalrusStatus:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)updateWebAccessStatus:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)verifyRecoveryKeyWithContext:(id)arg0 uiProvider:(id)arg1 completion:(id)arg2 ;
-(void)walrusStatusWithContext:(id)arg0 completion:(id)arg1 ;
-(void)webAccessStatusWithCompletion:(id)arg0 ;


@end


#endif