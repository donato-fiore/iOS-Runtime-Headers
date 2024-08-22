// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTUISWITCHTABLEVIEWCELL_H
#define MTUISWITCHTABLEVIEWCELL_H

@class UISwitch;
@protocol MTUISwitchTableViewCellDelegate;


#import "MTUIBaseTableViewCell.h"

@interface MTUISwitchTableViewCell : MTUIBaseTableViewCell

@property (weak, nonatomic) NSObject<MTUISwitchTableViewCellDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UISwitch *enabledSwitch; // ivar: _enabledSwitch


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)setSwitchStateEnabled:(BOOL)arg0 ;
-(void)switchAction:(id)arg0 ;


@end


#endif