// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUILOCATIONSYSTEMSERVICESLISTCONTROLLER_H
#define PUILOCATIONSYSTEMSERVICESLISTCONTROLLER_H

@class NSString, PSSpecifier, RTRoutineManager;


#import "PUILocationServicesListController.h"

@interface PUILocationSystemServicesListController : PUILocationServicesListController

@property (retain, nonatomic) NSString *coreRoutineAppKey; // ivar: _coreRoutineAppKey
@property (retain, nonatomic) NSString *currentCoreRoutineStatus; // ivar: _currentCoreRoutineStatus
@property (retain, nonatomic) PSSpecifier *productImprovementGroup; // ivar: _productImprovementGroup
@property (retain, nonatomic) RTRoutineManager *routineManager; // ivar: _routineManager
@property (retain, nonatomic) NSString *specifierIDBeforeCoreRoutine; // ivar: _specifierIDBeforeCoreRoutine


+(id)homeKitBundles;
+(id)improveMapsBundles;
+(id)locationBasedAlertBundles;
+(id)routingAndTrafficBundles;
+(id)systemCustomizationBundles;
+(id)wirelessBundles;
+(int)systemServicesLocationUsage;
-(BOOL)_areCoalescedBundlesAuthorized:(id)arg0 ;
-(BOOL)hasUltraWideBand;
-(id)_areLocationBasedAlertsAuthorized;
-(id)_homeKitBundles;
-(id)_isHomeKitAuthorized;
-(id)_isRoutingAndTrafficAuthorized;
-(id)_isSystemCustomizationAuthorized;
-(id)_isWirelessAuthorized;
-(id)_locationBasedAlertBundles;
-(id)_productImprovementByBundlePath;
-(id)_readAddressCorrectionAuthorizationStatus:(id)arg0 ;
-(id)_routingAndTrafficBundles;
-(id)coreRoutineEnabledStatus:(id)arg0 ;
-(id)init;
-(id)isStatusEnabled:(id)arg0 ;
-(id)specifiers;
-(void)_performConsistencyCheckForBundles:(id)arg0 name:(id)arg1 ;
-(void)_performConsistencyCheckValue:(id)arg0 bundles:(id)arg1 name:(id)arg2 ;
-(void)_performHomeKitConsistencyCheck;
-(void)_performLocationBasedAlertsConsistencyCheck;
-(void)_performRoutingAndTrafficConsistencyCheck;
-(void)_performSystemCustomizationConsistencyCheck;
-(void)_performWirelessConsistencyCheck;
-(void)_setAddressCorrectionAuthorizationStatus:(id)arg0 specifier:(id)arg1 ;
-(void)_setCoalescedBundlesAuthorized:(id)arg0 bundles:(id)arg1 ;
-(void)_setHomeKitAuthorized:(id)arg0 ;
-(void)_setLocationBasedAlertsAuthorized:(id)arg0 ;
-(void)_setRoutingAndTrafficAuthorized:(id)arg0 ;
-(void)_setSystemCutomizationAuthorized:(id)arg0 ;
-(void)_setWirelessAuthorized:(id)arg0 ;
-(void)_showAddressCorrectionPage;
-(void)dealloc;
-(void)insertCoreRoutineSpecifier;
-(void)setStatusEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)updateCoreRoutineEnabledStatusAndInsertSpecifier:(BOOL)arg0 ;
-(void)updateCoreRoutineSigLocationSpecifier;
-(void)updateImproveMapsSpecifierWithCompletion:(id)arg0 ;


@end


#endif