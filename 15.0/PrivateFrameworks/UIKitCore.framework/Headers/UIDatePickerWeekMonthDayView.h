// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDATEPICKERWEEKMONTHDAYVIEW_H
#define UIDATEPICKERWEEKMONTHDAYVIEW_H

@class NSString;


#import "UIView.h"
#import "UILabel.h"

@interface UIDatePickerWeekMonthDayView : UIView {
    ? _datePickerWeekMonthDayViewFlags;
}


@property (readonly, nonatomic) UILabel *dateLabel; // ivar: _dateLabel
@property (copy, nonatomic) NSString *formattedDateString; // ivar: _formattedDateString
@property (readonly, nonatomic) UILabel *weekdayLabel; // ivar: _weekdayLabel
@property (nonatomic) BOOL weekdayLast;
@property (nonatomic) CGFloat weekdayWidth; // ivar: _weekdayWidth


-(BOOL)_canBeReusedInPickerView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif