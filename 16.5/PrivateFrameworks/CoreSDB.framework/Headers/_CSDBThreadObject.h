// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CSDBTHREADOBJECT_H
#define _CSDBTHREADOBJECT_H

@class NSThread, NSString, NSRunLoop;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _CSDBThreadObject : NSObject {
    NSThread *_thread;
    NSString *_identifier;
    NSRunLoop *_runLoop;
    *__CFRunLoopSource _runLoopSource;
    NSString *_queueContext;
    NSObject<OS_dispatch_queue> *_queue;
}




-(BOOL)isCurrentThreadOtherwiseAssert:(BOOL)arg0 ;
-(id)initWithIdentifier:(id)arg0 qosClass:(unsigned short)arg1 ;
-(id)thread;
-(void)_threadedMain;
-(void)dealloc;
-(void)performBlock:(id)arg0 ;
// -(void)performBlock:(id)arg0 afterDelay:(unk)arg1  ;
// -(void)performBlock:(id)arg0 waitUntilDone:(unk)arg1  ;


@end


#endif