// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUISUBSCRIPTIONCONTEXTMENUSGROUP_H
#define PSUISUBSCRIPTIONCONTEXTMENUSGROUP_H

@class CTCellularPlanManager, NSString, PSSpecifier, PSListController, PSSimStatusCache;
@protocol PSSpecifierGroup;

#import <Foundation/Foundation.h>

#import "PSUICoreTelephonyCallCache.h"
#import "PSUICallingSubgroup.h"
#import "PSUICoreTelephonyCarrierBundleCache.h"
#import "PSUICarrierSpaceGroup.h"
#import "PSUICoreTelephonyDataCache.h"
#import "PSUIDataModeSubgroup.h"
#import "PSUIMyNumberSubgroup.h"
#import "PSUINetworkSelectionSubgroup.h"
#import "PSUINetworkSettingsSubgroup.h"
#import "PSUIDevicePasscodeState.h"
#import "PSUICellularPlanManagerCache.h"
#import "PSUICellularDataOptionsController.h"
#import "PSUISIMSubgroup.h"

@interface PSUISubscriptionContextMenusGroup : NSObject <PSSpecifierGroup>



@property (retain, nonatomic) PSUICoreTelephonyCallCache *callCache; // ivar: _callCache
@property (retain, nonatomic) PSUICallingSubgroup *callingSubgroup; // ivar: _callingSubgroup
@property (retain, nonatomic) PSUICoreTelephonyCarrierBundleCache *carrierBundleCache; // ivar: _carrierBundleCache
@property (retain, nonatomic) PSUICarrierSpaceGroup *carrierSpaceSubgroup; // ivar: _carrierSpaceSubgroup
@property (retain, nonatomic) CTCellularPlanManager *cellularPlanManager; // ivar: _cellularPlanManager
@property (retain, nonatomic) PSUICoreTelephonyDataCache *dataCache; // ivar: _dataCache
@property (retain, nonatomic) PSUIDataModeSubgroup *dataModeSubgroup; // ivar: _dataModeSubgroup
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) PSSpecifier *groupSpecifier; // ivar: _groupSpecifier
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PSListController *listController; // ivar: _listController
@property (retain, nonatomic) PSUIMyNumberSubgroup *myNumberSubgroup; // ivar: _myNumberSubgroup
@property (retain, nonatomic) PSUINetworkSelectionSubgroup *networkSelectionSubgroup; // ivar: _networkSelectionSubgroup
@property (retain, nonatomic) PSUINetworkSettingsSubgroup *networkSettingsSubgroup; // ivar: _networkSettingsSubgroup
@property (retain, nonatomic) PSSpecifier *parentSpecifier; // ivar: _parentSpecifier
@property (retain, nonatomic) PSUIDevicePasscodeState *passcodeStatusCache; // ivar: _passcodeStatusCache
@property (retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache; // ivar: _planManagerCache
@property (nonatomic) BOOL popViewControllerOnFinished; // ivar: _popViewControllerOnFinished
@property (retain, nonatomic) PSUICellularDataOptionsController *roamingSpecifiersSubgroup; // ivar: _roamingSpecifiersSubgroup
@property (retain, nonatomic) PSSimStatusCache *simStatusCache; // ivar: _simStatusCache
@property (retain, nonatomic) PSUISIMSubgroup *simSubgroup; // ivar: _simSubgroup
@property (readonly) Class superclass;


-(id)initWithFactory:(id)arg0 ;
-(id)initWithListController:(id)arg0 groupSpecifier:(id)arg1 ;
-(id)specifiers;
-(void)viewWillAppear;


@end


#endif