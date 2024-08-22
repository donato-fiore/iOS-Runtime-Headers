// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRRESWITCHTABLEVIEWCELL_H
#define PRRESWITCHTABLEVIEWCELL_H

@class UISwitch;


#import "PRRETableViewCell.h"

@interface PRRESwitchTableViewCell : PRRETableViewCell {
    UISwitch *_switch;
}




-(id)_currentValue;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setCurrentValue:(id)arg0 ;


@end


#endif