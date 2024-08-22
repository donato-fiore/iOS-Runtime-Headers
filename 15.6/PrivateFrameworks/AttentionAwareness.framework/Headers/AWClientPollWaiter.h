// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWCLIENTPOLLWAITER_H
#define AWCLIENTPOLLWAITER_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "AWAttentionAwarenessClient.h"

@interface AWClientPollWaiter : NSObject {
    AWAttentionAwarenessClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id *_clientBlock;
    NSObject<OS_dispatch_source> *_timer;
    int _pollState;
}




-(id)initWithClient:(id)arg0 timeout:(NSUInteger)arg1 queue:(id)arg2 block:(id)arg3 ;
-(void)cancel;
-(void)invalidate;
-(void)invokeClientBlock:(NSUInteger)arg0 event:(id)arg1 ;
-(void)notifyPollEventType:(NSUInteger)arg0 event:(id)arg1 ;


@end


#endif