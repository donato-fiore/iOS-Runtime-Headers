// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FUDATEPICKER_H
#define FUDATEPICKER_H

@class UIView, NSArray, NSMutableArray, UILabel, NSDateFormatter, UIColor, NSDate, NSString;
@protocol FUScrollWheelDataSource, FUScrollWheelDelegate, FUDatePickerDelegate;


#import "FUScrollWheel.h"

@interface FUDatePicker : UIView <FUScrollWheelDataSource, FUScrollWheelDelegate>

 {
    NSUInteger _monthOffset;
    NSUInteger _dayOffset;
    NSInteger _yearOrder;
    NSInteger _monthOrder;
    NSInteger _dayOrder;
    NSUInteger _numRowsMonth;
    NSUInteger _numRowsDate;
    NSUInteger _numRowsYear;
    NSArray *_monthNames;
    NSArray *_dayValues;
    NSMutableArray *_yearsWithNames;
    UILabel *_dayLabel;
    UILabel *_yearLabel;
    UILabel *_monthLabel;
    NSDateFormatter *_dateFormatter;
    BOOL _firstResponderShouldChange;
    BOOL _displayEra;
    UIColor *_tintColor;
    NSDate *_minimumDate;
    NSDate *_maximumDate;
    NSInteger _initialWheelType;
}


@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) FUScrollWheel *dayWheel; // ivar: _dayWheel
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FUDatePickerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) FUScrollWheel *monthWheel; // ivar: _monthWheel
@property (readonly) Class superclass;
@property (retain, nonatomic) FUScrollWheel *yearWheel; // ivar: _yearWheel


-(BOOL)scrollWheelShouldBecomeFirstResponder:(id)arg0 ;
-(NSUInteger)numberOfRowsInScrollWheel:(id)arg0 ;
-(id)_enumerateDayValues;
-(id)_enumerateDayValuesFromFormatter:(id)arg0 ;
-(id)_wheelOfType:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 tintColor:(id)arg1 initialWheelType:(NSInteger)arg2 shouldEnableCrown:(BOOL)arg3 minimumDate:(id)arg4 maximumDate:(id)arg5 ;
-(id)scrollWheel:(id)arg0 titleForItemAtIndex:(NSUInteger)arg1 ;
-(void)_updateDayRangeReloadingWheel:(BOOL)arg0 ;
-(void)_updateSpinnersAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)scrollWheel:(id)arg0 didChangeCurrentIndexTo:(NSUInteger)arg1 ;
-(void)tappedScrollWheel:(id)arg0 ;


@end


#endif