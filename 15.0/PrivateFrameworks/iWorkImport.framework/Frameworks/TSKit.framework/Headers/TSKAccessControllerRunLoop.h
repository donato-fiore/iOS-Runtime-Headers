// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKACCESSCONTROLLERRUNLOOP_H
#define TSKACCESSCONTROLLERRUNLOOP_H


#import <Foundation/Foundation.h>

#import "TSKRunLoopTicket.h"

@interface TSKAccessControllerRunLoop : NSObject {
    TSKRunLoopTicket *_ticket;
    *__CFRunLoop _runLoop;
}


@property (readonly) *__CFRunLoop runLoop;
@property (readonly) *_opaque_pthread_t threadId; // ivar: _threadId
@property (readonly) TSKRunLoopTicket *ticket;


-(id)initWithTicket:(id)arg0 andRunLoop:(struct __CFRunLoop *)arg1 ;


@end


#endif