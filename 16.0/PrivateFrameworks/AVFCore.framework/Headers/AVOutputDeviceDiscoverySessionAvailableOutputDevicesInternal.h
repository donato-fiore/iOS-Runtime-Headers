// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVOUTPUTDEVICEDISCOVERYSESSIONAVAILABLEOUTPUTDEVICESINTERNAL_H
#define AVOUTPUTDEVICEDISCOVERYSESSIONAVAILABLEOUTPUTDEVICESINTERNAL_H

@class NSMutableArray;
@protocol AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl;

#import <Foundation/Foundation.h>


@interface AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal : NSObject {
    id<AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl> *impl;
    NSMutableArray *_recentlyUsedDevices;
    NSMutableArray *_otherDevices;
}






@end


#endif