// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GCSONYDUALSHOCKCONTROLLERPROFILE_H
#define _GCSONYDUALSHOCKCONTROLLERPROFILE_H

@class NSString;
@protocol _GCControllerProfile;

#import <Foundation/Foundation.h>


@interface _GCSonyDualShockControllerProfile : NSObject <_GCControllerProfile>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)physicalDeviceSupportsMotion:(id)arg0 ;
+(id)deviceManager;
+(id)logicalDevice:(id)arg0 makeControllerMotionWithIdentifier:(id)arg1 ;
+(id)logicalDevice:(id)arg0 makeControllerPhysicalInputProfileWithIdentifier:(id)arg1 ;
+(id)logicalDeviceControllerProductCategory:(id)arg0 ;
+(id)physicalDeviceGetHapticCapabilities:(id)arg0 ;
+(id)physicalDeviceGetHapticCapabilityGraph:(id)arg0 ;
+(void)deviceManager:(id)arg0 prepareLogicalDevice:(id)arg1 ;
+(void)deviceManager:(id)arg0 willPublishPhysicalDevice:(id)arg1 ;
+(void)physicalDevice:(id)arg0 getBatteryWithReply:(id)arg1 ;
+(void)physicalDevice:(id)arg0 getLightWithReply:(id)arg1 ;
+(void)physicalDevice:(id)arg0 getSensorsEnabledWithReply:(id)arg1 ;
+(void)physicalDevice:(id)arg0 setLight:(id)arg1 ;
+(void)physicalDevice:(id)arg0 setSensorsActive:(BOOL)arg1 ;


@end


#endif