// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPVIDEOACTIVITYANALYZER_H
#define VCPVIDEOACTIVITYANALYZER_H

@class NSMutableArray, NSNumber;


#import "VCPVideoAnalyzer.h"
#import "VCPFrameAnalysisStats.h"
#import "VCPVideoActivityDescriptor.h"
#import "VCPCNNModel.h"
#import "VCPCNNData.h"

@interface VCPVideoActivityAnalyzer : VCPVideoAnalyzer {
    VCPFrameAnalysisStats *_frameStats;
    VCPVideoActivityDescriptor *_activityDescriptor;
    NSMutableArray *_activityScores;
    NSMutableArray *_validActivityScores;
    NSMutableArray *_qualityResults;
    NSMutableArray *_interestingnessResults;
    NSMutableArray *_obstructionResults;
    NSMutableArray *_classificationResults;
    NSMutableArray *_fineActionResults;
    NSMutableArray *_faceResults;
    NSMutableArray *_results;
    float _sceneSwitchFrequency;
    NSInteger _numOfFrames;
    ? _lastProcessTime;
    float _overallActivityLevel;
    VCPCNNModel *_model;
    VCPCNNData *_input;
    NSNumber *_sportsSceneId;
}




-(float)actionScoreInTimeRange:(struct ? )arg0 ;
-(float)scaleBasedOnFaceForTimeRange:(struct ? )arg0 ;
-(float)validationScoreOfTimeRange:(struct ? )arg0 fromResult:(id)arg1 startIdx:(*int)arg2 ;
-(id)initWithFrameStats:(id)arg0 ;
-(id)results;
-(int)analyzeFrame:(struct __CVBuffer *)arg0 withTimestamp:(struct ? )arg1 andDuration:(struct ? )arg2 flags:(*NSUInteger)arg3 ;
-(int)computeActivityScoreAtTime:(struct ? )arg0 ;
-(int)extractRequiredClassificationInfoFrom:(id)arg0 toArray:(id)arg1 ;
-(int)extractRequiredFaceInfoFrom:(id)arg0 toArray:(id)arg1 ;
-(int)extractRequiredInfoFrom:(id)arg0 toArray:(id)arg1 ;
-(int)finishAnalysisPass:(struct ? )arg0 fpsRate:(float)arg1 ;
-(int)preProcessQualityResults:(id)arg0 interestingnessResults:(id)arg1 obstructionResults:(id)arg2 classificationResults:(id)arg3 fineActionResults:(id)arg4 faceResults:(id)arg5 sceneSwitchFrequency:(float)arg6 ;
-(int)prepareActivityStats;
-(void)addSceneClassificationContributionToActivityLevel:(*float)arg0 ;
-(void)addSceneSwitchFrequencyConstributionToActivityLevel:(*float)arg0 ;
-(void)generateActivityDescriptor;
-(void)normalizeActivityDescriptor;
-(void)resetActivityStatsAtTime:(struct ? )arg0 ;
-(void)validateActivityScores;


@end


#endif