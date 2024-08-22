// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQUITIPSPECIFIERPROVIDER_H
#define ICQUITIPSPECIFIERPROVIDER_H

@class AIDAAccountManager, PSListController<AAUISpecifierProviderDelegate>, AMSUIBubbleTipViewController, NSString, NSArray;
@protocol DelayedPushDelegate, ICQUIRemoteUIPresenterDelegate, ICQUpgradeFlowManagerDelegate, RUITableViewRowDelegate, AAUISpecifierProvider, AMSUIMessageViewControllerDelegate, AAUISpecifierProviderDelegate;

#import <Foundation/Foundation.h>

#import "ICQUIPreferencesLiftUIDelegate.h"
#import "ICQUIRemoteUIPresenter.h"
#import "ICQUpgradeFlowManager.h"
#import "ICQPreferencesRemoteUIDelegate.h"
#import "ICQUIInlineTipViewModel.h"

@interface ICQUITipSpecifierProvider : NSObject <DelayedPushDelegate, ICQUIRemoteUIPresenterDelegate, ICQUpgradeFlowManagerDelegate, RUITableViewRowDelegate, AAUISpecifierProvider, AMSUIMessageViewControllerDelegate>

 {
    AIDAAccountManager *_accountManager;
    PSListController<AAUISpecifierProviderDelegate> *_listController;
    AMSUIBubbleTipViewController *_inlineTipController;
    AMSUIBubbleTipViewController *_manageStorageTipController;
    ICQUIPreferencesLiftUIDelegate *_liftUIDelegate;
    ICQUIRemoteUIPresenter *_ruiFlowManager;
    ICQUpgradeFlowManager *_upgradeFlowManager;
    ICQPreferencesRemoteUIDelegate *_legacyRemoteUIDelegate;
    NSString *_anchorIdentifier;
    BOOL _showUpwardPointingTips;
    NSInteger _tipRequestState;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUISpecifierProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasDismissedTip; // ivar: _hasDismissedTip
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *specifiers; // ivar: _specifiers
@property (readonly) Class superclass;
@property (retain, nonatomic) ICQUIInlineTipViewModel *viewModel; // ivar: _viewModel


-(BOOL)_tipArrowConfigurationIsEligibleForDisplay:(id)arg0 ;
-(Class)tableCellClassForTableViewRow:(id)arg0 ;
-(id)_tipSpecifiers;
-(id)_valueForSpecifier:(id)arg0 ;
-(id)account;
-(id)initWithAccountManager:(id)arg0 ;
-(id)initWithAccountManager:(id)arg0 presenter:(id)arg1 sectionAnchorIdentifier:(id)arg2 showUpwardPointingTips:(BOOL)arg3 ;
-(id)tipForManageStorageFromAttributes:(id)arg0 viewController:(id)arg1 remoteUIDelegate:(id)arg2 ;
-(void)_cleanUpSyncWithiCloudFooterIfApplicable;
-(void)_dismissPressed;
-(void)_fetchAndDisplayTipIfNotYetDismissed;
-(void)_fetchTip:(id)arg0 ;
-(void)_getEligibleTipFromTips:(id)arg0 completion:(id)arg1 ;
-(void)_launchLegacyRemoteUIWithURL:(id)arg0 ;
-(void)_launchLiftUIWithURL:(id)arg0 ;
-(void)_launchRemoteUIWithURL:(id)arg0 forDataclasses:(id)arg1 ;
-(void)_launchUpgradeFlowWithURL:(id)arg0 ;
-(void)_openExternalLink:(id)arg0 ;
-(void)_openLiftUILink:(id)arg0 ;
-(void)_openRemoteUILink:(id)arg0 forDataclasses:(id)arg1 ;
-(void)_reloadSpecifiers;
-(void)_removeVisibleTip;
-(void)_tipDisplayed;
-(void)_updateSyncWithiCloudFooterIfApplicable;
-(void)dealloc;
-(void)loadFailed:(id)arg0 withError:(id)arg1 ;
-(void)loadFinished:(id)arg0 ;
-(void)loadStarted:(id)arg0 ;
-(void)messageViewController:(id)arg0 didFailWithError:(id)arg1 ;
-(void)messageViewController:(id)arg0 didLoadDialogRequest:(id)arg1 ;
-(void)messageViewController:(id)arg0 didSelectActionWithDialogResult:(id)arg1 ;
-(void)messageViewController:(id)arg0 didUpdateSize:(struct CGSize )arg1 ;
-(void)remoteUIFlowManager:(id)arg0 didCompleteFlowWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)upgradeFlowManagerDidCancel:(id)arg0 ;
-(void)upgradeFlowManagerDidComplete:(id)arg0 ;


@end


#endif