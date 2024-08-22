// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAFAMILYSETTINGSVIEWCONTROLLER_H
#define FAFAMILYSETTINGSVIEWCONTROLLER_H

@class ACUIViewController, AAGrandSlamSigner, ACAccount, ACAccountStore, FAFamilyCircle, PSSpecifier, UITableViewCell, UINavigationController, NSArray, NSMutableURLRequest, FARequestConfigurator, AAUIServerUIHookHandler, UIActivityIndicatorView, UILabel, AIDAAccountManager, NSString;
@protocol UINavigationControllerDelegate, RemoteUIControllerDelegate, FASharedSubscriptionSpecifierProviderSelectionHandler, FAFamilySettingsMemberSpecifierProviderDelegeate, AAUISpecifierProviderDelegate, _TtP14FamilyCircleUI35FAFamilySettingsPageSwiftUIDelegate_, FAFamilySettingsViewControllerHelperDelegate, FAFamilySettingsViewControllerDelegate;


#import "_TtC14FamilyCircleUI30SubscriptionServicesDataLoader.h"
#import "FAProfilePictureStore.h"
#import "FAFamilyNotificationObserver.h"
#import "FAFamilyCreditCard.h"
#import "FAFamilySettingsViewControllerHelper.h"
#import "FACircleRemoteUIDelegate.h"
#import "FASharedSubscriptionSpecifierProvider.h"
#import "FAFamilySettingsMemberSpecifierProvider.h"
#import "_TtC14FamilyCircleUI28FAFamilyLandingPageViewModel.h"
#import "_TtC14FamilyCircleUI17LocationViewModel.h"

@interface FAFamilySettingsViewController : ACUIViewController <UINavigationControllerDelegate, RemoteUIControllerDelegate, FASharedSubscriptionSpecifierProviderSelectionHandler, FAFamilySettingsMemberSpecifierProviderDelegeate, AAUISpecifierProviderDelegate, _TtP14FamilyCircleUI35FAFamilySettingsPageSwiftUIDelegate_, FAFamilySettingsViewControllerHelperDelegate>

 {
    AAGrandSlamSigner *_iCloudGrandSlamSigner;
    AAGrandSlamSigner *_appleIDGrandSlamSigner;
    ACAccount *_appleAccount;
    _TtC14FamilyCircleUI30SubscriptionServicesDataLoader *_subscriptionsDataLoader;
    ACAccount *_grandSlamAccount;
    ACAccountStore *_accountStore;
    FAFamilyCircle *_familyCircle;
    PSSpecifier *_addFamilyMemberCell;
    FAProfilePictureStore *_familyPictureStore;
    UITableViewCell *_activeCell;
    UINavigationController *_childAccountCreationNavController;
    FAFamilyNotificationObserver *_notificationObserver;
    BOOL _fetchingPaymentInfo;
    FAFamilyCreditCard *_paymentMethod;
    NSArray *_paymentInfoSpecifiers;
    BOOL _fetchingPaymentMethodImage;
    NSMutableURLRequest *_currentRemoteUIRequest;
    FARequestConfigurator *_requestConfigurator;
    AAUIServerUIHookHandler *_serverUIHookHandler;
    FAFamilySettingsViewControllerHelper *_familySettingsHelper;
    FACircleRemoteUIDelegate *_faCircleRemoteUIDelegate;
    FASharedSubscriptionSpecifierProvider *_sharedSubscriptionSpecifierProvider;
    FAFamilySettingsMemberSpecifierProvider *_familySettingsMemberSpecifierProvider;
    UIActivityIndicatorView *_activityIndicatorView;
    UILabel *_navigationBarTitleLabel;
    CGFloat _familyHeaderTitleOffset;
    BOOL _isNavigationTitleViewDisplayed;
    _TtC14FamilyCircleUI28FAFamilyLandingPageViewModel *_familyLandingPageViewModel;
    AIDAAccountManager *_accountManager;
    _TtC14FamilyCircleUI17LocationViewModel *_locationViewModel;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FAFamilySettingsViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_hasActiveCell;
-(id)_appleIDGrandSlamSigner;
-(id)_createSpecifiersForPaymentInfo;
-(id)_imageFromBundle:(id)arg0 ;
-(id)_requestConfigurator;
-(id)_sharedSubscriptionSpecifierProvider;
-(id)_sharedSubscriptionSpecifiers;
-(id)initWithAppleAccount:(id)arg0 grandSlamSigner:(id)arg1 familyCircle:(id)arg2 subscriptionsDataLoader:(id)arg3 familyPictureStore:(id)arg4 accountManager:(id)arg5 familySettingsMemberSpecifierProvider:(id)arg6 ;
-(id)preferredContentSizeCategory;
-(id)specifiers;
-(void)_addChildAccount;
-(void)_addMemberWithEventType:(id)arg0 ;
-(void)_fetchUpdatedFamilyDetailsWithCompletion:(id)arg0 ;
-(void)_handleFamilyChanged;
-(void)_handleFamilyDeletion;
-(void)_handleFamilySubscriptionChanged;
-(void)_handleMemberDeletion:(id)arg0 ;
-(void)_handleMemberUpdate:(id)arg0 ;
-(void)_layoutTableHeaderView;
-(void)_learnMoreLinkButtonWasTapped:(id)arg0 ;
-(void)_loadRemoteUIWithRequest:(id)arg0 specifier:(id)arg1 type:(NSInteger)arg2 ;
-(void)_loadRemoteUIWithRequest:(id)arg0 url:(id)arg1 specifier:(id)arg2 type:(NSInteger)arg3 ;
-(void)_paymentMethodCellWasTapped:(id)arg0 ;
-(void)_performEventWithContext:(id)arg0 specifier:(id)arg1 completion:(id)arg2 ;
-(void)_profilePictureStoreDidReload;
-(void)_reloadPaymentInfoSpecifiersAnimated:(BOOL)arg0 ;
-(void)_setupFamilyHeaderView;
-(void)_setupNavigationBarTitleView;
-(void)_startSpinnerInCellLoadingRemoteUI:(id)arg0 ;
-(void)_stopSpinnerInCellLoadingRemoteUI;
-(void)addFamilyMemberButtonWasTapped;
-(void)addFamilyMemberButtonWasTapped:(id)arg0 ;
-(void)dealloc;
-(void)didSelectSpecifier:(id)arg0 ;
-(void)didSelectSubscriptionWithURL:(id)arg0 completion:(id)arg1 ;
-(void)didSelectSubscriptionWithURLMemberDetails:(id)arg0 familyMemberDSID:(NSInteger)arg1 completion:(id)arg2 ;
-(void)familyMemberCellWasTapped:(id)arg0 ;
-(void)familySettingsHelper:(id)arg0 handleFamilyStatusChange:(id)arg1 affectedFamilyMember:(id)arg2 ;
-(void)familySettingsHelper:(id)arg0 updateMemberDetailsPageWithLinkedAppleID:(id)arg1 ;
-(void)familySettingsHelperShowConnectivityAlert:(id)arg0 ;
-(void)handleURL:(id)arg0 withCompletion:(id)arg1 ;
-(void)hideActivityIndicatorInNavigationBar;
-(void)pendingFamilyMemberCellWasTapped:(id)arg0 ;
-(void)pendingFamilyMemberWasTapped:(id)arg0 ;
-(void)reloadSpecifiersForProvider:(id)arg0 oldSpecifiers:(id)arg1 animated:(BOOL)arg2 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)showActivityIndicatorInNavigationBar;
-(void)stopFamilySharing;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif