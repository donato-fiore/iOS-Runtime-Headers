// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUMOBILEDEVICEDISCOVERY_H
#define CUMOBILEDEVICEDISCOVERY_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CURunLoopThread.h"
#import "CUMobileDeviceDiscovery.h"

@interface CUMobileDeviceDiscovery : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    CURunLoopThread *_mdRunLoopThread;
    CUMobileDeviceDiscovery *_selfRef;
}


@property (nonatomic) unsigned int changeFlags; // ivar: _changeFlags
@property (copy, nonatomic) id *deviceChangedHandler; // ivar: _deviceChangedHandler
@property (copy, nonatomic) id *deviceFoundHandler; // ivar: _deviceFoundHandler
@property (copy, nonatomic) id *deviceLostHandler; // ivar: _deviceLostHandler
@property (nonatomic) unsigned int discoveryFlags; // ivar: _discoveryFlags
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler


+(void)getDevicesWithQueue:(id)arg0 completion:(id)arg1 ;
-(id)init;
-(void)_invalidated;
-(void)_mdThreadFinalize;
-(void)_mdThreadInitialize;
-(void)activate;
-(void)invalidate;


@end


#endif