// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OS_REMOTE_SERVICE_H
#define OS_REMOTE_SERVICE_H

@protocol OS_xpc_object;

#import <Foundation/Foundation.h>

#import "OS_remote_device.h"

@interface OS_remote_service : NSObject {
    char * name;
    NSObject<OS_xpc_object> *properties;
    NSObject<OS_xpc_object> *connection;
    OS_remote_device *device;
    unsigned int connect_timeout;
}




-(void)dealloc;


@end


#endif