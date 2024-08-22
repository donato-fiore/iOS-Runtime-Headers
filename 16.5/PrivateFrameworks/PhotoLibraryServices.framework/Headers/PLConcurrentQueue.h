// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCONCURRENTQUEUE_H
#define PLCONCURRENTQUEUE_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PLConcurrentQueue : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableArray *_internalQueue_pendingBlocks;
    NSInteger _internalQueue_usedWidth;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // ivar: _targetQueue
@property (readonly, nonatomic) NSInteger width; // ivar: _width


-(id)init;
-(id)initWithTargetQueue:(id)arg0 width:(NSInteger)arg1 ;
-(void)_internalQueue_tryDispatchingNextPendingBlock;
-(void)dispatchAsync:(id)arg0 ;


@end


#endif