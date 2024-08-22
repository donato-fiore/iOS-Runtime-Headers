// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARGPUWARPER_H
#define ARGPUWARPER_H

@protocol MTLDevice, MTLCommandQueue, MTLRenderPipelineState;

#import <Foundation/Foundation.h>


@interface ARGPUWarper : NSObject {
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLRenderPipelineState> *_homographyPipelineState;
}




-(id)description;
-(id)init;
-(void)warpCameraImage:(struct __CVBuffer *)arg0 withExposureOffset:(float)arg1 withCameraIntrinsics:(struct ? )arg2 withCameraTransform:(struct ? )arg3 toPlane:(struct ARTexturedPlane )arg4 withLoadAction:(NSUInteger)arg5 synchronous:(BOOL)arg6 ;
-(void)warpPlane:(struct ARTexturedPlane )arg0 toPlane:(struct ARTexturedPlane )arg1 withLoadAction:(NSUInteger)arg2 synchronous:(BOOL)arg3 ;


@end


#endif