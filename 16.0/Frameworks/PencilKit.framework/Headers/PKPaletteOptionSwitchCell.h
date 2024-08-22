// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPALETTEOPTIONSWITCHCELL_H
#define PKPALETTEOPTIONSWITCHCELL_H

@class UISwitch, UILabel;


#import "PKPaletteOptionCell.h"

@interface PKPaletteOptionSwitchCell : PKPaletteOptionCell

@property (readonly, nonatomic) UISwitch *switchButton; // ivar: _switchButton
@property (readonly, nonatomic) UILabel *textLabel; // ivar: _textLabel


-(id)init;


@end


#endif