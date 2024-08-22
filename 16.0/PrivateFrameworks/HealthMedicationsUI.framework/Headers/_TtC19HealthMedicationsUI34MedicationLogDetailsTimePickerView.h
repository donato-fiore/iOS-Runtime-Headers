// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19HEALTHMEDICATIONSUI34MEDICATIONLOGDETAILSTIMEPICKERVIEW_H
#define _TTC19HEALTHMEDICATIONSUI34MEDICATIONLOGDETAILSTIMEPICKERVIEW_H

@class UIView;
@protocol UITextFieldDelegate;



@interface _TtC19HealthMedicationsUI34MedicationLogDetailsTimePickerView : UIView <UITextFieldDelegate>

 {
    ? detailsDelegate;
    ? viewModel;
    ? $__lazy_storage_$_logTimePicker;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)logTimeChanged:(id)arg0 ;


@end


#endif