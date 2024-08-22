// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSLEEPSTAGEDURATIONCHARTPOINT_H
#define HKSLEEPSTAGEDURATIONCHARTPOINT_H

@class NSString;
@protocol HKSleepSleepChartPointUserInfoProvider;


#import "HKSleepDurationChartPoint.h"
#import "HKSleepChartPointUserInfo.h"

@interface HKSleepStageDurationChartPoint : HKSleepDurationChartPoint <HKSleepSleepChartPointUserInfoProvider>



@property (nonatomic) CGFloat asleepCoreValue; // ivar: _asleepCoreValue
@property (nonatomic) CGFloat asleepDeepValue; // ivar: _asleepDeepValue
@property (nonatomic) CGFloat asleepRemValue; // ivar: _asleepRemValue
@property (nonatomic) CGFloat awakeValue; // ivar: _awakeValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maxDurationValue; // ivar: _maxDurationValue
@property (readonly) Class superclass;
@property (nonatomic) CGFloat totalDurationValue; // ivar: _totalDurationValue
@property (retain, nonatomic) HKSleepChartPointUserInfo *userInfo;


+(id)chartPointsForSummaries:(id)arg0 context:(id)arg1 ;
-(id)allYValues;
-(id)maxYValue;


@end


#endif