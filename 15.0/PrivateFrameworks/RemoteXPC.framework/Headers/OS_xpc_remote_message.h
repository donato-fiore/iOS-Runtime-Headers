// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OS_XPC_REMOTE_MESSAGE_H
#define OS_XPC_REMOTE_MESSAGE_H

@protocol OS_dispatch_data, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "OS_xpc_remote_message.h"

@interface OS_xpc_remote_message : NSObject {
    NSUInteger msg_id;
    id *barrier;
    NSObject<OS_dispatch_data> *body;
    id *reply_handler;
    NSObject<OS_dispatch_queue> *reply_queue;
    int ool_length;
    NSObject<OS_xpc_object>" ool;
    OS_xpc_remote_message *link_stqe_next;
}






@end


#endif