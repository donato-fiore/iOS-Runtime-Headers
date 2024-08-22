// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKINTERACTIVECHARTBLOODPRESSUREDATA_H
#define HKINTERACTIVECHARTBLOODPRESSUREDATA_H

@class NSString;
@protocol HKGraphSeriesChartData;

#import <Foundation/Foundation.h>

#import "HKValueRange.h"

@interface HKInteractiveChartBloodPressureData : NSObject <HKGraphSeriesChartData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HKValueRange *diastolicRange; // ivar: _diastolicRange
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) HKValueRange *systolicRange; // ivar: _systolicRange




@end


#endif