// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HUUSERAVATARHEADERVIEW_H
#define _HUUSERAVATARHEADERVIEW_H

@class UITableViewHeaderFooterView, ACAccountStore, NSArray, NAFuture, NSAttributedString;
@protocol HUMediaAccountDelegate;


#import "HUContactView.h"
#import "HUMultiUserTokenFixTableView.h"
#import "HUSplitAccountHeaderTableView.h"

@interface _HUUserAvatarHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (readonly, nonatomic) HUContactView *contactView; // ivar: _contactView
@property (retain, nonatomic) NSArray *layoutConstraints; // ivar: _layoutConstraints
@property (weak, nonatomic) NSObject<HUMediaAccountDelegate> *mediaAccountDelegate; // ivar: _mediaAccountDelegate
@property (retain, nonatomic) NAFuture *mediaAccountFuture; // ivar: _mediaAccountFuture
@property (retain, nonatomic) NSAttributedString *message;
@property (retain, nonatomic) HUMultiUserTokenFixTableView *multiUserTokenFixHeaderView; // ivar: _multiUserTokenFixHeaderView
@property (retain, nonatomic) HUSplitAccountHeaderTableView *splitAccountHeaderView; // ivar: _splitAccountHeaderView


-(id)_keyDescriptors;
-(id)initWithUser:(id)arg0 home:(id)arg1 delegate:(id)arg2 ;
-(void)dealloc;
-(void)dismissMultiUserTokenFixUI;
-(void)dismissSplitAccountView;
-(void)presentMultiUserTokenFixUIForMediaAccount:(id)arg0 inHome:(id)arg1 ;
-(void)setAccounts:(id)arg0 forHome:(id)arg1 ;
-(void)showSplitAccountViewIfNeeded;


@end


#endif