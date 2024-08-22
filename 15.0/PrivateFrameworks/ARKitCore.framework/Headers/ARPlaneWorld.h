// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARPLANEWORLD_H
#define ARPLANEWORLD_H

@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "ARGPUWarper.h"

@interface ARPlaneWorld : NSObject {
    map<std::array<unsigned char, 16>, ARTexturedPlane, std::less<std::array<unsigned char, 16>>, std::allocator<std::pair<const std::array<unsigned char, 16>, ARTexturedPlane>>> _planes;
    ARGPUWarper *_gpuWarper;
    ARPlaneUpdateQueue _queue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSUInteger _textureSize;
}




+(struct map<std::array<unsigned char, 16>, std::set<std::array<unsigned char, 16>>, std::less<std::array<unsigned char, 16>>, std::allocator<std::pair<const std::array<unsigned char, 16>, std::set<std::array<unsigned char, 16>>>>> )findMergedPlanes:(*void)arg0 ;
-(BOOL)isBusy;
-(id)_fullDescription;
-(id)init;
-(id)initWithTextureSize:(NSUInteger)arg0 ;
-(struct map<std::array<unsigned char, 16>, ARTexturedPlane, std::less<std::array<unsigned char, 16>>, std::allocator<std::pair<const std::array<unsigned char, 16>, ARTexturedPlane>>> )updatePlanes:(*void)arg0 withCurrentDetections:(*void)arg1 synchronous:(BOOL)arg2 ;
-(struct vector<ARTexturedPlane, std::allocator<ARTexturedPlane>> )planes;
-(void)updatePlanes:(*void)arg0 withCameraImage:(struct __CVBuffer *)arg1 exposureOffset:(float)arg2 transform:(struct ? )arg3 intrinsics:(struct ? )arg4 synchronous:(BOOL)arg5 ;


@end


#endif