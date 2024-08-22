// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSETTINGTABLECELL_H
#define PKSETTINGTABLECELL_H

@class UIActivityIndicatorView, UISwitch;


#import "PKTableViewCell.h"

@interface PKSettingTableCell : PKTableViewCell {
    UIActivityIndicatorView *_spinner;
    BOOL _showingSpinner;
}


@property (readonly, nonatomic) SEL action; // ivar: _action
@property (nonatomic, getter=isOn) BOOL on;
@property (retain, nonatomic) UISwitch *settingSwitch; // ivar: _settingSwitch
@property (readonly, weak, nonatomic) id *target; // ivar: _target


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)initWithTitle:(id)arg0 target:(id)arg1 action:(SEL)arg2 ;
-(void)dealloc;
-(void)prepareForReuse;
-(void)showSpinner:(BOOL)arg0 ;


@end


#endif