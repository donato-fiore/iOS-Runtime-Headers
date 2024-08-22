// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNSTARKCONTACTNAMEVIEW_H
#define CNSTARKCONTACTNAMEVIEW_H

@class UIView, CNContact, UILabel;


#import "CNAvatarViewController.h"

@interface CNStarkContactNameView : UIView

@property (readonly, nonatomic) CNAvatarViewController *avatarViewController; // ivar: _avatarViewController
@property (readonly, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, nonatomic) UILabel *nameLabel; // ivar: _nameLabel


-(id)initWithName:(id)arg0 ;
-(void)setupAvatar;
-(void)setupConstraints;
-(void)setupNameLabel;


@end


#endif