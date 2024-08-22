// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JFXCVASEGMATTING_SPI_H
#define JFXCVASEGMATTING_SPI_H

@protocol OS_dispatch_queue;


#import "JFXMatting.h"
#import "JFXGuidedUpscaler.h"
#import "JFXGuidedFilter.h"
#import "JFXImageScaler.h"

@interface JFXCVASegMatting_SPI : JFXMatting {
    NSObject<OS_dispatch_queue> *_matteGenQ;
    *CVASegmentation _segmenter;
    *__CVPixelBufferPool _alphaMattePool;
    *__CVPixelBufferPool _tinyAlphaMattePool;
    *__CVPixelBufferPool _smallAlphaMattePool;
    *__CVPixelBufferPool _smallForegroundColorPool;
    *__CVPixelBufferPool _rotMattePool;
    *__CVPixelBufferPool _flipColorPool;
    *__CVPixelBufferPool _rotColorPool;
    *__CVBuffer _foregroundColorEstimateBuffer;
    *__CVBuffer _segmentationBuffer;
    int _cameraType;
    JFXGuidedUpscaler *_calmFilter;
    JFXGuidedFilter *_guidedFilter;
    JFXImageScaler *_imageScaler;
    int _mode;
    CGRect _largestFaceRect;
    NSInteger _interfaceOrientation;
    NSUInteger _previousMattingStatus;
    NSUInteger _currentMattingStatus;
    BOOL _visualizeFaceRect;
}




+(BOOL)_defaultMatteGeneratorPrefersDepth;
+(id)segmentationOptionsForDepth:(struct __CVBuffer *)arg0 rotColor:(struct __CVBuffer *)arg1 pts:(struct ? )arg2 cameraType:(int)arg3 ;
-(?)getFaceDepthlargestFaceRect;
-(BOOL)isValidForCameraFrameSet:(id)arg0 ;
-(id)initForFrameSet:(id)arg0 ;
-(int)depthThresholdForDepthMap:(struct __CVBuffer *)arg0 processData:(struct DepthProcessingDataRGBD *)arg1 largestFaceRect:(struct CGRect )arg2 interfaceOrientation:(NSInteger)arg3 ;
-(struct __CVBuffer *)dilateImage:(struct __CVBuffer *)arg0 toImage:(struct __CVBuffer *)arg1 kernelSize:(NSUInteger)arg2 ;
-(struct __CVBuffer *)garbageMatteForFrameSet:(id)arg0 matte:(struct __CVBuffer *)arg1 erodedMatteOut:(struct __CVBuffer *)arg2 ;
-(struct __CVBuffer *)invertImage:(struct __CVBuffer *)arg0 ;
-(struct __CVBuffer *)invertImageAndApplyGarbageMatte:(struct __CVBuffer *)arg0 garbageMatte:(struct __CVBuffer *)arg1 erodedMatte:(struct __CVBuffer *)arg2 ;
-(struct __CVBuffer *)invertImageAndApplyGarbageMatteForLandscapeOrientation:(struct __CVBuffer *)arg0 garbageMatte:(struct __CVBuffer *)arg1 erodedMatte:(struct __CVBuffer *)arg2 ;
-(struct __CVBuffer *)invertImageAndApplyGarbageMatteForPortraitOrientation:(struct __CVBuffer *)arg0 garbageMatte:(struct __CVBuffer *)arg1 erodedMatte:(struct __CVBuffer *)arg2 ;
-(struct __CVBuffer *)invertImageAndApplyGarbageMatteForPortraitUpsideDownOrientation:(struct __CVBuffer *)arg0 garbageMatte:(struct __CVBuffer *)arg1 erodedMatte:(struct __CVBuffer *)arg2 ;
-(struct __CVBuffer *)largeColorImageWithSmallForegroundEstimate:(struct __CVBuffer *)arg0 rawAlpha:(struct __CVBuffer *)arg1 color:(struct __CVBuffer *)arg2 ;
-(void)alphaMatteForFrameSet:(id)arg0 mattingPerfState:(id)arg1 completionHandler:(id)arg2 ;
-(void)combineInnerAndOuterMattes:(struct __CVBuffer *)arg0 dilatedOuterMatte:(struct __CVBuffer *)arg1 ;
-(void)dealloc;
-(void)erodeImage:(struct __CVBuffer *)arg0 toImage:(struct __CVBuffer *)arg1 kernelSize:(NSUInteger)arg2 ;
-(void)requestMattingStatus;


@end


#endif