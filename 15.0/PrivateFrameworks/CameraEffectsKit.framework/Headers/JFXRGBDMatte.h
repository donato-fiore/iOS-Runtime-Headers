// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JFXRGBDMATTE_H
#define JFXRGBDMATTE_H

@protocol OS_dispatch_queue, OS_dispatch_semaphore;


#import "JFXMatting.h"
#import "JFXImageScaler.h"
#import "JFXPixelRotationSession.h"

@interface JFXRGBDMatte : JFXMatting {
    PVComputeGrabCut" _grabCutModules;
    unsigned int _grabCutCounter;
    CGSize _depthSize;
    CGSize _depthSizeRotated;
    *__CVPixelBufferPool _fixedPointDepthPool;
    NSObject<OS_dispatch_queue> *_submissionQ;
    NSObject<OS_dispatch_queue> *_processQ;
    NSObject<OS_dispatch_semaphore> *_processThrottle;
    int _numberOfGaussiansBackgroundGMM;
    int _numberOfGaussiansForegroundGMM;
    int _numberOfIterationsGrabcut;
    int _topOfHeadHalf;
    int _heightOfMattingWin;
    CGRect _largestFaceRect;
    NSInteger _interfaceOrientation;
    BOOL _isRepeatingFrame;
    int _depthHist;
    char * _depthBufferHalf;
    char * _depthBufferFull;
    char * _vImageTempBuffer;
    NSUInteger _numFramesWithVeryClosePixels;
    NSUInteger _previousMattingStatus;
    NSUInteger _currentMattingStatus;
    int _minObjectDistance;
    *__CVPixelBufferPool _scaledSourcePool;
    *__CVPixelBufferPool _scaledDestinationPool;
    *__CVPixelBufferPool _processedMattePool;
    *__CVPixelBufferPool _rotatedMattePool;
    *__CVBuffer _alphaMatteHistory;
    JFXImageScaler *_imageScaler;
    JFXPixelRotationSession *_matteRotator;
    JFXPixelRotationSession *_colorRotator;
    BOOL _disableMattingMultithreading;
    BOOL _usingFaceRect;
    BOOL _usingforegroundSegBooster;
    BOOL _usingLargerRect;
    CGRect _lastLargestFaceRect;
    int _faceRectDepth;
    BOOL _motionDetected;
    BOOL _visualizeFaceRect;
    ? _depthProcessingData;
    *ContourMemoryPool _contourMemoryPool;
}




+(BOOL)_defaultMatteGeneratorPrefersDepth;
+(struct CGSize )mattingDepthInputSize;
-(?)depthToAlphaMap;
-(?)erodeAndDilateMatte;
-(?)expansionOfKnownRegionsRGBD:(?)arg0 processingData:(?)arg1 regionWincenterOfRow;
-(?)featherMatte;
-(?)findDepthForFace;
-(?)findLocalMattingRect:(?)arg0 processingDatamattingRect;
-(?)getDepthDataprocessData;
-(?)innerOuterFusionprocessWin;
-(?)localMattingHalfRGBDcolorBuffer;
-(?)makeTrimap;
-(?)moveLocalDepthBufferToDepthOuter;
-(BOOL)isValidForCameraFrameSet:(id)arg0 ;
-(char *)localDepthBuffer;
-(char *)localDepthBufferBig;
-(char *)localDepthBufferSmall;
-(char *)localDepthBufferTemp;
-(id)initForFrameSet:(id)arg0 ;
-(struct __CVBuffer *)createInvertedMatte:(struct vImage_Buffer )arg0 ;
-(struct __CVBuffer *)createTemporalFilteredMatte:(struct __CVBuffer *)arg0 ;
-(struct __CVBuffer *)processAlphaMapUsingDepthAndColor:(struct __CVBuffer *)arg0 colorBuffer:(struct __CVBuffer *)arg1 ;
-(void)alphaMatteForFrameSet:(id)arg0 mattingPerfState:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)findRectOrientationRightLeft:(*int)arg0 numContourPixels:(int)arg1 winHeight:(int)arg2 halfHeight:(int)arg3 originY:(*int)arg4 sizeHeight:(*int)arg5 isRight:(BOOL)arg6 ;
-(void)grabCutWithTrimap:(char *)arg0 color:(struct __CVBuffer *)arg1 processWin:(struct CGRect )arg2 ;
-(void)mattingGrabCut:(char *)arg0 depthMap:(char *)arg1 colorBuffer:(struct __CVBuffer *)arg2 processWin:(struct CGRect )arg3 ;
-(void)postProcessing:(char *)arg0 depthDataSmall:(char *)arg1 depthData:(char *)arg2 RGBDMatte:(char *)arg3 halfHeight:(int)arg4 halfWidth:(int)arg5 ;
-(void)requestMattingStatus;


@end


#endif