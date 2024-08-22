// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNCPUPROCESSINGDEVICE_H
#define VNCPUPROCESSINGDEVICE_H



#import "VNProcessingDevice.h"

@interface VNCPUProcessingDevice : VNProcessingDevice



-(BOOL)targetsCPU;
-(id)metalDevice;
-(int)espressoEngine;
-(int)espressoStorageType;


@end


#endif