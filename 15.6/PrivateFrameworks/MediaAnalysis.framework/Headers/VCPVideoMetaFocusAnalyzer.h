// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPVIDEOMETAFOCUSANALYZER_H
#define VCPVIDEOMETAFOCUSANALYZER_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "VCPVideoMetaFocusSegment.h"

@interface VCPVideoMetaFocusAnalyzer : NSObject {
    VCPVideoMetaFocusSegment *_activeSegment;
    NSMutableArray *_mutableResults;
    ? _frameTimeRange;
}


@property (readonly, retain, nonatomic) NSArray *results;


-(id)init;
-(int)finalizeAnalysis;
-(int)processFrameMetadata:(id)arg0 ;
-(void)addSegmentToResults;


@end


#endif