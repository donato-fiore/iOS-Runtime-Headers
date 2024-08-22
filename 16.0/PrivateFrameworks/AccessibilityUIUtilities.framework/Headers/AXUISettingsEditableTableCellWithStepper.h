// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXUISETTINGSEDITABLETABLECELLWITHSTEPPER_H
#define AXUISETTINGSEDITABLETABLECELLWITHSTEPPER_H

@class UILabel, UIStepper;
@protocol AXUISettingsEditableTableCellWithStepperDelegate;


#import "AXUISettingsEditableTextCell.h"

@interface AXUISettingsEditableTableCellWithStepper : AXUISettingsEditableTextCell

@property (weak, nonatomic) NSObject<AXUISettingsEditableTableCellWithStepperDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UILabel *secondsLabel; // ivar: _secondsLabel
@property (readonly, nonatomic) BOOL shouldResizeTextFieldOnUpdate;
@property (retain, nonatomic) UIStepper *stepper; // ivar: _stepper
@property (nonatomic) BOOL testingUseNoPreferencesDelegate; // ivar: _testingUseNoPreferencesDelegate


-(CGFloat)_axStepperMaximumValue;
-(CGFloat)_axStepperMinimumValue;
-(CGFloat)_axStepperStepValue;
-(CGFloat)_axStepperValue;
-(NSInteger)_axStepperKeyboardType;
-(id)_axStepperStringValue;
-(id)_axStepperUnitString;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_axStepperSetValue:(CGFloat)arg0 ;
-(void)_stepperChanged:(id)arg0 ;
-(void)_textFieldChanged:(id)arg0 ;
-(void)_updateAccessibilityLabelForTextField;
-(void)_updateSecondsLabel;
-(void)_updateSecondsLabelForDelegate:(id)arg0 ;
-(void)didMoveToSuperview;
-(void)initializeView;
-(void)layoutSubviews;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)updateWithValue:(CGFloat)arg0 shouldUpdateTextField:(BOOL)arg1 ;


@end


#endif