// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVFIGENDPOINTOUTPUTDEVICEDISCOVERYSESSIONAVAILABLEOUTPUTDEVICESIMPL_H
#define AVFIGENDPOINTOUTPUTDEVICEDISCOVERYSESSIONAVAILABLEOUTPUTDEVICESIMPL_H

@class NSArray, NSString;
@protocol AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl;

#import <Foundation/Foundation.h>


@interface AVFigEndpointOutputDeviceDiscoverySessionAvailableOutputDevicesImpl : NSObject <AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl>

 {
    NSArray *_figEndpoints;
}


@property (readonly, nonatomic) NSArray *allDevices;
@property (readonly, nonatomic) NSArray *availableOutputDeviceGroups;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithAvailableFigEndpoints:(id)arg0 ;
-(void)dealloc;


@end


#endif