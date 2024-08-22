// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSLEEPCHARTPOINTUSERINFO_H
#define HKSLEEPCHARTPOINTUSERINFO_H

@class NSNumber, NSString, HKSleepDay, HKSleepDaySummary;
@protocol HKGraphSeriesBlockCoordinateInfo, HKGraphSeriesChartData;

#import <Foundation/Foundation.h>

#import "HKValueRange.h"

@interface HKSleepChartPointUserInfo : NSObject <HKGraphSeriesBlockCoordinateInfo, HKGraphSeriesChartData>



@property (nonatomic) NSUInteger annotationOptions; // ivar: _annotationOptions
@property (retain, nonatomic) HKValueRange *annotationOverrideDateRange; // ivar: _annotationOverrideDateRange
@property (retain, nonatomic) NSNumber *annotationOverrideDuration; // ivar: _annotationOverrideDuration
@property (retain, nonatomic) NSNumber *annotationOverridePrefixColorsActive; // ivar: _annotationOverridePrefixColorsActive
@property (nonatomic) NSUInteger currentValueViewOptions; // ivar: _currentValueViewOptions
@property (nonatomic) NSInteger currentValueViewOptionsPriority; // ivar: _currentValueViewOptionsPriority
@property (retain, nonatomic) NSNumber *currentValueViewOverridePrefixColorsActive; // ivar: _currentValueViewOverridePrefixColorsActive
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger seriesType; // ivar: _seriesType
@property (readonly, nonatomic) HKSleepDay *sleepDay; // ivar: _sleepDay
@property (readonly, nonatomic) HKSleepDaySummary *sleepDaySummary; // ivar: _sleepDaySummary
@property (readonly) Class superclass;


-(id)copyWithAnnotationOptions:(NSUInteger)arg0 ;
-(id)initWithSeriesType:(NSInteger)arg0 sleepDay:(id)arg1 ;
-(id)initWithSeriesType:(NSInteger)arg0 sleepDaySummary:(id)arg1 ;


@end


#endif