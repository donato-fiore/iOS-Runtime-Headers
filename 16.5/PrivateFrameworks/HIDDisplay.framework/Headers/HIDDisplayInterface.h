// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HIDDISPLAYINTERFACE_H
#define HIDDISPLAYINTERFACE_H

@class HIDManager, HIDDevice, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface HIDDisplayInterface : NSObject {
    HIDManager *_manager;
    HIDDevice *_deviceRef;
}


@property (readonly) NSArray *capabilities;
@property (readonly) NSString *containerID; // ivar: _containerID
@property (readonly) NSUInteger registryID; // ivar: _registryID


-(BOOL)commit:(id)arg0 error:(*id)arg1 ;
-(BOOL)extract:(id)arg0 error:(*id)arg1 ;
-(BOOL)hasMatchingContainerID:(id)arg0 containerID:(id)arg1 ;
-(id)description;
-(id)device;
-(id)extractContainerIDFromService:(unsigned int)arg0 ;
-(id)getDeviceElements:(id)arg0 ;
-(id)getHIDDevices;
-(id)getHIDDevicesForMatching:(id)arg0 ;
-(id)initWithContainerID:(id)arg0 ;
-(id)initWithMatching:(id)arg0 ;
-(id)initWithService:(unsigned int)arg0 ;
-(void)dealloc;
-(void)setDevice:(id)arg0 ;


@end


#endif