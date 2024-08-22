// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUISWITCHTABLEVIEWCELL_H
#define AAUISWITCHTABLEVIEWCELL_H

@class UITableViewCell, UISwitch;
@protocol AAUISwitchTableViewCellDelegate;



@interface AAUISwitchTableViewCell : UITableViewCell

@property (readonly, nonatomic) UISwitch *control; // ivar: _control
@property (weak, nonatomic) NSObject<AAUISwitchTableViewCellDelegate> *delegate; // ivar: _delegate


-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_controlValueChanged:(id)arg0 ;


@end


#endif