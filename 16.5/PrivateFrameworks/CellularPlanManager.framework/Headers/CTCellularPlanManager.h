// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTCELLULARPLANMANAGER_H
#define CTCELLULARPLANMANAGER_H

@class NSMutableArray, NSString, NSData, NSXPCConnection;

#import <Foundation/Foundation.h>

#import "CTCellularPlanManagerDelegate.h"

@interface CTCellularPlanManager : NSObject {
    NSMutableArray *_subscriptionCompletions;
    *dispatch_queue_s _queue;
    NSString *_lastSessionId;
    NSData *_cookieData;
    NSXPCConnection *_connection;
    CTCellularPlanManagerDelegate *_delegate;
}




+(NSInteger)calculateInstallConsentTextTypeFor:(id)arg0 ;
+(id)sharedManager;
-(BOOL)getEnableVinylFlowTypeOverride;
-(BOOL)isAddButtonEnabled;
-(BOOL)shouldShowPlanList;
-(NSUInteger)getSupportedFlowTypes;
-(id)cancelPlanActivation:(id)arg0 ;
-(id)danglingPlanItemsShouldUpdate:(BOOL)arg0 ;
-(id)didEnablePlanItems:(id)arg0 ;
-(id)didSelectPlanForData:(id)arg0 ;
-(id)didSelectPlanForDefaultVoice:(id)arg0 ;
-(id)didSelectPlanItem:(id)arg0 isEnable:(BOOL)arg1 ;
-(id)getPlansPendingTransfer:(*id)arg0 ;
-(id)getPlansPendingTransferForTestability:(*id)arg0 ;
-(id)getPredefinedLabels;
-(id)getShortLabelsForLabels:(id)arg0 ;
-(id)getSubscriptionContextUUIDforPlan:(id)arg0 ;
-(id)init;
-(id)planItemsShouldUpdate:(BOOL)arg0 ;
-(id)remapSimLabel:(id)arg0 to:(id)arg1 ;
-(id)resolveSimLabel:(id)arg0 ;
-(id)setLabelForPlan:(id)arg0 label:(id)arg1 ;
-(id)synchronousProxyWithErrorHandler:(id)arg0 ;
-(void)_connect_sync;
-(void)_ensureConnected_sync;
// -(void)_plansForRenewal:(BOOL)arg0 progress:(id)arg1 completion:(unk)arg2 additionalParameters:(id)arg3  ;
-(void)_reconnect;
-(void)activatePlanPendingTransfer:(id)arg0 completion:(id)arg1 ;
-(void)addNewPlanWithAddress:(id)arg0 matchingId:(id)arg1 oid:(id)arg2 confirmationCode:(id)arg3 triggerType:(NSInteger)arg4 userConsent:(NSInteger)arg5 completion:(id)arg6 ;
-(void)addNewPlanWithCardData:(id)arg0 confirmationCode:(id)arg1 triggerType:(NSInteger)arg2 userConsent:(NSInteger)arg3 completion:(id)arg4 ;
-(void)addNewPlanWithCarrierItem:(id)arg0 triggerType:(NSInteger)arg1 userConsent:(NSInteger)arg2 completion:(id)arg3 ;
-(void)addNewPlanWithFlowType:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)addNewPlanWithUserInWebsheetWithCompletion:(id)arg0 ;
-(void)addNewPlanWithUserInWebsheetWithUserConsent:(NSInteger)arg0 completion:(id)arg1 ;
-(void)addNewRemotePlan:(BOOL)arg0 withCSN:(id)arg1 withContext:(id)arg2 userConsent:(NSInteger)arg3 completion:(id)arg4 ;
-(void)addNewRemotePlanWithAddress:(id)arg0 matchingId:(id)arg1 oid:(id)arg2 confirmationCode:(id)arg3 isPairing:(BOOL)arg4 withCSN:(id)arg5 withContext:(id)arg6 userConsent:(NSInteger)arg7 completion:(id)arg8 ;
-(void)addNewRemotePlanWithCardData:(id)arg0 confirmationCode:(id)arg1 isPairing:(BOOL)arg2 withCSN:(id)arg3 withContext:(id)arg4 userConsent:(NSInteger)arg5 completion:(id)arg6 ;
-(void)carrierHandoffToken:(id)arg0 ;
-(void)carrierItemsShouldUpdate:(BOOL)arg0 completion:(id)arg1 ;
-(void)connectionSettings:(id)arg0 ;
-(void)danglingPlanItemsShouldUpdate:(BOOL)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)deleteAllRemoteProfiles;
-(void)deletePlanPendingTransfer:(id)arg0 completion:(id)arg1 ;
-(void)deleteRemoteProfile:(id)arg0 ;
-(void)didCancelRemotePlan;
-(void)didDeletePlanItem:(id)arg0 completion:(id)arg1 ;
-(void)didDeleteRemotePlanItem:(id)arg0 completion:(id)arg1 ;
-(void)didPurchasePlanForCarrier:(id)arg0 mnc:(id)arg1 gid1:(id)arg2 gid2:(id)arg3 state:(id)arg4 ;
-(void)didPurchasePlanForCsn:(id)arg0 iccid:(id)arg1 profileServer:(id)arg2 ;
-(void)didPurchasePlanForCsn:(id)arg0 iccid:(id)arg1 profileServer:(id)arg2 state:(id)arg3 ;
-(void)didPurchasePlanWithIccid:(id)arg0 downloadProfile:(BOOL)arg1 ;
-(void)didPurchaseRemotePlanForEid:(id)arg0 imei:(id)arg1 meid:(id)arg2 iccid:(id)arg3 alternateSmdpFqdn:(id)arg4 completion:(id)arg5 ;
-(void)didSelectPlanForData:(id)arg0 completion:(id)arg1 ;
-(void)didSelectPlanForDefaultVoice:(id)arg0 completion:(id)arg1 ;
-(void)didSelectPlanItem:(id)arg0 isEnable:(BOOL)arg1 completion:(id)arg2 ;
-(void)didSelectPlansForIMessage:(id)arg0 completion:(id)arg1 ;
-(void)didSelectRemotePlanItem:(id)arg0 completion:(id)arg1 ;
-(void)didTransferPlanForCsn:(id)arg0 iccid:(id)arg1 profileServer:(id)arg2 state:(id)arg3 ;
-(void)didTransferPlanForCsn:(id)arg0 iccid:(id)arg1 srcIccid:(id)arg2 profileServer:(id)arg3 state:(id)arg4 ;
-(void)enableVinylFlowTypeOverride:(BOOL)arg0 ;
-(void)enterSimSetupWithCompletion:(id)arg0 ;
-(void)eraseAllPlans:(id)arg0 ;
-(void)eraseAllRemotePlansWithCSN:(id)arg0 completion:(id)arg1 ;
-(void)eraseAllRemotePlansWithCompletion:(id)arg0 ;
-(void)exitSimSetupWithCompletion:(id)arg0 ;
-(void)expirePlan;
-(void)fetchRemoteProfiles:(id)arg0 ;
-(void)finishProvisioningWithCompletion:(id)arg0 ;
-(void)finishRemoteProvisioningForCSN:(id)arg0 completion:(id)arg1 ;
-(void)getAutoPlanSelectionWithCompletion:(id)arg0 ;
-(void)getDeviceInfo:(id)arg0 ;
-(void)getESimServerURL:(id)arg0 ;
-(void)getIMEIPrefix:(id)arg0 ;
-(void)getPhoneAuthTokenWithMessage:(id)arg0 completion:(id)arg1 ;
-(void)getRemoteInfo:(id)arg0 ;
-(void)getRoamingSignupOverrideWithCompletion:(id)arg0 ;
-(void)getSelectedEnv:(id)arg0 ;
-(void)getSelectedProxy:(id)arg0 ;
-(void)getSkipEligibilityCheck:(id)arg0 ;
-(void)getSupportedFlowTypes:(id)arg0 ;
-(void)installPendingRemotePlan:(id)arg0 completion:(id)arg1 ;
-(void)isAddButtonEnabled:(id)arg0 ;
-(void)isMultipleDataPlanSupportAvailable:(id)arg0 ;
-(void)isNewDataPlanCapable:(id)arg0 ;
-(void)isRemotePlanCapableWithContext:(id)arg0 completion:(id)arg1 ;
-(void)latitudeLongitudeOverride:(id)arg0 ;
-(void)launchDataActivationNextWithUrl:(id)arg0 ;
-(void)launchSequoia;
-(void)loadPlansWithUrl:(id)arg0 postData:(id)arg1 completion:(id)arg2 ;
-(void)manageAccountForPlan:(id)arg0 completion:(id)arg1 ;
-(void)manageAccountForRemotePlan:(id)arg0 completion:(id)arg1 ;
-(void)mccMncOverride:(id)arg0 ;
-(void)openInternalUrlId:(NSInteger)arg0 ;
-(void)pendingReleaseRemotePlan;
-(void)ping;
-(void)planItemsShouldUpdate:(BOOL)arg0 completion:(id)arg1 ;
-(void)planItemsWithCompletion:(id)arg0 ;
-(void)planLaunchInfoWithCompletion:(id)arg0 ;
// -(void)plansForRenewalWithProgress:(id)arg0 andCompletion:(unk)arg1  ;
// -(void)plansWithProgress:(id)arg0 andCompletion:(unk)arg1  ;
// -(void)plansWithProgress:(id)arg0 andCompletion:(unk)arg1 additionalParameters:(id)arg2  ;
-(void)remapSimLabel:(id)arg0 to:(id)arg1 completion:(id)arg2 ;
-(void)remotePlanItemsWithCompletion:(id)arg0 ;
-(void)remotePlanItemsWithUpdateFetch:(BOOL)arg0 withCSN:(id)arg1 completion:(id)arg2 ;
-(void)remotePlanLaunchInfoForEid:(id)arg0 completion:(id)arg1 ;
-(void)resolveSimLabel:(id)arg0 completion:(id)arg1 ;
-(void)resumePlanProvisioning:(BOOL)arg0 userConsent:(NSInteger)arg1 completion:(id)arg2 ;
-(void)selectRemoteProfile:(id)arg0 ;
-(void)setAutoPlanSelection:(BOOL)arg0 ;
-(void)setESimServerURL:(id)arg0 ;
-(void)setIMEIPrefix:(id)arg0 ;
-(void)setLatitude:(id)arg0 andLongitude:(id)arg1 ;
-(void)setMcc:(NSInteger)arg0 andMnc:(NSInteger)arg1 ;
-(void)setRoamingSignupOverride:(BOOL)arg0 ;
-(void)setSelectedEnv:(NSInteger)arg0 ;
-(void)setSelectedProxy:(NSInteger)arg0 ;
-(void)setSkipEligibilityCheck:(BOOL)arg0 ;
-(void)setUseNewCellularPlanUI:(BOOL)arg0 ;
-(void)setUserInPurchaseFlow:(BOOL)arg0 ;
-(void)shouldShowAddNewRemotePlanWithContext:(id)arg0 completion:(id)arg1 ;
-(void)shouldShowPlanList:(id)arg0 ;
-(void)shouldShowPlanSetup:(id)arg0 ;
-(void)showUiIgnoringActivationFlags:(BOOL)arg0 ;
-(void)startProvisioningWithCompletion:(id)arg0 ;
-(void)startRemoteProvisioningForCSN:(id)arg0 completion:(id)arg1 ;
-(void)subscriptionDetailsForCompletion:(id)arg0 ;
-(void)triggerAddNewDataPlan:(id)arg0 ;
-(void)userDidProvideConsentResponse:(NSInteger)arg0 forPlan:(id)arg1 isRemote:(BOOL)arg2 completion:(id)arg3 ;
-(void)userDidProvideResponse:(NSInteger)arg0 confirmationCode:(id)arg1 forPlan:(id)arg2 isRemote:(BOOL)arg3 completion:(id)arg4 ;
-(void)userSignupInitiatedOrFailed;
-(void)willDisplayPlanItems;


@end


#endif