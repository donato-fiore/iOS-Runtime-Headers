// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19HEALTHMEDICATIONSUI31MEDICATIONDOSELOGMEDICATIONVIEW_H
#define _TTC19HEALTHMEDICATIONSUI31MEDICATIONDOSELOGMEDICATIONVIEW_H

@class UIView;



@interface _TtC19HealthMedicationsUI31MedicationDoseLogMedicationView : UIView {
    ? viewModel;
    ? logDelegate;
    ? $__lazy_storage_$_timeFormatter;
    ? $__lazy_storage_$_medicationNameLabel;
    ? $__lazy_storage_$_formStrengthLabel;
    ? $__lazy_storage_$_medmojiImageView;
    ? $__lazy_storage_$_notesLabel;
    ? $__lazy_storage_$_skippedButton;
    ? $__lazy_storage_$_takenButton;
    ? $__lazy_storage_$_doseAmountTimeButton;
    ? $__lazy_storage_$_medicationStackView;
    ? $__lazy_storage_$_lowerSectionStackViewWithNotes;
    ? $__lazy_storage_$_lowerSectionStackView;
    ? $__lazy_storage_$_skippedTakenStackView;
    ? $__lazy_storage_$_dividerView;
    ? contentView;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didTapRecord:(id)arg0 ;
-(void)didTapSkip:(id)arg0 ;
-(void)didTapUnitTime:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif