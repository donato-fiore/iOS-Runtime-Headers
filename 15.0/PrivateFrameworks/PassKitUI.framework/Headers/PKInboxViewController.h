// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKINBOXVIEWCONTROLLER_H
#define PKINBOXVIEWCONTROLLER_H

@class UITableViewController, UIActivityIndicatorView, NSString;
@protocol PKPaymentSetupViewControllerDelegate;


#import "PKInboxDataSource.h"
#import "PKTableHeaderView.h"
#import "PKTableViewDiffableDataSource.h"
#import "PKApplyController.h"
#import "PKSecurityCapabilitiesController.h"
#import "PKContactAvatarManager.h"

@interface PKInboxViewController : UITableViewController <PKPaymentSetupViewControllerDelegate>

 {
    PKInboxDataSource *_dataSource;
    NSInteger _context;
    UIActivityIndicatorView *_activityIndicator;
    BOOL _disableSelection;
    PKTableHeaderView *_headerView;
    CGFloat _previousHeaderHeight;
    PKTableViewDiffableDataSource *_diffableDataSource;
    PKApplyController *_applyController;
    PKSecurityCapabilitiesController *_securityCapabilitiesController;
    PKContactAvatarManager *_avatarManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(id)_configurationForInboxMessage:(id)arg0 ;
-(id)initWithInboxDataSource:(id)arg0 contactAvatarManager:(id)arg1 context:(NSInteger)arg2 ;
-(void)_checkManateeCapabilityForFeatureApplication:(id)arg0 completion:(id)arg1 ;
-(void)_doneButtonTapped:(id)arg0 ;
-(void)_presentAccountUserInvitation:(id)arg0 ;
-(void)_presentExpiredAlertForInboxMessage:(id)arg0 ;
-(void)_presentInboxMessage:(id)arg0 ;
-(void)_presentManateeUpgradeForFeatureApplication:(id)arg0 completion:(id)arg1 ;
-(void)_showSpinner:(BOOL)arg0 ;
-(void)_updateDiffableDataSourceAnimated:(BOOL)arg0 ;
-(void)_updateImage:(id)arg0 onCellAtIndexPath:(id)arg1 ;
-(void)presentInboxMessageWithIdentifier:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewControllerDidCancelSetupFlow:(id)arg0 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif