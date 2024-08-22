// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSLEEPPERIODCHARTPOINT_H
#define HKSLEEPPERIODCHARTPOINT_H

@class NSArray, NSString, NSNumber, NSDate;
@protocol HKChartPoint, HKSleepChartPointProducing;

#import <Foundation/Foundation.h>

#import "HKSleepChartPointUserInfo.h"

@interface HKSleepPeriodChartPoint : NSObject <HKChartPoint, HKSleepChartPointProducing>



@property (retain, nonatomic) NSArray *asleepOffsets; // ivar: _asleepOffsets
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL highlighted; // ivar: _highlighted
@property (retain, nonatomic) NSArray *inBedOffsets; // ivar: _inBedOffsets
@property (copy, nonatomic) NSNumber *lowerGoal; // ivar: _lowerGoal
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *upperGoal; // ivar: _upperGoal
@property (retain, nonatomic) HKSleepChartPointUserInfo *userInfo; // ivar: _userInfo
@property (copy, nonatomic) NSDate *xValue; // ivar: _xValue


+(id)chartPointsForSummaries:(id)arg0 context:(id)arg1 ;
-(id)allYValues;
-(id)maxXValueAsGenericType;
-(id)maxYValue;
-(id)minXValueAsGenericType;
-(id)minYValue;
-(id)yValue;
-(id)yValueForKey:(id)arg0 ;


@end


#endif