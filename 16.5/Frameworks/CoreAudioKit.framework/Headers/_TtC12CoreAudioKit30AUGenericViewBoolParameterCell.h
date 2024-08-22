// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12COREAUDIOKIT30AUGENERICVIEWBOOLPARAMETERCELL_H
#define _TTC12COREAUDIOKIT30AUGENERICVIEWBOOLPARAMETERCELL_H

@class TtC12CoreAudioKit30AUGenericViewParameterCellBase, UIColor, UISwitch;



@interface _TtC12CoreAudioKit30AUGenericViewBoolParameterCell : TtC12CoreAudioKit30AUGenericViewParameterCellBase

@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, weak) UISwitch *valueSwitch; // ivar: valueSwitch


-(BOOL)accessibilityActivate;
-(id)initWithCoder:(id)arg0 ;
-(void)switchValueChangedWithSender:(id)arg0 ;


@end


#endif