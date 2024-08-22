// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCALENDARWEEKVIEW_H
#define HKCALENDARWEEKVIEW_H

@class UIView, NSArray, UIView<HKCalendarMonthTitleFormatting>, NSDate;
@protocol HKCalendarWeekViewDelegate;


#import "HKDateCache.h"
#import "HKCalendarDayCell.h"

@interface HKCalendarWeekView : UIView

@property (nonatomic) CGFloat additionalSpacingPerRow; // ivar: _additionalSpacingPerRow
@property (nonatomic) CGFloat dateBottomMargin; // ivar: _dateBottomMargin
@property (readonly, nonatomic) HKDateCache *dateCache; // ivar: _dateCache
@property (nonatomic) CGFloat dateDiameter; // ivar: _dateDiameter
@property (nonatomic) CGFloat dateTopMargin; // ivar: _dateTopMargin
@property (readonly, copy, nonatomic) NSArray *dayCells; // ivar: _dayCells
@property (weak, nonatomic) NSObject<HKCalendarWeekViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger firstDayOfMonthCellIndex; // ivar: _firstDayOfMonthCellIndex
@property (nonatomic) CGFloat leadingMargin; // ivar: _leadingMargin
@property (nonatomic) CGFloat monthTitleBottomMargin; // ivar: _monthTitleBottomMargin
@property (nonatomic) CGFloat monthTitleTopMargin; // ivar: _monthTitleTopMargin
@property (retain, nonatomic) UIView<HKCalendarMonthTitleFormatting> *monthTitleView; // ivar: _monthTitleView
@property (copy, nonatomic) NSDate *monthWeekStart; // ivar: _monthWeekStart
@property (retain, nonatomic) HKCalendarDayCell *pressedDayCell; // ivar: _pressedDayCell
@property (nonatomic) NSInteger pressedDayOfWeek; // ivar: _pressedDayOfWeek


-(BOOL)containsDate:(id)arg0 ;
-(BOOL)containsMonthTitle;
-(BOOL)supportsRTL;
-(CGFloat)preferredHeight;
-(Class)cellClass;
-(Class)monthTitleClass;
-(id)_getDayCellWithTouchLocation:(struct CGPoint )arg0 ;
-(id)_getDayCellWithTouches:(id)arg0 ;
-(id)currentWeekStartDate;
-(id)description;
-(id)initWithDateCache:(id)arg0 ;
-(id)nextWeekStartDate;
-(id)previousWeekStartDate;
-(struct CGRect )frameForDayCell:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)pressedOnCalendarDay:(NSInteger)arg0 cell:(id)arg1 down:(BOOL)arg2 ;
-(void)reloadCells;
-(void)selectedCalendarDay:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif