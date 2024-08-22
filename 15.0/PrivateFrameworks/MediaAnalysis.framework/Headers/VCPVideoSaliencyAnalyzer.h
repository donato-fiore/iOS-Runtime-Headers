// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPVIDEOSALIENCYANALYZER_H
#define VCPVIDEOSALIENCYANALYZER_H

@class NSMutableArray, NSMutableDictionary, NSArray;


#import "VCPVideoAnalyzer.h"
#import "VCPImageSaliencyAnalyzer.h"

@interface VCPVideoSaliencyAnalyzer : VCPVideoAnalyzer {
    NSMutableArray *_detections;
    NSMutableArray *_latestRegions;
    ? _timeLastDetection;
    ? _timeLastTracking;
    ? _start;
    VCPImageSaliencyAnalyzer *_saliencyAnalyer;
    NSMutableDictionary *_trackers;
    NSMutableDictionary *_confidences;
    NSArray *_activeRegions;
}




-(BOOL)isOutOfBoundary:(struct CGRect )arg0 ;
-(float)boundDistance:(struct CGRect )arg0 relativeTo:(struct CGRect )arg1 landscape:(BOOL)arg2 ;
-(float)updateConfidence:(float)arg0 prevBound:(struct CGRect )arg1 newBound:(struct CGRect )arg2 width:(int)arg3 height:(int)arg4 ;
-(id)initWithTransform:(struct CGAffineTransform )arg0 ;
-(id)pruneRegions:(id)arg0 withOverlapRatio:(float)arg1 ;
-(id)results;
-(int)analyzeFrame:(struct __CVBuffer *)arg0 withTimestamp:(struct ? )arg1 andDuration:(struct ? )arg2 flags:(*NSUInteger)arg3 ;
-(int)finishAnalysisPass:(struct ? )arg0 ;


@end


#endif