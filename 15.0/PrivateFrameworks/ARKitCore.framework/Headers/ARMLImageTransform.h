// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARMLIMAGETRANSFORM_H
#define ARMLIMAGETRANSFORM_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "ARImageScalingTechnique.h"

@interface ARMLImageTransform : NSObject {
    CGSize _scaledSize;
    ARImageScalingTechnique *_imageScalingTechnique;
    NSArray *_imageScalePassDescriptions;
    *OpaqueVTImageRotationSession _rotationSession;
    *OpaqueVTPixelTransferSession _scalingSession;
    *__CFBoolean _rotationSessionSupportsScaling;
    *__CVPixelBufferPool _resultBufferPool;
    NSInteger _rotationAngle;
    CGSize _inputSize;
}




-(id)_applyFinalTransformToScaledImage:(id)arg0 rotation:(NSInteger)arg1 finalResultSize:(struct CGSize )arg2 originalImageData:(id)arg3 ;
-(id)_preScaleImageData:(id)arg0 ;
-(id)fastPassDownscaledResultDataFromImageData:(id)arg0 croppedRect:(struct CGRect )arg1 rotation:(NSInteger)arg2 rotationOfResultTensor:(NSInteger)arg3 ;
-(id)initWithScaledSize:(struct CGSize )arg0 ;
-(void)_calculatePreScalingPassesForInputResolution:(struct CGSize )arg0 ;
-(void)_prepareSessionAndPoolForRotation:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif