// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXTRENDPLOTBIN_H
#define ATXTRENDPLOTBIN_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "ATXTrendPlotBin.h"

@interface ATXTrendPlotBin : NSObject

@property (retain, nonatomic) id *data; // ivar: _data
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) ATXTrendPlotBin *next; // ivar: _next
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate


-(id)initWithStartDate:(id)arg0 ;


@end


#endif