// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVOUTPUTDEVICEDISCOVERYSESSIONAVAILABLEOUTPUTDEVICES_H
#define AVOUTPUTDEVICEDISCOVERYSESSIONAVAILABLEOUTPUTDEVICES_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal.h"

@interface AVOutputDeviceDiscoverySessionAvailableOutputDevices : NSObject {
    AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal *_availableOutputDevices;
}


@property (readonly, nonatomic) NSArray *otherDevices;
@property (readonly, nonatomic) NSArray *recentlyUsedDevices;


+(id)outputDeviceDiscoverySessionAvailableOutputDevicesWithAvailableFigEndpoints:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)availableOutputDeviceGroups;
-(id)impl;
-(id)init;
-(id)initWithOutputDeviceDiscoverySessionAvailableOutputDevicesImpl:(id)arg0 ;
-(void)_loadOutputDevices;
-(void)dealloc;


@end


#endif