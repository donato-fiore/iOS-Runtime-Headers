// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCNINTENDOPROCONTROLLERPROFILE_H
#define _GCNINTENDOPROCONTROLLERPROFILE_H

@class GCNintendoJoyConProfile;



@interface _GCNintendoProControllerProfile : GCNintendoJoyConProfile



+(BOOL)physicalDeviceSupportsMotion:(id)arg0 ;
+(id)logicalDevice:(id)arg0 makeControllerMotionWithIdentifier:(id)arg1 ;
+(id)logicalDevice:(id)arg0 makeControllerPhysicalInputProfileWithIdentifier:(id)arg1 ;
+(id)logicalDeviceControllerProductCategory:(id)arg0 ;
+(id)physicalDeviceGetHapticCapabilities:(id)arg0 ;
+(id)physicalDeviceGetHapticCapabilityGraph:(id)arg0 ;
+(void)physicalDevice:(id)arg0 getSensorsEnabledWithReply:(id)arg1 ;
+(void)physicalDevice:(id)arg0 setSensorsActive:(BOOL)arg1 ;


@end


#endif