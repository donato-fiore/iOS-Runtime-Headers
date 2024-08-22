// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKCALENDARITEMRECURRENCEENDCELL_H
#define EKCALENDARITEMRECURRENCEENDCELL_H

@class UITableViewCell, NSDate, UIDatePicker, UIButton;



@interface EKCalendarItemRecurrenceEndCell : UITableViewCell

@property (retain, nonatomic) NSDate *date;
@property (readonly, nonatomic) UIDatePicker *datePicker; // ivar: _datePicker
@property (readonly, nonatomic) UIButton *neverButton; // ivar: _neverButton


-(id)init;
-(void)layoutSubviews;
-(void)viewDidMoveToSuperview;


@end


#endif