// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKINTERACTIVECHARTCATEGORYVALUEDATA_H
#define HKINTERACTIVECHARTCATEGORYVALUEDATA_H

@class NSString, NSDate;
@protocol HKGraphSeriesChartData;

#import <Foundation/Foundation.h>


@interface HKInteractiveChartCategoryValueData : NSObject <HKGraphSeriesChartData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (nonatomic) NSInteger value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;


@end


#endif