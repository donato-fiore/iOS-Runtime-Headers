// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKHISTOGRAMCHARTPOINT_H
#define HKHISTOGRAMCHARTPOINT_H

@class NSString, NSNumber;
@protocol HKChartPoint;

#import <Foundation/Foundation.h>


@interface HKHistogramChartPoint : NSObject <HKChartPoint>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSNumber *xValue; // ivar: _xValue
@property (readonly, nonatomic) NSNumber *yValue; // ivar: _yValue


-(id)allYValues;
-(id)initWithXValue:(id)arg0 yValue:(id)arg1 ;
-(id)maxXValueAsGenericType;
-(id)maxYValue;
-(id)minXValueAsGenericType;
-(id)minYValue;
-(id)userInfo;
-(id)yValueForKey:(id)arg0 ;


@end


#endif