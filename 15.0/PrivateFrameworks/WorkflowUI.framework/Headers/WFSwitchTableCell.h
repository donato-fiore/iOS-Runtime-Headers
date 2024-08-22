// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSWITCHTABLECELL_H
#define WFSWITCHTABLECELL_H

@class UITableViewCell, UISwitch;


#import "WFSwitchTableItem.h"

@interface WFSwitchTableCell : UITableViewCell

@property (readonly, nonatomic) UISwitch *switchView; // ivar: _switchView
@property (weak, nonatomic) WFSwitchTableItem *tableItem; // ivar: _tableItem


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)switchValueChanged:(id)arg0 ;


@end


#endif