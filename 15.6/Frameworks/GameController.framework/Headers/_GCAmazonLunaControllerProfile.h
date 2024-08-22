// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GCAMAZONLUNACONTROLLERPROFILE_H
#define _GCAMAZONLUNACONTROLLERPROFILE_H

@class NSString;
@protocol _GCControllerProfile;

#import <Foundation/Foundation.h>


@interface _GCAmazonLunaControllerProfile : NSObject <_GCControllerProfile>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)deviceManager;
+(id)logicalDevice:(id)arg0 makeControllerPhysicalInputProfileWithIdentifier:(id)arg1 ;
+(id)logicalDeviceControllerProductCategory:(id)arg0 ;
+(void)deviceManager:(id)arg0 prepareLogicalDevice:(id)arg1 ;
+(void)deviceManager:(id)arg0 willPublishPhysicalDevice:(id)arg1 ;


@end


#endif