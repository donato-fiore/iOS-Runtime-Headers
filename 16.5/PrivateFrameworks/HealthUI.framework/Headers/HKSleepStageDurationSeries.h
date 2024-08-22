// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSLEEPSTAGEDURATIONSERIES_H
#define HKSLEEPSTAGEDURATIONSERIES_H

@class NSNumber, NSLock, NSArray;
@protocol HKSleepStageCategoryHighlightable;


#import "HKSleepDurationSeries.h"

@interface HKSleepStageDurationSeries : HKSleepDurationSeries <HKSleepStageCategoryHighlightable>



@property (copy, nonatomic) NSNumber *highlightedSleepStage;
@property (retain, nonatomic) NSNumber *highlightedSleepStageStorage; // ivar: _highlightedSleepStageStorage
@property (readonly, nonatomic) NSLock *seriesMutableStateLock; // ivar: _seriesMutableStateLock
@property (copy, nonatomic) NSArray *sleepStageFillStyles;
@property (copy, nonatomic) NSArray *sleepStageFillStylesStorage; // ivar: _sleepStageFillStylesStorage


-(BOOL)hideAsleepData;
-(BOOL)hideInBedData;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(id)init;
-(void)_rebuildFillStyles;
-(void)addGoalLinePathsToCoordinate:(id)arg0 goalLinePath:(id)arg1 goalLineMarkerPoints:(id)arg2 previousCoordinateGoal:(id)arg3 axisRect:(struct CGRect )arg4 ;


@end


#endif