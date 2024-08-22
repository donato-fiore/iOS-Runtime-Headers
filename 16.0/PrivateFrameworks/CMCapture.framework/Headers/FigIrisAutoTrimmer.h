// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGIRISAUTOTRIMMER_H
#define FIGIRISAUTOTRIMMER_H

@class NSArray, NSData, NSMutableArray;

#import <Foundation/Foundation.h>


@interface FigIrisAutoTrimmer : NSObject {
    BOOL _motionAvailable;
    ? _captureMotionDelta;
    CGFloat _captureMotionDeltaPeriod;
    BOOL _haveCaptureMotionDelta;
    ? _lastAttitude;
    ? _lastDelta;
    CGFloat _lastCheckedTimestamp;
    int _lastStatus;
    int _svmKernelType;
    int _svmVectorCount;
    int _svmParamCount;
    float _svmRBFRho;
    float _svmRBFGamma;
    NSArray *_svmKeys;
    NSData *_svmNormalization;
    NSData *_svmVectors;
    NSMutableArray *_motionSamples;
    NSUInteger _estimatedIntermediatesCount;
    BOOL _intermediateLoggingEnabled;
    ? _maxHoldDuration;
    NSInteger _maxHoldFrames;
    CGFloat _bufferHistorySeconds;
    CGFloat _motionSampleRate;
    NSUInteger _nominalHistorySize;
    BOOL _vitalityScoringEnabled;
    float _vitalityDocumentThreshold;
    unsigned int _vitalityScoringVersion;
    ? _vitalityScoringSmartCameraPipelineVersion;
}


@property (readonly, nonatomic) BOOL trimmingActive;
@property (readonly, nonatomic) unsigned int vitalityScoringVersion;


+(void)initialize;
-(BOOL)intermediateLoggingEnabled;
-(BOOL)vitalityScoringEnabled;
-(CGFloat)bufferHistorySeconds;
-(CGFloat)videoFrameRate;
-(float)computeVitalityScoreForStillImageHostPTS:(struct ? )arg0 movieRange:(struct ? )arg1 ;
-(id)exportMotionSamples;
-(id)init;
-(int)emissionStatusForHostPTS:(struct ? )arg0 ;
-(struct ? )beginTrimmingForStillImageHostPTS:(struct ? )arg0 minimumPTS:(struct ? )arg1 ;
-(struct ? )maxHoldDuration;
-(struct ? )vitalityScoringSmartCameraPipelineVersion;
-(void)dealloc;
-(void)processCountOfVisibleVitalityObjects:(int)arg0 forHostTime:(struct ? )arg1 ;
-(void)processISPMotionData:(id)arg0 forHostTime:(struct ? )arg1 ;
-(void)processInferences:(id)arg0 forHostTime:(struct ? )arg1 ;
-(void)setBufferHistorySeconds:(CGFloat)arg0 ;
-(void)setIntermediateLoggingEnabled:(BOOL)arg0 ;
-(void)setMaxHoldDuration:(struct ? )arg0 ;
-(void)setVideoFrameRate:(CGFloat)arg0 ;
-(void)setVitalityScoringEnabled:(BOOL)arg0 ;
-(void)setVitalityScoringSmartCameraPipelineVersion:(struct ? )arg0 ;
-(void)startMotionProcessing;
-(void)stopMotionProcessing;


@end


#endif