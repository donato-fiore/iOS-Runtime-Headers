// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPVIDEOSCENECLASSIFIER_H
#define VCPVIDEOSCENECLASSIFIER_H

@class NSMutableArray, NSMutableDictionary, NSDictionary, NSArray;


#import "VCPVideoAnalyzer.h"

@interface VCPVideoSceneClassifier : VCPVideoAnalyzer {
    ? _timeLastProcess;
    ? _start;
    NSMutableArray *_results;
    NSMutableDictionary *_existingScenes;
    NSMutableDictionary *_internalFrameScenes;
}


@property (readonly) NSDictionary *frameScenes;
@property (retain) NSArray *sceneResults; // ivar: _sceneResults


-(BOOL)compareObjectsOfInterest:(id)arg0 withScenes:(id)arg1 ;
-(id)init;
-(id)results;
-(int)analyzeFrame:(struct __CVBuffer *)arg0 withTimestamp:(struct ? )arg1 andDuration:(struct ? )arg2 flags:(*NSUInteger)arg3 ;
-(int)finishAnalysisPass:(struct ? )arg0 ;
-(void)addAggregatedScenes:(id)arg0 timerange:(struct ? )arg1 ;
-(void)addResult:(id)arg0 start:(struct ? )arg1 duration:(struct ? )arg2 keyIsName:(BOOL)arg3 ;
-(void)dealloc;


@end


#endif