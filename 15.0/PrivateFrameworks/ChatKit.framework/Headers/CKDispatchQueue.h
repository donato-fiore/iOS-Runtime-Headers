// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDISPATCHQUEUE_H
#define CKDISPATCHQUEUE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKDispatchQueue : NSObject {
    NSUInteger _fifo;
}


@property (nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) NSMutableDictionary *dispatchQueueBlocks; // ivar: _dispatchQueueBlocks
@property (retain, nonatomic) *__CFBinaryHeap heap; // ivar: _heap
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lockQueue; // ivar: _lockQueue
@property (nonatomic, getter=isSuspended) BOOL suspended; // ivar: _suspended


+(id)concurrentQueueWithDispatchPriority:(NSInteger)arg0 ;
+(id)serialQueueWithDispatchPriority:(NSInteger)arg0 ;
-(BOOL)containsOutstandingBlockForKey:(id)arg0 ;
-(NSInteger)queuePriorityOfOutstandingBlockForKey:(id)arg0 ;
-(id)_initWithDispatchAttr:(id)arg0 dispatchPriority:(NSInteger)arg1 ;
-(id)allKeysOfOutstandingBlocks;
-(id)init;
-(void)addBlock:(id)arg0 ;
// -(void)addBlock:(id)arg0 withQueuePriority:(unk)arg1  ;
// -(void)addBlock:(id)arg0 withQueuePriority:(unk)arg1 forKey:(NSInteger)arg2  ;
-(void)dealloc;
-(void)removeAllOutstandingBlocks;
-(void)removeOutstandingBlockForKey:(id)arg0 ;
-(void)setQueuePriority:(NSInteger)arg0 ofOutstandingBlockForKey:(id)arg1 ;


@end


#endif