// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLMEMORYLIMITEDQUEUE_H
#define QLMEMORYLIMITEDQUEUE_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface QLMemoryLimitedQueue : NSObject {
    NSUInteger _maxSize;
    NSUInteger _currentSize;
    int _currentTaskCount;
    int _maxTaskCount;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_tasks;
}


@property (readonly) NSUInteger currentSize;
@property (readonly) int currentTaskCount;


-(id)initWithMaximumMemoryConsumption:(NSUInteger)arg0 maximumConcurrentTasks:(int)arg1 ;
-(void)addTask:(id)arg0 ;
-(void)dequeueIfPossible;
-(void)executeTask:(id)arg0 ;


@end


#endif