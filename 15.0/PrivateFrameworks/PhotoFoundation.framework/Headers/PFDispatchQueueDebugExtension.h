// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFDISPATCHQUEUEDEBUGEXTENSION_H
#define PFDISPATCHQUEUEDEBUGEXTENSION_H

@class NSMutableDictionary;


#import "PFDispatchQueueStatisticsExtension.h"
#import "PFSerialQueue.h"

@interface PFDispatchQueueDebugExtension : PFDispatchQueueStatisticsExtension {
    NSMutableDictionary *_allBlockInfoByCallSite;
    NSUInteger _count;
    PFSerialQueue *_serializer;
}




-(Class)blockInfoClass;
-(id)_queueUsageByEnqueueSiteDescription;
-(id)_queueUsageByExecutionTimeDescription;
-(id)description;
-(id)init;
-(id)queue:(id)arg0 receivedDispatchAfter:(id)arg1 ;
-(id)queue:(id)arg0 receivedDispatchAsync:(id)arg1 ;
-(id)queue:(id)arg0 receivedDispatchBarrierAsync:(id)arg1 ;
-(id)queue:(id)arg0 receivedDispatchBarrierSync:(id)arg1 ;
-(id)queue:(id)arg0 receivedDispatchGroup:(id)arg1 async:(id)arg2 ;
-(id)queue:(id)arg0 receivedDispatchGroup:(id)arg1 notify:(id)arg2 ;
-(id)queue:(id)arg0 receivedDispatchSync:(id)arg1 ;
-(id)recordBlockInfo:(id)arg0 ;
-(void)installOnQueue:(id)arg0 ;
-(void)showQueueUsageByEnqueueSite;
-(void)showQueueUsageByExecutionTime;


@end


#endif