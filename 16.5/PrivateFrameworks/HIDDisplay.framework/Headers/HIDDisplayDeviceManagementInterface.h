// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HIDDISPLAYDEVICEMANAGEMENTINTERFACE_H
#define HIDDISPLAYDEVICEMANAGEMENTINTERFACE_H

@class NSDictionary;


#import "HIDDisplayInterface.h"

@interface HIDDisplayDeviceManagementInterface : HIDDisplayInterface {
    NSDictionary *_usageElementMap;
}




-(BOOL)factoryReset:(unsigned char)arg0 securityToken:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)getSecurityToken:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)setupInterface;
-(id)getHIDDevices;
-(id)initWithContainerID:(id)arg0 ;
-(id)initWithService:(unsigned int)arg0 ;


@end


#endif