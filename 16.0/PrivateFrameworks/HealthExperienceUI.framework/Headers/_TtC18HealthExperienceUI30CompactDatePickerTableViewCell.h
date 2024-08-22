// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI30COMPACTDATEPICKERTABLEVIEWCELL_H
#define _TTC18HEALTHEXPERIENCEUI30COMPACTDATEPICKERTABLEVIEWCELL_H

@class UITableViewCell;
@protocol HKOnboardingCompactDatePickerViewDelegate;



@interface _TtC18HealthExperienceUI30CompactDatePickerTableViewCell : UITableViewCell <HKOnboardingCompactDatePickerViewDelegate>

 {
    ? item;
    ? $__lazy_storage_$_containerView;
    ? $__lazy_storage_$_titleLabel;
    ? $__lazy_storage_$_compactPicker;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)compactDatePickerView:(id)arg0 didChangeValue:(id)arg1 ;


@end


#endif