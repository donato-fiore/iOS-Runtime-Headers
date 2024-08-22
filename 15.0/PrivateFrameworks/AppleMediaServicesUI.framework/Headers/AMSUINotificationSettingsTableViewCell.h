// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUINOTIFICATIONSETTINGSTABLEVIEWCELL_H
#define AMSUINOTIFICATIONSETTINGSTABLEVIEWCELL_H

@class UITableViewCell, AMSNotificationSettingsItem, UISwitch;
@protocol AMSUINotificationInAppSettingsTableViewCellDelegate;



@interface AMSUINotificationSettingsTableViewCell : UITableViewCell

@property (weak, nonatomic) NSObject<AMSUINotificationInAppSettingsTableViewCellDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) AMSNotificationSettingsItem *item; // ivar: _item
@property (retain, nonatomic) UISwitch *itemSwitch; // ivar: _itemSwitch


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;
-(void)switchToggled:(id)arg0 ;


@end


#endif