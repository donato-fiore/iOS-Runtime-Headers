// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHISTOGRAMCHARTDATA_H
#define HKHISTOGRAMCHARTDATA_H

@class NSString;
@protocol HKGraphSeriesChartData;

#import <Foundation/Foundation.h>


@interface HKHistogramChartData : NSObject <HKGraphSeriesChartData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat xValue; // ivar: _xValue
@property (readonly, nonatomic) CGFloat yValue; // ivar: _yValue


-(id)initWithXValue:(CGFloat)arg0 yValue:(CGFloat)arg1 ;


@end


#endif