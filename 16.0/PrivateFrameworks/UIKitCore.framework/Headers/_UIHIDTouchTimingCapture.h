// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIHIDTOUCHTIMINGCAPTURE_H
#define _UIHIDTOUCHTIMINGCAPTURE_H

@class NSThread, NSRunLoop, CADisplayLink;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface _UIHIDTouchTimingCapture : NSObject {
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSThread *_thread;
    NSRunLoop *_runLoop;
    CADisplayLink *_displayLink;
    *HIDEventTiming _events;
    *NSUInteger _timestamps;
}




-(id)init;
-(void)beginCapture;
-(void)cleanup;
-(void)endCapture;
-(void)eventFetcher_addEvent:(struct __IOHIDEvent *)arg0 ;
-(void)onDisplayLink:(id)arg0 ;
-(void)run;
-(void)writeEventsToFile;


@end


#endif