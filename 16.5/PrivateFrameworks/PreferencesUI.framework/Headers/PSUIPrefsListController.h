// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUIPREFSLISTCONTROLLER_H
#define PSUIPREFSLISTCONTROLLER_H

@class PSListController, VSAccountStore, AIDAServiceOwnersManager, AAUIProfilePictureStore, CNMonogrammer, EAAccessory, PSSpecifier, NSArray, NSDictionary, UIImage, NSSet, ACAccountStore, DMCAccountSpecifierProvider, CoreTelephonyClient, HFHomeSettingsVisibilityArbitrator, NSString, WFWiFiStateMonitor, HPSConnectedHeadphonesController, FLPreferencesController, SBSRemoteAlertHandle, NSUserActivity, SUIKSearchResultsCollectionViewController, PSKeyboardNavigationSearchController, TPKContentController, TPKContentView, WSWallpaperSettingsCoordinator;
@protocol TPKContentControllerDelegate, AAUISignInControllerDelegate, UISearchResultsUpdating, UISearchBarDelegate, UISearchControllerDelegate, CoreTelephonyClientSubscriberDelegate, SUIKSearchResultsCollectionViewControllerDelegate, DMCAccountSpecifierProviderDelegate, PSUIVPNSpecifierGeneratorDelegate, PSUIFamilySpecifierGeneratorDelegate, RadiosPreferencesDelegate, DevicePINControllerDelegate, PSTopLevelController, OS_dispatch_queue;


#import "PSUIClassKitVisibilityArbitrator.h"
#import "PSUIClassroomVisibilityArbitrator.h"
#import "PSUIFamilySpecifierGenerator.h"
#import "PSUIVPNSpecifierGenerator.h"

@interface PSUIPrefsListController : PSListController <TPKContentControllerDelegate, AAUISignInControllerDelegate, UISearchResultsUpdating, UISearchBarDelegate, UISearchControllerDelegate, CoreTelephonyClientSubscriberDelegate, SUIKSearchResultsCollectionViewControllerDelegate, DMCAccountSpecifierProviderDelegate, PSUIVPNSpecifierGeneratorDelegate, PSUIFamilySpecifierGeneratorDelegate, RadiosPreferencesDelegate, DevicePINControllerDelegate, PSTopLevelController>

 {
    BOOL _launchedToTest;
    PSUIClassKitVisibilityArbitrator *_classKitVisibilityArbitrator;
    PSUIClassroomVisibilityArbitrator *_classroomVisibilityArbitrator;
    VSAccountStore *_videoSubscriberAccountStore;
    AIDAServiceOwnersManager *_serviceOwnersManager;
    AAUIProfilePictureStore *_profilePictureStore;
    CNMonogrammer *_monogrammer;
    BOOL _didFirstLoad;
    EAAccessory *_speakerAccessory;
    PSSpecifier *_eqSpecifier;
    NSArray *_MCUIBundleControllers;
    NSDictionary *_movedThirdPartySpecifiers;
    BOOL _initiallyLoadingThirdPartySpecifiers;
    BOOL _refreshingThirdPartySpecifiers;
    PSSpecifier *_notificationsSpecifier;
    PSSpecifier *_wallpaperSpecifier;
    PSSpecifier *_passcodeSpecifier;
    PSSpecifier *_homeScreenSpecifier;
    UIImage *_appleAccountSpecifierCachedIcon;
    PSSpecifier *_freeformSpecifier;
    PSSpecifier *_messagesSpecifier;
    PSSpecifier *_faceTimeSpecifier;
    PSSpecifier *_gameCenterSpecifier;
    PSSpecifier *_podcastsSpecifier;
    PSSpecifier *_siriSpecifier;
    PSSpecifier *_tvSpecifier;
    PSSpecifier *_carrierSelectionSpecifier;
    PSSpecifier *_personalHotspotSpecifier;
    PSSpecifier *_healthKitSpecifier;
    PSSpecifier *_applePencilSpecifier;
    BOOL _wifiValueIsClean;
    BOOL _bluetoothValueIsClean;
    BOOL _donatedBiomeSignalForSearchUsed;
    NSArray *_originalSpecifiers;
    NSSet *_originalDisplayIdentifiers;
    PSSpecifier *_selectedSpecifier;
    ACAccountStore *_accountStore;
    DMCAccountSpecifierProvider *_secondaryAccountSpecifierProvider;
    PSSpecifier *_specifierToSelect;
    NSObject<OS_dispatch_queue> *_loadAllSpecifiersQueue;
    CoreTelephonyClient *_coreTelephonyClient;
}


@property (retain, nonatomic) PSSpecifier *_appleAccountSpecifier; // ivar: __appleAccountSpecifier
@property (nonatomic) BOOL _cellularDataSetting; // ivar: __cellularDataSetting
@property (nonatomic) BOOL _cellularDataSettingInitialized; // ivar: __cellularDataSettingInitialized
@property (retain, nonatomic) PSSpecifier *_classKitSpecifier; // ivar: __classKitSpecifier
@property (retain, nonatomic) PSSpecifier *_classroomSpecifier; // ivar: __classroomSpecifier
@property (nonatomic) *__CTServerConnection _ctConnection; // ivar: __ctConnection
@property (retain, nonatomic) PSSpecifier *_emergencySOSSpecifier; // ivar: __emergencySOSSpecifier
@property (retain, nonatomic) PSSpecifier *_ethernetSpecifier; // ivar: __ethernetSpecifier
@property (retain, nonatomic) PSSpecifier *_exposureNotificationSpecifier; // ivar: __exposureNotificationSpecifier
@property (retain, nonatomic) PSUIFamilySpecifierGenerator *_familySpecifierGenerator; // ivar: __familySpecifierGenerator
@property (retain, nonatomic) PSSpecifier *_homeKitSpecifier; // ivar: __homeKitSpecifier
@property (retain, nonatomic) HFHomeSettingsVisibilityArbitrator *_homeKitVisibilityArbitrator; // ivar: __homeKitVisibilityArbitrator
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_loadingQueue; // ivar: __loadingQueue
@property (retain, nonatomic) NSString *_pendingOffsetItemName; // ivar: __pendingOffsetItemName
@property (retain, nonatomic) NSArray *_secondaryAccountSpecifiers; // ivar: __secondaryAccountSpecifiers
@property (retain, nonatomic) NSArray *_thirdPartySpecifiers; // ivar: __thirdPartySpecifiers
@property (retain, nonatomic) PSSpecifier *_videoSubscriberGroupSpecifier; // ivar: __videoSubscriberGroupSpecifier
@property (retain, nonatomic) PSSpecifier *_videoSubscriberSpecifier; // ivar: __videoSubscriberSpecifier
@property (retain, nonatomic) PSUIVPNSpecifierGenerator *_vpnSpecifierGenerator; // ivar: __vpnSpecifierGenerator
@property (retain, nonatomic) WFWiFiStateMonitor *_wifiStateMonitor; // ivar: __wifiStateMonitor
@property (copy, nonatomic) NSString *bluetoothString; // ivar: _bluetoothString
@property (retain, nonatomic) HPSConnectedHeadphonesController *connectedHeadphonesController; // ivar: _connectedHeadphonesController
@property (retain, nonatomic) NSArray *connectedHeadphonesSpecifiers; // ivar: _connectedHeadphonesSpecifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferredURLLoadForThirdPartyApp; // ivar: _deferredURLLoadForThirdPartyApp
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) FLPreferencesController *followupController; // ivar: _followupController
@property (retain, nonatomic) NSArray *followupSpecifiersAccount; // ivar: _followupSpecifiersAccount
@property (retain, nonatomic) NSArray *followupSpecifiersGeneral; // ivar: _followupSpecifiersGeneral
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBSRemoteAlertHandle *remoteAlertHandle; // ivar: _remoteAlertHandle
@property (retain, nonatomic) NSUserActivity *searchActivity; // ivar: _searchActivity
@property (retain, nonatomic) SUIKSearchResultsCollectionViewController *searchResultsController; // ivar: _searchResultsController
@property (nonatomic) BOOL shouldDisplayTipContentView; // ivar: _shouldDisplayTipContentView
@property (nonatomic) BOOL skipSelectingDefaultCategoryOnLaunch; // ivar: skipSelectingDefaultCategoryOnLaunch
@property (retain, nonatomic) PSKeyboardNavigationSearchController *spotlightSearchController; // ivar: _spotlightSearchController
@property (retain, nonatomic) NSString *spotlightSearchTerm; // ivar: _spotlightSearchTerm
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *tableViewHeaderConstraints; // ivar: _tableViewHeaderConstraints
@property (retain, nonatomic) TPKContentController *tipContentController; // ivar: _tipContentController
@property (retain, nonatomic) TPKContentView *tipContentView; // ivar: _tipContentView
@property (retain, nonatomic) WSWallpaperSettingsCoordinator *wallpaperCoordinator; // ivar: _wallpaperCoordinator


+(BOOL)airplaneMode;
+(id)radiosPreferences;
+(void)setAirplaneMode:(BOOL)arg0 ;
-(BOOL)_allowsBorderForCell:(id)arg0 ;
-(BOOL)_canSelectSpecifierAtIndexPath:(id)arg0 ;
-(BOOL)_exposureNotificationAvailable;
-(BOOL)_removeCachedAppleAccountIcon;
-(BOOL)_shouldPresentModernThirdPartyAppListForBundleIdentifier:(id)arg0 ;
-(BOOL)_showSOS;
-(BOOL)_swapFollowUpSpecifiers:(id)arg0 for:(id)arg1 account:(NSUInteger)arg2 ;
-(BOOL)accountsSpecifiersAreEnabled;
-(BOOL)canBecomeFirstResponder;
-(BOOL)handlePendingURL;
-(BOOL)isAppClipsAllowed;
-(BOOL)isCellularDataEnabled;
-(BOOL)searchBarShouldEndEditing:(id)arg0 ;
-(BOOL)searchResultsCollectionViewController:(id)arg0 shouldShowCategory:(id)arg1 ;
-(BOOL)shouldDeferPushForSpecifierID:(id)arg0 urlDictionary:(id)arg1 ;
-(BOOL)shouldReloadSpecifiersOnResume;
-(BOOL)shouldShowApplePencilSpecifier;
-(BOOL)shouldShowClassKitSpecifier;
-(BOOL)shouldShowClassroomSpecifier;
-(BOOL)shouldShowEthernetSpecifier;
-(BOOL)shouldShowFaceID;
-(BOOL)shouldShowSimulatorSettings;
-(BOOL)shouldShowTouchID;
-(NSInteger)getTopMostPredecessorIndex;
-(NSInteger)insertionIndexForSpecifier:(id)arg0 inSpecifiers:(id)arg1 ;
-(NSInteger)navigationItemLargeTitleDisplayMode;
-(NSInteger)searchResultsCollectionViewController:(id)arg0 sortCategory1:(id)arg1 sortCategory2:(id)arg2 ;
-(id)_accountStore;
-(id)_cachedIconForAppleAccountSpecifier;
-(id)_primarySpecifierOrdering;
-(id)_profilePictureStore;
-(id)_serviceOwnersManager;
-(id)_sidebarSpecifierForCategoryController;
-(id)_silhouetteMonogramIcon;
-(id)_specifierDictionaryForBundlePath:(id)arg0 identifier:(id)arg1 internalIcon:(BOOL)arg2 searchPlist:(id)arg3 ;
-(id)_specifierDictionaryForDeveloperBundlePath:(id)arg0 identifier:(id)arg1 ;
-(id)appleAccountIconLocalCacheURL;
-(id)bluetoothValue:(id)arg0 ;
-(id)bundle;
-(id)categoryController;
-(id)cellularDataStatusForSpecifier:(id)arg0 ;
-(id)classroomValue:(id)arg0 ;
-(id)configurePasscodeSpecifierFromSpecifiers:(id)arg0 ;
-(id)contentController:(id)arg0 contentView:(id)arg1 iconForCustomizationID:(NSInteger)arg2 ;
-(id)generalViewController;
-(id)getAirplaneMode:(id)arg0 ;
-(id)getAllSpecifiers;
-(id)getTetheringStatus:(id)arg0 ;
-(id)identifierForSelectedIndex;
-(id)init;
-(id)keyCommands;
-(id)passbookSpecifier;
-(id)phoneStatusForSpecifier:(id)arg0 ;
-(id)searchResultsCollectionViewController:(id)arg0 iconForCategory:(id)arg1 ;
-(id)selectSpecifier:(id)arg0 ;
-(id)specifierForBundle:(id)arg0 ;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(id)videoSubscriberAccountValue:(id)arg0 ;
-(id)wifiNetwork:(id)arg0 ;
-(void)NETRBStateChangedNotification:(id)arg0 ;
-(void)NETRBStateChangedNotification:(id)arg0 completion:(id)arg1 ;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(void)_beginObservingProfilePictureStoreDidChangeNotification;
-(void)_configureImageViewForRow:(id)arg0 ;
-(void)_delayedSpotlightSearch;
-(void)_downArrowKeyPressed;
-(void)_handleOnsiteProfileInstallation;
-(void)_insertOrRemovePaymentSpecifierAsNeededCompletion:(id)arg0 ;
-(void)_loadThirdPartySpecifiersIfNecessaryWithCompletion:(id)arg0 ;
-(void)_loadThirdPartySpecifiersWithCompletion:(id)arg0 ;
-(void)_localeChanged;
-(void)_newCarrierNotification;
-(void)_presentAppleAccountSignInController:(id)arg0 ;
-(void)_reallyLoadThirdPartySpecifiersForApps:(id)arg0 shouldAddAppClipSpecifier:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)_saveIconToCacheForAppleAccountSpecifier:(id)arg0 ;
-(void)_setAirplaneMode:(BOOL)arg0 ;
-(void)_setupAppleAccountSpecifier:(id)arg0 ;
-(void)_setupAppleAccountSpecifier:(id)arg0 completion:(id)arg1 ;
-(void)_setupAppleAccountSpecifier:(id)arg0 title:(id)arg1 isSubscriber:(BOOL)arg2 ;
-(void)_setupAppleAccountSpecifierForLogin:(id)arg0 ;
-(void)_setupCachedAppleAccountSpecifier:(id)arg0 ;
-(void)_showControllerFromSpecifier:(id)arg0 ;
-(void)_showDetailTargetDidChange:(id)arg0 ;
-(void)_tabKeyPressed;
-(void)_upArrowKeyPressed;
-(void)_videoSubscriberAccountAvailabilityDidChange:(id)arg0 ;
-(void)_videoSubscriberAccountStoreDidChange:(id)arg0 ;
-(void)accountCellWasTapped:(id)arg0 ;
-(void)airplaneModeChanged;
-(void)appleAccountSpecifierWasTappedWhileInCachedState:(id)arg0 ;
-(void)appleAccountsDidChange;
-(void)asyncSpecifiersFirstLoad;
-(void)bluetoothPowerChanged:(id)arg0 ;
-(void)bluetoothValueFetch:(id)arg0 ;
-(void)checkDeveloperSettingsState;
-(void)clearCache;
-(void)configureApplePencilSpecifier;
-(void)configureTopLevelSpecifier:(id)arg0 ;
-(void)confirmationSpecifierCancelled:(id)arg0 ;
-(void)confirmationSpecifierConfirmed:(id)arg0 ;
-(void)contentController:(id)arg0 contentDidBecomeAvailable:(id)arg1 animated:(BOOL)arg2 ;
-(void)contentController:(id)arg0 contentViewNeedsLayout:(id)arg1 ;
-(void)contentController:(id)arg0 didFinishWithContent:(id)arg1 animated:(BOOL)arg2 ;
-(void)continueSearchInSettingsWithTerm:(id)arg0 ;
-(void)dealloc;
-(void)didAcceptEnteredPIN:(id)arg0 ;
-(void)didCancelEnteringPIN;
-(void)didDismissSearchController:(id)arg0 ;
-(void)didEnterBackground;
-(void)didSelectRowAtIndexPath:(id)arg0 ;
-(void)dismissPopover;
-(void)displayIdentifiersChanged;
-(void)donateBiomeSignalForSearchUsed;
-(void)familySpecifierGeneratorDidUpdate:(id)arg0 ;
-(void)fetchCellularDataEnabled;
-(void)iMessageSupportMayHaveChanged;
-(void)iconChangedForBundleID:(id)arg0 ;
-(void)indexManifests;
-(void)indexThirdPartyAppsAndManifests;
-(void)insertMovedThirdPartySpecifiersAnimated:(BOOL)arg0 ;
-(void)insertOrderedSpecifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)lazyLoadSpecialBundleForSpecifier:(id)arg0 ;
-(void)loadPPTTestSpecifiers:(int)arg0 ;
-(void)loadThirdPartySpecifierIfNeededForBundleID:(id)arg0 ;
-(void)loadView;
-(void)popToRoot;
-(void)profilePictureDidChange;
-(void)refresh3rdPartyBundles;
-(void)refreshTableViewHeaderIfVisible;
-(void)reloadAccountSpecifiersForProvider:(id)arg0 ;
-(void)reloadAsyncSpecifiersWithCompletion:(id)arg0 ;
-(void)reloadCellularRelatedSpecifiers;
-(void)reloadSpecifiers;
-(void)rerootNavigationController;
-(void)searchBarCancelButtonClicked:(id)arg0 ;
-(void)searchBarTextDidEndEditing:(id)arg0 ;
-(void)searchResultsCollectionViewController:(id)arg0 didScrollResultsInScrollView:(id)arg1 ;
-(void)searchResultsCollectionViewController:(id)arg0 didSelectURL:(id)arg1 ;
-(void)selectDefaultCategory;
-(void)selectDefaultCategoryForced:(BOOL)arg0 ;
-(void)selectDefaultCategoryForced:(BOOL)arg0 showController:(BOOL)arg1 ;
-(void)setAirplaneMode:(id)arg0 specifier:(id)arg1 ;
-(void)setDesiredVerticalContentOffsetItemNamed:(id)arg0 ;
-(void)setSpeakerAccessory:(id)arg0 eqAvailable:(BOOL)arg1 ;
-(void)setupDaemonsIfNeeded;
-(void)setupPrimaryAppleAccountGroup:(id)arg0 ;
-(void)showDeviceSupervisionInfo;
-(void)showPINSheet:(id)arg0 ;
-(void)showSecurityResearchDeviceInfo;
-(void)signInController:(id)arg0 didCompleteWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)signInControllerDidCancel:(id)arg0 ;
-(void)simStatusDidChange:(id)arg0 status:(id)arg1 ;
-(void)suspend;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)testSpecifierCountAfterBlock:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAccountSpecifiers;
-(void)updateApplePayWithCompletion:(id)arg0 ;
-(void)updateClassKitSpecifierWithCompletion:(id)arg0 ;
-(void)updateClassroomSpecifierWithCompletion:(id)arg0 ;
-(void)updateConnectedHeadphonesSpecifiersWithCompletion:(id)arg0 ;
-(void)updateEthernet;
-(void)updateEthernetWithCompletion:(id)arg0 ;
-(void)updateExposureNotificationWithCompletion:(id)arg0 ;
-(void)updateFamilyWithCompletion:(id)arg0 ;
-(void)updateFollowupSpecifiersWithCompletion:(id)arg0 ;
-(void)updateHomeKitSpecifierWithCompletion:(id)arg0 ;
-(void)updatePersonalHotspot;
-(void)updateResearchDeviceTextWithCompletion:(id)arg0 ;
-(void)updateRestrictedSettings;
-(void)updateSOSWithCompletion:(id)arg0 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)updateSecondaryAccountSpecifiersWithCompletion:(id)arg0 ;
-(void)updateSpyglassWithCompletion:(id)arg0 ;
-(void)updateSupervisedTextWithCompletion:(id)arg0 ;
-(void)updateTipKitContentWithCompletion:(id)arg0 ;
-(void)updateVPNWithCompletion:(id)arg0 ;
-(void)updateVideoSubscriberAccountWithCompletion:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)vpnSpecifierGenerator:(id)arg0 lazyLoadBundleFromSpecifier:(id)arg1 ;
-(void)vpnSpecifierGeneratorDidUpdate:(id)arg0 ;
-(void)willBecomeActive;
-(void)willDismissSearchController:(id)arg0 ;
-(void)willEnterForeground;
-(void)willPresentSearchController:(id)arg0 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif