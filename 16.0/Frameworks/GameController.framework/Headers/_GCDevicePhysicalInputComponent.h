// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCDEVICEPHYSICALINPUTCOMPONENT_H
#define _GCDEVICEPHYSICALINPUTCOMPONENT_H

@class NSString;
@protocol _GCGamepadEventSink, GCDeviceComponent, GCDevice, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_GCDevicePhysicalInputBase.h"

@interface _GCDevicePhysicalInputComponent : NSObject <_GCGamepadEventSink, GCDeviceComponent>

 {
    id *_gamepadEventObservation;
    id<GCDevice> *_device;
    _GCDevicePhysicalInputBase *_physicalInput;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (readonly) Class superclass;


-(id)capture;
-(id)init;
-(id)initWithIdentifier:(id)arg0 defaultPhysicalInput:(id)arg1 ;
-(void)setDevice:(id)arg0 ;
-(void)setDispatchQueue:(id)arg0 ;
-(void)setGamepadEventSource:(id)arg0 ;


@end


#endif