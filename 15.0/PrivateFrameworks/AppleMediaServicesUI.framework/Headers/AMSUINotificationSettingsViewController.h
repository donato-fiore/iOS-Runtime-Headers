// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUINOTIFICATIONSETTINGSVIEWCONTROLLER_H
#define AMSUINOTIFICATIONSETTINGSVIEWCONTROLLER_H

@class UIViewController, ACAccount, AMSProcessInfo, NSString, _UIContentUnavailableView, UITableView;
@protocol AMSUINotificationSettingsViewModelDelegate, AMSBagConsumer, AMSBagProtocol;


#import "AMSUILoadingView.h"
#import "AMSUINotificationSettingsViewModel.h"

@interface AMSUINotificationSettingsViewController : UIViewController <AMSUINotificationSettingsViewModelDelegate, AMSBagConsumer>



@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _UIContentUnavailableView *errorView; // ivar: _errorView
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) AMSUILoadingView *loadingView; // ivar: _loadingView
@property (retain, nonatomic) AMSUINotificationSettingsViewModel *model; // ivar: _model
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(id)initWithIdentifier:(id)arg0 account:(id)arg1 bag:(id)arg2 ;
-(void)_loadData;
-(void)commonSetup;
-(void)viewDidLoad;
-(void)viewModel:(id)arg0 didReceiveValueChange:(id)arg1 forItem:(id)arg2 ;
-(void)viewWillLayoutSubviews;


@end


#endif