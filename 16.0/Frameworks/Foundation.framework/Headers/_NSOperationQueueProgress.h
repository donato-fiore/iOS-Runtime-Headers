// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSOPERATIONQUEUEPROGRESS_H
#define _NSOPERATIONQUEUEPROGRESS_H



#import "NSProgress.h"
#import "NSOperationQueue.h"

@interface _NSOperationQueueProgress : NSProgress {
    NSOperationQueue *_queue;
    os_unfair_lock_s _queueLock;
}




-(void)setTotalUnitCount:(NSInteger)arg0 ;


@end


#endif