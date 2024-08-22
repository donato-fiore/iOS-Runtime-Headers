// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNDETECTORASYNCTASKSQUEUECACHE_H
#define VNDETECTORASYNCTASKSQUEUECACHE_H



#import "VNAsyncTasksQueueCache.h"

@interface VNDetectorAsyncTasksQueueCache : VNAsyncTasksQueueCache



+(NSInteger)maximumAllowedTasksInTheQueue;
+(id)queueLabelWithUniqueAppendix:(id)arg0 ;
+(id)sharedCache;


@end


#endif