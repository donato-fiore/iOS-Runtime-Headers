// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSLEEPPERIODDAYSERIES_H
#define HKSLEEPPERIODDAYSERIES_H



#import "HKSleepPeriodSeries.h"

@interface HKSleepPeriodDaySeries : HKSleepPeriodSeries



-(CGFloat)barWidthForVisibleBarCount:(NSInteger)arg0 axisRect:(struct CGRect )arg1 minimumSpacing:(CGFloat)arg2 ;
-(NSInteger)visibleBarCountWithZoomLevelConfiguration:(id)arg0 ;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(void)addGoalLinePathsToCoordinate:(id)arg0 upperGoalLinePath:(id)arg1 upperGoalMarkerPoints:(id)arg2 previousUpperGoalLinePoint:(id)arg3 lowerGoalLinePath:(id)arg4 lowerGoalMarkerPoints:(id)arg5 previousLowerGoalLinePoint:(id)arg6 axisRect:(struct CGRect )arg7 ;


@end


#endif