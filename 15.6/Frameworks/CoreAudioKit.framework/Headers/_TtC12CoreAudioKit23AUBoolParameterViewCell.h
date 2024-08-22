// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12COREAUDIOKIT23AUBOOLPARAMETERVIEWCELL_H
#define _TTC12COREAUDIOKIT23AUBOOLPARAMETERVIEWCELL_H

@class TtC12CoreAudioKit30AUGenericViewTableViewCellBase, UIColor, UISwitch;



@interface _TtC12CoreAudioKit23AUBoolParameterViewCell : TtC12CoreAudioKit30AUGenericViewTableViewCellBase

@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, weak) UISwitch *valueSwitch; // ivar: valueSwitch


-(id)initWithCoder:(id)arg0 ;
-(void)switchValueChangedWithSender:(id)arg0 ;


@end


#endif