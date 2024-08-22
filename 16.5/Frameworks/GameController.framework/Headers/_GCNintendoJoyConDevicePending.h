// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCNINTENDOJOYCONDEVICEPENDING_H
#define _GCNINTENDOJOYCONDEVICEPENDING_H

@class GCPromise, GCFuture, _GCHIDServiceInfo;
@protocol OS_dispatch_queue, _GCDeviceDriverConnection;

#import <Foundation/Foundation.h>

#import "_GCNintendoJoyConDeviceManager.h"

@interface _GCNintendoJoyConDevicePending : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    GCPromise *_devicePromise;
    id<_GCDeviceDriverConnection> *_filterConnection;
    id<_GCDeviceDriverConnection> *_driverConnection;
}


@property (readonly) GCFuture *device; // ivar: _deviceFuture
@property (retain) NSObject<_GCDeviceDriverConnection> *driverConnection;
@property (retain) NSObject<_GCDeviceDriverConnection> *filterConnection;
@property (readonly) _GCNintendoJoyConDeviceManager *manager; // ivar: _manager
@property (readonly) _GCHIDServiceInfo *serviceInfo; // ivar: _serviceInfo


-(id)init;
-(id)initWithHIDService:(id)arg0 manager:(id)arg1 ;
-(void)dealloc;


@end


#endif