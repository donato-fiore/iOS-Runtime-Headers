// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUSTEPPERCELL_H
#define HUSTEPPERCELL_H

@class UITableViewCell, NSString, HFItem, NSNumber, UIStepper, UILabel;
@protocol HUCellProtocol, HUDisableableCellProtocol, HUStepperCellProtocol, HUResizableCellDelegate, HUStepperCellDelegate;



@interface HUStepperCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol, HUStepperCellProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (copy, nonatomic) NSNumber *maximumValue; // ivar: _maximumValue
@property (copy, nonatomic) NSNumber *minimumValue; // ivar: _minimumValue
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (copy, nonatomic) NSNumber *stepValue; // ivar: _stepValue
@property (retain, nonatomic) UIStepper *stepper; // ivar: _stepper
@property (weak, nonatomic) NSObject<HUStepperCellDelegate> *stepperCellDelegate; // ivar: _stepperCellDelegate
@property (copy, nonatomic) NSNumber *stepperValue; // ivar: _stepperValue
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *valueLabel; // ivar: _valueLabel


-(id)_valueDescription;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_stepperValueDidChange:(id)arg0 ;
-(void)_toggleValueChange:(id)arg0 ;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif