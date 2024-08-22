// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPVIDEOMETAMOTIONANALYZER_H
#define VCPVIDEOMETAMOTIONANALYZER_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "VCPVideoMetaMotionSegment.h"

@interface VCPVideoMetaMotionAnalyzer : NSObject {
    HinkleyDetector _hinkleyDetector;
    VCPVideoMetaMotionSegment *_activeSegment;
    NSMutableArray *_mutableResults;
    NSMutableArray *_internalResults;
    ? _frameTimeRange;
}


@property (readonly, retain, nonatomic) NSArray *results;


-(BOOL)decideSegmentPointBasedOn:(float)arg0 ;
-(id)init;
-(int)finalizeAnalysis;
-(int)processFrameMetadata:(id)arg0 ;
-(void)mergeSimilarSegments;


@end


#endif