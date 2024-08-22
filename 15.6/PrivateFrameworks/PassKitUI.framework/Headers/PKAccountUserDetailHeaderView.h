// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTUSERDETAILHEADERVIEW_H
#define PKACCOUNTUSERDETAILHEADERVIEW_H

@class UIView, CNContactInlineActionsViewController, CNContact;


#import "PKAvatarHeaderView.h"

@interface PKAccountUserDetailHeaderView : UIView {
    PKAvatarHeaderView *_avatarHeaderView;
    CNContactInlineActionsViewController *_actionsViewController;
}


@property (retain, nonatomic) CNContact *contactForActions; // ivar: _contactForActions
@property (retain, nonatomic) CNContact *contactForDisplay; // ivar: _contactForDisplay


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif