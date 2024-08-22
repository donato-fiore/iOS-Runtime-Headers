// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSLEEPSTAGEDAYCHARTPOINT_H
#define HKSLEEPSTAGEDAYCHARTPOINT_H

@class NSString, NSDate, NSNumber;
@protocol HKChartPoint, HKSleepChartPointProducing, HKSleepSleepChartPointUserInfoProvider;

#import <Foundation/Foundation.h>

#import "HKSleepChartPointUserInfo.h"

@interface HKSleepStageDayChartPoint : NSObject <HKChartPoint, HKSleepChartPointProducing, HKSleepSleepChartPointUserInfoProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (retain, nonatomic) HKSleepChartPointUserInfo *userInfo; // ivar: _userInfo
@property (retain, nonatomic) NSNumber *yValue; // ivar: _yValue


+(id)chartPointsForSummaries:(id)arg0 context:(id)arg1 ;
-(id)allYValues;
-(id)maxXValueAsGenericType;
-(id)maxYValue;
-(id)minXValueAsGenericType;
-(id)minYValue;
-(id)xValueAsGenericType;
-(id)yValueForKey:(id)arg0 ;


@end


#endif