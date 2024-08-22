// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OS_XPC_REMOTE_LISTENER_H
#define OS_XPC_REMOTE_LISTENER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface OS_xpc_remote_listener : NSObject {
    NSObject<OS_dispatch_queue> *queue;
    int type;
    id *accept_handler;
    id *cancel_handler;
    BOOL canceled;
}




-(void)dealloc;


@end


#endif