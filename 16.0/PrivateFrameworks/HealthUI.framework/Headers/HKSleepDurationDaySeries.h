// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSLEEPDURATIONDAYSERIES_H
#define HKSLEEPDURATIONDAYSERIES_H

@class NSCalendar, NSNumber, NSLock;


#import "HKSleepDurationSeries.h"

@interface HKSleepDurationDaySeries : HKSleepDurationSeries

@property (retain, nonatomic) NSCalendar *currentCalendar; // ivar: _currentCalendar
@property (retain, nonatomic) NSNumber *highlightedSleepValue;
@property (retain, nonatomic) NSNumber *highlightedSleepValueStorage; // ivar: _highlightedSleepValueStorage
@property (readonly, nonatomic) NSLock *seriesMutableStateLock; // ivar: _seriesMutableStateLock


-(BOOL)hideAsleepData;
-(BOOL)hideInBedData;
-(CGFloat)barWidthForVisibleBarCount:(NSInteger)arg0 axisRect:(struct CGRect )arg1 minimumSpacing:(CGFloat)arg2 ;
-(NSInteger)visibleBarCountWithZoomLevelConfiguration:(id)arg0 ;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(id)init;
-(void)_rebuildFillStyles;
-(void)addGoalLinePathsToCoordinate:(id)arg0 goalLinePath:(id)arg1 goalLineMarkerPoints:(id)arg2 previousCoordinateGoal:(id)arg3 axisRect:(struct CGRect )arg4 ;


@end


#endif