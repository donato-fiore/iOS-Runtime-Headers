// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARSISEMANTICSEGMENTATIONTECHNIQUE_H
#define ARSISEMANTICSEGMENTATIONTECHNIQUE_H

@class SISceneSegmentationAlgorithm, SISceneUnderstandingAlgorithm, NSString;
@protocol ARTechniqueBusyState;


#import "ARMLImageProcessingTechnique.h"
#import "ARImageRotationTechnique.h"

@interface ARSISemanticSegmentationTechnique : ARMLImageProcessingTechnique <ARTechniqueBusyState>

 {
    *__CVPixelBufferPool _outputSegmentationPixelBufferPool;
    *__CVPixelBufferPool _outputConfidencePixelBufferPool;
    *__CVPixelBufferPool _outputNormalPixelBufferPool;
    *__CVPixelBufferPool _outputUncertaintyPixelBufferPool;
    *__CVPixelBufferPool _scaledSegmentationOutputPixelBufferPool;
    *__CVPixelBufferPool _scaledConfidencePixelBufferPool;
    *__CVPixelBufferPool _scaledNormalsPixelBufferPool;
    ARImageRotationTechnique *_normalsRotationTechnique;
    ARImageRotationTechnique *_segmentationRotationTechnique;
    ARImageRotationTechnique *_confidenceUncertaintyRotationTechnique;
    SISceneSegmentationAlgorithm *_sceneSegmentationAlgorithm;
    SISceneUnderstandingAlgorithm *_sceneUnderstandingAlgorithm;
    CGFloat _lastResultPushTimestamp;
    BOOL _isLegacyModel;
    int _numClasses;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBusy;
@property (nonatomic) BOOL shouldUseSynchronizedUltraWide; // ivar: _shouldUseSynchronizedUltraWide
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsUncertainty; // ivar: _supportsUncertainty


+(void)createUncertaintyMaskedSegmentationBuffer:(struct __CVBuffer *)arg0 fromSegmentationBuffer:(struct __CVBuffer *)arg1 uncertaintyBuffer:(struct __CVBuffer *)arg2 maskValue:(unsigned char)arg3 ;
-(?)scaleSegmentationPixelOutputBuffer:(?)arg0 confidencePixelOutputBuffer:(?)arg1 normalPixelOutputBuffertargetResolution;
-(BOOL)supportsNormals;
-(CGFloat)requiredTimeInterval;
-(NSInteger)_mapUIDeviceOrientation:(NSInteger)arg0 ;
-(id)_rotateImageData:(id)arg0 withRotationTechnique:(id)arg1 rotationNeeded:(NSInteger)arg2 ;
-(id)createResultDataFromOutputSegmentation:(struct __CVBuffer *)arg0 outputConfidence:(struct __CVBuffer *)arg1 outputNormalize:(struct __CVBuffer *)arg2 outputUncertainty:(struct __CVBuffer *)arg3 inputImageData:(id)arg4 originalData:(id)arg5 rotationNeeded:(NSInteger)arg6 regionOfInterest:(struct CGSize )arg7 ;
-(id)init;
-(id)initLegacy;
-(id)resultDataClasses;
-(id)runNeuralNetworkWithImageData:(id)arg0 originalImageData:(id)arg1 regionOfInterest:(struct CGSize )arg2 rotationOfResultTensor:(NSInteger)arg3 ;
-(void)_captureMLRunNetworkInputImageData:(CGFloat)arg0 cameraType:(NSInteger)arg1 imageWidth:(NSUInteger)arg2 imageHeight:(NSUInteger)arg3 ;
-(void)_endLoadingMLModelSignpost;
-(void)_endMLCreateResultSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endMLProcessingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endMLRunNetworkSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_prepareOnce:(BOOL)arg0 ;
-(void)_startLoadingMLModelSignpost;
-(void)_startMLCreateResultSignpostWithTimestamp:(CGFloat)arg0 orientation:(NSInteger)arg1 outputSize:(struct CGSize )arg2 ;
-(void)_startMLProcessingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startMLRunNetworkSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)changeEspressoConfig:(id)arg0 ;
-(void)dealloc;


@end


#endif