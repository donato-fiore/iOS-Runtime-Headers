// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
-(BOOL)_checkSamplesContainHostTime:(struct ? )arg0 ;
-(BOOL)_isUnstable:(id)arg0 withLookback:(id)arg1 ;
-(BOOL)_shouldCut:(id)arg0 withLookahead:(id)arg1 withLookback:(id)arg2 ;
-(BOOL)_shouldCutSVM:(id)arg0 ;
-(BOOL)_shouldCutUnstable:(id)arg0 withLookahead:(id)arg1 ;
-(BOOL)intermediateLoggingEnabled;
-(BOOL)vitalityScoringEnabled;
-(CGFloat)_directionalWeightForSample:(id)arg0 ;
-(CGFloat)_getHostTime;
-(CGFloat)_timeoutThreshold;
-(CGFloat)bufferHistorySeconds;
-(CGFloat)videoFrameRate;
-(NSInteger)_findClosestIndexToHostTime:(struct ? )arg0 fromIndex:(NSInteger)arg1 limitIndex:(NSInteger)arg2 ;
-(NSInteger)_findClosestIndexToOffset:(CGFloat)arg0 atLeastOneFromIndex:(NSInteger)arg1 limitIndex:(NSInteger)arg2 ;
-(NSInteger)_findClosestIndexToTimestamp:(CGFloat)arg0 fromIndex:(NSInteger)arg1 limitIndex:(NSInteger)arg2 ;
-(float)_computeVitalityFrom:(NSInteger)arg0 to:(NSInteger)arg1 ;
-(float)computeVitalityScoreForStillImageHostPTS:(struct ? )arg0 movieRange:(struct ? )arg1 ;
-(id)exportMotionSamples;
-(id)init;
-(int)emissionStatusForHostPTS:(struct ? )arg0 ;
-(struct ? )beginTrimmingForStillImageHostPTS:(struct ? )arg0 minimumPTS:(struct ? )arg1 ;
-(struct ? )maxHoldDuration;
-(struct ? )vitalityScoringSmartCameraPipelineVersion;
-(void)_initSVM:(id)arg0 fromFile:(id)arg1 ;
-(void)_processMotionSample:(struct ? *)arg0 gravity:(struct ? *)arg1 motionTimestamp:(CGFloat)arg2 frameTimestamp:(struct ? )arg3 metadata:(id)arg4 ;
-(void)_updateStorageStats;
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