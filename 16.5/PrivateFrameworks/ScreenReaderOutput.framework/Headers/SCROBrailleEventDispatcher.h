// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCROBRAILLEEVENTDISPATCHER_H
#define SCROBRAILLEEVENTDISPATCHER_H

@class NSLock, NSMutableArray;

#import <Foundation/Foundation.h>


@interface SCROBrailleEventDispatcher : NSObject {
    NSLock *_queueLock;
    *__CFRunLoop _runLoop;
    *__CFRunLoopSource _queueSource;
    NSMutableArray *_queue;
    NSMutableArray *_brailleEventQueue;
    id *_target;
    BOOL _isValid;
}




-(BOOL)isValid;
-(id)initWithTarget:(id)arg0 ;
-(void)_processQueue;
-(void)dealloc;
-(void)enqueueEvent:(id)arg0 ;
-(void)invalidate;
-(void)start;


@end


#endif