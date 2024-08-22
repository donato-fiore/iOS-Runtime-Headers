// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSLEEPCHARTPOINTUSERINFO_H
#define HKSLEEPCHARTPOINTUSERINFO_H

@class NSString, HKSleepDay, HKSleepDaySummary;
@protocol HKGraphSeriesBlockCoordinateInfo, HKGraphSeriesChartData;

#import <Foundation/Foundation.h>


@interface HKSleepChartPointUserInfo : NSObject <HKGraphSeriesBlockCoordinateInfo, HKGraphSeriesChartData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger seriesType; // ivar: _seriesType
@property (readonly, nonatomic) HKSleepDay *sleepDay; // ivar: _sleepDay
@property (readonly, nonatomic) HKSleepDaySummary *sleepDaySummary; // ivar: _sleepDaySummary
@property (readonly) Class superclass;


-(id)initWithSeriesType:(NSInteger)arg0 sleepDay:(id)arg1 ;
-(id)initWithSeriesType:(NSInteger)arg0 sleepDaySummary:(id)arg1 ;


@end


#endif