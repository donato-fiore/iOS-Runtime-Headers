// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFNETWORKLISTCONTROLLER_H
#define WFNETWORKLISTCONTROLLER_H

@class NSOperationQueue, NSString, NSSet, UIViewController<WFOtherNetworkProvider>, UIViewController<WFNetworkListing>;
@protocol WFHotspotInterfaceDelegate, WFNetworkListDelegate, WFAirportViewControllerDelegate, WFScanManagerDelegate, WFGasQueryControllerDelegate, WFHealthManagerDelegate, WFKnownNetworksProvider, WFNetworkViewProvider, WFContextPresenting;

#import <Foundation/Foundation.h>

#import "WFAssociationContext.h"
#import "WFAssociationContextQueue.h"
#import "WFCertificateContext.h"
#import "WFCredentialsContext.h"
#import "WFDetailsContext.h"
#import "WFDiagnosticsManager.h"
#import "WFGasQueryController.h"
#import "WFHealthManager.h"
#import "WFHealthIssueOverrides.h"
#import "WFHotspotInterface.h"
#import "WFInterface.h"
#import "WFLinkQuality.h"
#import "WFNetworkListRandomMACManager.h"
#import "WFScanManager.h"
#import "WFScanMetricsManager.h"
#import "WFWiFiStateMonitor.h"
#import "WFClient.h"

@interface WFNetworkListController : NSObject <WFHotspotInterfaceDelegate, WFNetworkListDelegate, WFAirportViewControllerDelegate, WFScanManagerDelegate, WFGasQueryControllerDelegate, WFHealthManagerDelegate>



@property (nonatomic, getter=isHS20Supported) BOOL HS20Supported; // ivar: _HS20Supported
@property BOOL associatingToOtherNetwork; // ivar: _associatingToOtherNetwork
@property (retain, nonatomic) WFAssociationContext *associationContext; // ivar: _associationContext
@property (retain, nonatomic) WFAssociationContextQueue *associationContextQueue; // ivar: _associationContextQueue
@property (retain, nonatomic) NSOperationQueue *backgroundQueue; // ivar: _backgroundQueue
@property (nonatomic) BOOL canScanForPersonalHotspots; // ivar: _canScanForPersonalHotspots
@property (retain, nonatomic) WFCertificateContext *certificateContext; // ivar: _certificateContext
@property (retain, nonatomic) WFCredentialsContext *credentialsContext; // ivar: _credentialsContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) WFDetailsContext *detailsContext; // ivar: _detailsContext
@property (retain, nonatomic) WFDiagnosticsManager *diagnosticsManager; // ivar: _diagnosticsManager
@property (nonatomic) BOOL firstScanFinished; // ivar: _firstScanFinished
@property (retain, nonatomic) WFGasQueryController *gasController; // ivar: _gasController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFHealthManager *healthManager; // ivar: _healthManager
@property (retain, nonatomic) WFHealthIssueOverrides *healthRecommendationOverrides; // ivar: _healthRecommendationOverrides
@property (retain, nonatomic) WFHotspotInterface *hotspotInterface; // ivar: _hotspotInterface
@property (retain, nonatomic) WFInterface *interface; // ivar: _interface
@property (retain, nonatomic) NSSet *knownHiddenNetworkNames; // ivar: _knownHiddenNetworkNames
@property (nonatomic) BOOL knownNetworksContainsHS20Networks; // ivar: _knownNetworksContainsHS20Networks
@property (retain, nonatomic) NSObject<WFKnownNetworksProvider> *knownNetworksManager; // ivar: _knownNetworksManager
@property (retain, nonatomic) WFLinkQuality *latestLinkQuality; // ivar: _latestLinkQuality
@property (retain, nonatomic) NSSet *networks; // ivar: _networks
@property (retain, nonatomic) UIViewController<WFOtherNetworkProvider> *otherNetworkVC; // ivar: _otherNetworkVC
@property (nonatomic) NSUInteger powerState; // ivar: _powerState
@property (nonatomic) BOOL privacyProxyFeatureEnabled; // ivar: _privacyProxyFeatureEnabled
@property (nonatomic) NSInteger privacyProxyFeatureTier; // ivar: _privacyProxyFeatureTier
@property (retain, nonatomic) WFNetworkListRandomMACManager *randomMACManager; // ivar: _randomMACManager
@property (nonatomic) BOOL scanForPersonalHotspots; // ivar: _scanForPersonalHotspots
@property (retain, nonatomic) WFScanManager *scanManager; // ivar: _scanManager
@property (retain, nonatomic) WFScanMetricsManager *scanMetricsManager; // ivar: _scanMetricsManager
@property (readonly, nonatomic, getter=isScanning) BOOL scanning; // ivar: _scanning
@property (nonatomic) BOOL shouldShowDetailTapOnCurrentNetwork; // ivar: _shouldShowDetailTapOnCurrentNetwork
@property (retain, nonatomic) WFWiFiStateMonitor *stateMonitor; // ivar: _stateMonitor
@property (readonly) Class superclass;
@property (retain, nonatomic) UIViewController<WFNetworkListing> *viewController; // ivar: _viewController
@property (nonatomic) BOOL viewControllerSupportsCurrentNetworkSubtitle; // ivar: _viewControllerSupportsCurrentNetworkSubtitle
@property (retain, nonatomic) NSObject<WFNetworkViewProvider> *viewProvider; // ivar: _viewProvider
@property (retain, nonatomic) NSObject<WFContextPresenting> *visibleContext; // ivar: _visibleContext
@property (retain, nonatomic) WFClient *wifiClient; // ivar: _wifiClient


-(BOOL)_canPromptForCarPlay;
-(BOOL)_canPromptForInstantHotspot;
-(BOOL)_canStartAssociationToNetwork:(id)arg0 ;
-(BOOL)_canStartAssociationToUserSuppliedNetwork:(id)arg0 ;
-(BOOL)_disablePersonalHotspot;
-(BOOL)_handleCurrentNetworkDetailsURL;
-(BOOL)_isActiveCarPlaySession;
-(BOOL)_shouldPauseScanning;
-(BOOL)_supportsWiFiPasswordSharing;
-(BOOL)_useLegacySettingsUI;
-(BOOL)airportSettingsViewControllerCurrentNetworkConnectionIsProblematic:(id)arg0 ;
-(BOOL)airportSettingsViewControllerShouldShowDiagnosticsMode:(id)arg0 ;
-(BOOL)airportSettingsViewControllerShouldShowKnownNetworks:(id)arg0 ;
-(BOOL)handleURL:(id)arg0 ;
-(BOOL)isAirPortSettings;
-(BOOL)isAssociating;
-(BOOL)isSetup;
-(BOOL)networkListViewControllerCompatibilityModeEnabled:(BOOL)arg0 ;
-(BOOL)networkListViewControllerCompatibilityModeIsVisible:(BOOL)arg0 ;
-(BOOL)networkListViewControllerCurrentPowerState:(id)arg0 ;
-(BOOL)networkListViewControllerIsAutoUnlockEnabled:(id)arg0 ;
-(BOOL)networkListViewControllerIsManagedAppleID:(id)arg0 ;
-(BOOL)networkListViewControllerNetworkRestrictionActive:(id)arg0 ;
-(BOOL)networkListViewControllerPowerModificationDisabled:(id)arg0 ;
-(BOOL)networkListViewControllerWAPIEnabled:(id)arg0 ;
-(BOOL)removeKnownNetworks:(id)arg0 ;
-(BOOL)scanManagerShouldSupportHotspotHelper:(id)arg0 ;
-(BOOL)scanManagerShouldSupportUnfilteredScanning:(id)arg0 ;
-(NSInteger)_defaultAuthTraits;
-(NSInteger)airportSettingsViewControllerAskToJoinMode:(id)arg0 ;
-(NSInteger)networkListViewControllerAutoInstantHotspotOption:(id)arg0 ;
-(NSUInteger)networkListViewControllerCurrentPowerStateToggle:(id)arg0 ;
-(id)_convertToHexString:(id)arg0 ;
-(id)_hardwareMACAddress;
-(id)_sortedHealthRecommendations;
-(id)airportSettingsViewController:(id)arg0 unconfiguredAccessoriesGroupHeaderTitle:(id)arg1 ;
-(id)editableKnownNetworks;
-(id)healthRecommendations;
-(id)init;
-(id)initWithViewController:(id)arg0 ;
-(id)initWithViewController:(id)arg0 viewProvider:(id)arg1 ;
-(id)initWithViewController:(id)arg0 viewProvider:(id)arg1 client:(id)arg2 ;
-(id)initWithViewController:(id)arg0 viewProvider:(id)arg1 client:(id)arg2 knownNetworksManager:(id)arg3 ;
-(id)keyValueDictionaryForURL:(id)arg0 ;
-(id)managedKnownNetworks;
-(id)passwordToDisplayForSSID:(id)arg0 ;
-(id)scanManager:(id)arg0 filterScanResults:(id)arg1 ;
-(id)scanManagerKnownHiddenNetworkNames:(id)arg0 ;
-(void)_applicationDidBecomeActive:(id)arg0 ;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_applicationWillResignActive:(id)arg0 ;
-(void)_associateToEnterpriseNetwork:(id)arg0 profile:(id)arg1 ;
-(void)_associateToHS20Network:(id)arg0 ;
-(void)_associateToHotspotDevice:(id)arg0 ;
-(void)_associateToNetwork:(id)arg0 profile:(id)arg1 ;
-(void)_associateToScanRecord:(id)arg0 ;
-(void)_associateToScanRecord:(id)arg0 profile:(id)arg1 ;
-(void)_associateToUnconfiguredAccessory:(id)arg0 ;
-(void)_associateToUserSuppliedNetwork:(id)arg0 ;
-(void)_associationDidFinish:(BOOL)arg0 error:(id)arg1 network:(id)arg2 ;
-(void)_associationWillStart:(id)arg0 ;
-(void)_cellularOutrankNotification:(id)arg0 ;
-(void)_cleanUpStatesForDismissal;
-(void)_clientRestartedNotification:(id)arg0 ;
-(void)_dismissCredentialsViewControllerWithContext:(id)arg0 ;
-(void)_dismissDetailsViewControllerWithContext:(id)arg0 ;
-(void)_dismissErrorViewControllerWithContext:(id)arg0 ;
-(void)_dismissOtherNetworkViewControllerWithContext:(id)arg0 ;
-(void)_dismissTrustViewControllerWithContext:(id)arg0 ;
-(void)_dismissViewControllerForContext:(id)arg0 ;
-(void)_dismissVisibleContext;
-(void)_downloadHomeApp;
-(void)_handleAssociationError:(id)arg0 network:(id)arg1 profile:(id)arg2 securityMode:(NSInteger)arg3 associationContext:(id)arg4 ;
-(void)_handleAssociationResult:(BOOL)arg0 error:(id)arg1 network:(id)arg2 profile:(id)arg3 shouldSaveProfile:(BOOL)arg4 ;
-(void)_interfaceDidBecomeAvailable:(id)arg0 ;
-(void)_ipStateDidChange:(id)arg0 ;
-(void)_managedAppleIDStateDidChange:(id)arg0 ;
-(void)_networkDidChangeNotification:(id)arg0 ;
-(void)_networkHealthIssuesDidChange:(id)arg0 ;
-(void)_networkLinkQualityDidChangeNotification:(id)arg0 ;
-(void)_networkRestrictionStateDidChange:(id)arg0 ;
-(void)_openHomeAppForNetwork:(id)arg0 ;
-(void)_openURL:(id)arg0 ;
-(void)_pauseScanning;
-(void)_powerDidChangeNotification:(id)arg0 ;
-(void)_powerModificationDisableStateDidChange:(id)arg0 ;
-(void)_preferredNetworksDidChange:(id)arg0 ;
-(void)_presentCellularOutrankAlertForNetwork:(id)arg0 ;
-(void)_presentDeveloperOutrankAlertForNetwork:(id)arg0 ;
-(void)_presentErrorContext:(id)arg0 ;
-(void)_presentHotspotErrorContextWithDevice:(id)arg0 hotspotError:(id)arg1 failure:(NSInteger)arg2 ;
-(void)_promptCredentialsForNetwork:(id)arg0 profile:(id)arg1 ;
-(void)_promptForSecureWACDevice:(id)arg0 ;
-(void)_promptToDisableCarPlayForNetworkName:(id)arg0 handler:(id)arg1 ;
-(void)_promptTrustCertificateForNetwork:(id)arg0 certificateChain:(id)arg1 profile:(id)arg2 autoJoin:(BOOL)arg3 ;
-(void)_refreshKnownHiddenNetworkNamesCache;
-(void)_registerForApplicationNotifications;
-(void)_resumeScanning;
-(void)_runUnconfiguredJoinOperationForNetwork:(id)arg0 ;
-(void)_saveLogsWithComment:(id)arg0 diagnosticsViewController:(id)arg1 ;
-(void)_scanNetworkForAssociation:(id)arg0 profile:(id)arg1 ;
-(void)_setupGASControllerWithInterface:(id)arg0 ;
-(void)_setupWithInterface:(id)arg0 ;
-(void)_setupWithoutInterface;
-(void)_startHotspotScan;
-(void)_stateMonitorChangedStates:(NSInteger)arg0 oldState:(NSInteger)arg1 ;
-(void)_stopHotspotScan;
-(void)_updateCurrentNetworkIPState;
-(void)_updateHS20NetworksWithProfiles:(id)arg0 names:(id)arg1 ;
-(void)_updateHealthSubtitle;
-(void)_updatePowerState;
-(void)_updatePrivacyProxyFeatureEnabled;
-(void)_updateViewControllerConnectedNetwork;
-(void)_updateViewControllerDisabled;
-(void)_updateViewControllerScanResults;
-(void)_updateViewsForNetworks:(id)arg0 ;
-(void)_wifiPropertyDidChanged:(id)arg0 ;
-(void)airportSettingsViewController:(id)arg0 setAskToJoinMode:(NSInteger)arg1 ;
-(void)airportSettingsViewControllerDidFinishEditingKnownNetworks:(id)arg0 ;
-(void)airportSettingsViewControllerDidStartEditingKnownNetworks:(id)arg0 ;
-(void)airportSettingsViewControllerDidTapDataUsage:(id)arg0 ;
-(void)airportSettingsViewControllerDidTapDiagnosticsMode:(id)arg0 ;
-(void)associateToEnterpriseNetwork:(id)arg0 profile:(id)arg1 ;
-(void)dealloc;
-(void)gasQueryController:(id)arg0 didUpdateProfiles:(id)arg1 networkNames:(id)arg2 ;
-(void)hotspotInterfaceDidUpdateNetworks:(id)arg0 ;
-(void)networkListViewController:(id)arg0 didTapRecord:(id)arg1 ;
-(void)networkListViewController:(id)arg0 setAutoInstantOption:(NSInteger)arg1 ;
-(void)networkListViewController:(id)arg0 setCompatibilityModeEnabled:(BOOL)arg1 ;
-(void)networkListViewController:(id)arg0 setWAPIEnabled:(BOOL)arg1 ;
-(void)networkListViewController:(id)arg0 showSettingsForNetwork:(id)arg1 ;
-(void)networkListViewController:(id)arg0 showSettingsForNetwork:(id)arg1 context:(NSInteger)arg2 ;
-(void)networkListViewController:(id)arg0 userDidChangePower:(BOOL)arg1 ;
-(void)networkListViewController:(id)arg0 userDidChangePowerToggle:(NSUInteger)arg1 ;
-(void)networkListViewControllerDidAppear:(id)arg0 ;
-(void)networkListViewControllerDidDisappear:(id)arg0 ;
-(void)networkListViewControllerDidFinish:(id)arg0 ;
-(void)networkListViewControllerDidTapOtherNetwork:(id)arg0 ;
-(void)presentTrustCertificateForNetwork:(id)arg0 profile:(id)arg1 ;
-(void)pushDataUsageViewController;
-(void)removeScanCache;
-(void)scanManager:(id)arg0 didFindHotspotHelperNetworks:(id)arg1 ;
-(void)scanManager:(id)arg0 didFinishScanRequest:(id)arg1 results:(id)arg2 error:(id)arg3 timeElapsed:(CGFloat)arg4 ;
-(void)scanManager:(id)arg0 stateDidChange:(NSInteger)arg1 ;
-(void)scanManager:(id)arg0 updatedPartialResults:(id)arg1 ;
-(void)scanManager:(id)arg0 willStartScanRequest:(id)arg1 ;
-(void)scanManagerScanningDidFinish:(id)arg0 withResults:(id)arg1 error:(id)arg2 ;
-(void)scanManagerScanningWillStart:(id)arg0 ;
-(void)startScanning;
-(void)stopScanning;


@end


#endif