// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OS_XPC_REMOTE_STREAM_H
#define OS_XPC_REMOTE_STREAM_H


#import <Foundation/Foundation.h>

#import "OS_xpc_remote_channel.h"
#import "OS_xpc_remote_stream.h"

@interface OS_xpc_remote_stream : NSObject {
    OS_xpc_remote_channel *channel;
    OS_xpc_remote_stream *link_stqe_next;
}






@end


#endif