// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSSIRIMOBILEBLUETOOTHDEVICEDATASOURCE_H
#define CSSIRIMOBILEBLUETOOTHDEVICEDATASOURCE_H

@class NSMutableDictionary, NSString;
@protocol AFInvalidating, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface CSSiriMobileBluetoothDeviceDataSource : NSObject <AFInvalidating>

 {
    NSObject<OS_dispatch_queue> *_queue;
    *BTSessionImpl _session;
    *BTLocalDeviceImpl _localDevice;
    *BTAccessoryManagerImpl _accessoryManager;
    BOOL _attachingToSession;
    NSObject<OS_dispatch_group> *_sessionSetupGroup;
    os_unfair_lock_s _deviceProxiesLock;
    NSMutableDictionary *_deviceProxiesByAddress;
    NSMutableDictionary *_deviceProxiesByDeviceUID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_deviceProxies;
-(id)_deviceProxyWithAddress:(id)arg0 createsIfAbsent:(BOOL)arg1 ;
-(id)_deviceProxyWithUID:(id)arg0 createsIfAbsent:(BOOL)arg1 ;
-(id)deviceWithAddress:(id)arg0 ;
-(id)deviceWithUID:(id)arg0 ;
-(id)init;
-(void)_attachToSession;
-(void)_cleanUpDeviceProxies;
-(void)_detachFromSession;
-(void)_reloadForDevice:(struct BTDeviceImpl *)arg0 ;
-(void)_sessionAttached:(struct BTSessionImpl *)arg0 result:(int)arg1 ;
-(void)_sessionDetached:(struct BTSessionImpl *)arg0 ;
-(void)_sessionTerminated:(struct BTSessionImpl *)arg0 ;
-(void)_setUpAccessoryManager;
-(void)_setUpLocalDevice;
-(void)_tearDownAccessoryManager;
-(void)_tearDownLocalDevice;
-(void)accessoryManager:(struct BTAccessoryManagerImpl *)arg0 event:(int)arg1 device:(struct BTDeviceImpl *)arg2 state:(int)arg3 ;
-(void)device:(struct BTDeviceImpl *)arg0 serviceMask:(unsigned int)arg1 serviceEventType:(int)arg2 serviceSpecificEvent:(unsigned int)arg3 result:(int)arg4 ;
-(void)getBTDeviceWithAddress:(id)arg0 completion:(id)arg1 ;
-(void)getBTDeviceWithDeviceUID:(id)arg0 completion:(id)arg1 ;
-(void)getBTLocalDeviceWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)localDevice:(struct BTLocalDeviceImpl *)arg0 event:(int)arg1 result:(int)arg2 ;


@end


#endif