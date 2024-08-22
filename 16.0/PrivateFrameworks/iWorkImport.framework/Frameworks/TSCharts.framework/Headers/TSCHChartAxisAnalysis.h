// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHCHARTAXISANALYSIS_H
#define TSCHCHARTAXISANALYSIS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TSCHChartAxisAnalysis : NSObject

@property (nonatomic) CGFloat dataSetModelMax; // ivar: _dataSetModelMax
@property (nonatomic) CGFloat dataSetModelMin; // ivar: _dataSetModelMin
@property (copy, nonatomic) NSArray *downsampledTotals; // ivar: _downsampledTotals
@property (copy, nonatomic) NSArray *majorGridLocations; // ivar: _majorGridLocations
@property (nonatomic) CGFloat max; // ivar: _max
@property (nonatomic) CGFloat min; // ivar: _min
@property (copy, nonatomic) NSArray *minorGridLocations; // ivar: _minorGridLocations
@property (nonatomic) CGFloat modelAverage; // ivar: _modelAverage
@property (nonatomic) CGFloat modelMax; // ivar: _modelMax
@property (nonatomic) CGFloat modelMedian; // ivar: _modelMedian
@property (nonatomic) CGFloat modelMin; // ivar: _modelMin
@property (copy, nonatomic) NSArray *totals; // ivar: _totals




@end


#endif