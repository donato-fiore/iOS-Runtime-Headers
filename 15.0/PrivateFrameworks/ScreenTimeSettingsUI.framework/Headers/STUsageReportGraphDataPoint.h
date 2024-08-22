// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STUSAGEREPORTGRAPHDATAPOINT_H
#define STUSAGEREPORTGRAPHDATAPOINT_H

@class NSDate, NSDateInterval, UIColor, NSString, NSArray, NSNumber;

#import <Foundation/Foundation.h>


@interface STUsageReportGraphDataPoint : NSObject

@property (readonly, nonatomic) NSDate *date;
@property (retain, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (copy) UIColor *indicatorImageColor; // ivar: _indicatorImageColor
@property (copy, nonatomic) NSString *indicatorImageName; // ivar: _indicatorImageName
@property (nonatomic) NSUInteger itemType; // ivar: _itemType
@property (copy, nonatomic) NSArray *segments; // ivar: _segments
@property (nonatomic) NSUInteger timePeriod; // ivar: _timePeriod
@property (copy, nonatomic) NSNumber *total; // ivar: _total
@property (nonatomic) CGFloat totalAsPercentageOfMax; // ivar: _totalAsPercentageOfMax


-(id)description;
-(id)initWithTimePeriod:(NSUInteger)arg0 itemType:(NSUInteger)arg1 dateInterval:(id)arg2 total:(id)arg3 totalAsPercentageOfMax:(CGFloat)arg4 segments:(id)arg5 ;


@end


#endif