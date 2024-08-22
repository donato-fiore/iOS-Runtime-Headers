// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OS_REMOTE_DEVICE_BROWSER_H
#define OS_REMOTE_DEVICE_BROWSER_H

@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface OS_remote_device_browser : NSObject

@property (copy, nonatomic) id *callback; // ivar: _callback
@property (nonatomic) BOOL canceled; // ivar: _canceled
@property (nonatomic) BOOL canceling; // ivar: _canceling
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cbq; // ivar: _cbq
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection; // ivar: _connection
@property (nonatomic) unsigned int device_type; // ivar: _device_type


-(void)dealloc;


@end


#endif