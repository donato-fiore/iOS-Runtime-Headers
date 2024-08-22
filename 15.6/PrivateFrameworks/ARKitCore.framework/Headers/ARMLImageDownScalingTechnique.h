// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARMLIMAGEDOWNSCALINGTECHNIQUE_H
#define ARMLIMAGEDOWNSCALINGTECHNIQUE_H

@protocol OS_dispatch_queue;


#import "ARImageBasedTechnique.h"
#import "ARImageScalingTechnique.h"
#import "ARImageRotationTechnique.h"
#import "ARImageCroppingTechnique.h"
#import "ARMLImageTransform.h"
#import "ARMLIntermediateDownScalingResultData.h"
#import "ARMLImageDownScalingResultData.h"

@interface ARMLImageDownScalingTechnique : ARImageBasedTechnique {
    ARImageScalingTechnique *_imageScalingTechnique;
    ARImageRotationTechnique *_imageRotationTechnique;
    ARImageCroppingTechnique *_imageCroppingTechnique;
    ARMLImageTransform *_fastPassImageScaler;
    ARMLImageTransform *_fastPassUltraWideImageScaler;
    *vImageCVImageFormat _cvImageFormatRef;
    *__CVPixelBufferPool _bgraPixelBufferPool;
    int _lockedOrientation;
    ARMLIntermediateDownScalingResultData *_intermediateDownSamplingResultData;
    ARMLImageDownScalingResultData *_downSamplingResultData;
    BOOL _enableDoubleMLResolutionForIPad;
    NSObject<OS_dispatch_queue> *_processingQueue;
    CGFloat _resultLatency;
    BOOL _deterministic;
}


@property (nonatomic) BOOL centerCropImage; // ivar: _centerCropImage
@property (readonly, nonatomic) CGSize imageSize; // ivar: _imageSize
@property (nonatomic) BOOL resizeUltraWideImage; // ivar: _resizeUltraWideImage
@property (nonatomic) BOOL saveIntermediateScaleResultData; // ivar: _saveIntermediateScaleResultData
@property (copy, nonatomic) id *ultrawideRotationStrategy; // ivar: _ultrawideRotationStrategy
@property (copy, nonatomic) id *wideRotationStrategy; // ivar: _wideRotationStrategy


-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)requiredTimeInterval;
-(NSInteger)getDeviceOrientationFromImageData:(id)arg0 ;
-(id)_fastPassDownscaledResultDataFromImageData:(id)arg0 croppedRect:(struct CGRect )arg1 fastPassScaler:(id)arg2 ;
-(id)_fullDescription;
-(id)_rotateImageDataForNeuralNetwork:(id)arg0 deviceOrientation:(NSInteger)arg1 pRegionOfInterest:(struct CGSize *)arg2 pRotationOfResultTensor:(*NSInteger)arg3 ;
-(id)_scaleImageDataForNeuralNetwork:(id)arg0 scaledSize:(struct CGSize )arg1 ;
-(id)_twoPassDownscaledResultDataFromImageData:(id)arg0 croppedRect:(struct CGRect )arg1 ;
-(id)defaultRotationStrategy:(SEL)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 ;
-(id)initWithSize:(struct CGSize )arg0 requiredTimeInterval:(CGFloat)arg1 ;
-(id)processData:(id)arg0 ;
-(id)resultDataClasses;
-(void)dealloc;
-(void)lockOrientation:(NSInteger)arg0 ;
-(void)prepare:(BOOL)arg0 ;


@end


#endif