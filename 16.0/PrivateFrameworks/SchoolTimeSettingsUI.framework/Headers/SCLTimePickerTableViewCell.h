// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCLTIMEPICKERTABLEVIEWCELL_H
#define SCLTIMEPICKERTABLEVIEWCELL_H

@class UITableViewCell, NSDateFormatter, NSDateIntervalFormatter, NSCalendar, NSDateInterval, UIDatePicker, NSDate;
@protocol SCLTimePickerTableViewCellDelegate;



@interface SCLTimePickerTableViewCell : UITableViewCell {
    NSUInteger _constraintMode;
    NSDateFormatter *_dateFormatter;
    NSDateIntervalFormatter *_intervalFormatter;
}


@property (copy, nonatomic) NSCalendar *calendar;
@property (copy, nonatomic) NSDateInterval *constraintInterval; // ivar: _constraintInterval
@property (readonly) UIDatePicker *datePicker; // ivar: _datePicker
@property (weak, nonatomic) NSObject<SCLTimePickerTableViewCellDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSDate *selectedDate;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateConstraintModeWithInterval:(id)arg0 selectedDate:(id)arg1 ;
-(void)datePickerDidChangeDate:(id)arg0 ;


@end


#endif