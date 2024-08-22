// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNBLURMEASURE_H
#define VNBLURMEASURE_H


#import <Foundation/Foundation.h>


@interface VNBlurMeasure : NSObject



+(BOOL)computeApproximateBlurScore:(*float)arg0 onGrayscaleImage:(struct __CVBuffer *)arg1 sampledPixelsCount:(int)arg2 insetFactor:(float)arg3 error:(*id)arg4 ;
+(BOOL)computeApproximateBlurScore:(*float)arg0 onRGBAImage:(struct __CVBuffer *)arg1 sampledPixelsCount:(int)arg2 insetFactor:(float)arg3 error:(*id)arg4 ;
+(BOOL)computeBlurScore:(*float)arg0 onGrayscaleImage:(struct __CVBuffer *)arg1 andWithRegionOfInterestInImageCoordinates:(struct CGRect )arg2 andRegionOfInterestInsetFactor:(float)arg3 error:(*id)arg4 ;
+(BOOL)computeBlurScore:(*float)arg0 onGrayscaleImage:(struct __CVBuffer *)arg1 insetFactor:(float)arg2 error:(*id)arg3 ;
+(BOOL)computeBlurScore:(*float)arg0 usingBlurSignature:(id)arg1 insetFactor:(float)arg2 imageROI:(struct CGRect )arg3 error:(*id)arg4 ;
+(BOOL)computeEdgeWidthBlurScore:(*float)arg0 onGrayscaleImage:(struct __CVBuffer *)arg1 error:(*id)arg2 ;


@end


#endif