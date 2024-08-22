// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUACCESSIBILITYEDITABLETABLECELLWITHSTEPPER_H
#define HUACCESSIBILITYEDITABLETABLECELLWITHSTEPPER_H

@class AXUISettingsEditableTableCellWithStepper, NSString, NSNumber;
@protocol AXUISettingsEditableTableCellWithStepperDelegate, UITextFieldDelegate, HUStepperCellProtocol, HUDisableableCellProtocol, HUStepperCellDelegate;



@interface HUAccessibilityEditableTableCellWithStepper : AXUISettingsEditableTableCellWithStepper <AXUISettingsEditableTableCellWithStepperDelegate, UITextFieldDelegate, HUStepperCellProtocol, HUDisableableCellProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *maximumValue; // ivar: _maximumValue
@property (copy, nonatomic) NSNumber *minimumValue; // ivar: _minimumValue
@property (copy, nonatomic) NSNumber *stepValue; // ivar: _stepValue
@property (weak, nonatomic) NSObject<HUStepperCellDelegate> *stepperCellDelegate; // ivar: _stepperCellDelegate
@property (copy, nonatomic) NSNumber *stepperValue; // ivar: _stepperValue
@property (readonly) Class superclass;


-(CGFloat)maximumValueForSpecifier:(id)arg0 ;
-(CGFloat)minimumValueForSpecifier:(id)arg0 ;
-(CGFloat)stepValueForSpecifier:(id)arg0 ;
-(CGFloat)valueForSpecifier:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)stringValueForSpecifier:(id)arg0 ;
-(id)textFieldValue:(id)arg0 ;
-(void)_update;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)specifier:(id)arg0 setValue:(CGFloat)arg1 ;


@end


#endif