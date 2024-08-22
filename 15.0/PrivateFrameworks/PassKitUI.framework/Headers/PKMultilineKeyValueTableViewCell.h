// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKMULTILINEKEYVALUETABLEVIEWCELL_H
#define PKMULTILINEKEYVALUETABLEVIEWCELL_H

@class UILabel;


#import "PKTableViewCell.h"

@interface PKMultilineKeyValueTableViewCell : PKTableViewCell

@property (retain, nonatomic) UILabel *keyLabel; // ivar: _keyLabel
@property (retain, nonatomic) UILabel *valueLabel; // ivar: _valueLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif