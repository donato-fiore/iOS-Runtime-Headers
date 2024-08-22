// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC13SLEEPHEALTHUI54SCHEDULEOCCURRENCECOMPONENTSACCESSIBILITYTABLEVIEWCELL_H
#define _TTC13SLEEPHEALTHUI54SCHEDULEOCCURRENCECOMPONENTSACCESSIBILITYTABLEVIEWCELL_H

@class UITableViewCell;



@interface _TtC13SleepHealthUI54ScheduleOccurrenceComponentsAccessibilityTableViewCell : UITableViewCell {
    ? delegate;
    ? component;
    ? model;
    ? $__lazy_storage_$_alertImageView;
    ? titleLabel;
    ? datePicker;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)datePickerDidChange;
-(void)datePickerDidEndEditing;


@end


#endif