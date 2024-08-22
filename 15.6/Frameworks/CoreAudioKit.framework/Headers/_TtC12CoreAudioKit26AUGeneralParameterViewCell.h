// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12COREAUDIOKIT26AUGENERALPARAMETERVIEWCELL_H
#define _TTC12COREAUDIOKIT26AUGENERALPARAMETERVIEWCELL_H

@class TtC12CoreAudioKit30AUGenericViewTableViewCellBase, UIColor, UILabel, UISlider;



@interface _TtC12CoreAudioKit26AUGeneralParameterViewCell : TtC12CoreAudioKit30AUGenericViewTableViewCellBase

@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, weak) UILabel *unitLabel; // ivar: unitLabel
@property (nonatomic, weak) UISlider *valueSlider; // ivar: valueSlider


-(id)initWithCoder:(id)arg0 ;
-(void)sliderReleased:(id)arg0 ;
-(void)sliderTouched:(id)arg0 ;
-(void)sliderValueChangedWithSender:(id)arg0 ;


@end


#endif