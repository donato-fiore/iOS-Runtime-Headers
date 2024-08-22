// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNHEATMAPUTILITIES_H
#define VNHEATMAPUTILITIES_H


#import <Foundation/Foundation.h>


@interface VNHeatMapUtilities : NSObject



+(BOOL)smoothedFloat32ImageBuffer:(struct vImage_Buffer )arg0 fromImageBuffer:(struct vImage_Buffer )arg1 originalImageSize:(struct CGSize )arg2 sigmaX:(float)arg3 sigmaY:(float)arg4 nStd:(float)arg5 ;
+(float)maximumValueFromFloat32ImageBuffer:(struct vImage_Buffer )arg0 ;
+(id)boundingBoxesFromFloat32ImageBuffer:(struct vImage_Buffer )arg0 thresholds:(id)arg1 error:(*id)arg2 ;
+(id)boundingBoxesFromFloat32ImageBuffer:(struct vImage_Buffer )arg0 thresholds:(id)arg1 relativeToMaximum:(BOOL)arg2 applySmoothing:(BOOL)arg3 originalImageSize:(struct CGSize )arg4 sigmaX:(float)arg5 sigmaY:(float)arg6 nStd:(float)arg7 error:(*id)arg8 ;
+(id)boundingBoxesFromFloat32PixelBuffer:(struct __CVBuffer *)arg0 thresholds:(id)arg1 relativeToMaximum:(BOOL)arg2 applySmoothing:(BOOL)arg3 originalImageSize:(struct CGSize )arg4 sigmaX:(float)arg5 sigmaY:(float)arg6 nStd:(float)arg7 error:(*id)arg8 ;
+(id)significantRegionsFromFloat32ImageBuffer:(struct vImage_Buffer )arg0 threshold:(float)arg1 ;
+(id)significantRegionsFromFloat32ImageBuffer:(struct vImage_Buffer )arg0 threshold:(float)arg1 relativeToMaximum:(BOOL)arg2 ;
+(id)significantRegionsFromFloat32PixelBuffer:(struct __CVBuffer *)arg0 threshold:(float)arg1 relativeToMaximum:(BOOL)arg2 error:(*id)arg3 ;


@end


#endif