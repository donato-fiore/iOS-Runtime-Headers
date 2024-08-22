// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWLISTENER_H
#define NWLISTENER_H

@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_nw_listener;

#import <Foundation/Foundation.h>


@interface NWListener : NSObject {
    NSObject<OS_dispatch_queue> *listenerQueue;
    NSObject<OS_dispatch_queue> *transportQueue;
    NSObject<OS_dispatch_semaphore> *readySemaphore;
    NSObject<OS_nw_listener> *listener;
    int listenerState;
    os_unfair_lock_s layerLock;
    *void layer;
}




-(id)initWithLayer:(*void)arg0 ;
-(void)setListener:(id)arg0 ;
-(void)stopListening;
-(void)waitForReady;


@end


#endif