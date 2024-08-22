// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVFIGROUTEDESCRIPTOROUTPUTDEVICEDISCOVERYSESSIONAVAILABLEOUTPUTDEVICESIMPL_H
#define AVFIGROUTEDESCRIPTOROUTPUTDEVICEDISCOVERYSESSIONAVAILABLEOUTPUTDEVICESIMPL_H

@class NSArray, NSString;
@protocol AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl;

#import <Foundation/Foundation.h>


@interface AVFigRouteDescriptorOutputDeviceDiscoverySessionAvailableOutputDevicesImpl : NSObject <AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl>

 {
    NSArray *_routeDescriptors;
    *OpaqueFigRouteDiscoverer _routeDiscoverer;
    *OpaqueAPSyncController _syncController;
}


@property (readonly, nonatomic) NSArray *allDevices;
@property (readonly, nonatomic) NSArray *availableOutputDeviceGroups;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithRouteDescriptors:(id)arg0 routeDiscoverer:(struct OpaqueFigRouteDiscoverer *)arg1 syncController:(struct OpaqueAPSyncController *)arg2 ;
-(void)dealloc;


@end


#endif