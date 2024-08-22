// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFAUTOMATIONSWITCHCELL_H
#define WFAUTOMATIONSWITCHCELL_H

@class UITableViewCell, UISwitch;



@interface WFAutomationSwitchCell : UITableViewCell

@property (readonly, nonatomic) UISwitch *switchControl; // ivar: _switchControl


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif