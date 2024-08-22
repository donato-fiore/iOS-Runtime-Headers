// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUCOREUPDATE_H
#define SUCOREUPDATE_H

@class NSString, NSError, NSDictionary, SUCoreFSM;
@protocol SUCoreFSMDelegate, SUCoreMobileAssetDelegate, SUCoreMSUDelegate, OS_dispatch_queue, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "SUCoreMobileAsset.h"
#import "SUCoreMSU.h"
#import "SUCorePolicy.h"
#import "SUCoreDescriptor.h"

@interface SUCoreUpdate : NSObject <SUCoreFSMDelegate, SUCoreMobileAssetDelegate, SUCoreMSUDelegate>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientDelegateCallbackQueue; // ivar: _clientDelegateCallbackQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *failedAttemptError; // ivar: _failedAttemptError
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SUCoreMobileAsset *maControl; // ivar: _maControl
@property (readonly, nonatomic) SUCoreMSU *msuControl; // ivar: _msuControl
@property (retain, nonatomic) SUCorePolicy *policy; // ivar: _policy
@property (readonly, nonatomic) NSDictionary *stateTable; // ivar: _stateTable
@property (readonly) Class superclass;
@property (nonatomic) NSInteger targetPhase; // ivar: _targetPhase
@property (readonly, weak, nonatomic) id *updateDelegate; // ivar: _updateDelegate
@property (readonly, nonatomic) SUCoreDescriptor *updateDescriptor; // ivar: _updateDescriptor
@property (readonly, nonatomic) SUCoreFSM *updateFSM; // ivar: _updateFSM
@property (readonly, nonatomic) NSString *updateName; // ivar: _updateName
@property (retain, nonatomic) NSObject<OS_os_transaction> *updateTransaction; // ivar: _updateTransaction
@property (readonly, nonatomic) NSString *updateUUID; // ivar: _updateUUID


+(id)_generateStateTable;
-(NSInteger)actionAdvanceBrainLoadSuccess:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionAdvanceDownloadPreflighted:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionAdvanceSUDownloaded:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionAdvanceSuspended:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionApplyUpdate:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionCancelPrepare:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionCheckSpace:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionChooseErrorSpaceCheck:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionDecideApplyUpdate:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionDecideDownloadSU:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionDecideDownloadSpaceCheck:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionDecideLoadBrain:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionDecidePreflightDownloadSU:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionDecidePrepareUpdate:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionDecideResumeUpdate:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionDecideSuspendUpdate:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionDownloadSU:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionLoadBrain:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionPreflightDownloadSU:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionPrepareUpdate:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionRemovePrepared:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionRemoveSU:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionReportAnomalyAPI:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionReportAnomalyAPIEnd:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionReportApplied:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionReportApplyFailed:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionReportAttemptFailure:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionReportBrainLoadProgress:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionReportBrainLoadSuccess:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionReportCanceled:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionReportDownloadPreflighted:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionReportDownloadProgress:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionReportDownloadStalled:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionReportPrepareProgress:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionReportPrepared:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionReportResumeCurrentFailed:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionReportResumeCurrentSuccess:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionReportSUDownloaded:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionResumeCurrentUpdate:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionResumeUpdate:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionSuspendUpdate:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionUnknownAction:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionUpdateTarget:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionUpdateTargetReconfig:(id)arg0 error:(*id)arg1 ;
-(NSInteger)performAction:(id)arg0 onEvent:(id)arg1 inState:(id)arg2 withInfo:(id)arg3 nextState:(id)arg4 error:(*id)arg5 ;
-(id)copyCurrentState;
-(id)initWithDelegate:(id)arg0 updateDescriptor:(id)arg1 updateUUID:(id)arg2 ;
-(id)initWithDelegate:(id)arg0 updateDescriptor:(id)arg1 updateUUID:(id)arg2 withCallbackQueue:(id)arg3 ;
-(void)_adjustTarget:(NSInteger)arg0 withPolicy:(id)arg1 ;
-(void)_applyAttemptFailed:(id)arg0 ;
-(void)_cleanupAfterAttempt;
-(void)_eventAfterReachingPhase:(NSInteger)arg0 ;
-(void)_trackUpdateAnomaly:(id)arg0 result:(NSInteger)arg1 description:(id)arg2 ;
-(void)_trackUpdateError:(id)arg0 forReason:(id)arg1 error:(id)arg2 ;
-(void)_updateAnomaly:(id)arg0 ;
-(void)_updateApplied;
-(void)_updateAssetDownloadPreflighted;
-(void)_updateAssetDownloadProgress:(id)arg0 ;
-(void)_updateAssetDownloadStalled:(id)arg0 ;
-(void)_updateAssetDownloaded:(id)arg0 ;
-(void)_updateAttemptFailed:(id)arg0 ;
-(void)_updateBrainLoadProgress:(id)arg0 ;
-(void)_updateBrainLoadStalled:(id)arg0 ;
-(void)_updateBrainLoaded:(id)arg0 ;
-(void)_updateCanceled;
-(void)_updateCurrentResumeFailed:(id)arg0 ;
-(void)_updateCurrentResumed;
-(void)_updatePrepareProgress:(id)arg0 ;
-(void)_updatePrepared:(id)arg0 ;
-(void)cancelCurrentUpdate;
-(void)maAnomaly:(id)arg0 ;
-(void)maAssetRemoveFailed:(id)arg0 ;
-(void)maAssetRemoved;
-(void)maDownloadFailed:(id)arg0 ;
-(void)maDownloadProgress:(id)arg0 ;
-(void)maDownloadStalled:(id)arg0 ;
-(void)maDownloaded:(id)arg0 ;
-(void)msuApplied;
-(void)msuApplyFailed:(id)arg0 ;
-(void)msuBrainLoadFailed:(id)arg0 ;
-(void)msuBrainLoadProgress:(id)arg0 ;
-(void)msuBrainLoadStalled:(id)arg0 ;
-(void)msuBrainLoaded:(id)arg0 ;
-(void)msuPrepareFailed:(id)arg0 ;
-(void)msuPrepareProgress:(id)arg0 ;
-(void)msuPrepared:(id)arg0 ;
-(void)msuRemoveFailed:(id)arg0 ;
-(void)msuRemoved;
-(void)msuResumeFailed:(id)arg0 ;
-(void)msuResumed;
-(void)msuSUDownloadPreflightFailed:(id)arg0 ;
-(void)msuSUDownloadPreflighted;
-(void)msuSuspendFailed:(id)arg0 ;
-(void)msuSuspended;
-(void)resumeCurrentUpdate;
-(void)targetApplied:(id)arg0 ;
-(void)targetBrainLoaded:(id)arg0 ;
-(void)targetDownloadPreflighted:(id)arg0 ;
-(void)targetDownloaded:(id)arg0 ;
-(void)targetPrepared:(id)arg0 ;


@end


#endif