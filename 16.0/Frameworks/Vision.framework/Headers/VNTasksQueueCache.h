// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNTASKSQUEUECACHE_H
#define VNTASKSQUEUECACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VNTasksQueueCache : NSObject {
    NSMutableDictionary *_queueNameToTasksQueueDictionary;
    os_unfair_lock_s _queueNameToTasksQueueDictionaryLock;
    NSInteger _maximumTasksCount;
}


@property NSInteger maximumTasksCount;


+(id)queueLabelWithUniqueAppendix:(id)arg0 ;
-(id)_queueWithUniqueAppendix:(id)arg0 queueClass:(Class)arg1 ;
-(id)init;
-(id)queueWithUniqueAppendix:(id)arg0 ;
-(void)releaseAllQueues;
-(void)releaseQueueWithUniqueAppendix:(id)arg0 ;


@end


#endif