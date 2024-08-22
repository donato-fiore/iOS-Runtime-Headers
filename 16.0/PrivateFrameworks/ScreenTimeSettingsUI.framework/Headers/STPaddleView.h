// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STPADDLEVIEW_H
#define STPADDLEVIEW_H

@class UIView, UILabel, NSDateIntervalFormatter, NSDateFormatter;


#import "STUsageReportGraphDataPoint.h"

@interface STPaddleView : UIView

@property (readonly) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) STUsageReportGraphDataPoint *dataPoint; // ivar: _dataPoint
@property (readonly) UILabel *dateTimeLabel; // ivar: _dateTimeLabel
@property (readonly) UILabel *dayLabel; // ivar: _dayLabel
@property (readonly) NSDateIntervalFormatter *hourIntervalDateFormatter; // ivar: _hourIntervalDateFormatter
@property (readonly) NSDateFormatter *monthDateFormatter; // ivar: _monthDateFormatter
@property (readonly) UILabel *usageLabel; // ivar: _usageLabel
@property (readonly) NSDateFormatter *weekdayDateFormatter; // ivar: _weekdayDateFormatter


-(id)init;


@end


#endif