// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLQUEUEDISPATCHER_H
#define PLQUEUEDISPATCHER_H

@protocol OS_dispatch_queue, OS_dispatch_workloop;

#import <Foundation/Foundation.h>

#import "PLQueueDispatcherContext.h"

@interface PLQueueDispatcher : NSObject {
    PLQueueDispatcherContext *_userInitiatedContext;
    PLQueueDispatcherContext *_utilityContext;
    PLQueueDispatcherContext *_backgroundContext;
    NSObject<OS_dispatch_queue> *_sharedUtilityQueue;
    NSObject<OS_dispatch_queue> *_sharedBackgroundQueue;
    NSObject<OS_dispatch_workloop> *_sharedWorkloop;
}




+(id)debugDescriptionOfEnqueuedBlocksOnContext:(id)arg0 ;
+(id)sharedQueueDispatcher;
+(void)reportBlockDequeuedOnContext:(id)arg0 ;
// +(void)reportBlockEnqueued:(id)arg0 onContext:(unk)arg1 forLibrary:(id)arg2  ;
-(*unk)callOutForCurrentQoS;
-(id)_contextsTrackingBlocks;
-(id)contextForCurrentQoS;
-(id)debugDescription;
-(id)init;
-(id)sharedBackgroundQueue;
-(id)sharedUtilityQueue;
-(void)_handleUnexpectedQoSClass:(unsigned int)arg0 ;
-(void)_syncPerformBlockNotOnAnyContext:(id)arg0 ;
// -(void)async:(id)arg0 identifyingBlock:(unk)arg1 library:(id)arg2  ;
// -(void)sync:(id)arg0 identifyingBlock:(unk)arg1 library:(id)arg2  ;


@end


#endif