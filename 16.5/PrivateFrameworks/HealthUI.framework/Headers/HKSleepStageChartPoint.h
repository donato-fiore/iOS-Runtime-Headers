// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSLEEPSTAGECHARTPOINT_H
#define HKSLEEPSTAGECHARTPOINT_H

@class NSArray, NSString;
@protocol HKSleepSleepChartPointUserInfoProvider;


#import "HKSleepPeriodChartPoint.h"
#import "HKSleepChartPointUserInfo.h"

@interface HKSleepStageChartPoint : HKSleepPeriodChartPoint <HKSleepSleepChartPointUserInfoProvider>



@property (retain, nonatomic) NSArray *asleepCoreOffsets; // ivar: _asleepCoreOffsets
@property (retain, nonatomic) NSArray *asleepDeepOffsets; // ivar: _asleepDeepOffsets
@property (retain, nonatomic) NSArray *asleepRemOffsets; // ivar: _asleepRemOffsets
@property (retain, nonatomic) NSArray *asleepUnspecifiedOffsets; // ivar: _asleepUnspecifiedOffsets
@property (retain, nonatomic) NSArray *awakeOffsets; // ivar: _awakeOffsets
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) HKSleepChartPointUserInfo *userInfo;


+(BOOL)_segment:(id)arg0 isAdjacentToSegment:(id)arg1 ;
+(id)chartPointsForSummaries:(id)arg0 context:(id)arg1 ;
-(id)allYValues;
-(id)yValuesForSleepAnalysis:(NSInteger)arg0 ;


@end


#endif