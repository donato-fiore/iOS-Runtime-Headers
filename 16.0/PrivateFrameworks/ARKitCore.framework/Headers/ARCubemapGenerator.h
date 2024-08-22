// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARCUBEMAPGENERATOR_H
#define ARCUBEMAPGENERATOR_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ARGPUCubemapProjector.h"
#import "ARGPUCubemapConverter.h"
#import "ARGPUCubemapHistogram.h"
#import "ARGPUWarper.h"

@interface ARCubemapGenerator : NSObject {
    ARGPUCubemapProjector *_cubemapProjector;
    ARGPUCubemapConverter *_cubemapConverter;
    ARGPUCubemapHistogram *_cubemapHistogram;
    ARGPUWarper *_gpuWarper;
    NSObject<OS_dispatch_queue> *_cubemapQueue;
}




-(id)init;
// -(void)cubemapWithTransform:(struct ? )arg0 extent:(struct ARLabHistogram )arg1 lastHistogram:(id)arg2 fromMeshes:(struct __CVBuffer *)arg3 cameraImage:(struct ? )arg4 cameraTransform:(struct ? )arg5 cameraIntrinsics:(CGFloat)arg6 cameraExposure:(float)arg7 cameraExposureOffset:(id)arg8 completionHandler:(unk)arg9  ;


@end


#endif