// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSEVENTQUEUE_H
#define BSEVENTQUEUE_H

@class NSHashTable, NSMutableArray, NSString, NSArray;
@protocol BSDescriptionProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BSEventQueueEvent.h"

@interface BSEventQueue : NSObject <BSDescriptionProviding>

 {
    NSHashTable *_eventQueueLocks;
    NSMutableArray *_eventQueue;
    BOOL _processingEvents;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) BSEventQueueEvent *executingEvent; // ivar: _executingEvent
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isLocked) BOOL locked;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSArray *pendingEvents;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(BOOL)_shouldProcessEvent:(id)arg0 enqueuedDuringExecutionOfEvent:(id)arg1 ;
-(BOOL)hasEventWithName:(id)arg0 ;
-(BOOL)hasEventWithPrefix:(id)arg0 ;
-(id)acquireLockForReason:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithName:(id)arg0 onQueue:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_noteQueueDidDrain;
-(void)_noteQueueDidLock;
-(void)_noteQueueDidUnlock;
-(void)_noteWillCancelEventsWithName:(id)arg0 count:(NSUInteger)arg1 ;
-(void)_noteWillExecuteEvent:(id)arg0 ;
-(void)_noteWillPendEvents:(id)arg0 atPosition:(int)arg1 ;
-(void)cancelEventsWithName:(id)arg0 ;
-(void)executeOrInsertEvent:(id)arg0 atPosition:(int)arg1 ;
-(void)executeOrInsertEvents:(id)arg0 atPosition:(int)arg1 ;
-(void)flushAllEvents;
-(void)flushEvents:(id)arg0 ;
-(void)flushPendingEvents;
-(void)relinquishLock:(id)arg0 ;


@end


#endif