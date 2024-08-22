// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPTRIMANALYZER_H
#define VCPTRIMANALYZER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "VCPActionAnalyzer.h"
#import "VCPSegment.h"

@interface VCPTrimAnalyzer : NSObject {
    VCPActionAnalyzer *_actionAnalyzer;
    NSMutableArray *_internalResults;
    ? _bestTrimTimeRange;
    float _curationThreshold;
    BOOL _verbose;
    ? _inTrimStart;
    ? _inTrimEnd;
    BOOL _firstFrame;
    VCPSegment *_activeSegment;
    ? _captureTime;
    BOOL _ready;
}




-(BOOL)checkTrimAt:(struct ? )arg0 captureTime:(struct ? )arg1 ;
-(BOOL)isCurated:(float)arg0 ;
-(BOOL)isReady;
-(BOOL)isTimestampSkipable:(struct ? )arg0 ;
-(BOOL)shouldCutAt:(struct ? )arg0 stillPTS:(struct ? )arg1 withCut:(BOOL)arg2 ;
-(float)calculateCandidateScoreWithRangeAdjust:(int)arg0 endIdx:(int)arg1 candidateTimeRange:(struct ? *)arg2 captureTime:(struct ? )arg3 ;
-(id)init;
-(int)analyzeFrameWithTimeRange:(struct ? )arg0 analysisData:(id)arg1 ;
-(int)finalizeWithDestructiveTrimStart:(struct ? )arg0 trimEnd:(struct ? )arg1 andCaptureTime:(struct ? )arg2 ;
-(int)generateInterestingTrimBasedOnCaptureTime:(struct ? )arg0 ;
-(int)prepareTrimmingWithTrimStart:(struct ? )arg0 andTrimEnd:(struct ? )arg1 ;
-(struct ? )bestTrimTimeRange;
-(void)generateCurationSegment;
-(void)printSegments:(id)arg0 ;
-(void)updateCurationThreshold;


@end


#endif