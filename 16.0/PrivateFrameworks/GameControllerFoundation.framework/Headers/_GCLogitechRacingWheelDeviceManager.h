// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCLOGITECHRACINGWHEELDEVICEMANAGER_H
#define _GCLOGITECHRACINGWHEELDEVICEMANAGER_H

@class NSString;
@protocol _GCDeviceManager, OS_os_log, OS_dispatch_queue, _GCDeviceRegistry, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _GCLogitechRacingWheelDeviceManager : NSObject <_GCDeviceManager>

 {
    NSObject<OS_os_log> *_log;
    NSObject<OS_dispatch_queue> *_queue;
    *IONotificationPort _ioNotificationPort;
    unsigned int _ioG920USBDeviceIterator;
    unsigned int _ioG29PS4HIDDeviceIterator;
    unsigned int _ioG29PS3HIDDeviceIterator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak) NSObject<_GCDeviceRegistry> *deviceRegistry; // ivar: _deviceRegistry
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif