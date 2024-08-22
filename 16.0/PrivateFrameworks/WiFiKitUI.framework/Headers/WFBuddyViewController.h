// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFBUDDYVIEWCONTROLLER_H
#define WFBUDDYVIEWCONTROLLER_H

@class OBTableWelcomeController, NSString, OBAnimationController, UIView, UISwitch, NSArray, NSOrderedSet;
@protocol UITableViewDelegate, UITableViewDataSource, WFNetworkListing, WFBuddyViewControllerDelegate, WFNetworkListRecord, WFNetworkListDelegate;



@interface WFBuddyViewController : OBTableWelcomeController <UITableViewDelegate, UITableViewDataSource, WFNetworkListing>



@property (copy, nonatomic) NSString *alternateSetupFooter; // ivar: _alternateSetupFooter
@property (copy, nonatomic) NSString *alternateSetupTitle; // ivar: _alternateSetupTitle
@property (retain, nonatomic) OBAnimationController *animationController; // ivar: _animationController
@property (weak, nonatomic) NSObject<WFBuddyViewControllerDelegate> *buddyDelegate; // ivar: _buddyDelegate
@property (retain, nonatomic) UIView *buddyIPadContainerView; // ivar: _buddyIPadContainerView
@property (retain) NSObject<WFNetworkListRecord> *currentNetwork; // ivar: _currentNetwork
@property float currentNetworkScaledRSSI; // ivar: _currentNetworkScaledRSSI
@property NSUInteger currentNetworkSignalBars;
@property NSInteger currentNetworkState; // ivar: _currentNetworkState
@property (copy, nonatomic) NSString *currentNetworkSubtitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger deviceCapability; // ivar: _deviceCapability
@property (nonatomic) BOOL disabled;
@property (retain, nonatomic) UISwitch *enableWAPISwitch; // ivar: _enableWAPISwitch
@property (readonly) NSUInteger hash;
@property (weak) NSObject<WFNetworkListDelegate> *listDelegate; // ivar: _listDelegate
@property (nonatomic) BOOL networkResultsChangedWhileUIUpdates; // ivar: _networkResultsChangedWhileUIUpdates
@property (retain, nonatomic) NSArray *pendingNetworks; // ivar: _pendingNetworks
@property (retain) NSOrderedSet *sections; // ivar: _sections
@property (nonatomic) BOOL showAdditionalSetupInfo; // ivar: _showAdditionalSetupInfo
@property (nonatomic) BOOL showNetworkSettings; // ivar: _showNetworkSettings
@property (nonatomic) BOOL showOtherNetwork; // ivar: showOtherNetwork
@property (retain, nonatomic) NSArray *sortedNetworks; // ivar: _sortedNetworks
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsCellularActivation; // ivar: _supportsCellularActivation
@property (nonatomic) BOOL tableReloadRequestQueued; // ivar: _tableReloadRequestQueued
@property BOOL tableViewIsUpdating; // ivar: _tableViewIsUpdating
@property (nonatomic) BOOL userAutoJoinEnabled;


-(BOOL)_canShowWhileLocked;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_cellForNetworkRecord:(id)arg0 tableView:(id)arg1 indexPath:(id)arg2 ;
-(id)_debugSectionStringFromSections:(id)arg0 ;
-(id)_nameOfSection:(NSInteger)arg0 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)_chooseOtherNetworkTapped:(id)arg0 ;
-(void)_enableWAPISwitchChanged:(id)arg0 ;
-(void)_notifyBuddyWiFiPickerIsVisble:(BOOL)arg0 ;
-(void)_refreshSections;
-(void)_updateCellsWithNewData:(id)arg0 oldData:(id)arg1 inSection:(NSInteger)arg2 ;
-(void)networkListDelegateWillPresentAccessoryViewController:(id)arg0 ;
-(void)powerStateDidChange:(BOOL)arg0 ;
-(void)refresh;
-(void)setNetworks:(id)arg0 ;
-(void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayFooterView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif