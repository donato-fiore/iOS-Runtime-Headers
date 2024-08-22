// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STUSAGEREPORTGRAPHDATASET_H
#define STUSAGEREPORTGRAPHDATASET_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface STUsageReportGraphDataSet : NSObject

@property (copy, nonatomic) NSNumber *average; // ivar: _average
@property (nonatomic) CGFloat averageAsPercentageOfMax; // ivar: _averageAsPercentageOfMax
@property (copy, nonatomic) NSArray *dataPoints; // ivar: _dataPoints
@property (nonatomic) NSUInteger itemType; // ivar: _itemType
@property (copy, nonatomic) NSNumber *max; // ivar: _max
@property (nonatomic) NSUInteger timePeriod; // ivar: _timePeriod
@property (copy, nonatomic) NSNumber *total; // ivar: _total


-(id)initEmptyDataSetWithTimePeriod:(NSUInteger)arg0 referenceDate:(id)arg1 ;
-(id)initWithTimePeriod:(NSUInteger)arg0 itemType:(NSUInteger)arg1 total:(id)arg2 max:(id)arg3 average:(id)arg4 averageAsPercentageOfMax:(CGFloat)arg5 dataPoints:(id)arg6 ;


@end


#endif