// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXMVISIONENGINE_H
#define AXMVISIONENGINE_H

@class NSMutableArray, NSString, NSArray;
@protocol AXMVisionEngineNodeConnectionDelegate, AXMTaskDispatcherDelegate, AXMServiceDelegate, NSCopying, NSSecureCoding, AXMDescribing, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AXMImageRegistrationNode.h"
#import "_AXMVisionEngineAnalysisTask.h"
#import "AXMService.h"
#import "AXMVisionEngineCache.h"
#import "AXMSequenceRequestManager.h"
#import "AXMTaskDispatcher.h"

@interface AXMVisionEngine : NSObject <AXMVisionEngineNodeConnectionDelegate, AXMTaskDispatcherDelegate, AXMServiceDelegate, NSCopying, NSSecureCoding, AXMDescribing>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_sourceNodes;
    NSMutableArray *_queue_evaluationNodes;
    AXMImageRegistrationNode *_queue_imageRegistrationNode;
    NSMutableArray *_queue_resultHandlers;
    BOOL _queue_shouldNotifyServiceOfEngineConfigChange;
    _AXMVisionEngineAnalysisTask *_queue_currentTask;
}


@property (retain, nonatomic) AXMService *axMediaUtilsService; // ivar: _axMediaUtilsService
@property (retain, nonatomic) AXMVisionEngineCache *cache; // ivar: _cache
@property (readonly, nonatomic) NSInteger cacheSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=areDiagnosticsEnabled) BOOL diagnosticsEnabled; // ivar: _diagnosticsEnabled
@property (nonatomic) BOOL disableResultLogging; // ivar: _disableResultLogging
@property (readonly, nonatomic) NSArray *evaluationNodes;
@property (readonly) NSUInteger hash;
@property (copy) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL imageRegistrationFilteringEnabled; // ivar: _imageRegistrationFilteringEnabled
@property (readonly, nonatomic) BOOL isCachingEnabled;
@property NSInteger maximumQueueSize; // ivar: _maximumQueueSize
@property (nonatomic) NSInteger minimumImageRegistrationSignalLevel; // ivar: _minimumImageRegistrationSignalLevel
@property BOOL prioritySchedulingAllowMultipleNodeExecution; // ivar: _prioritySchedulingAllowMultipleNodeExecution
@property BOOL prioritySchedulingEnabled; // ivar: _prioritySchedulingEnabled
@property (retain, nonatomic) AXMSequenceRequestManager *sequenceRequestManager; // ivar: _sequenceRequestManager
@property (readonly, nonatomic) NSArray *sourceNodes;
@property (readonly) Class superclass;
@property (retain, nonatomic) AXMTaskDispatcher *taskDispatcher; // ivar: _taskDispatcher
@property NSUInteger thresholdPriority; // ivar: _thresholdPriority


+(BOOL)supportsSecureCoding;
-(BOOL)_queue_activeEvaluationNodesExclusivelyUseVisionFramework:(id)arg0 ;
-(BOOL)_queue_nodeIdentifierExists:(id)arg0 ;
-(BOOL)_queue_shouldContinueWithoutResultHandlers:(id)arg0 ;
-(BOOL)_queue_shouldEvaluateNode:(id)arg0 withOptions:(id)arg1 ;
-(BOOL)canAddEvaluationNode:(id)arg0 ;
-(BOOL)canAddEvaluationNodeClass:(Class)arg0 ;
-(BOOL)canAddSourceNode:(id)arg0 ;
-(BOOL)canAddSourceNodeClass:(Class)arg0 ;
-(BOOL)diagnosticsEnabled:(id)arg0 ;
-(BOOL)engineWillAcceptTiggerWithSource:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEngine:(id)arg0 ;
-(BOOL)nodeIdentifierExists:(id)arg0 ;
-(id)_queue_activeEvaluationNodesForOptions:(id)arg0 applyPriorityScheduling:(BOOL)arg1 prioritySchedulingAllowMultipleNodeExecution:(BOOL)arg2 ;
-(id)_queue_evaluationNodeWithIdentifier:(id)arg0 ;
-(id)_queue_makeUniqueIdentifierForNode:(Class)arg0 ;
-(id)_queue_sourceNodeWithIdentifier:(id)arg0 ;
-(id)axmDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)evaluationNodeWithIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)makeUniqueIdentifierForNode:(Class)arg0 ;
-(id)resultHandlers;
-(id)sourceNodeWithIdentifier:(id)arg0 ;
-(void)_commonInit;
-(void)_invokeFullQueueResultHandlersForContext:(id)arg0 ;
-(void)_invokeResultHandlers:(id)arg0 withError:(id)arg1 ;
-(void)_invokeResultHandlers:(id)arg0 withResult:(id)arg1 ;
-(void)_queue_addResultHandler:(id)arg0 ;
-(void)_queue_evaluateWithSource:(id)arg0 context:(id)arg1 ;
-(void)_queue_handleEvaluatedContext:(id)arg0 result:(id)arg1 error:(id)arg2 ;
-(void)_queue_logEvaluatedResult:(id)arg0 ;
-(void)_queue_remotelyEvaluateWithSource:(id)arg0 context:(id)arg1 ;
-(void)_queue_removeAllResultHandlers;
-(void)_queue_removeResultHandler:(id)arg0 ;
-(void)addEvaluationNode:(id)arg0 ;
-(void)addResultHandler:(id)arg0 ;
-(void)addSourceNode:(id)arg0 ;
-(void)addSourceNodes:(id)arg0 evaluationNodes:(id)arg1 ;
-(void)axMediaUtilitiesService:(id)arg0 eventOccurred:(NSInteger)arg1 ;
-(void)axmAppendRecursiveDescription:(id)arg0 withIndentation:(NSInteger)arg1 ;
-(void)captureSessionNodeDidBeginProcessingFrames:(id)arg0 ;
-(void)captureSessionNodeDidDropFrame:(id)arg0 ;
-(void)captureSessionNodeDidEndProcessingFrames:(id)arg0 ;
-(void)captureSessionNodeWillProcessFrame:(id)arg0 ;
-(void)disableResultCaching;
-(void)dispatcher:(id)arg0 handleTask:(id)arg1 ;
-(void)enableResultCachingWithCacheSize:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)insertEvaluationNode:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)insertSourceNode:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)prewarmEngine;
-(void)purgeResources:(id)arg0 ;
-(void)removeAllEvaluationNodes;
-(void)removeAllResultHandlers;
-(void)removeAllSourceNodes;
-(void)removeEvaluationNode:(id)arg0 ;
-(void)removeResultHandler:(id)arg0 ;
-(void)removeSourceNode:(id)arg0 ;
-(void)triggerWithSource:(id)arg0 context:(id)arg1 ;
-(void)updateEngineConfiguration:(id)arg0 ;


@end


#endif