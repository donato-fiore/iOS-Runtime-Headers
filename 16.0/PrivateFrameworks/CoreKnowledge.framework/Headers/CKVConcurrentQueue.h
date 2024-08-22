// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVCONCURRENTQUEUE_H
#define CKVCONCURRENTQUEUE_H

@protocol OS_dispatch_queue;


#import "CKVQueue.h"

@interface CKVConcurrentQueue : CKVQueue {
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)dequeue;
-(id)init;
-(void)enqueue:(id)arg0 ;


@end


#endif