// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMCONNECTIONENDPOINT_H
#define RMCONNECTIONENDPOINT_H

@protocol OS_dispatch_queue, RMConnectionLifecycleDelegate, RMConnectionDataDelegate, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface RMConnectionEndpoint : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id<RMConnectionLifecycleDelegate> *_connectionDelegate;
    id<RMConnectionDataDelegate> *_dataDelegate;
    NSObject<OS_xpc_object> *_streamingServerConnection;
    NSObject<OS_xpc_object> *_streamingClientConnection;
    NSObject<OS_xpc_object> *_streamingClientListener;
    NSObject<OS_xpc_object> *_messagingConnection;
    NSObject<OS_xpc_object> *_priorityBoostReplyMessage;
}






@end


#endif