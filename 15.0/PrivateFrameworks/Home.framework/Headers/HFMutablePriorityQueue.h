// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFMUTABLEPRIORITYQUEUE_H
#define HFMUTABLEPRIORITYQUEUE_H

@class NAQueue;
@protocol HFMutablePriorityQueueObserver;

#import <Foundation/Foundation.h>


@interface HFMutablePriorityQueue : NSObject {
    os_unfair_lock_s _lock;
}


@property (readonly) NSUInteger count;
@property (weak, nonatomic) NSObject<HFMutablePriorityQueueObserver> *observer; // ivar: _observer
@property (retain) NAQueue *queue; // ivar: _queue


+(id)_comparator:(SEL)arg0 ;
-(id)drain;
-(id)enqueue:(id)arg0 ;
-(id)init;
-(id)peek;
-(void)_operateOnMatchingObjects:(id)arg0 removingMatched:(BOOL)arg1 lockedOperationBlock:(id)arg2 ;
-(void)_prioritizeObjects:(id)arg0 priorityBlock:(id)arg1 ;
-(void)prioritizeObjects:(id)arg0 ;
-(void)prioritizeObjects:(id)arg0 increment:(NSInteger)arg1 ;
-(void)removeAllObjectsMatchingObjects:(id)arg0 ;
-(void)removeFirstOfObjects:(id)arg0 ;
-(void)removeObjectsWithEntries:(id)arg0 ;
-(void)resetPriorityForObjects:(id)arg0 ;


@end


#endif