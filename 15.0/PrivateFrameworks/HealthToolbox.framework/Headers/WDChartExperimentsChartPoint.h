// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDCHARTEXPERIMENTSCHARTPOINT_H
#define WDCHARTEXPERIMENTSCHARTPOINT_H

@class NSString, NSDate, NSNumber;
@protocol HKChartPoint, HKGraphSeriesBlockCoordinateInfo;

#import <Foundation/Foundation.h>


@interface WDChartExperimentsChartPoint : NSObject <HKChartPoint>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<HKGraphSeriesBlockCoordinateInfo> *experimentInfo; // ivar: _experimentInfo
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDate *xValue; // ivar: _xValue
@property (readonly, nonatomic) NSNumber *yValue; // ivar: _yValue


-(id)allYValues;
-(id)initWithXValue:(id)arg0 yValue:(id)arg1 userInfo:(id)arg2 ;
-(id)maxXValueAsGenericType;
-(id)maxYValue;
-(id)minXValueAsGenericType;
-(id)minYValue;
-(id)userInfo;
-(id)yValueForKey:(id)arg0 ;


@end


#endif