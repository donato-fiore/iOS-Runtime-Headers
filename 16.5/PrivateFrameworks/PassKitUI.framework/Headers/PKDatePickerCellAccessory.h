// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDATEPICKERCELLACCESSORY_H
#define PKDATEPICKERCELLACCESSORY_H

@class UIView, UIDatePicker;



@interface PKDatePickerCellAccessory : UIView {
    UIDatePicker *_datePicker;
}




+(id)accessoryWithDatePicker:(id)arg0 ;
-(id)_initWithDatePicker:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif