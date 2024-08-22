// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPDOWNLOADOPERATION_H
#define FPDOWNLOADOPERATION_H

@class NSArray, NSMutableSet, NSMutableDictionary, NSObservation, NSFileCoordinator;
@protocol FPDaemonActionOperationClient, NSXPCProxyCreating><FPDaemonActionOperation;


#import "FPActionOperation.h"
#import "FPDownloadInfo.h"

@interface FPDownloadOperation : FPActionOperation <FPDaemonActionOperationClient>

 {
    NSArray *_items;
    FPDownloadInfo *_info;
    NSMutableSet *_itemsPendingDownload;
    id<NSXPCProxyCreating><FPDaemonActionOperation> *_remoteMoveOperation;
    NSMutableDictionary *_progressByRoot;
    NSObservation *_observation;
    NSMutableDictionary *_childProxies;
    NSFileCoordinator *_coordinator;
}


@property (copy, nonatomic) id *_t_patchActionOperationInfo; // ivar: __t_patchActionOperationInfo
@property (copy, nonatomic) id *downloadCompletionBlock; // ivar: _downloadCompletionBlock
@property (nonatomic) BOOL recursively; // ivar: _recursively


-(id)fp_prettyDescription;
-(id)initWithItems:(id)arg0 ;
-(id)initWithRemoteOperation:(id)arg0 info:(id)arg1 ;
-(void)_completedWithResultsByRoot:(id)arg0 errorsByRoot:(id)arg1 error:(id)arg2 ;
-(void)_recomputeDownloadInfoIfNecessary;
-(void)_removeProgressWithItemID:(id)arg0 ;
-(void)_retrieveChildProgressForItem:(id)arg0 childProxies:(id)arg1 parentSetup:(id)arg2 ;
-(void)_runWithRemoteOperation:(id)arg0 ;
-(void)_setupParentProgress;
-(void)_updateParentProgressForItem:(id)arg0 withUnitCount:(id)arg1 ;
-(void)_updateProgressWithUpdatedFileCountForItem:(id)arg0 ;
-(void)actionMain;
-(void)completedWithResult:(id)arg0 error:(id)arg1 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)presendNotifications;
-(void)remoteOperationCompletedRoot:(id)arg0 resultingItem:(id)arg1 error:(id)arg2 completion:(id)arg3 ;
-(void)remoteOperationCreatedRoot:(id)arg0 resultingItem:(id)arg1 completion:(id)arg2 ;
-(void)remoteOperationFinishedSendingPastUpdates;
-(void)remoteOperationProgressesAreReady;


@end


#endif