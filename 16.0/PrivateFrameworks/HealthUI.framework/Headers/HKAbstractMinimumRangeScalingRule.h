// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKABSTRACTMINIMUMRANGESCALINGRULE_H
#define HKABSTRACTMINIMUMRANGESCALINGRULE_H

@class NSNumber, NSDictionary, NSString;
@protocol HKInteractiveChartsAxisScalingRule;

#import <Foundation/Foundation.h>

#import "HKValueRange.h"

@interface HKAbstractMinimumRangeScalingRule : NSObject <HKInteractiveChartsAxisScalingRule>



@property (readonly, nonatomic) NSNumber *anchorValue; // ivar: _anchorValue
@property (retain, nonatomic) HKValueRange *axisBounds; // ivar: _axisBounds
@property (readonly, nonatomic) NSDictionary *axisRangeOverrides; // ivar: _axisRangeOverrides
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat defaultYAxisRange; // ivar: _defaultYAxisRange
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)_rangeForZoomLevel:(NSInteger)arg0 ;
-(id)init;
-(id)noDataStartingRange;
-(id)yAxisBounds;
-(id)yValueRangeForRange:(id)arg0 zoomLevel:(NSInteger)arg1 ;


@end


#endif