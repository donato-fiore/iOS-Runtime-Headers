// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKCONCURRENTEVALUATOR_H
#define IKCONCURRENTEVALUATOR_H

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_semaphore, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IKConcurrentEvaluator : NSObject {
    NSMutableArray *_orderedKeys;
    NSMutableDictionary *_fetchers;
    NSMutableDictionary *_getters;
    NSInteger _activeFetchCount;
    NSInteger _numberOfSchedulingLocksAcquired;
    NSObject<OS_dispatch_semaphore> *_schedulingLock;
}


@property (readonly, nonatomic) NSInteger concurrencyCount; // ivar: _concurrencyCount
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)idleEvaluator;
-(id)_getterForKey:(SEL)arg0 ;
-(id)_removeFetcherForKey:(SEL)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(id)initWithQueue:(id)arg0 concurrencyCount:(NSInteger)arg1 ;
-(id)objectForKey:(id)arg0 ;
// -(void)_insertFetcher:(id)arg0 getter:(unk)arg1 forKey:(id)arg2  ;
-(void)_scheduleFetchRelayed:(BOOL)arg0 ;
// -(void)addEvaluationBlock:(id)arg0 forKey:(unk)arg1  ;
-(void)lockSchedulingForEvaluation:(id)arg0 ;


@end


#endif