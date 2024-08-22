// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OS_REMOTE_DEVICE_H
#define OS_REMOTE_DEVICE_H

@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "OS_remote_device.h"

@interface OS_remote_device : NSObject {
    char * device_name;
    char * device_alias;
}


@property (copy, nonatomic) id *connected_callback; // ivar: _connected_callback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connected_callback_queue; // ivar: _connected_callback_queue
@property (retain, nonatomic) OS_remote_device *connected_callback_self_retain; // ivar: _connected_callback_self_retain
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection; // ivar: _connection
@property (nonatomic) NSUInteger device_id; // ivar: _device_id
@property (copy, nonatomic) id *disconnected_callback; // ivar: _disconnected_callback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *disconnected_callback_queue; // ivar: _disconnected_callback_queue
@property (retain, nonatomic) OS_remote_device *disconnected_callback_self_retain; // ivar: _disconnected_callback_self_retain
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dq; // ivar: _dq
@property (nonatomic) NSUInteger messaging_protocol_version; // ivar: _messaging_protocol_version
@property (retain, nonatomic) NSObject<OS_xpc_object> *properties; // ivar: _properties
@property (nonatomic) unsigned int state; // ivar: _state
@property (nonatomic) unsigned int type; // ivar: _type
@property (nonatomic) char * uuid; // ivar: _uuid


-(id)init;
-(void)dealloc;


@end


#endif