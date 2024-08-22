// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCONCURRENCYLIMITER_H
#define PLCONCURRENCYLIMITER_H

@protocol OS_dispatch_queue, OS_dispatch_workloop;

#import <Foundation/Foundation.h>


@interface PLConcurrencyLimiter : NSObject {
    NSObject<OS_dispatch_queue> *_userInitiatedQueueA;
    NSObject<OS_dispatch_queue> *_userInitiatedQueueB;
    NSObject<OS_dispatch_queue> *_backgroundAndUtilityQueue;
    NSObject<OS_dispatch_queue> *_sharedUtilityQueue;
    NSObject<OS_dispatch_queue> *_sharedBackgroundQueue;
    NSObject<OS_dispatch_workloop> *_sharedWorkloop;
    uint8_t _chooseQueueA;
}




+(BOOL)isRunningUnderLimiter;
+(id)debugDescriptionOfEnqueuedBlocksOnQueue:(id)arg0 ;
+(id)sharedLimiter;
+(void)configureListTrackingForDispatchQueue:(id)arg0 ;
+(void)reportBlockDequeuedOnQueue:(id)arg0 ;
// +(void)reportBlockEnqueued:(id)arg0 onQueue:(unk)arg1 forLibrary:(id)arg2  ;
-(*unk)callOutForCurrentQoS;
-(id)_nextDispatchQueueForCurrentQoS;
-(id)_queuesTrackingBlocks;
-(id)debugDescription;
-(id)init;
-(id)sharedBackgroundQueue;
-(id)sharedUtilityQueue;
-(void)_handleUnexpectedQoSClass:(unsigned int)arg0 ;
-(void)_syncPerformBlockNotOnAnyQueue:(id)arg0 ;
// -(void)async:(id)arg0 identifyingBlock:(unk)arg1 library:(id)arg2  ;
// -(void)asyncPerformOnContext:(id)arg0 identifyingBlock:(id)arg1 block:(unk)arg2  ;
-(void)dispatchAsync:(id)arg0 block:(id)arg1 ;
// -(void)sync:(id)arg0 identifyingBlock:(unk)arg1 library:(id)arg2  ;


@end


#endif