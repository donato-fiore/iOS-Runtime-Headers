// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKOPERATION_H
#define CKOPERATION_H

@class NSOperation, NSError, NSDictionary, NSString, NSMutableDictionary;
@protocol CKOperationCallbacks, CKThrottlingCriteria, OS_os_transaction, OS_voucher, OS_os_activity, OS_dispatch_source, OS_dispatch_queue;


#import "CKOperationCallbackProxy.h"
#import "CKEventMetric.h"
#import "CKPlaceholderOperation.h"
#import "CKOperationMMCSRequestOptions.h"
#import "CKOperationConfiguration.h"
#import "CKOperationGroup.h"
#import "CKLogicalDeviceContext.h"
#import "CKOperationMetrics.h"
#import "CKOperationInfo.h"

@interface CKOperation : NSOperation <CKOperationCallbacks, CKThrottlingCriteria>

 {
    NSObject<OS_os_transaction> *_executingTransaction;
    NSObject<OS_voucher> *_clientVoucher;
    NSObject<OS_os_activity> *_osActivity;
    CKOperationCallbackProxy *_clientOperationCallbackProxy;
    int _executionState;
    BOOL _scheduledDiscretionaryOperation;
    BOOL _startedDiscretionaryOperation;
    BOOL _failedToScheduleDiscretionaryOperation;
    BOOL _startedDaemonOperation;
    BOOL _clouddConnectionInterrupted;
    BOOL _isDiscretionarySuspended;
    NSObject<OS_dispatch_source> *_timeoutSource;
    CKEventMetric *_operationMetric;
    *_xpc_activity_eligibility_changed_handler_s _xpcActivityEligibilityChangedHandler;
    NSUInteger _duetPreClearedMode;
    NSUInteger _discretionaryWhenBackgroundedState;
    NSUInteger _systemScheduler;
    NSError *_cancelError;
    CKPlaceholderOperation *_placeholderOperation;
}


@property (retain, nonatomic) CKOperationMMCSRequestOptions *MMCSRequestOptions; // ivar: _MMCSRequestOptions
@property (nonatomic) BOOL _ckRaiseInGeneratedCallbackImplementation; // ivar: __ckRaiseInGeneratedCallbackImplementation
@property (copy, nonatomic) NSDictionary *additionalRequestHTTPHeaders;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, nonatomic) CKOperationCallbackProxy *clientOperationCallbackProxy;
@property (copy, nonatomic) CKOperationConfiguration *configuration; // ivar: _configuration
@property (copy, nonatomic) CKOperationConfiguration *convenienceOperationConfiguration; // ivar: _convenienceOperationConfiguration
@property (retain, nonatomic) CKOperationGroup *convenienceOperationGroup; // ivar: _convenienceOperationGroup
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CKLogicalDeviceContext *deviceContext;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSString *flowControlKey;
@property (retain, nonatomic) CKOperationGroup *group; // ivar: _group
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFinished;
@property (readonly, nonatomic) BOOL isFinishingOnCallbackQueue; // ivar: _isFinishingOnCallbackQueue
@property (nonatomic) BOOL isOutstandingOperation; // ivar: _isOutstandingOperation
@property (retain, nonatomic) NSMutableDictionary *lifecycleCallbacks; // ivar: _lifecycleCallbacks
@property (copy, nonatomic) id *longLivedOperationWasPersistedBlock; // ivar: _longLivedOperationWasPersistedBlock
@property (retain, nonatomic) CKOperationMetrics *metrics; // ivar: _metrics
@property (copy, nonatomic) NSString *operationID; // ivar: _operationID
@property (readonly, nonatomic) CKOperationInfo *operationInfo;
@property (nonatomic) BOOL preferAnonymousRequests;
@property BOOL queueHasStarted; // ivar: _queueHasStarted
@property (copy, nonatomic) id *requestCompletedBlock; // ivar: _requestCompletedBlock
@property (nonatomic) NSUInteger requestOriginator; // ivar: _requestOriginator
@property (readonly, copy, nonatomic) CKOperationConfiguration *resolvedConfiguration; // ivar: _resolvedConfiguration
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesBackgroundSession; // ivar: _usesBackgroundSession


+(BOOL)_wireUpAssetContentForOperation:(id)arg0 inRecord:(id)arg1 checkSignatures:(BOOL)arg2 outError:(*id)arg3 ;
+(Class)operationClass;
+(SEL)daemonCallbackCompletionSelector;
+(id)assetInfoForOperation:(id)arg0 recordID:(id)arg1 recordKey:(id)arg2 arrayIndex:(NSInteger)arg3 ;
+(id)operationDaemonCallbackProtocol;
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)_BOOLForUnitTestOverride:(id)arg0 defaultValue:(BOOL)arg1 ;
-(BOOL)allowsCellularAccess;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)isConcurrent;
-(BOOL)isExecuting;
-(BOOL)isLongLived;
-(BOOL)transitionToExecuting;
-(BOOL)transitionToFinished;
-(CGFloat)timeoutIntervalForRequest;
-(CGFloat)timeoutIntervalForResource;
-(NSInteger)qualityOfService;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)CKShortDescriptionRedact:(BOOL)arg0 ;
-(id)_createPlaceholderOperation;
-(id)activityCreate;
-(id)applicationBundleIdentifierForContainerAccess;
-(id)ckShortDescription;
-(id)container;
-(id)containerID;
-(id)init;
-(id)operationGroupName;
-(id)unitTestOverrides;
-(void)_cancelDaemonOperation;
-(void)_finishDiscretionaryOperation;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_handleRemoteProxyFailureWithError:(id)arg0 ;
-(void)addUnitTestOverrides:(id)arg0 ;
-(void)applyConvenienceConfiguration:(id)arg0 ;
-(void)cancel;
-(void)cancelWithError:(id)arg0 ;
-(void)cancelWithUnderlyingError:(id)arg0 ;
-(void)cancelWithUnderlyingError:(id)arg0 message:(id)arg1 ;
-(void)dealloc;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)finishWithError:(id)arg0 ;
-(void)handleDaemonOperationWillStartWithClassName:(id)arg0 isTopLevelDaemonOperation:(BOOL)arg1 replyBlock:(id)arg2 ;
-(void)handleDiscretionaryOperationShouldStart:(BOOL)arg0 nonDiscretionary:(BOOL)arg1 error:(id)arg2 ;
-(void)handleDiscretionaryOperationShouldSuspend;
-(void)handleLongLivedOperationDidPersist;
-(void)handleOperationDidCompleteWithMetrics:(id)arg0 error:(id)arg1 ;
-(void)handleRequestDidComplete:(id)arg0 ;
-(void)handleSystemDidImposeInfo:(id)arg0 ;
-(void)main;
-(void)performCKOperation;
-(void)setAllowsCellularAccess:(BOOL)arg0 ;
-(void)setCompletionBlock:(id)arg0 ;
-(void)setContainer:(id)arg0 ;
-(void)setLongLived:(BOOL)arg0 ;
-(void)setQualityOfService:(NSInteger)arg0 ;
-(void)setTimeoutIntervalForRequest:(CGFloat)arg0 ;
-(void)setTimeoutIntervalForResource:(CGFloat)arg0 ;
-(void)start;
-(void)withContainerScopedDaemon:(id)arg0 ;


@end


#endif