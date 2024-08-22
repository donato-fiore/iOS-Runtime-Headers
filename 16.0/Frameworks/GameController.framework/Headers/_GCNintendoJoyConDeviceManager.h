// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCNINTENDOJOYCONDEVICEMANAGER_H
#define _GCNINTENDOJOYCONDEVICEMANAGER_H

@class NSMutableSet, NSMutableDictionary, NSString;
@protocol _GCPhysicalDeviceManager, _GCLogicalDeviceManager, OS_dispatch_queue, _GCPhysicalDeviceRegistry><_GCLogicalDeviceRegistry, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_GCNintendoJoyConDevice.h"

@interface _GCNintendoJoyConDeviceManager : NSObject <_GCPhysicalDeviceManager, _GCLogicalDeviceManager>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_claimedServices;
    NSMutableDictionary *_physicalDevices;
    _GCNintendoJoyConDevice *_pendingJoyCon;
    NSMutableSet *_fusionGestureDevices;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak) NSObject<_GCPhysicalDeviceRegistry><_GCLogicalDeviceRegistry> *deviceRegistry; // ivar: _deviceRegistry
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier;
@property (readonly) Class superclass;


-(BOOL)acceptDriverConnection:(id)arg0 forHIDService:(id)arg1 ;
-(BOOL)acceptFilterConnection:(id)arg0 forHIDService:(id)arg1 ;
-(id)init;
-(id)makeDeviceWithConfiguration:(id)arg0 dependencies:(id)arg1 ;
-(id)matchHIDService:(id)arg0 ;
-(void)_onqueue_checkAndDisconnectDuplicateDevice:(id)arg0 ;
-(void)_onqueue_registerDefaultConfigurationForDevice:(id)arg0 ;
-(void)_onqueue_registerDefaultConfigurationsForDevice:(id)arg0 ;
-(void)_onqueue_registerFusionConfigurationWithLeftDevice:(id)arg0 rightDevice:(id)arg1 ;
-(void)_onqueue_relinquishHIDDevice:(id)arg0 ;
-(void)_onqueue_tryRegisteringFusionConfigurationWithDevice:(id)arg0 ;
-(void)activateLogicalDevice:(id)arg0 ;
-(void)claimHIDService:(id)arg0 ;
-(void)deactivateLogicalDevice:(id)arg0 ;
-(void)device:(id)arg0 fusionGestureActive:(BOOL)arg1 ;
-(void)relinquishHIDService:(id)arg0 ;


@end


#endif