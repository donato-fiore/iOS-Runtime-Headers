// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVEMPTYOUTPUTDEVICEDISCOVERYSESSIONAVAILABLEOUTPUTDEVICES_H
#define AVEMPTYOUTPUTDEVICEDISCOVERYSESSIONAVAILABLEOUTPUTDEVICES_H

@class NSArray, NSString;
@protocol AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl;

#import <Foundation/Foundation.h>


@interface AVEmptyOutputDeviceDiscoverySessionAvailableOutputDevices : NSObject <AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl>



@property (readonly, nonatomic) NSArray *allDevices;
@property (readonly, nonatomic) NSArray *availableOutputDeviceGroups;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif