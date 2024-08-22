// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLCOMMANDQUEUEDESCRIPTORINTERNAL_H
#define MTLCOMMANDQUEUEDESCRIPTORINTERNAL_H

@protocol OS_dispatch_queue;


#import "MTLCommandQueueDescriptor.h"

@interface MTLCommandQueueDescriptorInternal : MTLCommandQueueDescriptor {
    NSUInteger _maxCommandBufferCount;
    NSUInteger _qosLevel;
    NSObject<OS_dispatch_queue> *_commitQueue;
    BOOL _commitSynchronously;
    NSObject<OS_dispatch_queue> *_completionQueue;
    BOOL _disableCrossQueueHazardTracking;
    BOOL _disableAsyncCompletionDispatch;
    NSUInteger _devicePartition;
}


@property (nonatomic) BOOL disableIOFencing; // ivar: _disableIOFencing
@property (nonatomic) BOOL enableLowLatencySignalSharedEvent; // ivar: _enableLowLatencySignalSharedEvent
@property (nonatomic) BOOL enableLowLatencyWaitSharedEvent; // ivar: _enableLowLatencyWaitSharedEvent
@property BOOL isOpenGLQueue; // ivar: _openGLQueue


-(BOOL)commitSynchronously;
-(BOOL)disableAsyncCompletionDispatch;
-(BOOL)disableCrossQueueHazardTracking;
-(NSUInteger)devicePartition;
-(NSUInteger)maxCommandBufferCount;
-(NSUInteger)qosLevel;
-(id)commitQueue;
-(id)completionQueue;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)init;
-(void)setCommitQueue:(id)arg0 ;
-(void)setCommitSynchronously:(BOOL)arg0 ;
-(void)setCompletionQueue:(id)arg0 ;
-(void)setDevicePartition:(NSUInteger)arg0 ;
-(void)setDisableAsyncCompletionDispatch:(BOOL)arg0 ;
-(void)setDisableCrossQueueHazardTracking:(BOOL)arg0 ;
-(void)setMaxCommandBufferCount:(NSUInteger)arg0 ;
-(void)setQosLevel:(NSUInteger)arg0 ;


@end


#endif