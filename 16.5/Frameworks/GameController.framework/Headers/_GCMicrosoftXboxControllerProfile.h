// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCMICROSOFTXBOXCONTROLLERPROFILE_H
#define _GCMICROSOFTXBOXCONTROLLERPROFILE_H

@class NSString;
@protocol _GCControllerProfile;

#import <Foundation/Foundation.h>


@interface _GCMicrosoftXboxControllerProfile : NSObject <_GCControllerProfile>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)logicalDeviceDeterminePhysicalInputType:(id)arg0 ;
+(id)deviceManager;
+(id)logicalDevice:(id)arg0 makeControllerPhysicalInputProfileWithIdentifier:(id)arg1 ;
+(id)logicalDeviceControllerDetailedProductCategory:(id)arg0 ;
+(id)logicalDeviceControllerProductCategory:(id)arg0 ;
+(id)physicalDeviceGetHapticCapabilities:(id)arg0 ;
+(id)physicalDeviceGetHapticCapabilityGraph:(id)arg0 ;
+(void)deviceManager:(id)arg0 prepareLogicalDevice:(id)arg1 ;
+(void)deviceManager:(id)arg0 willPublishPhysicalDevice:(id)arg1 ;
+(void)physicalDevice:(id)arg0 getBatteryWithReply:(id)arg1 ;


@end


#endif