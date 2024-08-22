// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBEVENTQUEUE_H
#define RBEVENTQUEUE_H

@class NSArray;
@protocol OS_dispatch_queue, RBTimeProviding;

#import <Foundation/Foundation.h>

#import "RBEventQueueEvent.h"

@interface RBEventQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id<RBTimeProviding> *_timeProvider;
    CGFloat _nextFireTime;
    BOOL _isTimerRunning;
    BOOL _isProcessingEvents;
    BOOL _inModifyBlock;
    BOOL _dirtyDuringModify;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSArray *events; // ivar: _eventQueue
@property (readonly, nonatomic) RBEventQueueEvent *nextEvent;


-(id)description;
-(id)initWithQueue:(id)arg0 timeProvider:(id)arg1 ;
-(void)addEvent:(id)arg0 ;
-(void)addEvents:(id)arg0 ;
-(void)batchModify:(id)arg0 ;
-(void)removeEvent:(id)arg0 ;
-(void)removeEvents:(id)arg0 ;


@end


#endif