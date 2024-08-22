// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSGEOSERVICETHREAD_H
#define CLSGEOSERVICETHREAD_H

@class NSThread;



@interface CLSGeoServiceThread : NSThread {
    *__CFRunLoop _runLoop;
}




-(void)cancel;
-(void)main;


@end


#endif