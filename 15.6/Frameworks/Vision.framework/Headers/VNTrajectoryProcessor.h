// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNTRAJECTORYPROCESSOR_H
#define VNTRAJECTORYPROCESSOR_H

@class CIContext, CIFilter, CIImage;

#import <Foundation/Foundation.h>

#import "VNDetectContoursRequest.h"
#import "VNImageBuffer.h"
#import "ParabolaDetection.h"

@interface VNTrajectoryProcessor : NSObject {
    CIContext *_ciContext;
    CIFilter *_absoluteDiffFilter;
    CIFilter *_thresholdFilter;
    CIFilter *_dilateFilter;
    CIFilter *_contrastFilter;
    VNDetectContoursRequest *_detectContoursRequest;
    VNImageBuffer *_previousFrameBuffer;
    CIImage *_previousFrameImage;
    NSUInteger _maximumImageDimension;
    float _preScaleFactor;
    float _dilateRadius;
    ? _frameAnalysisSpacing;
    ? _lastAnalyzedFramePTS;
    ? _nextFrameToBeAnalyzedPTS;
    BOOL _processAllFrames;
    *CGColorSpace _sRGB;
    ParabolaDetection *_parabolaDetector;
    NSUInteger _currentImageWidth;
    NSUInteger _currentImageHeight;
}




-(id)_VNPointsFromCGPoints:(*void)arg0 ;
-(id)initWithFrameAnalysisSpacing:(struct ? )arg0 trajectoryLength:(NSInteger)arg1 ;
-(id)processVNImageBuffer:(id)arg0 regionOfInterest:(struct CGRect )arg1 withOptions:(id)arg2 warningRecorder:(id)arg3 requestUUID:(id)arg4 error:(*id)arg5 ;
-(struct __CVBuffer *)_createCroppedAndScaledBufferFromVNImageBuffer:(id)arg0 regionOfInterest:(struct CGRect )arg1 withOptions:(id)arg2 error:(*id)arg3 ;
-(void)dealloc;


@end


#endif