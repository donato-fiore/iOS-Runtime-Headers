// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FAFAMILYSETTINGSVIEWCONTROLLER_H
#define FAFAMILYSETTINGSVIEWCONTROLLER_H

@class ACUIViewController, AAGrandSlamSigner, ACAccount, ACAccountStore, FAFamilyCircle, NSOperationQueue, PSSpecifier, AAUIRemoteUIController, UITableViewCell, NSURL, FAFamilyMember, NSMutableDictionary, UINavigationController, NSArray, NSMutableURLRequest, FARequestConfigurator, AAUIServerUIHookHandler, UIActivityIndicatorView, UILabel, NSString;
@protocol UINavigationControllerDelegate, RemoteUIControllerDelegate, FASharedSubscriptionSpecifierProviderDelegeate, FAFamilySettingsMemberSpecifierProviderDelegeate, FAFamilySettingsViewControllerDelegate;


#import "FAProfilePictureStore.h"
#import "FACircleRemoteUIDelegate.h"
#import "FAFamilyNotificationObserver.h"
#import "FAFamilyCreditCard.h"
#import "FASharedSubscriptionSpecifierProvider.h"
#import "FAFamilySettingsMemberSpecifierProvider.h"

@interface FAFamilySettingsViewController : ACUIViewController <UINavigationControllerDelegate, RemoteUIControllerDelegate, FASharedSubscriptionSpecifierProviderDelegeate, FAFamilySettingsMemberSpecifierProviderDelegeate>

 {
    AAGrandSlamSigner *_iCloudGrandSlamSigner;
    AAGrandSlamSigner *_appleIDGrandSlamSigner;
    ACAccount *_appleAccount;
    ACAccount *_grandSlamAccount;
    ACAccount *_itunesAccount;
    ACAccountStore *_accountStore;
    FAFamilyCircle *_familyCircle;
    NSOperationQueue *_networkingQueue;
    PSSpecifier *_addFamilyMemberCell;
    FAProfilePictureStore *_familyPictureStore;
    AAUIRemoteUIController *_iCloudRemoteUIController;
    AAUIRemoteUIController *_appleIDRemoteUIController;
    AAUIRemoteUIController *_familyV2RemoteUIController;
    FACircleRemoteUIDelegate *_familyRemoteUIDelegate;
    UITableViewCell *_activeCell;
    NSURL *_activeURL;
    FAFamilyMember *_memberBeingViewed;
    NSMutableDictionary *_objectModelDecorators;
    UINavigationController *_childAccountCreationNavController;
    FAFamilyNotificationObserver *_notificationObserver;
    BOOL _fetchingPaymentInfo;
    FAFamilyCreditCard *_paymentMethod;
    NSArray *_paymentInfoSpecifiers;
    BOOL _fetchingPaymentMethodImage;
    NSMutableURLRequest *_currentRemoteUIRequest;
    FARequestConfigurator *_requestConfigurator;
    AAUIServerUIHookHandler *_serverUIHookHandler;
    FACircleRemoteUIDelegate *_faCircleRemoteUIDelegate;
    FASharedSubscriptionSpecifierProvider *_sharedSubscriptionSpecifierProvider;
    FAFamilySettingsMemberSpecifierProvider *_familySettingsMemberSpecifierProvider;
    UIActivityIndicatorView *_activityIndicatorView;
    UILabel *_navigationBarTitleLabel;
    CGFloat _familyHeaderTitleOffset;
    BOOL _isNavigationTitleViewDisplayed;
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
-(id)_itunesAccount;
-(id)_requestConfigurator;
-(id)_sharedSubscriptionSpecifierProvider;
-(id)_sharedSubscriptionSpecifiers;
-(id)initWithAppleAccount:(id)arg0 grandSlamSigner:(id)arg1 familyCircle:(id)arg2 familyPictureStore:(id)arg3 familySettingsMemberSpecifierProvider:(id)arg4 ;
-(id)preferredContentSizeCategory;
-(id)remoteUIController:(id)arg0 createPageWithName:(id)arg1 attributes:(id)arg2 ;
-(id)specifiers;
-(void)_addChildAccount;
-(void)_addMemberWithEventType:(id)arg0 ;
-(void)_fetchFamilyPaymentInfoWithCompletion:(id)arg0 ;
-(void)_fetchUpdatedFamilyDetailsWithCompletion:(id)arg0 ;
-(void)_fireFamilyUpdateNotification;
-(void)_handleFamilyDeletion;
-(void)_handleFamilyStatusChange:(id)arg0 ;
-(void)_handleFamilySubscriptionChanged;
-(void)_handleMemberDeletion:(id)arg0 ;
-(void)_handleMemberUpdate:(id)arg0 ;
-(void)_handleObjectModelChangeForController:(id)arg0 objectModel:(id)arg1 isModal:(BOOL)arg2 ;
-(void)_layoutTableHeaderView;
-(void)_learnMoreLinkButtonWasTapped:(id)arg0 ;
-(void)_loadRemoteUIWithRequest:(id)arg0 specifier:(id)arg1 type:(NSInteger)arg2 ;
-(void)_loadRemoteUIWithRequest:(id)arg0 url:(id)arg1 specifier:(id)arg2 type:(NSInteger)arg3 ;
-(void)_paymentMethodCellWasTapped:(id)arg0 ;
-(void)_performEventWithContext:(id)arg0 specifier:(id)arg1 completion:(id)arg2 ;
-(void)_profilePictureStoreDidReload;
-(void)_reloadPaymentInfoSpecifiersAnimated:(BOOL)arg0 ;
-(void)_setFresnoRemoteUIDelgate:(id)arg0 ;
-(void)_setupFamilyHeaderView;
-(void)_setupNavigationBarTitleView;
-(void)_showConnectivityAlert;
-(void)_startSpinnerInCellLoadingRemoteUI:(id)arg0 ;
-(void)_stopSpinnerInCellLoadingRemoteUI;
-(void)_updateMemberDetailsPageWithLinkedAppleID:(id)arg0 ;
-(void)addFamilyMemberButtonWasTapped:(id)arg0 ;
-(void)dealloc;
-(void)didSelectSpecifier:(id)arg0 ;
-(void)familyMemberCellWasTapped:(id)arg0 ;
-(void)handleURL:(id)arg0 withCompletion:(id)arg1 ;
-(void)hideActivityIndicatorInNavigationBar;
-(void)pendingFamilyMemberCellWasTapped:(id)arg0 ;
-(void)reloadSpecifiersForProvider:(id)arg0 oldSpecifiers:(id)arg1 animated:(BOOL)arg2 ;
-(void)remoteUIController:(id)arg0 didDismissModalNavigationWithObjectModels:(id)arg1 ;
-(void)remoteUIController:(id)arg0 didReceiveHTTPResponse:(id)arg1 ;
-(void)remoteUIController:(id)arg0 didReceiveObjectModel:(id)arg1 actionSignal:(*NSUInteger)arg2 ;
-(void)remoteUIController:(id)arg0 didRefreshObjectModel:(id)arg1 ;
-(void)remoteUIController:(id)arg0 didRemoveObjectModel:(id)arg1 ;
-(void)remoteUIController:(id)arg0 willLoadRequest:(id)arg1 ;
-(void)remoteUIController:(id)arg0 willPresentModalNavigationController:(id)arg1 ;
-(void)remoteUIController:(id)arg0 willPresentObjectModel:(id)arg1 modally:(BOOL)arg2 ;
-(void)remoteUIControllerDidDismiss:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)showActivityIndicatorInNavigationBar;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif