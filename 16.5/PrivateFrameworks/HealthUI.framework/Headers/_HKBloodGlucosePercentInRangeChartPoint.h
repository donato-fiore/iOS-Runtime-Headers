// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKBLOODGLUCOSEPERCENTINRANGECHARTPOINT_H
#define _HKBLOODGLUCOSEPERCENTINRANGECHARTPOINT_H

@class NSString, NSNumber, NSDate;
@protocol HKChartPoint, HKGraphSeriesBlockCoordinateInfo;

#import <Foundation/Foundation.h>


@interface _HKBloodGlucosePercentInRangeChartPoint : NSObject <HKChartPoint>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSNumber *fractionBelowUpperEuglycemiaBound; // ivar: _fractionBelowUpperEuglycemiaBound
@property (retain, nonatomic) NSNumber *fractionBelowUpperLevel1HypoglycemiaBound; // ivar: _fractionBelowUpperLevel1HypoglycemiaBound
@property (retain, nonatomic) NSNumber *fractionBelowUpperLevel2HypoglycemiaBound; // ivar: _fractionBelowUpperLevel2HypoglycemiaBound
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *midDate; // ivar: _midDate
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HKGraphSeriesBlockCoordinateInfo> *userInfo; // ivar: _userInfo


-(id)allYValues;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 userInfo:(id)arg2 ;
-(id)maxXValueAsGenericType;
-(id)maxYValue;
-(id)minXValueAsGenericType;
-(id)minYValue;
-(id)xValueAsGenericType;
-(id)yValue;
-(id)yValueForKey:(id)arg0 ;


@end


#endif