// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARIMAGEDISTORTIONCORRECTIONTECHNIQUE_H
#define ARIMAGEDISTORTIONCORRECTIONTECHNIQUE_H



#import "ARTechnique.h"

@interface ARImageDistortionCorrectionTechnique : ARTechnique {
    vector<float, std::allocator<float>> _mappingU;
    vector<float, std::allocator<float>> _mappingV;
    *vImageMapping _mapping;
    *__CVPixelBufferPool _undistortedImageBufferPool;
    *__CVPixelBufferPool _rgbImagePool;
    *__CVPixelBufferPool _rgbUndistortedImagePool;
    BOOL _uvMapExists;
}


@property (nonatomic) CGSize imageSize; // ivar: _imageSize


-(id)initWithImageSize:(struct CGSize )arg0 ;
-(id)processData:(id)arg0 ;
-(struct CGPoint )lensDistortionPointForPoint:(struct CGPoint )arg0 lookupTable:(id)arg1 distortionOpticalCenter:(struct CGPoint )arg2 imageSize:(struct CGSize )arg3 ;
-(void)buildUVMapFromHardcodedCalibrationParametersWithOriginalImageData:(id)arg0 ;
-(void)buildUVMapWithOriginalImageData:(id)arg0 ;
-(void)dealloc;
-(void)undistortImage:(struct __CVBuffer *)arg0 toTargetImage:(struct __CVBuffer *)arg1 ;


@end


#endif