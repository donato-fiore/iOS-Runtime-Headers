// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKAVATARTABLEVIEWCELL_H
#define PKAVATARTABLEVIEWCELL_H

@class UITableViewCell, CNAvatarView, CNContact;



@interface PKAvatarTableViewCell : UITableViewCell

@property (readonly, nonatomic) CNAvatarView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) CNContact *contact; // ivar: _contact


-(id)initWithContact:(id)arg0 delegate:(id)arg1 style:(NSInteger)arg2 reuseIdentifier:(id)arg3 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif