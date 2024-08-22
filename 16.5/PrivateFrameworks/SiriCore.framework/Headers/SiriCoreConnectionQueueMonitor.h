// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRICORECONNECTIONQUEUEMONITOR_H
#define SIRICORECONNECTIONQUEUEMONITOR_H

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface SiriCoreConnectionQueueMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_watcher;
}




-(id)init;
-(void)_signalWatcher;
-(void)_startWatcher;
-(void)dealloc;
-(void)signalWatcher;
-(void)startWatcher;


@end


#endif