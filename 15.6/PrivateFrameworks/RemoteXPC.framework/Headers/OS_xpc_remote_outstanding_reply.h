// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OS_XPC_REMOTE_OUTSTANDING_REPLY_H
#define OS_XPC_REMOTE_OUTSTANDING_REPLY_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "OS_xpc_remote_outstanding_reply.h"

@interface OS_xpc_remote_outstanding_reply : NSObject {
    NSUInteger msg_id;
    id *reply_handler;
    NSObject<OS_dispatch_queue> *reply_queue;
    OS_xpc_remote_outstanding_reply *link_stqe_next;
}






@end


#endif