// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARIMAGEDISTORTIONCORRECTIONTECHNIQUE_H
#define ARIMAGEDISTORTIONCORRECTIONTECHNIQUE_H

@class NSDictionary;


#import "ARTechnique.h"

@interface ARImageDistortionCorrectionTechnique : ARTechnique {
    *__CVPixelBufferPool _undistortedImageBufferPool;
    *__CVPixelBufferPool _rgbImagePool;
    *__CVPixelBufferPool _rgbUndistortedImagePool;
    NSDictionary *_undistortionMappingsForRotations;
}


@property (nonatomic) CGSize imageSize; // ivar: _imageSize


-(id)initWithImageSize:(struct CGSize )arg0 ;
-(id)processData:(id)arg0 ;
-(struct CGPoint )lensDistortionPointForPoint:(struct CGPoint )arg0 lookupTable:(id)arg1 distortionOpticalCenter:(struct CGPoint )arg2 imageSize:(struct CGSize )arg3 ;
-(void)buildUVMapFromHardcodedCalibrationParameters;
-(void)buildUVMapWithCameraCalibrationData:(id)arg0 ;
-(void)buildUVMapWithDistortedPixelProviderBlock:(id)arg0 ;
-(void)dealloc;
-(void)undistortImage:(struct __CVBuffer *)arg0 toTargetImage:(struct __CVBuffer *)arg1 imageRotationAngle:(NSInteger)arg2 ;


@end


#endif