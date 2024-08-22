// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXDEVICEMONITOR_H
#define AXDEVICEMONITOR_H

@class NSRunLoop, NSMutableSet;
@protocol AXDeviceMonitorDelegate;

#import <Foundation/Foundation.h>


@interface AXDeviceMonitor : NSObject {
    NSRunLoop *_targetRunLoop;
    *__IOHIDManager _hidManager;
    NSUInteger _state;
    NSMutableSet *_devices;
    os_unfair_lock_s _devicesLock;
}


@property (weak, nonatomic) NSObject<AXDeviceMonitorDelegate> *delegate; // ivar: _delegate


+(id)bluetoothKeyboardDevices;
-(id)_existingDevicesForDevice:(struct __IOHIDDevice *)arg0 ;
-(id)copyDevices;
-(id)initWithMatchingDictionary:(id)arg0 callbackRunLoop:(id)arg1 ;
-(id)initWithMatchingMultiple:(id)arg0 callbackRunLoop:(id)arg1 ;
-(void)_commonInitWithRunLoop:(id)arg0 ;
-(void)begin;
-(void)dealloc;
-(void)didAddDevice:(struct __IOHIDDevice *)arg0 ;
-(void)didRemoveDevice:(struct __IOHIDDevice *)arg0 ;
-(void)informDelegate;
-(void)invalidate;


@end


#endif