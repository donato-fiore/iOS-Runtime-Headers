// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKNUMERICCHARTPOINT_H
#define HKNUMERICCHARTPOINT_H

@class NSDate, NSString;
@protocol HKChartPoint, HKGraphSeriesBlockCoordinateInfo;

#import <Foundation/Foundation.h>


@interface HKNumericChartPoint : NSObject <HKChartPoint>

 {
    NSDate *_xValue;
    id *_yValue;
    id<HKGraphSeriesBlockCoordinateInfo> *_userInfo;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)allYValues;
-(id)initWithXValue:(id)arg0 yValue:(id)arg1 userInfo:(id)arg2 ;
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