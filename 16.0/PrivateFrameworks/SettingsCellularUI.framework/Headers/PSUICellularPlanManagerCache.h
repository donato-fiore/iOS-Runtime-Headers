// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUICELLULARPLANMANAGERCACHE_H
#define PSUICELLULARPLANMANAGERCACHE_H

@class NSArray, NSDictionary, CTCellularPlanItem, CTDisplayPlanList, CoreTelephonyClient, NSString;
@protocol Loggable;

#import <Foundation/Foundation.h>


@interface PSUICellularPlanManagerCache : NSObject <Loggable>

 {
    BOOL _cacheIsValid;
    NSArray *_planItems;
    NSArray *_danglingPlanItems;
    NSArray *_plansPendingTransfer;
    NSDictionary *_referenceMap;
    CTCellularPlanItem *_selectedPlanItem;
    BOOL _hasSubscriptions;
    BOOL _isMultipleDataPlanSupportAvailable;
    BOOL _shouldShowOldUI;
    BOOL _isAnyLocalFlowTypeSupported;
    BOOL _isWebUIFlowSupported;
    BOOL _isActivationCodeFlowSupported;
    BOOL _isCarrierItemFlowSupported;
}


@property (retain) NSArray *cachedCarrierItems; // ivar: _cachedCarrierItems
@property (retain) CTDisplayPlanList *cachedRemotePlans; // ivar: _cachedRemotePlans
@property (readonly, nonatomic) NSArray *carrierItems;
@property BOOL carrierListFetchInProgress; // ivar: _carrierListFetchInProgress
@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // ivar: _coreTelephonyClient
@property (readonly, nonatomic) NSArray *danglingPlanItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *embeddedPlanItems;
@property (readonly, nonatomic) BOOL hasSubscriptions;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isActivationCodeFlowSupported;
@property (readonly, nonatomic) BOOL isAnyLocalFlowTypeSupported;
@property (readonly, nonatomic) BOOL isAnyPlanActivating;
@property (readonly, nonatomic) BOOL isCarrierItemFlowSupported;
@property (readonly, nonatomic) BOOL isCellularDisabled;
@property (readonly, nonatomic) BOOL isMultipleDataPlanSupportAvailable;
@property (readonly, nonatomic) BOOL isSelectedPlanActivating;
@property (readonly, nonatomic) BOOL isUsingBootstrapDataService;
@property (readonly, nonatomic) BOOL isWebUIFlowSupported;
@property (readonly, nonatomic) NSArray *planItems;
@property (readonly, nonatomic) NSArray *plansPendingTransfer;
@property (nonatomic) BOOL remoteListFetchCompleted; // ivar: _remoteListFetchCompleted
@property BOOL remoteListFetchInProgress; // ivar: _remoteListFetchInProgress
@property (readonly, nonatomic) CTDisplayPlanList *remotePlans;
@property (retain, nonatomic) CTCellularPlanItem *selectedPlanItem;
@property (readonly, nonatomic) BOOL shouldShowAccountSetup;
@property (readonly, nonatomic) BOOL shouldShowAddPlan;
@property (readonly, nonatomic) BOOL shouldShowDataPlanList;
@property (readonly, nonatomic) BOOL shouldShowNewUI;
@property (readonly, nonatomic) BOOL shouldShowPlanSelector;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)shouldShowOldUI;
-(id)danglingPlanFromReference:(id)arg0 ;
-(id)getLogger;
-(id)initWithCTClient:(id)arg0 ;
-(id)planFromReference:(id)arg0 ;
-(id)planFromReferenceSafe:(id)arg0 ;
-(id)planPendingTransferFromReference:(id)arg0 ;
-(id)predefinedLabels;
-(id)subscriptionContextForPlanItem:(id)arg0 cachedSubscriptionContexts:(id)arg1 ;
-(void)_carrierInfoDidChange;
-(void)_fetchPlanItemsIfNeeded;
-(void)_invalidatePlanItemsCache;
-(void)_planInfoDidChange;
-(void)clearCachedCarrierItemsAndRemotePlans;
-(void)dealloc;
-(void)didEnablePlanItems:(id)arg0 ;
-(void)didSelectDanglingPlan:(id)arg0 ;
-(void)purchaseAddOnPlan:(id)arg0 completion:(id)arg1 ;
-(void)setLabel:(id)arg0 forPlan:(id)arg1 ;


@end


#endif