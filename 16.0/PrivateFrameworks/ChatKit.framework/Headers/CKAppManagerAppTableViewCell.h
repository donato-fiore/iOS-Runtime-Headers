// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKAPPMANAGERAPPTABLEVIEWCELL_H
#define CKAPPMANAGERAPPTABLEVIEWCELL_H

@class UITableViewCell, UISwitch;
@protocol CKAppManagerAppTableViewCellDelegate;



@interface CKAppManagerAppTableViewCell : UITableViewCell

@property (retain, nonatomic) UISwitch *appToggle; // ivar: _appToggle
@property (weak, nonatomic) NSObject<CKAppManagerAppTableViewCellDelegate> *delegate; // ivar: _delegate


+(id)reuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)appToggleTapped:(id)arg0 ;
-(void)layoutMarginsDidChange;
-(void)prepareForReuse;
-(void)setToggleVisible:(BOOL)arg0 editable:(BOOL)arg1 isOn:(BOOL)arg2 ;
-(void)updateCellWithPluginInfo:(id)arg0 ;


@end


#endif