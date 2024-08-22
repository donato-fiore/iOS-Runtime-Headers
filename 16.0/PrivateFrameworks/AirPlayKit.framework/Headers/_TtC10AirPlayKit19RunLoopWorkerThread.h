// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10AIRPLAYKIT19RUNLOOPWORKERTHREAD_H
#define _TTC10AIRPLAYKIT19RUNLOOPWORKERTHREAD_H

@class NSThread;



@interface _TtC10AirPlayKit19RunLoopWorkerThread : NSThread {
    ? pendingQueue;
    ? runLoop;
    ? source;
    ? lock;
}




-(id)init;
-(void)dealloc;
-(void)main;


@end


#endif