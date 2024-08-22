// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKINTERACTIVECHARTMINMAXDATA_H
#define HKINTERACTIVECHARTMINMAXDATA_H

@class NSString, HKUnit;
@protocol HKGraphSeriesChartData;

#import <Foundation/Foundation.h>


@interface HKInteractiveChartMinMaxData : NSObject <HKGraphSeriesChartData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maxValue; // ivar: _maxValue
@property (nonatomic) CGFloat minValue; // ivar: _minValue
@property (readonly) Class superclass;
@property (retain, nonatomic) HKUnit *unit; // ivar: _unit




@end


#endif