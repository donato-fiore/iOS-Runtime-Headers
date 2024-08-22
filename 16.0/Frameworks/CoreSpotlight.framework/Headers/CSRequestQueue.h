// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSREQUESTQUEUE_H
#define CSREQUESTQUEUE_H

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CSRequestQueue : NSObject {
    uint8_t _suspended;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_source> *_workSource;
    os_unfair_lock_s _workItemsLock;
    unsigned int _workItemsQoS;
    id *_startBlock;
    NSMutableArray *_workItems;
}




+(id)_requestQueueAttribute;
-(char *)label;
-(id)initWithLabel:(char *)arg0 target:(id)arg1 startBlock:(id)arg2 ;
-(void)async:(id)arg0 ;
-(void)enqueue:(id)arg0 ;
-(void)handleEvent;
-(void)resume;
-(void)suspend;
-(void)sync:(id)arg0 ;
-(void)validate;


@end


#endif