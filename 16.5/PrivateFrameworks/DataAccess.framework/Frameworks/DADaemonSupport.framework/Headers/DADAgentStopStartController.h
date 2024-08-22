// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DADAGENTSTOPSTARTCONTROLLER_H
#define DADAGENTSTOPSTARTCONTROLLER_H

@class NSMutableArray;
@protocol DADAgentStopStartControllerDelegate;

#import <Foundation/Foundation.h>


@interface DADAgentStopStartController : NSObject {
    os_unfair_lock_s _lock;
    BOOL _agentsStopped;
    BOOL _unexecutedStopReceived;
    int _stopsLessStartsReceived;
    BOOL _blockEnqueued;
    int _generation;
    NSMutableArray *_pendingStopCompletionBlocks;
    NSMutableArray *_pendingStartCompletionBlocks;
    NSUInteger _serverToken;
    id<DADAgentStopStartControllerDelegate> *_delegate;
}




-(BOOL)_blockNotEnqueuedAndPendingWork;
-(BOOL)_blockShouldStart:(*BOOL)arg0 shouldStop:(*BOOL)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(int)enqueueDisableMonitoringAgents:(id)arg0 ;
-(void)_enqueueBlockIfNotEnqueuedAndPendingWork;
-(void)callBlocks:(id)arg0 ;
-(void)enqueueEnableMonitoringAgentsWithGeneration:(int)arg0 completion:(id)arg1 ;
-(void)reset;
-(void)startOrStopAsNeeded;


@end


#endif