// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPHCELLULARBRIDGEUIMANAGER_H
#define NPHCELLULARBRIDGEUIMANAGER_H

@class CoreTelephonyClient, CTXPCServiceSubscriptionInfo, NSMutableDictionary, NSArray, NSMutableSet, UIViewController, TSSIMSetupFlow, NSString, CTDeviceIdentifier, CTRemotePlan;
@protocol TSSIMSetupDelegate;

#import <Foundation/Foundation.h>


@interface NPHCellularBridgeUIManager : NSObject <TSSIMSetupDelegate>

 {
    CoreTelephonyClient *_coreTelephonyClient;
    CTXPCServiceSubscriptionInfo *_serviceSubscriptionInfo;
    NSMutableDictionary *_serviceSubscriptionInfoList;
    NSArray *_proxyPlanItems;
    NSInteger _outstandingPlanFlowsIdentified;
    NSMutableSet *_outstandingRemotePlanItemsRequestedForCSN;
    UIViewController *_hostViewController;
    id *_hostCompletionBlock;
    TSSIMSetupFlow *_flow;
}


@property (readonly, nonatomic) BOOL LTEMayImpactService; // ivar: LTEMayImpactService
@property (readonly, nonatomic) BOOL cellularPlanIsSetUp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAnyCellularPlanActivating;
@property (readonly, nonatomic) NSArray *serviceSubscriptionsInUse;
@property (readonly, nonatomic) NSArray *serviceSubscriptionsOfferingRemotePlan;
@property (readonly, nonatomic) NSArray *serviceSubscriptionsOfferingTrialPlan;
@property (readonly, nonatomic) NSArray *serviceSubscriptionsShouldShowAddNewRemotePlan;
@property (readonly, nonatomic) NSArray *serviceSubscriptionsToOfferUser;
@property (readonly, nonatomic) BOOL shouldOfferRemotePlan;
@property (readonly, nonatomic) BOOL shouldOfferSignupCompletion; // ivar: _shouldOfferSignupCompletion
@property (readonly, nonatomic) BOOL shouldOfferTrialPlan;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *tinkerFamilyMemberFirstName; // ivar: _tinkerFamilyMemberFirstName
@property (retain, nonatomic) CTDeviceIdentifier *transferableRemoteDeviceID; // ivar: _transferableRemoteDeviceID
@property (retain, nonatomic) CTRemotePlan *transferableRemotePlan; // ivar: _transferableRemotePlan
@property (readonly, nonatomic) NSString *trialPlanType;


+(BOOL)_isSubscriptionInUse:(id)arg0 ;
+(id)sharedInstance;
+(void)_presentAirplaneModeOnAlertOnViewController:(id)arg0 ;
+(void)_presentCellularRequiredModeAlertOnViewController:(id)arg0 ;
+(void)_presentErrorTitle:(id)arg0 onViewController:(id)arg1 withActionTitle:(id)arg2 actionHandler:(id)arg3 ;
+(void)_presentErrorTitled:(id)arg0 withMessage:(id)arg1 onViewController:(id)arg2 ;
+(void)presentCellularError:(id)arg0 onViewController:(id)arg1 ;
-(BOOL)_isCarrierSetupFlowUnsupportedForServiceSubscription:(id)arg0 ;
-(BOOL)_isPersistentError:(id)arg0 ;
-(BOOL)_isSetupBlockingError:(id)arg0 ;
-(BOOL)allCompanionSIMsMissing;
-(BOOL)isCarrierSetupFlowUnsupported;
-(BOOL)isGeminiSetup;
-(BOOL)isTinkerCrossCarrierSetup;
-(BOOL)shouldAllowUserToAddOrSetUpPlan;
-(BOOL)shouldAllowUserToTransferPlanFromDeviceWithCSN:(id)arg0 ;
-(NSInteger)consentRequiredRelevantCellularPlanItem:(*id)arg0 ;
-(id)_activeDeviceCSNList;
-(id)_currentDeviceCSN;
-(id)_serviceSubscriptionInfoForSubscriptionContext:(id)arg0 ;
-(id)_trialPlanTypeForContext:(id)arg0 ;
-(id)carrierNameForSubscription:(id)arg0 ;
-(id)carrierPhoneNumberForSubscription:(id)arg0 ;
-(id)cellularPlanRequiringPreInstallConsent;
-(id)cellularPlans;
-(id)cellularUseErrors;
-(id)displayNameForCellularPlan:(id)arg0 ;
-(id)formattedPhoneNumberForSubscription:(id)arg0 ;
-(id)init;
-(id)lteOverrideForSubscription:(id)arg0 ;
-(id)selectedCellularPlan;
-(id)simLabelForSubscription:(id)arg0 ;
-(id)subscriptionContextForCellularPlanItem:(id)arg0 ;
-(id)userConsentMessageForConsentType:(NSInteger)arg0 relevantPlanItem:(id)arg1 ;
-(void)_ctCellularPlanInfoDidChange:(id)arg0 ;
-(void)_ctCellularRemoteProvisioningDidBecomeAvailable:(id)arg0 ;
-(void)_localPlanInfoDidChange:(id)arg0 ;
-(void)_nrPairedWatchDidBecomeActive;
-(void)_prePromptForUserConsentIfNecessary:(id)arg0 ;
-(void)_prePromptUserForConsentTextType:(NSInteger)arg0 relevantPlanItem:(id)arg1 completionBlock:(id)arg2 ;
-(void)_promptForUserConsentForCarrierWebsiteIfNecessary:(id)arg0 withCompletion:(id)arg1 ;
-(void)_setUpCellularPlanDirectWithContext:(id)arg0 onViewController:(id)arg1 withCompletion:(id)arg2 ;
// -(void)_setUpCellularPlanWithActivationCodeOnViewController:(id)arg0 withContext:(id)arg1 withCompletion:(id)arg2 codelessActivationBlock:(unk)arg3  ;
-(void)_updateCellularPlansWithFetch:(BOOL)arg0 forCSN:(id)arg1 ;
-(void)_updateCoreTelephonyClientInfo;
-(void)_updateIsRemotePlanCapable;
-(void)_updateSIMStatusForAllSubscriptionContexts;
-(void)_updateSIMStatusForSubscriptionContext:(id)arg0 withStatus:(id)arg1 ;
-(void)_updateServiceSubscriptionInfo:(id)arg0 ;
-(void)_updateShouldShowAddNewRemotePlan;
-(void)_updateTransferableCellularPlanFromDeviceWithCSN:(id)arg0 ;
-(void)activeSubscriptionsDidChange;
-(void)dealloc;
-(void)fetchTinkerFamilyMember;
-(void)finishRemoteProvisioning;
-(void)installPendingCellularPlan:(id)arg0 withCompletion:(id)arg1 ;
-(void)setUpCellularPlanOnViewController:(id)arg0 withContext:(id)arg1 withCompletion:(id)arg2 ;
-(void)simSetupFlowCompleted:(NSUInteger)arg0 ;
-(void)simStatusDidChange:(id)arg0 status:(id)arg1 ;
-(void)startRemoteProvisioning;
-(void)subscriptionInfoDidChange;
-(void)transferCellularPlanOnViewController:(id)arg0 withCompletion:(id)arg1 ;
-(void)updateCellularPlansWithFetch:(BOOL)arg0 ;


@end


#endif