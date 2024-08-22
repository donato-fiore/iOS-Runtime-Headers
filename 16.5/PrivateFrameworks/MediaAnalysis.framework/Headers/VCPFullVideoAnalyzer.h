// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPFULLVIDEOANALYZER_H
#define VCPFULLVIDEOANALYZER_H

@class NSMutableDictionary, NSDictionary, NSArray;


#import "VCPVideoAnalyzer.h"
#import "VCPFrameAnalysisStats.h"
#import "VCPFrameScoreFilter.h"
#import "VCPMotionFlowSubtleMotionAnalyzer.h"
#import "VCPMotionFlowAnalyzer.h"

@interface VCPFullVideoAnalyzer : VCPVideoAnalyzer {
    *void _encodeAnalysis;
    *void _preencodeAnalysis;
    *void _obstructionAnalysis;
    *void _sceneAnalysis;
    *MotionFilter _motionFilter;
    *MetaDataAnalysis _metadataAnalysis;
    *IrisAnalysis _irisAnalysis;
    FrameBuffer _frameBuffer;
    Histogram _idealHistogram;
    BOOL _isTimelapse;
    BOOL _isIris;
    BOOL _isSlowMo;
    int _orientation;
    BOOL _finalized;
    BOOL _hasInterestingScene;
    BOOL _isCaptureAnalysis;
    NSMutableDictionary *_privateResults;
    VCPFrameAnalysisStats *_videoFrameAnalysis;
    VCPFrameScoreFilter *_trackScoreFilter;
    NSDictionary *_metaMotionResults;
    BOOL _faceDominated;
    BOOL _useMoflow;
    VCPMotionFlowSubtleMotionAnalyzer *_subtleMotionAnalyzer;
    VCPMotionFlowAnalyzer *_motionFlowAnalyzer;
    int _sceneType;
}


@property float actionScore; // ivar: _actionScore
@property (readonly, nonatomic) NSArray *globalMotion; // ivar: _globalMotion
@property float interestingnessScore; // ivar: _interestingnessScore
@property (readonly, nonatomic) NSDictionary *objectsMotion; // ivar: _objectsMotion
@property float obstructionScore; // ivar: _obstructionScore
@property float qualityScore; // ivar: _qualityScore
@property float trackingScore; // ivar: _trackingScore


+(BOOL)enableMoflow;
+(BOOL)useSceneprintInSceneAnalysis;
-(float)computeExposureScoreOfFrame:(*void)arg0 ;
-(float)estimateExpressionScore:(id)arg0 encodeStats:(struct EncodeStats *)arg1 frameWidth:(int)arg2 frameHeight:(int)arg3 ;
-(float)estimateQualityScore:(*void)arg0 ;
-(float)getSceneSwichFrequency;
-(id)clipResults:(struct ? )arg0 ;
-(id)initWithTransform:(struct CGAffineTransform )arg0 ;
-(id)initWithVideoTrack:(id)arg0 withMetaOrientation:(id)arg1 withPrivateResults:(id)arg2 withFrameStats:(id)arg3 isTimelapse:(BOOL)arg4 isIris:(BOOL)arg5 irisPhotoOffsetSec:(float)arg6 irisPhotoExposureSec:(float)arg7 slowMoRate:(float)arg8 faceDominated:(BOOL)arg9 ;
-(id)privateResults;
-(id)results;
-(int)addResult:(struct __CFArray *)arg0 to:(id)arg1 forKey:(id)arg2 optional:(BOOL)arg3 ;
-(int)addSceneAnalysisResult:(id)arg0 to:(id)arg1 clipRange:(struct ? )arg2 ;
-(int)addSceneAnalysisResult:(id)arg0 to:(id)arg1 optional:(BOOL)arg2 ;
-(int)analyzeFrame:(struct __CVBuffer *)arg0 withTimestamp:(struct ? )arg1 andDuration:(struct ? )arg2 flags:(*NSUInteger)arg3 cancel:(id)arg4 ;
-(int)analyzeFrame:(struct __CVBuffer *)arg0 withTimestamp:(struct ? )arg1 andDuration:(struct ? )arg2 properties:(id)arg3 flags:(*NSUInteger)arg4 cancel:(id)arg5 ;
-(int)finishAnalysisPass:(struct ? )arg0 ;
-(int)isStableMetaMotion:(struct ? )arg0 ;
-(int)process:(int)arg0 ;
-(int)seedAnalyzersWithPixelBuffer:(struct __CVBuffer *)arg0 startTime:(struct ? )arg1 ;
-(void)dealloc;
-(void)prepareLivePhotoAnalysisByScenes:(id)arg0 ;
-(void)prepareVideoAnalysisByScenes:(id)arg0 ;
-(void)processAndEstimateQualityScore:(*void)arg0 ;
-(void)reviseFrameTrackScore:(*void)arg0 saliencyRegions:(id)arg1 ;
-(void)setNextCaptureFrame:(struct __CVBuffer *)arg0 ;


@end


#endif