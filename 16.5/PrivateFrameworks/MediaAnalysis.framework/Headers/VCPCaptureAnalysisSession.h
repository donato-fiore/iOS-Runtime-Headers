// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPCAPTUREANALYSISSESSION_H
#define VCPCAPTUREANALYSISSESSION_H

@class NSMutableDictionary, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VCPVideoFacePoseAnalyzer.h"
#import "VCPVideoFaceMeshAnalyzer.h"
#import "VCPFullVideoAnalyzer.h"
#import "VCPImageBlurAnalyzer.h"
#import "VCPAudioAnalyzer.h"
#import "VCPVideoFullFaceDetector.h"
#import "VCPSceneChangeAnalyzer.h"
#import "VCPLightMotionAnalyzer.h"
#import "VCPTrimAnalyzer.h"
#import "VCPHomeKitMotionAnalyzer.h"

@interface VCPCaptureAnalysisSession : NSObject {
    NSUInteger _analysisTypes;
    VCPVideoFacePoseAnalyzer *_poseAnalyzer;
    VCPVideoFaceMeshAnalyzer *_meshAnalyzer;
    VCPFullVideoAnalyzer *_videoAnalysis;
    VCPImageBlurAnalyzer *_blurAnalyzer;
    VCPAudioAnalyzer *_audioAnalyzer;
    VCPVideoFullFaceDetector *_faceDetector;
    VCPSceneChangeAnalyzer *_sceneChangeAnalyzer;
    VCPLightMotionAnalyzer *_lightMotionAnalyzer;
    VCPTrimAnalyzer *_trimAnalyzer;
    VCPHomeKitMotionAnalyzer *_homeKitMotionAnalyzer;
    *Rotator _rotator;
    *Rotator _rotatorForFacePose;
    CGAffineTransform _preferredTransform;
    float _focalLengthInPixels;
    NSMutableDictionary *_aggregatedResults;
    int _rotationAngleForFacePose;
    int _preferredAngle;
    NSObject<OS_dispatch_queue> *_analysisQueue;
    BOOL _preWarmed;
}


@property (readonly) NSDictionary *aggregatedResults;


+(id)aggregateAnalysisForTypes:(NSUInteger)arg0 withFramesMeta:(id)arg1 properties:(id)arg2 ;
+(id)analyzerForAnalysisTypes:(NSUInteger)arg0 withPreferredTransform:(struct CGAffineTransform )arg1 properties:(id)arg2 ;
-(BOOL)finalizeAnalysis;
-(BOOL)shouldCutAt:(struct ? )arg0 stillPTS:(struct ? )arg1 withCut:(BOOL)arg2 ;
-(BOOL)updatePreferredTransform:(struct CGAffineTransform *)arg0 properties:(id)arg1 ;
-(id)analyzePixelBuffer:(struct __CVBuffer *)arg0 withTimestamp:(struct ? )arg1 andDuration:(struct ? )arg2 properties:(id)arg3 error:(*id)arg4 ;
-(id)init;
-(id)initWithAnalysisTypes:(NSUInteger)arg0 withPreferredTransform:(struct CGAffineTransform )arg1 withFocalLengthInPixels:(float)arg2 withAnalysisQueue:(id)arg3 withTurbo:(BOOL)arg4 ;
-(int)analyzeAudioBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(int)analyzeFrameWithTimeRange:(struct ? )arg0 analysisData:(id)arg1 ;
-(int)analyzePixelBuffer:(struct __CVBuffer *)arg0 withTimestamp:(struct ? )arg1 andDuration:(struct ? )arg2 properties:(id)arg3 completion:(id)arg4 ;
-(int)prewarmWithProperties:(id)arg0 ;
-(struct ? )rotateTransform:(struct ? )arg0 byAngle:(int)arg1 ;
-(struct CGAffineTransform )flipTransform:(struct CGAffineTransform )arg0 ;
-(struct CGAffineTransform )transformForAngle:(int)arg0 pixelBuffer:(struct __CVBuffer *)arg1 ;
-(void)dealloc;


@end


#endif