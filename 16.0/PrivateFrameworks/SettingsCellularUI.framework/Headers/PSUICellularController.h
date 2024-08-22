// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUICELLULARCONTROLLER_H
#define PSUICELLULARCONTROLLER_H

@class PSListController, PSSpecifier, PSBundleController, CoreTelephonyClient, NSString, TSSIMSetupFlow;
@protocol CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientCellularPlanManagementDelegate, TSSIMSetupDelegate;


#import "PSUIAddOnPlanGroup.h"
#import "PSUICellularUsageSchedulingGroup.h"
#import "PSUICarrierItemGroup.h"
#import "PSUICellularDataPlanDetailGroup.h"
#import "PSUICellularDataPlanListGroup.h"
#import "PSUICellularPlanListGroup.h"
#import "PSUIPlanPendingTransferListGroup.h"
#import "PSUISubscriptionContextMenusGroup.h"

@interface PSUICellularController : PSListController <CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientCellularPlanManagementDelegate, TSSIMSetupDelegate>

 {
    PSSpecifier *_viewAccount;
    PSSpecifier *_viewAccountGroup;
    PSSpecifier *_facetimeSetupButton;
    PSSpecifier *_facetimeSetupGroup;
    BOOL _disabled;
    BOOL _ignoreNextEntitlementStatusChange;
    PSSpecifier *_personalHotspotSpecifier;
    PSBundleController *_personalHotspotBundleController;
    PSSpecifier *_addCellularPlanSpecifier;
    BOOL _shouldCalculateDataUsage;
}


@property (retain, nonatomic) PSUIAddOnPlanGroup *addOnPlanGroup; // ivar: _addOnPlanGroup
@property (retain, nonatomic) PSUICellularUsageSchedulingGroup *appUsageGroup; // ivar: _appUsageGroup
@property (retain, nonatomic) PSUICarrierItemGroup *carrierItemGroup; // ivar: _carrierItemGroup
@property (retain, nonatomic) PSUICellularDataPlanDetailGroup *cellularDataPlanDetailGroup; // ivar: _cellularDataPlanDetailGroup
@property (retain, nonatomic) PSUICellularDataPlanListGroup *cellularDataPlanListGroup; // ivar: _cellularDataPlanListGroup
@property (retain, nonatomic) PSUICellularPlanListGroup *cellularPlanListGroup; // ivar: _cellularPlanListGroup
@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // ivar: _coreTelephonyClient
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TSSIMSetupFlow *flow; // ivar: _flow
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PSUIPlanPendingTransferListGroup *planPendingTransferGroup; // ivar: _planPendingTransferGroup
@property (retain, nonatomic) PSUISubscriptionContextMenusGroup *subscriptionContextMenus; // ivar: _subscriptionContextMenus
@property (readonly) Class superclass;


-(BOOL)deviceIsDualSIMCapableAndPlansExist;
-(BOOL)eSIMExistsInSubscriptionContexts;
-(BOOL)isCellularDisabled;
-(BOOL)shouldShowAddPlanButton;
-(BOOL)shouldShowDataPlans;
-(BOOL)shouldShowFaceTimeSetup;
-(BOOL)shouldShowNoSIMsOrActivatePlansUI;
-(BOOL)shouldShowViewAccount;
-(BOOL)shouldUpdateHeaderForSIM;
-(BOOL)showDataPlanOnly;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(id)_deadTelephonySpecifiers;
-(id)activeDataPlanLabel;
-(id)cellularDataOptionsDetailText:(id)arg0 ;
-(id)createCarrierItemGroupIfNeeded:(id)arg0 ;
-(id)createPersonalHotspotSpecifier;
-(id)getLogger;
-(id)getTetheringStatus:(id)arg0 ;
-(id)init;
-(id)removePlanConfirmationMessage:(id)arg0 ;
-(id)removePlanConfirmationTitle:(id)arg0 ;
-(id)selectSpecifier:(id)arg0 ;
-(id)specifiers;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(void)airplaneModeChanged;
-(void)carrierItemsChanged;
-(void)cellularDataSettingChanged;
-(void)cellularPlanChanged:(id)arg0 ;
-(void)configureAddOnPlanTurnOnWifi:(id)arg0 ;
-(void)configureCarrierItemGroup:(id)arg0 ;
-(void)createAddCellularPlanSpecifierIfNeeded;
-(void)createOrUpdateSubscriptionContextMenuGroup:(id)arg0 ;
-(void)dealloc;
-(void)disableSpecifiersIfNeeded:(id)arg0 ;
-(void)entitlementStatusChanged;
-(void)handleURL:(id)arg0 ;
-(void)launchWebsheet:(id)arg0 completion:(id)arg1 ;
-(void)learnMoreLinkTapped;
-(void)newCarrierNotification;
-(void)perAppNetworkDataAccessPolicyChanged;
-(void)prefetchResourcesFor:(id)arg0 ;
-(void)retryCarrierListFetch:(id)arg0 ;
-(void)setSubscriptionContextAndPlanProperties;
-(void)setUpAccountPressed:(id)arg0 ;
-(void)setUpActivationSpecifiers:(id)arg0 ;
-(void)setUpAddPlanGroup:(id)arg0 ;
-(void)setUpAppUsageGroup:(id)arg0 ;
-(void)setUpCellularDataOptionsGroup:(id)arg0 ;
-(void)setUpCellularListGroup:(id)arg0 ;
-(void)setUpDataOnlyPlanListGroupIfNeeded:(id)arg0 ;
-(void)setUpDefaultVoiceGroup:(id)arg0 ;
-(void)setUpFacetimeSetupGroup:(id)arg0 ;
-(void)setUpPlanPendingTransferListGroup:(id)arg0 ;
-(void)setUpSadPathSpecifiersIfNeeded:(id)arg0 ;
-(void)setUpSubscriptionContextMenusGroup:(id)arg0 ;
-(void)setUpViewAccountGroup:(id)arg0 ;
-(void)setupCellularFaceTime:(id)arg0 ;
-(void)simSetupFlowCompleted:(NSUInteger)arg0 ;
-(void)simStatusDidChange:(id)arg0 status:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)turnOnLocationServicesPressed:(id)arg0 ;
-(void)turnOnWifiPressed:(id)arg0 ;
-(void)updatePaneWithCellularDataState:(BOOL)arg0 ;
-(void)viewAccountPressed:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)wirelessDataUsageCacheRefreshed;
-(void)wirelessDataUsageChangedNotification;


@end


#endif