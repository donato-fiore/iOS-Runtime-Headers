// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12COREAUDIOKIT31AUGENERICVIEWMETERPARAMETERCELL_H
#define _TTC12COREAUDIOKIT31AUGENERICVIEWMETERPARAMETERCELL_H

@class TtC12CoreAudioKit30AUGenericViewParameterCellBase, UILabel, NSLayoutConstraint, UIColor;


#import "_TtC12CoreAudioKit11AUMeterView.h"

@interface _TtC12CoreAudioKit31AUGenericViewMeterParameterCell : TtC12CoreAudioKit30AUGenericViewParameterCellBase

@property (nonatomic, weak) UILabel *maxLabel; // ivar: maxLabel
@property (nonatomic, weak) _TtC12CoreAudioKit11AUMeterView *meter; // ivar: meter
@property (nonatomic, weak) UILabel *minLabel; // ivar: minLabel
@property (nonatomic, weak) NSLayoutConstraint *minWidthConstraint; // ivar: minWidthConstraint
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, weak) UILabel *unitLabel; // ivar: unitLabel


-(id)initWithCoder:(id)arg0 ;


@end


#endif