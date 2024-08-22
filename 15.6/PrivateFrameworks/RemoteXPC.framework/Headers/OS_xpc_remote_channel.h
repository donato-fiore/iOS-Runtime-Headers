// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OS_XPC_REMOTE_CHANNEL_H
#define OS_XPC_REMOTE_CHANNEL_H

@protocol OS_dispatch_queue, OS_nw_connection, OS_dispatch_io;

#import <Foundation/Foundation.h>


@interface OS_xpc_remote_channel : NSObject {
    NSObject<OS_dispatch_queue> *queue;
    NSObject<OS_nw_connection> *conn;
    id *event_handler;
    id *msg_handler;
    unsigned int state;
    int error;
    int stream_direction;
    NSObject<OS_dispatch_io> *stream_io;
    NSObject<OS_dispatch_io> *parent_io;
    BOOL tx_complete;
    unsigned char wire_version;
}






@end


#endif