// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ACTIVITYBARSERIES_H
#define _ACTIVITYBARSERIES_H

@protocol HKActivityBarSeriesDelegate;


#import "HKBarSeries.h"
#import "HKDisplayTypeController.h"
#import "HKFillStyle.h"
#import "HKUnitPreferenceController.h"

@interface _ActivityBarSeries : HKBarSeries

@property (weak, nonatomic) NSObject<HKActivityBarSeriesDelegate> *activityBarDelegate; // ivar: _activityBarDelegate
@property (nonatomic) NSInteger activityDisplayTypeIdentifier; // ivar: _activityDisplayTypeIdentifier
@property (readonly, nonatomic) HKDisplayTypeController *displayTypeController; // ivar: _displayTypeController
@property (nonatomic) CGFloat lastLegendUpdateTime; // ivar: _lastLegendUpdateTime
@property (retain, nonatomic) HKFillStyle *missedGoalUnselectedFillStyle; // ivar: _missedGoalUnselectedFillStyle
@property (readonly, nonatomic) HKUnitPreferenceController *unitPreferenceController; // ivar: _unitPreferenceController


-(BOOL)supportsMultiTouchSelection;
-(id)initWithUnitPreferenceController:(id)arg0 activityBarDelegate:(id)arg1 displayTypeController:(id)arg2 ;
-(void)_drawPath:(id)arg0 withFillStyle:(id)arg1 strokeStyle:(id)arg2 axisRect:(struct CGRect )arg3 context:(struct CGContext *)arg4 ;
-(void)drawWithBlockCoordinates:(id)arg0 visibleBarCount:(NSInteger)arg1 pointTransform:(struct CGAffineTransform )arg2 context:(struct CGContext *)arg3 axisRect:(struct CGRect )arg4 ;
-(void)updateLegendsForTimeScope:(NSInteger)arg0 range:(id)arg1 ;


@end


#endif