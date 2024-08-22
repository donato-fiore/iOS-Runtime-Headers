// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSWITCHTABLEVIEWCELL_H
#define SFSWITCHTABLEVIEWCELL_H

@class UITableViewCell, UISwitch;
@protocol SFSwitchTableViewCellDelegate;



@interface SFSwitchTableViewCell : UITableViewCell {
    UISwitch *_switchView;
}


@property (weak, nonatomic) NSObject<SFSwitchTableViewCellDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isSwitchOn) BOOL switchOn;


-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)_switchViewStateDidChange:(id)arg0 ;


@end


#endif