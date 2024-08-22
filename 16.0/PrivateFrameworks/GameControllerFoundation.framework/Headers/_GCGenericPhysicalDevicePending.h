// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCGENERICPHYSICALDEVICEPENDING_H
#define _GCGENERICPHYSICALDEVICEPENDING_H

@protocol GCGenericDeviceDriverConfigurationServiceClientInterface, OS_dispatch_queue, _GCDeviceDriverConnection;

#import <Foundation/Foundation.h>

#import "GCPromise.h"
#import "GCFuture.h"
#import "_GCGenericDeviceManager.h"
#import "_GCHIDServiceInfo.h"

@interface _GCGenericPhysicalDevicePending : NSObject <GCGenericDeviceDriverConfigurationServiceClientInterface>

 {
    NSObject<OS_dispatch_queue> *_queue;
    GCPromise *_devicePromise;
    id<_GCDeviceDriverConnection> *_filterConnection;
    id<_GCDeviceDriverConnection> *_driverConnection;
}


@property (readonly) GCFuture *device; // ivar: _deviceFuture
@property (retain) NSObject<_GCDeviceDriverConnection> *driverConnection;
@property (retain) NSObject<_GCDeviceDriverConnection> *filterConnection;
@property (readonly) _GCGenericDeviceManager *manager; // ivar: _manager
@property (readonly) _GCHIDServiceInfo *serviceInfo; // ivar: _serviceInfo


-(id)_onqueue_createDeviceWithModel:(id)arg0 service:(id)arg1 ;
-(id)init;
-(id)initWithHIDService:(id)arg0 manager:(id)arg1 ;
-(void)dealloc;


@end


#endif