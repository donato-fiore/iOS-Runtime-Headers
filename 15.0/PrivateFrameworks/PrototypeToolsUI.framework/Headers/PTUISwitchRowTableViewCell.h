// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTUISWITCHROWTABLEVIEWCELL_H
#define PTUISWITCHROWTABLEVIEWCELL_H

@class UISwitch;


#import "PTUIRowTableViewCell.h"

@interface PTUISwitchRowTableViewCell : PTUIRowTableViewCell {
    UISwitch *_switch;
}




-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_valueChanged:(id)arg0 ;
-(void)updateDisplayedValue;


@end


#endif