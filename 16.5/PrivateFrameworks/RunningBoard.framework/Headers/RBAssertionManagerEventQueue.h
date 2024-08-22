// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBASSERTIONMANAGEREVENTQUEUE_H
#define RBASSERTIONMANAGEREVENTQUEUE_H

@protocol OS_dispatch_queue, RBTimeProviding, RBAssertionManagerQueueDelegate;

#import <Foundation/Foundation.h>

#import "RBEventQueue.h"
#import "RBProcessMap.h"

@interface RBAssertionManagerEventQueue : NSObject {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
    RBEventQueue *_eventQueue;
    RBProcessMap *_expirationWarningEvents;
    id<RBTimeProviding> *_timeProvider;
}


@property (readonly) NSUInteger count;
@property (weak, nonatomic) NSObject<RBAssertionManagerQueueDelegate> *delegate; // ivar: _delegate


-(id)description;
-(id)initWithTimeProvider:(id)arg0 ;
-(void)updateEventsForAssertions:(id)arg0 ;


@end


#endif