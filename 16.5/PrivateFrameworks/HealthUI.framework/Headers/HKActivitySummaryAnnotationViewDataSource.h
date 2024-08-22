// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKACTIVITYSUMMARYANNOTATIONVIEWDATASOURCE_H
#define HKACTIVITYSUMMARYANNOTATIONVIEWDATASOURCE_H

@class HKActivitySummary, NSArray, NSString, UIView, HKActivityRingView, _HKWheelchairUseCharacteristicCache;
@protocol HKInteractiveChartAnnotationViewDataSource;

#import <Foundation/Foundation.h>

#import "HKDateCache.h"
#import "HKDisplayTypeController.h"
#import "HKUnitPreferenceController.h"

@interface HKActivitySummaryAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource>



@property (retain, nonatomic) HKActivitySummary *activitySummary; // ivar: _activitySummary
@property (readonly, nonatomic) NSArray *columnsForPosition; // ivar: _columnsForPosition
@property (nonatomic) BOOL currentValueViewContext; // ivar: _currentValueViewContext
@property (retain, nonatomic) HKDateCache *dateCache; // ivar: _dateCache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HKDisplayTypeController *displayTypeController; // ivar: _displayTypeController
@property (readonly, nonatomic) NSInteger firstWeekday; // ivar: _firstWeekday
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *ringContainer; // ivar: _ringContainer
@property (retain, nonatomic) HKActivityRingView *ringView; // ivar: _ringView
@property (readonly) Class superclass;
@property (nonatomic) NSInteger timeScope; // ivar: _timeScope
@property (retain, nonatomic) HKUnitPreferenceController *unitController; // ivar: _unitController
@property (retain, nonatomic) _HKWheelchairUseCharacteristicCache *wheelchairUseCharacteristicCache; // ivar: _wheelchairUseCharacteristicCache


-(BOOL)_hasRingView;
-(BOOL)showSeparators;
-(NSInteger)numberOfValuesForAnnotationView:(id)arg0 ;
-(id)_bodyColor;
-(id)_buildColumnPositionsFromOptions:(NSUInteger)arg0 ;
-(id)_columnViewWithTitle:(id)arg0 titleColor:(id)arg1 body:(id)arg2 bodyColor:(id)arg3 alignment:(NSInteger)arg4 ;
-(id)_dateColumnWithDateComponents:(id)arg0 calendar:(id)arg1 orientation:(NSInteger)arg2 ;
-(id)_dateTextForDateComponents:(id)arg0 calendar:(id)arg1 timeScope:(NSInteger)arg2 ;
-(id)_energyColumn;
-(id)_energyColumnAsNumber;
-(id)_energyColumnValueString;
-(id)_exerciseColumn;
-(id)_exerciseColumnAsNumber;
-(id)_exerciseColumnValueString;
-(id)_moveColumn;
-(id)_moveColumnAsNumber;
-(id)_moveColumnValueString;
-(id)_moveTimeColumn;
-(id)_moveTimeColumnAsNumber;
-(id)_moveTimeColumnValueString;
-(id)_percentStringWithQuantity:(id)arg0 goalQuantity:(id)arg1 ;
-(id)_ringColumn;
-(id)_standColumn;
-(id)_standColumnAsNumber;
-(id)_standColumnValueString;
-(id)_valueUnitAttributedStringWithValueString:(id)arg0 unitString:(id)arg1 ;
-(id)_valueWithTitle:(id)arg0 attributedValue:(id)arg1 valueAsNumber:(id)arg2 ;
-(id)_weekContainingDateComponents:(id)arg0 calendar:(id)arg1 timeScope:(NSInteger)arg2 ;
-(id)activityExerciseTitle;
-(id)activityMoveTitle;
-(id)activityStandTitle;
-(id)dateViewWithOrientation:(NSInteger)arg0 ;
-(id)initWithDisplayTypeController:(id)arg0 unitController:(id)arg1 wheelchairUseCharacteristicCache:(id)arg2 dateCache:(id)arg3 currentValueViewContext:(BOOL)arg4 activityOptions:(NSUInteger)arg5 firstWeekday:(NSInteger)arg6 ;
-(id)leftMarginViewWithOrientation:(NSInteger)arg0 ;
-(id)valueViewForColumnAtIndex:(NSInteger)arg0 orientation:(NSInteger)arg1 ;
-(id)viewForColumnType:(NSUInteger)arg0 ;


@end


#endif