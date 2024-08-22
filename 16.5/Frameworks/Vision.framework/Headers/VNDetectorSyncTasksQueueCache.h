// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNDETECTORSYNCTASKSQUEUECACHE_H
#define VNDETECTORSYNCTASKSQUEUECACHE_H



#import "VNSyncTasksQueueCache.h"

@interface VNDetectorSyncTasksQueueCache : VNSyncTasksQueueCache



+(NSInteger)maximumAllowedTasksInTheQueue;
+(id)queueLabelWithUniqueAppendix:(id)arg0 ;
+(id)sharedCache;


@end


#endif