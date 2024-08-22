// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPVIDEOPETSACTIONANALYZER_H
#define VCPVIDEOPETSACTIONANALYZER_H

@class NSMutableArray, NSNumber;


#import "VCPVideoAnalyzer.h"
#import "VCPImagePetsKeypointsAnalyzer.h"
#import "VCPFrameAnalysisStats.h"
#import "VCPVideoObjectTracker.h"

@interface VCPVideoPetsActionAnalyzer : VCPVideoAnalyzer {
    VCPImagePetsKeypointsAnalyzer *_poseAnalyzer;
    ? _timeLastProcess;
    ? _timeLastProcessFullFrame;
    NSMutableArray *_bodyArray;
    float _maxScore;
    ? _endTime;
    ? _startTime;
    NSMutableArray *_actionResults;
    NSMutableArray *_keyPetResults;
    NSMutableArray *_poseResults;
    CGRect _crop;
    CGRect _petRect;
    float _actionScoreAbsolute;
    float _actionScoreRelative;
    float _scoreAbsoluteMax;
    float _scoreRelativeMax;
    ? _lastPetTimestamp;
    VCPFrameAnalysisStats *_frameStats;
    VCPVideoObjectTracker *_tracker;
    BOOL _tracking;
    NSNumber *_timeOfInterest;
    BOOL _sampleFlag;
}




-(float)intersectionOverUnion:(struct CGRect )arg0 rect:(struct CGRect )arg1 ;
-(float)normDistance:(id)arg0 point2:(id)arg1 ;
-(id)initWithFrameStats:(id)arg0 timeOfInterest:(id)arg1 ;
-(id)results;
-(int)analyzeFrame:(struct __CVBuffer *)arg0 withTimestamp:(struct ? )arg1 andDuration:(struct ? )arg2 flags:(*NSUInteger)arg3 ;
-(int)finishAnalysisPass:(struct ? )arg0 ;
-(int)processPets:(id)arg0 petsBounds:(id)arg1 dominantPetIdx:(int)arg2 frame:(struct __CVBuffer *)arg3 timestamp:(struct ? )arg4 duration:(struct ? )arg5 ;
-(struct CGRect )scaleRect:(struct CGRect )arg0 scaleX:(float)arg1 scaleY:(float)arg2 ;
-(void)computeActionScore;
-(void)computeVar:(int)arg0 index2:(int)arg1 interVar:(*float)arg2 intraVar:(*float)arg3 ;


@end


#endif