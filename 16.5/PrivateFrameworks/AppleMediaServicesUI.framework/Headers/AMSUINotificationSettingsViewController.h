// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUINOTIFICATIONSETTINGSVIEWCONTROLLER_H
#define AMSUINOTIFICATIONSETTINGSVIEWCONTROLLER_H

@class UIViewController, ACAccount, NSMutableDictionary, AMSProcessInfo, NSString, _UIContentUnavailableView, UNUserNotificationCenter, UITableView;
@protocol AMSUINotificationSettingsViewModelDelegate, UITableViewDelegate, AMSBagConsumer, AMSBagProtocol;


#import "AMSUILoadingView.h"
#import "AMSUINotificationSettingsViewModel.h"

@interface AMSUINotificationSettingsViewController : UIViewController <AMSUINotificationSettingsViewModelDelegate, UITableViewDelegate, AMSBagConsumer>



@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) NSMutableDictionary *changedItems; // ivar: _changedItems
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _UIContentUnavailableView *errorView; // ivar: _errorView
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) AMSUILoadingView *loadingView; // ivar: _loadingView
@property (retain, nonatomic) AMSUINotificationSettingsViewModel *model; // ivar: _model
@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (nonatomic) BOOL shouldDeepLink; // ivar: _shouldDeepLink
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)_isAuthenticated;
-(id)_promptForAuthentication;
-(id)initWithIdentifier:(id)arg0 account:(id)arg1 bag:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 bag:(id)arg1 ;
-(void)_appWillEnterForeground:(id)arg0 ;
-(void)_commitChangedItemsUpdates;
-(void)_commonSetup;
-(void)_handleAllowNotificationsButton;
-(void)_handleAuthenticationError:(id)arg0 ;
-(void)_loadData;
-(void)_updateNotificationStatus;
-(void)dealloc;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewModel:(id)arg0 didReceiveValueChange:(id)arg1 forItem:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif