// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACUISETTINGSCONTROLLER_H
#define ACUISETTINGSCONTROLLER_H

@class PSListController, ACMonitoredAccountStore, NSArray, PSSpecifier, NSMutableDictionary, PSViewController, NSString, SFAutoFillFeatureManager;
@protocol SFCredentialProviderExtensionManagerObserver, ACMonitoredAccountStoreDelegateProtocol, ACUISettingsPluginParentProtocol, ACUIViewControllerAccountChangeObserver, OS_dispatch_group;


#import "ACUISettingsPluginManager.h"

@interface ACUISettingsController : PSListController <SFCredentialProviderExtensionManagerObserver, ACMonitoredAccountStoreDelegateProtocol, ACUISettingsPluginParentProtocol, ACUIViewControllerAccountChangeObserver>

 {
    ACMonitoredAccountStore *_accountStore;
    NSArray *_accounts;
    NSArray *_accountSpecifiers;
    PSSpecifier *_accountGroupSpecifier;
    PSSpecifier *_addAccountSpecifier;
    NSArray *_loadingInProgressSpecifiers;
    NSArray *_lazyLoadedSpecifiers;
    NSMutableDictionary *_pluginToSpecifiersMap;
    BOOL _isLazyLoadingPluginSpecifiers;
    ACUISettingsPluginManager *_settingsPluginManager;
    BOOL _isInHandleURL;
    PSViewController *_viewControllerPushedByControllerLoadActionDuringHandleURL;
    NSString *_filteredDataclass;
    BOOL _hasCredentialProviderExtension;
    NSUInteger _passwordCount;
    SFAutoFillFeatureManager *_autoFillFeatureManager;
    PSSpecifier *_websiteAndAppPasswordsSpecifier;
    BOOL _shouldSkipEffectiveSettingChangedNotification;
    NSObject<OS_dispatch_group> *_specifierLoadGroup;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isAccount:(id)arg0 inList:(id)arg1 ;
-(BOOL)_isAccountList:(id)arg0 identicalToAccountList:(id)arg1 ;
-(BOOL)_isAccountModificationDisabledByRestrictions;
-(BOOL)_passwordAutoFillSwitchIsOff;
-(BOOL)prepareHandlingURLForSpecifierID:(id)arg0 resourceDictionary:(id)arg1 animatePush:(*BOOL)arg2 withCompletion:(id)arg3 ;
-(NSInteger)_passwordAutoFillSpecifierAppearanceWithCredentialProviderExtensionState:(BOOL)arg0 ;
-(id)_accountGroupIdentifier:(id)arg0 ignoringGroups:(id)arg1 ;
-(id)_accountStore;
-(id)_addAccountSpecifier;
-(id)_autoFillFeatureManager;
-(id)_getAutoFillSwitchPreferenceValue;
-(id)_newSpecifierForPasswordAutoFillWithCredentialProviderExtensionState:(BOOL)arg0 ;
-(id)_passwordCount;
-(id)_scheduleSettingsModeForSpecifier:(id)arg0 ;
-(id)_settingsPluginManager;
-(id)_specifierForAccount:(id)arg0 ;
-(id)_specifierForCollectionCellLinkingToAccounts:(id)arg0 withGroupIdentifier:(id)arg1 underParentGroup:(id)arg2 ;
-(id)_specifierForPasswordAutoFillDetail;
-(id)_specifierForPasswordAutoFillSwitch;
-(id)_specifierForScheduleSettings;
-(id)_specifierForWebsiteAndAppPasswords;
-(id)_specifiersForLoadingMessage;
-(id)_specifiersForSettingsProvidedByPlugin:(id)arg0 ;
-(id)init;
-(id)navigationItem;
-(id)specifiers;
-(void)_accountCellWasTappedWithSpecifier:(id)arg0 ;
-(void)_accountStoreDidChange;
-(void)_accountsWithCompletion:(id)arg0 ;
-(void)_effectiveSettingsChangedNotification:(id)arg0 ;
-(void)_fetchLazyLoadedSpecifiers;
-(void)_filterAccounts:(id)arg0 toTopLevel:(id)arg1 grouped:(id)arg2 ignoringGroups:(id)arg3 ;
-(void)_loadAccountsWithCompletion:(id)arg0 ;
-(void)_lowPowerModeChangedNotification:(id)arg0 ;
-(void)_refreshSavedPasswordCount;
-(void)_scheduleSettingsCellWasTappedWithSpecifier:(id)arg0 ;
-(void)_setAutoFillSwitchPreferenceValue:(id)arg0 specifier:(id)arg1 ;
-(void)_specifiersForAccountsGroupWithCompletion:(id)arg0 ;
-(void)_updateExistingPasswordAutoFillSpecifierWithCredentialProviderExtensionState:(BOOL)arg0 ;
-(void)accountWasAdded:(id)arg0 ;
-(void)accountWasModified:(id)arg0 ;
-(void)accountWasRemoved:(id)arg0 ;
-(void)credentialProviderExtensionManagerExtensionListDidChange:(id)arg0 ;
-(void)dealloc;
-(void)handleURL:(id)arg0 withCompletion:(id)arg1 ;
-(void)setSpecifier:(id)arg0 ;
-(void)specifiersDidChangeForPlugin:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewController:(id)arg0 didFinishRemovingAccountWithSuccess:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif