// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPVIDEOPETSANALYZER_H
#define VCPVIDEOPETSANALYZER_H

@class NSMutableArray, NSArray;


#import "VCPVideoAnalyzer.h"
#import "VCPImagePetsAnalyzer.h"

@interface VCPVideoPetsAnalyzer : VCPVideoAnalyzer {
    NSMutableArray *_petsDetections;
    NSMutableArray *_petsFaceDetections;
    ? _timeLastProcess;
    ? _petsStart;
    ? _petsFaceStart;
    VCPImagePetsAnalyzer *_petsAnalyer;
    NSArray *_petsActiveRegions;
    NSArray *_petsFaceActiveRegions;
}




-(id)initWithTransform:(struct CGAffineTransform )arg0 ;
-(id)parseResults:(id)arg0 toDetections:(id)arg1 atTime:(struct ? )arg2 fromTime:(struct ? *)arg3 addActiveRegions:(id)arg4 ;
-(id)results;
-(int)analyzeFrame:(struct __CVBuffer *)arg0 withTimestamp:(struct ? )arg1 andDuration:(struct ? )arg2 flags:(*NSUInteger)arg3 ;
-(int)analyzeFrame:(struct __CVBuffer *)arg0 withTimestamp:(struct ? )arg1 andDuration:(struct ? )arg2 flags:(*NSUInteger)arg3 frameStats:(id)arg4 ;
-(int)finishAnalysisPass:(struct ? )arg0 ;
-(void)addDetectionToDict:(struct ? )arg0 withActiveRegions:(id)arg1 forPetsDetections:(id)arg2 fromTime:(struct ? )arg3 ;


@end


#endif