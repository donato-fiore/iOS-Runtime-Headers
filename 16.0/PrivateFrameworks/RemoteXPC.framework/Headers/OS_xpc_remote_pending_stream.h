// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OS_XPC_REMOTE_PENDING_STREAM_H
#define OS_XPC_REMOTE_PENDING_STREAM_H

@protocol OS_dispatch_io;

#import <Foundation/Foundation.h>

#import "OS_xpc_remote_channel.h"
#import "OS_xpc_remote_pending_stream.h"

@interface OS_xpc_remote_pending_stream : NSObject {
    NSUInteger stream_id;
    OS_xpc_remote_channel *channel;
    NSObject<OS_dispatch_io> *io;
    int direction;
    id *completion_handler;
    int error;
    OS_xpc_remote_pending_stream *link_stqe_next;
}






@end


#endif