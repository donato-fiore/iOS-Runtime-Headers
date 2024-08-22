// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPVIDEOHUMANACTIONANALYZER_H
#define VCPVIDEOHUMANACTIONANALYZER_H

@class NSMutableArray, NSNumber;


#import "VCPVideoAnalyzer.h"
#import "VCPImageHumanPoseAnalyzer.h"
#import "VCPFrameAnalysisStats.h"
#import "VCPVideoObjectTracker.h"

@interface VCPVideoHumanActionAnalyzer : VCPVideoAnalyzer {
    VCPImageHumanPoseAnalyzer *_poseAnalyzer;
    ? _timeLastProcess;
    ? _timeLastProcessFullFrame;
    NSMutableArray *_bodyArray;
    float _maxScore;
    ? _endTime;
    ? _startTime;
    NSMutableArray *_actionResults;
    NSMutableArray *_keyPersonResults;
    NSMutableArray *_poseResults;
    NSMutableArray *_activePoseResults;
    CGRect _crop;
    CGRect _humanRect;
    float _actionScoreAbsolute;
    float _actionScoreRelative;
    float _scoreAbsoluteMax;
    float _scoreRelativeMax;
    float _humanPoseScore;
    ? _lastHumanTimestamp;
    VCPFrameAnalysisStats *_frameStats;
    VCPVideoObjectTracker *_tracker;
    BOOL _tracking;
    NSNumber *_timeOfInterest;
    NSMutableArray *_phFaces;
}




-(float)intersectionOverUnion:(struct CGRect )arg0 rect:(struct CGRect )arg1 ;
-(float)normDistance:(id)arg0 point2:(id)arg1 ;
-(id)associatePerson:(struct CGRect )arg0 withPHFaces:(id)arg1 ;
-(id)initWithFrameStats:(id)arg0 timeOfInterest:(id)arg1 phFaces:(id)arg2 ;
-(id)privateResults;
-(id)results;
-(int)analyzeFrame:(struct __CVBuffer *)arg0 withTimestamp:(struct ? )arg1 andDuration:(struct ? )arg2 flags:(*NSUInteger)arg3 ;
-(int)finishAnalysisPass:(struct ? )arg0 ;
-(int)processPersons:(id)arg0 humanBounds:(id)arg1 dominantPersonIdx:(int)arg2 frame:(struct __CVBuffer *)arg3 timestamp:(struct ? )arg4 duration:(struct ? )arg5 ;
-(struct CGRect )scaleRect:(struct CGRect )arg0 scaleX:(float)arg1 scaleY:(float)arg2 ;
-(void)addActiveResults:(struct ? )arg0 ;
-(void)computeActionScore;
-(void)computeVar:(int)arg0 index2:(int)arg1 interVar:(*float)arg2 intraVar:(*float)arg3 ;


@end


#endif