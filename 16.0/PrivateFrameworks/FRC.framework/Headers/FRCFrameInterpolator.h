// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FRCFRAMEINTERPOLATOR_H
#define FRCFRAMEINTERPOLATOR_H

@class NSDate, NSDictionary;
@protocol FRCSynthesis, OS_dispatch_semaphore, OS_os_log, OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "OpticalFlow.h"
#import "Synthesis.h"
#import "LiteSynthesis.h"
#import "FRCScaler.h"
#import "OpticalFlowAnalyzer.h"
#import "FRCFrameDropDetector.h"
#import "FRCImageProcessor.h"

@interface FRCFrameInterpolator : NSObject {
    OpticalFlow *_opticalFlow;
    Synthesis *_deepSynthesis;
    LiteSynthesis *_liteSynthesis;
    id<FRCSynthesis> *_synthesis;
    FRCScaler *_scaler;
    OpticalFlowAnalyzer *_flowAnalyzer;
    *__CVBuffer _flowForward;
    *__CVBuffer _flowBackward;
    *__CVBuffer _flowForwardGating;
    *__CVBuffer _flowBackwardGating;
    *__CVBuffer _prevFlowBackwardGating;
    *__CVPixelBufferPool _outputPixelBufferPool;
    BOOL _enableCrossFlowAnalysis;
    NSUInteger _width;
    NSUInteger _height;
    ? _lastFramePts;
    ? _lastFrameDuration;
    NSUInteger _lastFramesToInterpolate;
    ? _ptsForLiteDebugging;
    NSObject<OS_dispatch_semaphore> *_completion_semaphore;
    FRCFrameDropDetector *_frameDropDetector;
    *__CFDictionary _anchorFrameCMAttachment;
    NSInteger _inputRotation;
    BOOL _concurrentOpticalFlow;
    NSObject<OS_dispatch_semaphore> *_postProcessingComletionSemaphore;
    NSObject<OS_dispatch_semaphore> *_initializationSemaphore;
    NSObject<OS_os_log> *_logger;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    NSDate *_startTime;
    NSUInteger _totalFramesInterpolated;
    NSUInteger _totalFramePairsProcessed;
    BOOL _onDemandSynthesisBufferAllocation;
    NSInteger _sessionResult;
    ? _maxTimeGap;
    BOOL _fullRange;
    BOOL _isYUV;
    NSUInteger _bitDepth;
    unsigned int _RGBAFormat;
    FRCImageProcessor *_imageProcessor;
    BOOL _removeCMAttachment;
}


@property (nonatomic) BOOL forceFrameOutput; // ivar: _forceFrameOutput
@property (nonatomic) BOOL forceSingleStageFlow; // ivar: _forceSingleStageFlow
@property (readonly, nonatomic) BOOL gated; // ivar: _gated
@property (nonatomic) BOOL gatingEnabled; // ivar: _gatingEnabled
@property (nonatomic) BOOL inputScaling; // ivar: _inputScaling
@property (nonatomic) NSUInteger opticalFlowDownsampling; // ivar: _opticalFlowDownsampling
@property (nonatomic) CGAffineTransform preferredTransform; // ivar: _preferredTransform
@property (nonatomic) NSInteger qualityMode; // ivar: _qualityMode
@property (nonatomic) BOOL secondLevelFlow; // ivar: _secondLevelFlow
@property (readonly, nonatomic) NSDictionary *sessionStatistics; // ivar: _sessionStatistics
@property (nonatomic) BOOL singleFlow; // ivar: _singleFlow
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) NSUInteger synthesisMode; // ivar: _synthesisMode
@property (nonatomic) BOOL synthesisTemporalSmoothing; // ivar: _synthesisTemporalSmoothing
@property (nonatomic) BOOL tilingEnabled; // ivar: _tilingEnabled
@property (nonatomic) BOOL twoStageFlow; // ivar: _twoStageFlow
@property (nonatomic) NSInteger usage; // ivar: _usage
@property (nonatomic) NSUInteger useCase; // ivar: _useCase


+(NSInteger)getUsageFromSizeWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 ;
+(void)getInputFrameSizeForUsage:(NSInteger)arg0 width:(*NSUInteger)arg1 height:(*NSUInteger)arg2 ;
-(BOOL)shallDumpDebugInfoForCurrPts:(struct ? )arg0 prevPts:(struct ? )arg1 ;
-(BOOL)shallReusePreviousFlowPts0:(struct ? )arg0 Pts1:(struct ? )arg1 ;
-(NSInteger)adjustUsage:(NSInteger)arg0 ;
-(NSInteger)endSession;
-(NSInteger)getFrameRotation:(NSInteger)arg0 ;
-(NSInteger)startSessionWithUsage:(NSInteger)arg0 ;
-(id)createOutputFramesWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 pixelFormat:(unsigned int)arg2 numberOframes:(NSUInteger)arg3 ;
-(id)errorWithErrorCode:(NSInteger)arg0 ;
-(id)init;
-(id)initWithMode:(NSInteger)arg0 ;
-(id)interpolateBetweenFirstFrame:(id)arg0 secondFrame:(id)arg1 numberOfFrames:(NSUInteger)arg2 withError:(*id)arg3 ;
-(id)interpolateBetweenFirstFrame:(id)arg0 secondFrame:(id)arg1 timeScales:(id)arg2 outputSize:(struct CGSize )arg3 outputPixelFormat:(unsigned int)arg4 withError:(*id)arg5 ;
-(id)interpolateBetweenFirstFrame:(id)arg0 secondFrame:(id)arg1 timeScales:(id)arg2 withError:(*id)arg3 ;
-(id)interpolateRecursiveFirstFrame:(id)arg0 secondFrame:(id)arg1 timeScale:(id)arg2 withError:(*id)arg3 ;
-(id)normalizeTimingFromTimeScales:(id)arg0 newBeginIdx:(int)arg1 newEndIdx:(int)arg2 ;
-(id)selectFrameInsertionPointsFromTimingList:(id)arg0 metadataList:(id)arg1 withError:(*id)arg2 ;
-(id)selectFrameInsertionPointsFromTimingList:(id)arg0 preModifiedTimingList:(id)arg1 ;
-(id)synthesizeInterpolatedFrames:(id)arg0 second:(id)arg1 normalizedFirst:(struct __CVBuffer *)arg2 normalizedSecond:(struct __CVBuffer *)arg3 timeScales:(id)arg4 outputSize:(struct CGSize )arg5 outputPixelFormat:(unsigned int)arg6 scalerEnabled:(BOOL)arg7 ;
-(int)closestNumIdxInArray:(id)arg0 target:(CGFloat)arg1 ;
-(struct __CVBuffer *)synthesisFrameForTimeScale:(float)arg0 outputSize:(struct CGSize )arg1 outputPixelFormat:(unsigned int)arg2 scalerEnabled:(BOOL)arg3 frameIndex:(NSUInteger)arg4 lastFrame:(BOOL)arg5 ;
-(void)allocateInternalBuffers;
-(void)configureSynthesis;
-(void)constructSessionStatisticsWithSessionDuration:(CGFloat)arg0 ;
-(void)dealloc;
-(void)getPixelAttributesForBuffer:(struct __CVBuffer *)arg0 ;
-(void)initSubModules;
-(void)preserveCMAttachmentFirstFrame:(id)arg0 secondFrame:(id)arg1 ;
-(void)releaseInternalBuffers;
-(void)restoreCMAttachmentToFirstFrame:(id)arg0 secondFrame:(id)arg1 interpolatedFrames:(id)arg2 ;
-(void)setCrossFlowAnalysisFromDefaults;
-(void)setFlowAnalysisFromDefaults;
-(void)setLiteSynthesisDebugFromDefaults;
-(void)setNormalizationModeFromDefaults;
-(void)setPropertiesFromDefaults;
-(void)updateBackwardFlow;
-(void)updateLastFramePts:(struct ? )arg0 duration:(struct ? )arg1 toInterpolate:(NSUInteger)arg2 ;


@end


#endif