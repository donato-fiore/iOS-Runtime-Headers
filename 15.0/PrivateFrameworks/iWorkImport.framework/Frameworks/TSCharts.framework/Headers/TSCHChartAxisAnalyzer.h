// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTAXISANALYZER_H
#define TSCHCHARTAXISANALYZER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "TSCHChartAxis.h"

@interface TSCHChartAxisAnalyzer : NSObject {
    TSCHChartAxis *_axis;
    BOOL _shouldCalculateMedian;
    CGFloat _min;
    CGFloat _max;
    CGFloat _median;
    NSUInteger _numValues;
    CGFloat _sumOfValues;
    BOOL _firstValue;
    BOOL _didCalculateMedian;
    NSMutableArray *_values;
}




+(id)analyzerForAxis:(id)arg0 needsMedian:(BOOL)arg1 ;
-(BOOL)p_hasMedianReferenceLine;
-(CGFloat)average;
-(CGFloat)max;
-(CGFloat)median;
-(CGFloat)min;
-(id)initForAxis:(id)arg0 needsMedian:(BOOL)arg1 ;
-(void)addGridValue:(id)arg0 forSeries:(id)arg1 ;


@end


#endif