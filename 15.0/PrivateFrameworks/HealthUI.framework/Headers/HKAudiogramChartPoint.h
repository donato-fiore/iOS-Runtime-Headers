// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKAUDIOGRAMCHARTPOINT_H
#define HKAUDIOGRAMCHARTPOINT_H

@class NSString, NSNumber;
@protocol HKGraphSeriesBlockCoordinateInfo, HKChartPoint;

#import <Foundation/Foundation.h>


@interface HKAudiogramChartPoint : NSObject <HKGraphSeriesBlockCoordinateInfo, HKChartPoint>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAverage; // ivar: _isAverage
@property (nonatomic) BOOL isLeftEar; // ivar: _isLeftEar
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSNumber *xValue; // ivar: _xValue
@property (readonly, nonatomic) NSNumber *yValue; // ivar: _yValue


+(CGFloat)axisValueFromFrequency:(CGFloat)arg0 ;
+(CGFloat)frequencyFromAxisValue:(CGFloat)arg0 ;
+(id)quantityFromAxisValue:(CGFloat)arg0 ;
-(id)allYValues;
-(id)initWithFrequency:(CGFloat)arg0 sensitivity:(CGFloat)arg1 isLeftEar:(BOOL)arg2 isAverage:(BOOL)arg3 ;
-(id)initWithXValue:(CGFloat)arg0 sensitivity:(CGFloat)arg1 isLeftEar:(BOOL)arg2 isAverage:(BOOL)arg3 ;
-(id)maxXValueAsGenericType;
-(id)maxYValue;
-(id)minXValueAsGenericType;
-(id)minYValue;
-(id)userInfo;
-(id)yValueForKey:(id)arg0 ;


@end


#endif