// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCGENERICDEVICEMANAGER_H
#define _GCGENERICDEVICEMANAGER_H

@class NSMutableSet, NSMutableDictionary, NSString;
@protocol _GCPhysicalDeviceManager, OS_dispatch_queue, _GCPhysicalDeviceRegistry, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _GCGenericDeviceManager : NSObject <_GCPhysicalDeviceManager>

 {
    NSObject<OS_dispatch_queue> *_queue;
    *IONotificationPort _ioNotificationPort;
    NSObject<OS_dispatch_queue> *_ioNotificationQueue;
    unsigned int _ioHIDDeviceIterator;
    NSMutableSet *_claimedServices;
    NSMutableDictionary *_pendingDevices;
    NSMutableDictionary *_physicalDevices;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak) NSObject<_GCPhysicalDeviceRegistry> *deviceRegistry; // ivar: _deviceRegistry
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier;
@property (readonly) Class superclass;


-(BOOL)acceptDriverConnection:(id)arg0 forHIDService:(id)arg1 ;
-(BOOL)acceptFilterConnection:(id)arg0 forHIDService:(id)arg1 ;
-(id)init;
-(id)matchHIDService:(id)arg0 ;
-(id)serviceFor:(id)arg0 client:(id)arg1 ;
-(void)_onioqueue_setupHIDMatching;
-(void)_onqueue_registerDefaultConfigurationForDevice:(id)arg0 ;
-(void)claimHIDService:(id)arg0 ;
-(void)dealloc;
-(void)relinquishHIDService:(id)arg0 ;


@end


#endif