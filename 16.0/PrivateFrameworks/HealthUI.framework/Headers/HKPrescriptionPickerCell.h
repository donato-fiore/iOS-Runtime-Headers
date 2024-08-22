// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKPRESCRIPTIONPICKERCELL_H
#define HKPRESCRIPTIONPICKERCELL_H

@class UITableViewCell, UIStackView, HKVisionPrescription, UILabel, UIButton, UISwitch;
@protocol HKPrescriptionPickerCellDelegate;



@interface HKPrescriptionPickerCell : UITableViewCell

@property (retain, nonatomic) UIStackView *contentStackView; // ivar: _contentStackView
@property (weak, nonatomic) NSObject<HKPrescriptionPickerCellDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isOn) BOOL on;
@property (copy, nonatomic) HKVisionPrescription *prescription; // ivar: _prescription
@property (retain, nonatomic) UILabel *primaryLabel; // ivar: _primaryLabel
@property (retain, nonatomic) UIStackView *sampleInfoStackView; // ivar: _sampleInfoStackView
@property (retain, nonatomic) UILabel *secondaryLabel; // ivar: _secondaryLabel
@property (retain, nonatomic) UIButton *showDetailsButton; // ivar: _showDetailsButton
@property (retain, nonatomic) UISwitch *toggleView; // ivar: _toggleView


+(id)defaultReuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_didTapShowDetailsButton;
-(void)_didToggleSwitch:(id)arg0 ;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)prepareForReuse;


@end


#endif