// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19HEALTHMEDICATIONSUI28MEDICATIONLOGDETAILSTIMEVIEW_H
#define _TTC19HEALTHMEDICATIONSUI28MEDICATIONLOGDETAILSTIMEVIEW_H

@class UIView;
@protocol UITextFieldDelegate;



@interface _TtC19HealthMedicationsUI28MedicationLogDetailsTimeView : UIView <UITextFieldDelegate>

 {
    ? $__lazy_storage_$_timeFormatter;
    ? logDate;
    ? viewModel;
    ? $__lazy_storage_$_titleLabel;
    ? $__lazy_storage_$_logTimeLabel;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif