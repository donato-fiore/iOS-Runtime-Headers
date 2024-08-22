// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKENUMERATEDVALUECHARTPOINT_H
#define HKENUMERATEDVALUECHARTPOINT_H

@class NSString, NSArray, NSDate;
@protocol HKChartPoint, HKGraphSeriesBlockCoordinateInfo;

#import <Foundation/Foundation.h>


@interface HKEnumeratedValueChartPoint : NSObject <HKChartPoint>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *indices; // ivar: _indices
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<HKGraphSeriesBlockCoordinateInfo> *userInfo; // ivar: _userInfo
@property (copy, nonatomic) NSDate *xValue; // ivar: _xValue


-(id)allYValues;
-(id)maxXValueAsGenericType;
-(id)maxYValue;
-(id)minXValueAsGenericType;
-(id)minYValue;
-(id)yValue;
-(id)yValueForKey:(id)arg0 ;


@end


#endif