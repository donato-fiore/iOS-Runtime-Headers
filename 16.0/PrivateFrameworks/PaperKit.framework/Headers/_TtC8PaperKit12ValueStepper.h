// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8PAPERKIT12VALUESTEPPER_H
#define _TTC8PAPERKIT12VALUESTEPPER_H

@class UIControl;



@interface _TtC8PaperKit12ValueStepper : UIControl {
    ? decreaseButton;
    ? increaseButton;
    ? valueLabel;
    ? contentStackView;
    ? interItemSpacing;
    ? cornerRadius;
    ? valueLabelWidth;
    ? valueLabelBorderWidth;
    ? minValue;
    ? maxValue;
    ? unit;
    ? $__lazy_storage_$_currentValue;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didTapLeftButton;
-(void)didTapRightButton;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif