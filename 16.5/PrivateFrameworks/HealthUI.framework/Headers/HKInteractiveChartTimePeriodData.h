// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKINTERACTIVECHARTTIMEPERIODDATA_H
#define HKINTERACTIVECHARTTIMEPERIODDATA_H

@class NSString, NSDateComponents;
@protocol HKGraphSeriesChartData;

#import <Foundation/Foundation.h>


@interface HKInteractiveChartTimePeriodData : NSObject <HKGraphSeriesChartData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger recordCount; // ivar: _recordCount
@property (retain, nonatomic) NSDateComponents *statisticsInterval; // ivar: _statisticsInterval
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timePeriod; // ivar: _timePeriod
@property (retain, nonatomic) NSString *timePeriodPrefix; // ivar: _timePeriodPrefix




@end


#endif