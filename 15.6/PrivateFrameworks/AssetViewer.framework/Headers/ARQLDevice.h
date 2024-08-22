// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARQLDEVICE_H
#define ARQLDEVICE_H


#import <Foundation/Foundation.h>


@interface ARQLDevice : NSObject



+(BOOL)isRenderTier1;
+(BOOL)isRenderTier2;
+(BOOL)isRenderTier3;
+(BOOL)isRenderTier4;
+(BOOL)isRenderTier5;
+(BOOL)supportsSceneReconstruction;
+(BOOL)useSceneReconstructionMeshForOrientation;


@end


#endif