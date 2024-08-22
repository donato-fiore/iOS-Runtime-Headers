// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKINTERACTIVECHARTSINGLEPOINTDATA_H
#define HKINTERACTIVECHARTSINGLEPOINTDATA_H

@class NSString, NSDateComponents, HKUnit;
@protocol HKGraphSeriesChartData;

#import <Foundation/Foundation.h>


@interface HKInteractiveChartSinglePointData : NSObject <HKGraphSeriesChartData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maxValue; // ivar: _maxValue
@property (nonatomic) CGFloat minValue; // ivar: _minValue
@property (nonatomic) NSInteger recordCount; // ivar: _recordCount
@property (nonatomic) BOOL representsRange; // ivar: _representsRange
@property (retain, nonatomic) NSDateComponents *statisticsInterval; // ivar: _statisticsInterval
@property (readonly) Class superclass;
@property (retain, nonatomic) HKUnit *unit; // ivar: _unit
@property (nonatomic) CGFloat value; // ivar: _value




@end


#endif