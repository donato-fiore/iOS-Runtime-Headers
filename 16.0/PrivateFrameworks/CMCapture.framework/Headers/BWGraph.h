// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWGRAPH_H
#define BWGRAPH_H

@class NSMutableArray, NSMutableDictionary, NSArray, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue, BWGraphStatusDelegate;

#import <Foundation/Foundation.h>

#import "BWMemoryPoolFlushAssertion.h"
#import "BWMemoryPool.h"

@interface BWGraph : NSObject {
    NSMutableArray *_nodes;
    NSMutableArray *_sourceNodes;
    NSMutableArray *_sinkNodes;
    NSMutableArray *_connections;
    NSMutableArray *_outputsWithSharedPools;
    NSMutableDictionary *_outputsWithSharedPoolsForAttachedMedia;
    NSMutableArray *_nodesToPrepareConcurrently;
    NSArray *_nodesToPrepareAfterGraphStart;
    NSMutableArray *_deferredPreparePrioritySinks;
    BOOL _deferredNodePrepareCancelled;
    NSMutableArray *_deferredStartSourceNodes;
    BOOL _haveStartedOrCancelledDeferredSourceNodes;
    BOOL _running;
    BOOL _beingConfigured;
    NSInteger _inflightConfigurationID;
    NSObject<OS_dispatch_group> *_sourceNodesStartGroup;
    NSObject<OS_dispatch_group> *_nonDeferredSourceNodesStartGroup;
    NSObject<OS_dispatch_queue> *_sourceStartQueue;
    NSObject<OS_dispatch_group> *_startGroup;
    NSObject<OS_dispatch_group> *_commitGroup;
    BOOL _supportsLiveReconfiguration;
    BOOL _classicRetainedBufferCount;
    NSString *_applicationID;
    int _clientPID;
    NSString *_modeDescription;
    NSString *_sourceDescription;
    int _graphStateTransitionTimeoutSeconds;
    unsigned int _configurationQueuePriority;
    BWMemoryPoolFlushAssertion *_flushAssertion;
}


@property (readonly, nonatomic) BOOL deferredNodePrepareEnabled;
@property int errorStatus; // ivar: _errorStatus
@property (retain, nonatomic) BWMemoryPool *memoryPool; // ivar: _memoryPool
@property (nonatomic) BOOL resumesConnectionsAsNodesArePrepared; // ivar: _resumesConnectionsAsNodesArePrepared
@property (readonly, nonatomic, getter=isRunningForContinuityCapture) BOOL runningForContinuityCapture; // ivar: _runningForContinuityCapture
@property (nonatomic) NSObject<BWGraphStatusDelegate> *statusDelegate; // ivar: _statusDelegate
@property (readonly, nonatomic) BOOL supportsLiveReconfiguration;


+(void)initialize;
-(BOOL)_resolveFormats:(*id)arg0 ;
-(BOOL)addNode:(id)arg0 error:(*id)arg1 ;
-(BOOL)commitConfigurationWithID:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)connectOutput:(id)arg0 toInput:(id)arg1 pipelineStage:(id)arg2 ;
-(BOOL)start:(*id)arg0 ;
-(BOOL)stop:(*id)arg0 ;
-(id)_breadthFirstEnumerator;
-(id)_depthFirstEnumeratorWithVertexOrdering:(int)arg0 ;
-(id)_reverseBreadthFirstEnumerator;
-(id)_reverseDepthFirstEnumeratorWithVertexOrdering:(int)arg0 ;
-(id)_sinkNodes;
-(id)_sourceNodes;
-(id)applicationID;
-(id)dotString;
-(id)init;
-(id)initWithConfigurationQueuePriority:(unsigned int)arg0 ;
-(id)modeDescription;
-(id)sourceDescription;
-(int)clientPID;
-(void)beginConfiguration;
-(void)cancelDeferredNodePrepare;
-(void)cancelDeferredSourceNodeStart;
-(void)dealloc;
-(void)enableConcurrentPrepareForNode:(id)arg0 ;
-(void)enableDeferredPrepareForNodesNotInPathOfSinkNode:(id)arg0 ;
-(void)enableDeferredStartForSourceNode:(id)arg0 ;
-(void)notifyWhenNonDeferredSourceNodesHaveStarted:(id)arg0 ;
-(void)setApplicationID:(id)arg0 ;
-(void)setClientPID:(int)arg0 ;
-(void)setModeDescription:(id)arg0 ;
-(void)setSourceDescription:(id)arg0 ;
-(void)startDeferredNodePrepareIfNeededWithCompletionHandler:(id)arg0 ;
-(void)startDeferredSourceNodesIfNeeded;
-(void)waitForNonDeferredSourceNodesToStart;
-(void)waitForStartOrCommitToComplete;


@end


#endif