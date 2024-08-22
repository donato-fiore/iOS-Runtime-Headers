// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUUSERTABLEVIEWCONTROLLER_H
#define HUUSERTABLEVIEWCONTROLLER_H

@class NSString, NSAttributedString, HMHome, NAFuture, AMSUIUpdateMultiUserTokenTask, HFUserHandle, HFItemManager<HUUserItemManager>;
@protocol HUMediaAccountDelegate, HFUserObserver;


#import "HUItemTableViewController.h"
#import "_HUUserAvatarHeaderView.h"

@interface HUUserTableViewController : HUItemTableViewController <HUMediaAccountDelegate, HFUserObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSAttributedString *headerMessage; // ivar: _headerMessage
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NAFuture *mediaAccountFuture; // ivar: _mediaAccountFuture
@property (retain, nonatomic) AMSUIUpdateMultiUserTokenTask *multiUserTokenFixTask; // ivar: _multiUserTokenFixTask
@property (readonly) Class superclass;
@property (retain, nonatomic) _HUUserAvatarHeaderView *userAvatarHeaderView; // ivar: _userAvatarHeaderView
@property (readonly, nonatomic) HFUserHandle *userHandle;
@property (readonly, nonatomic) HFItemManager<HUUserItemManager> *userItemManager; // ivar: _userItemManager


-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)_fetchAccountsForHome:(id)arg0 forceCloudKitFetch:(BOOL)arg1 ;
-(id)initWithUserItemManager:(id)arg0 home:(id)arg1 ;
-(id)itemTableHeaderView;
-(id)user;
-(void)_presentMediaAccountErrorsIfNeeded:(BOOL)arg0 ;
-(void)_presentMultiUserTokenFixUIForAccount:(id)arg0 ;
-(void)_refreshSplitAccountsHeaderViewIfNeeded:(BOOL)arg0 ;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;
-(void)dealloc;
-(void)performRemovalAction:(id)arg0 ;
-(void)setAMSiTunesAccount:(id)arg0 forHome:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)signIniTunesAccount:(id)arg0 forHome:(id)arg1 ;
-(void)user:(id)arg0 didUpdateNeedsiTunesMultiUserRepair:(BOOL)arg1 ;


@end


#endif