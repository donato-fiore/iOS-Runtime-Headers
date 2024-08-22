// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12COREAUDIOKIT31AUGENERICVIEWFLOATPARAMETERCELL_H
#define _TTC12COREAUDIOKIT31AUGENERICVIEWFLOATPARAMETERCELL_H

@class TtC12CoreAudioKit30AUGenericViewParameterCellBase, UIColor, UILabel, UISlider;



@interface _TtC12CoreAudioKit31AUGenericViewFloatParameterCell : TtC12CoreAudioKit30AUGenericViewParameterCellBase

@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, weak) UILabel *unitLabel; // ivar: unitLabel
@property (nonatomic, weak) UISlider *valueSlider; // ivar: valueSlider


-(id)initWithCoder:(id)arg0 ;
-(void)accessibilityDecrement;
-(void)accessibilityIncrement;
-(void)sliderReleasedWithSender:(id)arg0 ;
-(void)sliderTouchedWithSender:(id)arg0 ;
-(void)sliderValueChangedWithSender:(id)arg0 ;


@end


#endif