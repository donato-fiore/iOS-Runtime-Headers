// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWVISIONLANDMARKDETECTOR_H
#define BWVISIONLANDMARKDETECTOR_H

@class FigM2MController;

#import <Foundation/Foundation.h>

#import "BWPixelBufferPool.h"

@interface BWVisionLandmarkDetector : NSObject {
    BWPixelBufferPool *_faceDetectionBufferPool;
    FigM2MController *_m2mController;
}




+(void)initialize;
-(id)_detectLandmarksUsingInputPixelBuffer:(struct __CVBuffer *)arg0 metadata:(id)arg1 outputFaceDetectionOrientation:(*int)arg2 includePoseAndQuality:(BOOL)arg3 ;
-(id)init;
-(int)detectFaceLandmarksUsingSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 attachingToSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 includePoseAndQuality:(BOOL)arg2 ;
-(int)prepareForDetectionWithInputVideoFormat:(id)arg0 ;
-(void)dealloc;
-(void)prewarmForDetection;


@end


#endif