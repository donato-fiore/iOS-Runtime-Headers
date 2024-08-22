// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKINTERACTIVECHARTINSULINDATA_H
#define HKINTERACTIVECHARTINSULINDATA_H

@class NSString;
@protocol HKGraphSeriesChartData;

#import <Foundation/Foundation.h>


@interface HKInteractiveChartInsulinData : NSObject <HKGraphSeriesChartData>



@property (nonatomic) CGFloat basalValue; // ivar: _basalValue
@property (readonly, nonatomic) CGFloat bolusValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat totalValue; // ivar: _totalValue




@end


#endif