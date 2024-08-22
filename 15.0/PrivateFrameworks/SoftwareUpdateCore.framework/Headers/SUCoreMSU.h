// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUCOREMSU_H
#define SUCOREMSU_H

@class MSUUpdateBrainAssetLoader, NSString;
@protocol OS_os_transaction, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SUCoreDescriptor.h"

@interface SUCoreMSU : NSObject

@property (retain, nonatomic) NSObject<OS_os_transaction> *applyUpdateTransaction; // ivar: _applyUpdateTransaction
@property (retain, nonatomic) MSUUpdateBrainAssetLoader *brainLoader; // ivar: _brainLoader
@property (retain, nonatomic) NSObject<OS_os_transaction> *cancelPrepareTransaction; // ivar: _cancelPrepareTransaction
@property (nonatomic) BOOL cancelingPrepare; // ivar: _cancelingPrepare
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientDelegateCallbackQueue; // ivar: _clientDelegateCallbackQueue
@property (retain, nonatomic) NSString *descriptionName; // ivar: _descriptionName
@property (retain, nonatomic) NSObject<OS_os_transaction> *loadBrainTransaction; // ivar: _loadBrainTransaction
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *msuControlQueue; // ivar: _msuControlQueue
@property (readonly, weak, nonatomic) id *msuDelegate; // ivar: _msuDelegate
@property (nonatomic) NSInteger msuHandle; // ivar: _msuHandle
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *msuOperationQueue; // ivar: _msuOperationQueue
@property (nonatomic) float nextProgressThreshold; // ivar: _nextProgressThreshold
@property (nonatomic) BOOL performingOperation; // ivar: _performingOperation
@property (retain, nonatomic) NSObject<OS_os_transaction> *preflightDownloadSUTransaction; // ivar: _preflightDownloadSUTransaction
@property (retain, nonatomic) NSObject<OS_os_transaction> *preflightFDRRecoveryTransaction; // ivar: _preflightFDRRecoveryTransaction
@property (retain, nonatomic) NSObject<OS_os_transaction> *preflightPersonalizeTransaction; // ivar: _preflightPersonalizeTransaction
@property (retain, nonatomic) NSObject<OS_os_transaction> *preflightPrerequisiteCheckTransaction; // ivar: _preflightPrerequisiteCheckTransaction
@property (retain, nonatomic) NSObject<OS_os_transaction> *preflightWakeupTransaction; // ivar: _preflightWakeupTransaction
@property (nonatomic) BOOL prepareProgressFinal; // ivar: _prepareProgressFinal
@property (retain, nonatomic) NSObject<OS_os_transaction> *prepareUpdateTransaction; // ivar: _prepareUpdateTransaction
@property (retain, nonatomic) NSObject<OS_os_transaction> *removePreparedTransaction; // ivar: _removePreparedTransaction
@property (nonatomic) BOOL removingPrepared; // ivar: _removingPrepared
@property (retain, nonatomic) NSObject<OS_os_transaction> *resumeUpdateTransaction; // ivar: _resumeUpdateTransaction
@property (retain, nonatomic) NSObject<OS_os_transaction> *suspendUpdateTransaction; // ivar: _suspendUpdateTransaction
@property (retain, nonatomic) SUCoreDescriptor *updateDescriptor; // ivar: _updateDescriptor
@property (retain, nonatomic) NSString *updateUUID; // ivar: _updateUUID


+(id)commitStash:(id)arg0 ;
-(id)_newMSUOptionsUsingPolicy:(id)arg0 descriptor:(id)arg1 baseOptions:(id)arg2 ;
-(id)_newPreflightOptionsUsingPolicy:(id)arg0 subPolicyClass:(Class)arg1 descriptor:(id)arg2 baseOptions:(id)arg3 additionalOptions:(id)arg4 ;
-(id)_newPrepareOptionsUsingPolicy:(id)arg0 descriptor:(id)arg1 ;
-(id)description;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 withCallbackQueue:(id)arg1 ;
-(int)prepareProgress:(struct __CFDictionary *)arg0 ;
-(void)_addRemoteServerAccessControlToMSUOptions:(id)arg0 usingPolicy:(id)arg1 ;
-(void)_addUpdateMetricsEventFieldsToMSUOptions:(id)arg0 usingPolicy:(id)arg1 descriptor:(id)arg2 ;
-(void)_operationApplyUpdate:(id)arg0 ;
-(void)_operationLoadBrain:(id)arg0 ;
-(void)_operationPreflightFDRRecovery:(id)arg0 ;
-(void)_operationPreflightPersonalize:(id)arg0 ;
-(void)_operationPreflightPrerequisiteCheck:(id)arg0 ;
-(void)_operationPreflightSUDownload:(id)arg0 ;
-(void)_operationPreflightWakeup:(id)arg0 ;
-(void)_operationPrepareUpdate:(id)arg0 ;
-(void)_operationResumeUpdate;
-(void)_operationSuspendUpdate;
-(void)_removePrepared;
-(void)_reportAnomaly:(id)arg0 ;
-(void)_reportApplied;
-(void)_reportApplyFailed:(id)arg0 ;
-(void)_reportBrainLoadFailed:(id)arg0 ;
-(void)_reportBrainLoadProgress:(id)arg0 ;
-(void)_reportBrainLoadStalled:(id)arg0 ;
-(void)_reportBrainLoaded:(id)arg0 ;
-(void)_reportFDRRecoveryPreflightFailed:(id)arg0 ;
-(void)_reportFDRRecoveryPreflighted;
-(void)_reportPersonalizePreflightFailed:(id)arg0 ;
-(void)_reportPersonalizePreflighted;
-(void)_reportPrepareFailed:(id)arg0 ;
-(void)_reportPrepareProgress:(id)arg0 ;
-(void)_reportPrepared:(id)arg0 ;
-(void)_reportPrerequisiteCheckPreflightFailed:(id)arg0 ;
-(void)_reportPrerequisiteCheckPreflighted;
-(void)_reportRemoveFailed:(id)arg0 ;
-(void)_reportRemoved;
-(void)_reportResumeFailed:(id)arg0 ;
-(void)_reportResumed;
-(void)_reportSUDownloadPreflightFailed:(id)arg0 ;
-(void)_reportSUDownloadPreflighted;
-(void)_reportSuspendFailed:(id)arg0 ;
-(void)_reportSuspended;
-(void)_reportWakeupPreflightFailed:(id)arg0 ;
-(void)_reportWakeupPreflighted;
-(void)_trackMSUAnomaly:(id)arg0 result:(NSInteger)arg1 description:(id)arg2 ;
-(void)_trackMSUAnomaly:(id)arg0 result:(NSInteger)arg1 description:(id)arg2 underlying:(id)arg3 ;
-(void)_trackMSUBegin:(id)arg0 ;
-(void)_trackMSUEnd:(id)arg0 ;
-(void)_trackMSUEnd:(id)arg0 withResult:(NSInteger)arg1 withError:(id)arg2 ;
-(void)_trackMSUOptions:(id)arg0 optionsName:(id)arg1 withMSUOptions:(id)arg2 ;
-(void)applyUpdate:(id)arg0 ;
-(void)assignDescriptor:(id)arg0 updateUUID:(id)arg1 ;
-(void)cancelPrepare;
-(void)loadBrain:(id)arg0 ;
-(void)loadBrainProgress:(id)arg0 error:(id)arg1 ;
-(void)preflightDownloadSU:(id)arg0 ;
-(void)preflightFDRRecovery:(id)arg0 ;
-(void)preflightPersonalize:(id)arg0 ;
-(void)preflightPrerequisiteCheck:(id)arg0 ;
-(void)preflightWakeup:(id)arg0 ;
-(void)prepareUpdate:(id)arg0 ;
-(void)removePrepared;
-(void)resumeUpdate;
-(void)suspendUpdate;


@end


#endif