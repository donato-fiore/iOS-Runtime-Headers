// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNMETALPROCESSINGDEVICE_H
#define VNMETALPROCESSINGDEVICE_H

@protocol MTLDevice;


#import "VNProcessingDevice.h"

@interface VNMetalProcessingDevice : VNProcessingDevice {
    id<MTLDevice> *_metalDevice;
}




+(id)allDevices;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)targetsGPU;
-(NSUInteger)hash;
-(id)description;
-(id)initWithMetalDevice:(id)arg0 ;
-(id)metalDevice;
-(int)espressoDeviceID;
-(int)espressoEngine;
-(int)espressoStorageType;


@end


#endif