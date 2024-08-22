// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMREMOTEOBJECTBROADCASTER_H
#define IMREMOTEOBJECTBROADCASTER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMRemoteObjectBroadcaster : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)defaultBroadcaster;
-(id)_queue;
-(id)broadcastProxyForTarget:(id)arg0 messageContext:(id)arg1 protocol:(id)arg2 ;
-(id)broadcastProxyForTarget:(id)arg0 messageContext:(id)arg1 protocol:(id)arg2 priority:(int)arg3 ;
-(id)broadcastProxyForTarget:(id)arg0 messageContext:(id)arg1 protocol:(id)arg2 priority:(int)arg3 completion:(id)arg4 ;
-(id)broadcastProxyForTargets:(id)arg0 messageContext:(id)arg1 protocol:(id)arg2 ;
-(id)init;
-(void)blockUntilSendQueueIsEmpty;
-(void)dealloc;
-(void)flushProxy:(id)arg0 ;


@end


#endif