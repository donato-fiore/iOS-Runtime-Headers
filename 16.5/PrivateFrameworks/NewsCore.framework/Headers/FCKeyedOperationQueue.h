// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCKEYEDOPERATIONQUEUE_H
#define FCKEYEDOPERATIONQUEUE_H

@class NSMutableOrderedSet, NSMutableSet, NSMutableDictionary, NSOrderedSet;
@protocol FCKeyedOperationQueueDelegate, OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FCKeyedOperationQueue : NSObject {
    id<FCKeyedOperationQueueDelegate> *_delegate;
    NSMutableOrderedSet *_mutableKeyQueue;
    NSMutableSet *_keysForExecutingOperations;
    NSInteger _maxConcurrentOperationCount;
    NSMutableDictionary *_cancelHandlersByKey;
    NSObject<OS_dispatch_group> *_operationExecutionGroup;
}


@property (readonly, weak, nonatomic) NSObject<FCKeyedOperationQueueDelegate> *delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue; // ivar: _executionQueue
@property (copy, nonatomic) NSOrderedSet *keyQueue;
@property (nonatomic, getter=isSuspended) BOOL suspended; // ivar: _suspended


-(id)init;
-(id)initWithDelegate:(id)arg0 maxConcurrentOperationCount:(NSInteger)arg1 ;
-(void)notifyWhenAllOperationsAreFinishedUsingBlock:(id)arg0 ;


@end


#endif