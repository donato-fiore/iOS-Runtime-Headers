// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKCOMPANIONAGENTCONNECTION_H
#define NPKCOMPANIONAGENTCONNECTION_H

@class NSMutableDictionary, NSMutableSet, PKPaymentWebServiceContext, NSString, PKXPCService;
@protocol NPKCompanionClientProtocol, PKXPCServiceDelegate, OS_dispatch_queue, NPKCompanionAgentConnectionDelegate;

#import <Foundation/Foundation.h>


@interface NPKCompanionAgentConnection : NSObject <NPKCompanionClientProtocol, PKXPCServiceDelegate>

 {
    NSObject<OS_dispatch_queue> *_cacheQueue;
    int _notifyToken;
}


@property (retain) NSMutableDictionary *cachedPasses; // ivar: _cachedPasses
@property (retain) NSMutableSet *cachedUniqueIDs; // ivar: _cachedUniqueIDs
@property (retain, nonatomic) NSMutableDictionary *connectionAvailableActions; // ivar: _connectionAvailableActions
@property (retain, nonatomic) PKPaymentWebServiceContext *connectionUnavailableWebServiceContext; // ivar: _connectionUnavailableWebServiceContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NPKCompanionAgentConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasQueuedPaymentPasses; // ivar: _hasQueuedPaymentPasses
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL queueAppropriateFailedActions; // ivar: _queueAppropriateFailedActions
@property (retain, nonatomic) PKXPCService *remoteService; // ivar: _remoteService
@property (readonly) Class superclass;


+(BOOL)isIssuerAppProvisioningSupported;
+(BOOL)isSetupAssistantProvisioningSupported;
+(id)watchPaymentWebService;
+(id)watchPeerPaymentWebService;
+(id)watchProvisioningURL;
+(id)watchProvisioningURLForPaymentPass:(id)arg0 ;
-(BOOL)pairedWatchHasApplicationWithBundleID:(id)arg0 ;
-(BOOL)shouldShowWatchExtensionInstallationForPaymentPass:(id)arg0 ;
-(id)_cachedPassForUniqueID:(id)arg0 ;
-(id)_errorHandlerWithCompletion:(SEL)arg0 ;
-(id)_installedCompanionApplicationBundleIDForPaymentPass:(id)arg0 ;
-(id)_remoteObjectProxySynchronize:(BOOL)arg0 withFailureHandler:(id)arg1 ;
-(id)_remoteObjectProxyWithFailureHandler:(id)arg0 ;
-(id)init;
-(id)peerPaymentAccountForDevice:(id)arg0 ;
-(id)sharedPaymentWebServiceContext;
-(id)sharedPaymentWebServiceContextForDevice:(id)arg0 ;
-(id)sharedPeerPaymentWebServiceContextForDevice:(id)arg0 ;
-(id)watchPaymentWebService;
-(int)_isApplePaySupportedInCurrentRegion;
-(void)_addPassToCache:(id)arg0 ;
-(void)_applyPropertiesToPass:(id)arg0 ;
-(void)_clearCaches;
-(void)_handleDefaultCardChanged:(id)arg0 ;
-(void)_handleServerPaymentPassesChanged:(id)arg0 ;
-(void)_invalidateCachedPassWithUniqueID:(id)arg0 ;
-(void)_removePassWithUniqueIDFromCache:(id)arg0 ;
-(void)_savePaymentPass:(id)arg0 atURL:(id)arg1 forDevice:(id)arg2 completion:(id)arg3 ;
-(void)_sharedPaymentWebServiceContextForDevice:(id)arg0 withCompletion:(id)arg1 ;
-(void)_shouldShowApplePaySettingsForTinkerWithCompletion:(id)arg0 ;
-(void)_shouldShowApplePaySettingsWithCompletion:(id)arg0 ;
-(void)balanceReminderForBalance:(id)arg0 pass:(id)arg1 withCompletion:(id)arg2 ;
-(void)balancesForPaymentPassWithUniqueIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)beginPairedWatchInstallationOfApplicationForPaymentPass:(id)arg0 completion:(id)arg1 ;
-(void)beginProvisioningFromWatchOfferForPaymentPass:(id)arg0 withCompletion:(id)arg1 ;
-(void)commutePlanReminderForCommutePlan:(id)arg0 pass:(id)arg1 withCompletion:(id)arg2 ;
-(void)consistencyCheckWithCompletion:(id)arg0 ;
-(void)credentialedPassUniqueIDsSynchronous:(BOOL)arg0 reply:(id)arg1 ;
-(void)dealloc;
-(void)defaultCardUniqueID:(id)arg0 ;
-(void)defaultPaymentApplicationForPassWithUniqueID:(id)arg0 completion:(id)arg1 ;
-(void)deletePaymentTransactionWithIdentifier:(id)arg0 fromDevice:(id)arg1 completion:(id)arg2 ;
-(void)fetchPendingTransactionForPassWithUniqueID:(id)arg0 completion:(id)arg1 ;
-(void)handleDeviceUnlockedForPendingProvisioningRequestFromGizmo;
-(void)handlePeerPaymentTermsAndConditionsRequestFromGizmo;
-(void)handlePendingUnpairingWithCompletion:(id)arg0 ;
-(void)handlePendingiCloudSignoutWithCompletion:(id)arg0 ;
-(void)initiateLostModeExitAuthWithCompletion:(id)arg0 ;
-(void)markAllAppletsForDeletionWithCompletion:(id)arg0 ;
-(void)markPendingTransactionAsProcessedForPassWithUniqueID:(id)arg0 ;
-(void)noteForegroundVerificationObserverActive:(BOOL)arg0 ;
-(void)noteProvisioningPreflightCompleteWithSuccess:(BOOL)arg0 error:(id)arg1 completion:(id)arg2 ;
-(void)noteWatchOfferShownForPaymentPass:(id)arg0 ;
-(void)paymentPassUniqueIDs:(id)arg0 ;
-(void)paymentPassUniqueIDsSynchronous:(BOOL)arg0 reply:(id)arg1 ;
-(void)paymentPassWithDeviceAccountIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)paymentPassWithPairedTerminalIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)paymentPassWithUniqueID:(id)arg0 reply:(id)arg1 ;
-(void)paymentPassWithUniqueID:(id)arg0 synchronous:(BOOL)arg1 reply:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didEnableMessageService:(BOOL)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didEnableTransactionService:(BOOL)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didUpdateBalanceReminder:(id)arg1 forBalance:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didUpdateWithBalances:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didUpdateWithCredentials:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didUpdateWithTransitPassProperties:(id)arg1 ;
-(void)paymentPassesWithPrimaryAccountIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)presentStandaloneTransaction:(NSInteger)arg0 forPassUniqueIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)provisionIdentityPassWithPassMetadata:(id)arg0 policyIdentifier:(id)arg1 targetDeviceIdentifier:(id)arg2 credentialIdentifier:(id)arg3 attestations:(id)arg4 completion:(id)arg5 ;
-(void)provisionPassForAccountIdentifier:(id)arg0 makeDefault:(BOOL)arg1 completion:(id)arg2 ;
-(void)redownloadAllPaymentPassesWithCompletion:(id)arg0 ;
-(void)registerDeviceWithCompletion:(id)arg0 ;
-(void)reloadPaymentPassesWithCompletion:(id)arg0 ;
-(void)remoteService:(id)arg0 didEstablishConnection:(id)arg1 ;
-(void)remoteService:(id)arg0 didInterruptConnection:(id)arg1 ;
-(void)removePaymentPassWithUniqueID:(id)arg0 forDevice:(id)arg1 waitForConfirmation:(BOOL)arg2 completion:(id)arg3 ;
-(void)savePaymentPass:(id)arg0 forDevice:(id)arg1 completion:(id)arg2 ;
-(void)setBalanceReminder:(id)arg0 forBalance:(id)arg1 pass:(id)arg2 completion:(id)arg3 ;
-(void)setCommutePlanReminder:(id)arg0 forCommutePlan:(id)arg1 pass:(id)arg2 completion:(id)arg3 ;
-(void)setDefaultCardUniqueID:(id)arg0 completion:(id)arg1 ;
-(void)setDefaultPaymentApplication:(id)arg0 forPassWithUniqueID:(id)arg1 completion:(id)arg2 ;
-(void)setPeerPaymentAccount:(id)arg0 forDevice:(id)arg1 ;
-(void)setSharedPaymentWebServiceContext:(id)arg0 forDevice:(id)arg1 ;
-(void)setSharedPeerPaymentWebServiceContext:(id)arg0 forDevice:(id)arg1 ;
-(void)shouldShowApplePaySettingsWithCompletion:(id)arg0 ;
-(void)shouldShowWatchOfferForPaymentPass:(id)arg0 withCompletion:(id)arg1 ;
-(void)startBackgroundVerificationObserverForPass:(id)arg0 verificationMethod:(id)arg1 ;
-(void)transactionSourceIdentifier:(id)arg0 didReceiveTransaction:(id)arg1 ;
-(void)transactionSourceIdentifier:(id)arg0 didRemoveTransactionWithIdentifier:(id)arg1 ;
-(void)transactionsForTransactionSourceIdentifiers:(id)arg0 withTransactionSource:(NSUInteger)arg1 withBackingData:(NSUInteger)arg2 startDate:(id)arg3 endDate:(id)arg4 orderedByDate:(NSInteger)arg5 limit:(NSInteger)arg6 completion:(id)arg7 ;
-(void)transitStateWithPassUniqueIdentifier:(id)arg0 paymentApplication:(id)arg1 completion:(id)arg2 ;
-(void)trustedDeviceEnrollmentSignatureWithAccountDSID:(id)arg0 sessionData:(id)arg1 handler:(id)arg2 ;
-(void)updateSettings:(NSUInteger)arg0 forPassWithUniqueID:(id)arg1 ;
-(void)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg0 completion:(id)arg1 ;


@end


#endif