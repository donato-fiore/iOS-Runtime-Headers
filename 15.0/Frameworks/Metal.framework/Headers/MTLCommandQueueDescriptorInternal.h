// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
    NSUInteger _devicePartition;
}


@property BOOL isOpenGLQueue; // ivar: _openGLQueue


-(BOOL)commitSynchronously;
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
-(void)setDisableCrossQueueHazardTracking:(BOOL)arg0 ;
-(void)setMaxCommandBufferCount:(NSUInteger)arg0 ;
-(void)setQosLevel:(NSUInteger)arg0 ;


@end


#endif