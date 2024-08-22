// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSUISUBSCRIPTIONCONTEXTMENUSPRODUCTIONFACTORY_H
#define PSUISUBSCRIPTIONCONTEXTMENUSPRODUCTIONFACTORY_H

@class PSSpecifier, PSListController;
@protocol PSUISubscriptionContextMenusFactory;

#import <Foundation/Foundation.h>


@interface PSUISubscriptionContextMenusProductionFactory : NSObject <PSUISubscriptionContextMenusFactory>



@property (weak, nonatomic) PSSpecifier *groupSpecifier; // ivar: _groupSpecifier
@property (weak, nonatomic) PSListController *hostController; // ivar: _hostController
@property (weak, nonatomic) PSSpecifier *parentSpecifier; // ivar: _parentSpecifier
@property (nonatomic) BOOL popViewControllerOnPlanRemoval; // ivar: _popViewControllerOnPlanRemoval


-(BOOL)shouldPopViewControllerOnPlanRemoval;
-(id)createCallCache;
-(id)createCallingSubgroup;
-(id)createCarrierBundleCache;
-(id)createCarrierSpaceSubgroup;
-(id)createCellularPlanManager;
-(id)createCellularPlanManagerCache;
-(id)createDataCache;
-(id)createDataModeSubgroupWithContext:(id)arg0 ;
-(id)createMyNumberSubgroup;
-(id)createNetworkSelectionSubgroup;
-(id)createNetworkSettingsSubgroup;
-(id)createPasscodeStatusCache;
-(id)createRoamingSpecifiersSubgroup;
-(id)createSimStatusCache;
-(id)createSimSubgroup;
-(id)initWithHostController:(id)arg0 parentSpecifier:(id)arg1 groupSpecifier:(id)arg2 popViewControllerOnPlanRemoval:(BOOL)arg3 ;


@end


#endif