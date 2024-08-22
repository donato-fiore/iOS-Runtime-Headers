// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STKALERTSESSIONEVENTQUEUE_H
#define STKALERTSESSIONEVENTQUEUE_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface STKAlertSessionEventQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_haltingAssertions;
    NSMutableArray *_queue_eventQueue;
}




-(id)acquireEventQueueHaltingAssertionForReason:(id)arg0 ;
-(id)init;
-(void)_queue_dequeueEventsIfPossible;
-(void)_queue_enqueueEvent:(id)arg0 ;
-(void)enqueue:(id)arg0 ;


@end


#endif