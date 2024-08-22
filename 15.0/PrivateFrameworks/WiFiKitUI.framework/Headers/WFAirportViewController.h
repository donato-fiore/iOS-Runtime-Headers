// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFAIRPORTVIEWCONTROLLER_H
#define WFAIRPORTVIEWCONTROLLER_H

@class NSArray, NSSet, NSString, NSOrderedSet;
@protocol UITableViewDataSource, UITableViewDelegate, WFNetworkListing, WFNetworkListRecord, OS_dispatch_queue, WFAirportViewControllerDelegate;


#import "WFInsetTableViewController.h"
#import "WFChooseNetworkHeaderViewController.h"

@interface WFAirportViewController : WFInsetTableViewController <UITableViewDataSource, UITableViewDelegate, WFNetworkListing>



@property (retain, nonatomic) NSArray *adhocNetworks; // ivar: _adhocNetworks
@property (retain, nonatomic) NSSet *allNetworks; // ivar: _allNetworks
@property (nonatomic) BOOL askToJoinShown; // ivar: _askToJoinShown
@property (retain, nonatomic) WFChooseNetworkHeaderViewController *chooseNetworkHeader; // ivar: _chooseNetworkHeader
@property (retain, nonatomic) NSString *currentInfraHeaderText; // ivar: _currentInfraHeaderText
@property (retain, nonatomic) NSString *currentKnownHeaderText; // ivar: _currentKnownHeaderText
@property (retain) NSObject<WFNetworkListRecord> *currentNetwork; // ivar: _currentNetwork
@property float currentNetworkScaledRSSI; // ivar: _currentNetworkScaledRSSI
@property NSUInteger currentNetworkSignalBars;
@property NSInteger currentNetworkState; // ivar: _currentNetworkState
@property (copy, nonatomic) NSString *currentNetworkSubtitle; // ivar: _currentNetworkSubtitle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger deviceCapability; // ivar: _deviceCapability
@property (nonatomic) BOOL disablePowerModification; // ivar: _disablePowerModification
@property (nonatomic) BOOL disabled;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *infraNetworks; // ivar: _infraNetworks
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (nonatomic) BOOL isManagedAppleID; // ivar: _isManagedAppleID
@property (weak, nonatomic) NSObject<WFNetworkListRecord> *joiningHotspot; // ivar: _joiningHotspot
@property (retain, nonatomic) WFChooseNetworkHeaderViewController *knownNetworkHeader; // ivar: _knownNetworkHeader
@property (retain, nonatomic) NSArray *knownNetworks; // ivar: _knownNetworks
@property (weak, nonatomic) NSObject<WFAirportViewControllerDelegate> *listDelegate; // ivar: _listDelegate
@property (nonatomic) BOOL networkResultsChangedWhileUIUpdates; // ivar: _networkResultsChangedWhileUIUpdates
@property (retain, nonatomic) NSObject<WFNetworkListRecord> *pendingCurrentNetwork; // ivar: _pendingCurrentNetwork
@property (retain, nonatomic) NSSet *pendingNetworks; // ivar: _pendingNetworks
@property (retain, nonatomic) NSArray *popularNetworks; // ivar: _popularNetworks
@property (copy, nonatomic) NSString *powerOffLocationWarning; // ivar: _powerOffLocationWarning
@property (retain, nonatomic) WFChooseNetworkHeaderViewController *publicNetworkHeader; // ivar: _publicNetworkHeader
@property (retain) NSOrderedSet *sections; // ivar: _sections
@property (nonatomic) BOOL showDiagnostics; // ivar: _showDiagnostics
@property (nonatomic) BOOL showKnownNetworks; // ivar: _showKnownNetworks
@property (nonatomic) BOOL showOtherNetwork; // ivar: _showOtherNetwork
@property (readonly) Class superclass;
@property BOOL tableViewIsUpdating; // ivar: _tableViewIsUpdating
@property (retain, nonatomic) NSArray *unconfiguredNetworks; // ivar: _unconfiguredNetworks
@property (copy, nonatomic) NSString *userAutoJoinDisabledWarning; // ivar: _userAutoJoinDisabledWarning
@property (nonatomic) BOOL userAutoJoinEnabled; // ivar: _userAutoJoinEnabled


-(BOOL)_askToJoinShouldBeVisible;
-(BOOL)_isChinaDevice;
-(BOOL)_refreshATJShownStateIfChanged;
-(BOOL)_shouldContinueUpdateNetworkList;
-(BOOL)powered;
-(BOOL)shouldPromptWhenCarPlaySessionIsActive;
-(BOOL)shouldPromptWhenPersonalHotspotIsEnabled;
-(BOOL)supportsHealthRecommendations;
-(BOOL)supportsWiFiPasswordSharing;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)_askToJoinMode;
-(NSInteger)_askToJoinModeFromString:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)_sectionTypeAtSection:(NSInteger)arg0 ;
-(NSUInteger)powerState;
-(id)_askToJoinFooterString;
-(id)_askToJoinFooterStringForMode:(NSInteger)arg0 ;
-(id)_askToJoinStateStringForATJMode:(NSInteger)arg0 ;
-(id)_defaultSectionsForPowerState:(BOOL)arg0 ;
-(id)_getAutoHotspotOptionText:(NSInteger)arg0 ;
-(id)_indexPathForNetworkName:(id)arg0 ;
-(id)_nameOfSection:(NSUInteger)arg0 ;
-(id)_sectionNameAtIndex:(NSUInteger)arg0 ;
-(id)_tableCellForNetwork:(id)arg0 tableView:(id)arg1 indexPath:(id)arg2 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_dumpSections;
-(void)_enableWAPISwitchChanged:(id)arg0 ;
-(void)_powerSwitchChanged:(id)arg0 ;
-(void)_processPendingCurrentNetworkUpdate;
-(void)_promptToJoinAdhoc:(id)arg0 ;
-(void)_reloadPowerSection;
-(void)_reloadSectionForHotspotChange;
-(void)_updateAskToJoinMode:(NSInteger)arg0 ;
-(void)_updateCellsWithNewData:(id)arg0 oldData:(id)arg1 inSection:(NSUInteger)arg2 insertSection:(BOOL)arg3 datasourceSection:(NSUInteger)arg4 ;
-(void)_updateNetworkRestrictionHeader;
-(void)loadView;
-(void)managedAppleIDStateChange:(BOOL)arg0 ;
-(void)powerModificationStateDidChange:(BOOL)arg0 ;
-(void)powerStateDidChange:(BOOL)arg0 ;
-(void)powerStateDidChangeToggle:(NSUInteger)arg0 ;
-(void)refresh;
-(void)reloadCellsForNetworkNames:(id)arg0 ;
-(void)setAskToJoinMode:(NSInteger)arg0 ;
-(void)setAutoInstantHotspotJoinOption:(NSInteger)arg0 ;
-(void)setNetworks:(id)arg0 ;
-(void)setScanning:(BOOL)arg0 ;
-(void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateAutoInstantHotspotSetting:(NSInteger)arg0 ;
-(void)updateViewsForNetworks:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif