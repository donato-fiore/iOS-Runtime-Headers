// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKFIXEDVALUEDATESPANCHARTPOINT_H
#define HKFIXEDVALUEDATESPANCHARTPOINT_H

@class HKQuantity, NSString, HKUnit, NSDate;
@protocol HKChartPoint;

#import <Foundation/Foundation.h>


@interface HKFixedValueDateSpanChartPoint : NSObject <HKChartPoint>



@property (readonly, nonatomic) NSInteger attributeIndex; // ivar: _attributeIndex
@property (readonly, nonatomic) HKQuantity *averageValue; // ivar: _averageValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) id *fixedValueScalingBlock; // ivar: _fixedValueScalingBlock
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localizableTrendDescription; // ivar: _localizableTrendDescription
@property (retain, nonatomic) HKUnit *preferredUnit; // ivar: _preferredUnit
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDate *xEnd; // ivar: _xEnd
@property (readonly, nonatomic) NSDate *xStart; // ivar: _xStart


-(id)_buildSinglePointData;
-(id)allYValues;
-(id)initWithTrendSpan:(id)arg0 attributeIndex:(NSInteger)arg1 localizableTrendDescription:(id)arg2 fixedValueScalingBlock:(id)arg3 ;
-(id)maxXValueAsGenericType;
-(id)maxYValue;
-(id)minXValueAsGenericType;
-(id)minYValue;
-(id)userInfo;
-(id)xValueAsGenericType;
-(id)yValue;
-(id)yValueForKey:(id)arg0 ;


@end


#endif