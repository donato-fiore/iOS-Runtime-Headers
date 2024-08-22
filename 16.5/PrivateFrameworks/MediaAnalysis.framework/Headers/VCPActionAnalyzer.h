// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPACTIONANALYZER_H
#define VCPACTIONANALYZER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "VCPSegment.h"

@interface VCPActionAnalyzer : NSObject {
    NSMutableArray *_internalResults;
    VCPSegment *_activeSegment;
    *HinkleyDetector _activeHinkleyDetector;
    float _activeThreshold;
    BOOL _firstFrame;
    BOOL _verbose;
    int _postProcessStart;
}




-(BOOL)decideSegmentPointBasedOnActionScore:(float)arg0 ;
-(BOOL)decideSegmentPointUsingHinkleyDetector:(float)arg0 ;
-(BOOL)isActive:(float)arg0 ;
-(BOOL)isScoreValid:(float)arg0 ;
-(id)activeSegment;
-(id)init;
-(id)segments;
-(int)analyzeFrameWithTimeRange:(struct ? )arg0 andActionScore:(float)arg1 ;
-(int)finalizeWithDestructiveTrimStart:(struct ? )arg0 trimEnd:(struct ? )arg1 ;
-(int)mergeConsecutiveShortSegments;
-(int)mergeSameTypeSegments;
-(int)mergeSparseShortSegments;
-(int)postProcessSegmentsWithCaptureTime:(struct ? )arg0 trimStart:(struct ? )arg1 ;
-(int)prepareTrimmingWithTrimStart:(struct ? )arg0 andTrimEnd:(struct ? )arg1 ;
-(void)dealloc;
-(void)printSegments:(id)arg0 ;
-(void)updateActiveThreshold;


@end


#endif