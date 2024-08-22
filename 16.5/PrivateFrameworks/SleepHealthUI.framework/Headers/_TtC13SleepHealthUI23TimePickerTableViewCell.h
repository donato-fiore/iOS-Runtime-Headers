// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC13SLEEPHEALTHUI23TIMEPICKERTABLEVIEWCELL_H
#define _TTC13SLEEPHEALTHUI23TIMEPICKERTABLEVIEWCELL_H

@class UITableViewCell, NSString;
@protocol UIPickerViewDelegate;



@interface _TtC13SleepHealthUI23TimePickerTableViewCell : UITableViewCell <UIPickerViewDelegate>

 {
    ? item;
    ? $__lazy_storage_$_timePicker;
}


@property (nonatomic, readonly) NSString *description;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)prepareForReuse;


@end


#endif