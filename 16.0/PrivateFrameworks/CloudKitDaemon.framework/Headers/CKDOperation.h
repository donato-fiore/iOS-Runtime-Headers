// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDOPERATION_H
#define CKDOPERATION_H

@class NSOperation, CKOperationMMCSRequestOptions, NSString, NSNumber, NSMutableArray, NSError, NSDate, CKOperationInfo, CKOperationMetrics, CKSignpost, NSDictionary, UMUserSyncTask;
@protocol CKThrottlingCriteria, OS_os_activity, OS_dispatch_queue, OS_dispatch_group, CKOperationCallbacks, OS_os_transaction;


#import "CKDOperationMetrics.h"
#import "CKDContainer.h"
#import "CKDLogicalDeviceContext.h"
#import "CKDOperation.h"
#import "CKDURLRequest.h"

@interface CKDOperation : NSOperation <CKThrottlingCriteria>

 {
    NSUInteger _state;
    NSObject<OS_os_activity> *_osActivity;
    int _executionState;
}


@property (readonly, copy) CKDOperationMetrics *MMCSMetrics; // ivar: _MMCSMetrics
@property (readonly, nonatomic) CKOperationMMCSRequestOptions *MMCSRequestOptions;
@property (readonly, nonatomic) unsigned int QOSClass;
@property (readonly, nonatomic) BOOL allowsCellularAccess;
@property (readonly, nonatomic) BOOL allowsExpensiveNetworkAccess;
@property (readonly, nonatomic) BOOL allowsPowerNapScheduling;
@property (readonly, nonatomic) NSString *applicationBundleIdentifierForContainerAccess;
@property (readonly, nonatomic) NSString *applicationBundleIdentifierForNetworkAttribution;
@property (readonly, nonatomic) NSString *authPromptReason;
@property (readonly, nonatomic) BOOL automaticallyRetryNetworkFailures;
@property (readonly, nonatomic) NSNumber *cacheDeleteAvailableSpaceClass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (retain, nonatomic) NSMutableArray *childOperations; // ivar: _childOperations
@property (retain, nonatomic) NSObject<OS_dispatch_group> *childOperationsGroup; // ivar: _childOperationsGroup
@property (retain, nonatomic) NSObject<CKOperationCallbacks> *clientOperationCallbackProxy; // ivar: _clientOperationCallbackProxy
@property (readonly, nonatomic) NSInteger clientQueuePriority;
@property (readonly, copy) CKDOperationMetrics *cloudKitMetrics; // ivar: _cloudKitMetrics
@property (readonly, nonatomic) CKDContainer *container;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CKDLogicalDeviceContext *deviceContext;
@property (nonatomic) BOOL didAttemptDugongKeyRoll; // ivar: _didAttemptDugongKeyRoll
@property (readonly, nonatomic) NSUInteger discretionaryWhenBackgroundedState;
@property (readonly, nonatomic) NSUInteger duetPreClearedMode;
@property (retain) NSError *error; // ivar: _error
@property (readonly, nonatomic) BOOL expectDelayBeforeRequestBegins;
@property (retain, nonatomic) NSMutableArray *finishedChildOperationIDs; // ivar: _finishedChildOperationIDs
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCloudKitSupportOperation;
@property (readonly, nonatomic) BOOL isLongLived;
@property (readonly, nonatomic) BOOL isLongLivedCallbackRelayOperation; // ivar: _isLongLivedCallbackRelayOperation
@property (retain, nonatomic) NSDate *metricExecuteStartDate; // ivar: _metricExecuteStartDate
@property (readonly, nonatomic) NSUInteger networkServiceType;
@property (readonly, nonatomic) NSString *operationGroupID;
@property (readonly, nonatomic) NSString *operationGroupName;
@property (readonly, nonatomic) NSNumber *operationGroupQuantityNumber;
@property (readonly, nonatomic) NSString *operationID;
@property (retain, nonatomic) CKOperationInfo *operationInfo; // ivar: _operationInfo
@property (readonly, nonatomic) CKOperationMetrics *operationMetrics;
@property (readonly, nonatomic) NSObject<OS_os_activity> *osActivity;
@property (weak, nonatomic) CKDOperation *parentOperation; // ivar: _parentOperation
@property (nonatomic) uint8_t pcsWaitCount; // ivar: _pcsWaitCount
@property (readonly, nonatomic) BOOL preferAnonymousRequests;
@property (retain, nonatomic) CKDURLRequest *request; // ivar: _request
@property (copy, nonatomic) id *requestCompletedBlock; // ivar: _requestCompletedBlock
@property (nonatomic) NSUInteger requestOriginator; // ivar: _requestOriginator
@property (retain, nonatomic) NSMutableArray *requestUUIDs; // ivar: _requestUUIDs
@property (readonly, nonatomic) BOOL resolvedAutomaticallyRetryNetworkFailures;
@property (readonly, nonatomic) NSUInteger resolvedDiscretionaryNetworkBehavior;
@property (readonly, nonatomic) BOOL shouldCheckAppVersion;
@property (nonatomic) BOOL shouldPipelineFetchAllChangesRequests; // ivar: _shouldPipelineFetchAllChangesRequests
@property (readonly, nonatomic) CKSignpost *signpost; // ivar: _signpost
@property (readonly, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (nonatomic) NSUInteger state;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *stateTransitionGroup; // ivar: _stateTransitionGroup
@property (retain, nonatomic) CKDContainer *strongContainer; // ivar: _strongContainer
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsDeviceThrottling;
@property (readonly, nonatomic) NSUInteger systemScheduler;
@property (readonly, nonatomic) CGFloat timeoutIntervalForRequest;
@property (readonly, nonatomic) CGFloat timeoutIntervalForResource;
@property (readonly, weak, nonatomic) CKDOperation *topmostParentOperation;
@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction; // ivar: _transaction
@property (readonly, nonatomic) NSDictionary *unitTestOverrides;
@property (nonatomic) BOOL useClearAssetEncryption; // ivar: _useClearAssetEncryption
@property (nonatomic) BOOL useEncryption; // ivar: _useEncryption
@property (retain, nonatomic) UMUserSyncTask *userSyncTask; // ivar: _userSyncTask
@property (readonly, nonatomic) BOOL usesBackgroundSession;
@property (weak, nonatomic) CKDContainer *weakContainer; // ivar: _weakContainer


+(NSInteger)isPredominatelyDownload;
+(id)_globalOperationCallbackQueueForQOS:(NSInteger)arg0 ;
-(BOOL)_checkAppVersion;
-(BOOL)checkAndClearUnitTestOverrides:(id)arg0 ;
-(BOOL)finishWithAssetDownloadStagingInfo:(id)arg0 fileURL:(*id)arg1 fileHandle:(*id)arg2 error:(*id)arg3 ;
-(BOOL)isConcurrent;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(BOOL)isNetworkingBehaviorEquivalentForOperation:(id)arg0 ;
-(BOOL)isOperationType:(int)arg0 ;
-(BOOL)isTopLevelDaemonOperation;
-(BOOL)isWaitingOnPCS;
-(BOOL)makeStateTransition;
-(BOOL)shouldKeepXPCConnectionAlive;
-(BOOL)validateAgainstLiveContainer:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)discretionaryNetworkBehavior;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)CKStatusReportLogGroups;
-(id)CKStatusReportProperties;
-(id)activityCreate;
-(id)additionalRequestHTTPHeaders;
-(id)analyticsPayload;
-(id)baseOperationAndErrorInfoCoreAnalyticsPayloadWithError:(id)arg0 ;
-(id)ckShortDescription;
-(id)createConcurrentQueue;
-(id)createInactiveConcurrentQueue;
-(id)createInactiveSerialQueue;
-(id)createSerialQueue;
-(id)dugongKeyRollAnalyticsPayloadWithError:(id)arg0 ;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(id)openFileWithOpenInfo:(id)arg0 error:(*id)arg1 ;
-(id)statusReportWithIndent:(NSUInteger)arg0 ;
-(int)operationType;
-(void)_continueOperationStart;
-(void)_determineNetworkServiceType;
-(void)_ensureOperationGroup;
-(void)_finishInternalOnCallbackQueueWithError:(id)arg0 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_registerAttemptForOperation;
-(void)beginUserSyncTask;
-(void)cancel;
-(void)combineMetricsWithOperation:(id)arg0 ;
-(void)configureQualityOfServiceFromOperationInfo:(id)arg0 ;
-(void)configureRequest:(id)arg0 ;
-(void)dealloc;
-(void)finishWithError:(id)arg0 ;
-(void)main;
-(void)makeStateTransition:(BOOL)arg0 ;
-(void)noteOperationDidFinishWaitingOnPCS;
-(void)noteOperationWillWaitOnPCS;
-(void)request:(id)arg0 didFinishWithMetrics:(id)arg1 w3cNavigationTiming:(id)arg2 ;
-(void)sendCoreAnalyticsEventOperationFinished;
-(void)setCompletionBlock:(id)arg0 ;
-(void)setQualityOfService:(NSInteger)arg0 ;
-(void)spawnAndRunOperationOfClass:(Class)arg0 operationInfo:(id)arg1 operationConfigurationBlock:(id)arg2 ;
-(void)spawnAndRunOperationOfClass:(Class)arg0 operationInfo:(id)arg1 spawnQueue:(id)arg2 container:(id)arg3 operationConfigurationBlock:(id)arg4 ;
-(void)spawnAndRunOperationOfClass:(Class)arg0 operationInfo:(id)arg1 spawnQueue:(id)arg2 operationConfigurationBlock:(id)arg3 ;
-(void)start;
-(void)transitionToExecuting;
-(void)transitionToFinished;
-(void)updateMetric:(NSUInteger)arg0 withBlock:(id)arg1 ;


@end


#endif