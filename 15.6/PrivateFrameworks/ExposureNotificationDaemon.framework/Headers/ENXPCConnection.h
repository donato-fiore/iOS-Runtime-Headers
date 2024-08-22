// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENXPCCONNECTION_H
#define ENXPCCONNECTION_H

@class ENUserAlert, ENManager;
@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "ENXPCClient.h"
#import "ENDaemon.h"
#import "ENExposureDetectionDaemonSession.h"

@interface ENXPCConnection : NSObject {
    ENUserAlert *_userAlert;
}


@property (retain, nonatomic) ENXPCClient *client; // ivar: _client
@property (retain, nonatomic) ENDaemon *daemon; // ivar: _daemon
@property (retain, nonatomic) ENExposureDetectionDaemonSession *detectionSession; // ivar: _detectionSession
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) ENManager *manager; // ivar: _manager
@property (nonatomic) BOOL skipFileSigningVerification; // ivar: _skipFileSigningVerification
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcCnx; // ivar: _xpcCnx


-(BOOL)_appActiveStatusWithError:(*id)arg0 ;
-(BOOL)_authorizationPreflightUnknownAndReturnError:(*id)arg0 ;
-(BOOL)_authorizedAndReturnError:(*id)arg0 ;
-(BOOL)_entitledForAccessLevel:(int)arg0 error:(*id)arg1 ;
-(BOOL)_rateLimitAndReturnError:(*id)arg0 ;
-(BOOL)_xpcManagerActivateIfNecessaryWithRequest:(id)arg0 error:(*id)arg1 ;
-(id)_regionConfigForXPCRequest:(id)arg0 error:(*id)arg1 ;
-(id)_regionServerConfigForXPCRequest:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(void)_fetchClientPublicKeyWithVerificationID:(id)arg0 keyVersion:(id)arg1 completion:(id)arg2 ;
-(void)_processServerResponseConfigurationsForRegion:(id)arg0 serverResponses:(id)arg1 request:(id)arg2 ;
-(void)_sendOnboardingMetricForRegionConfiguration:(id)arg0 ;
-(void)_updateActiveEntityFromTCCResult:(BOOL)arg0 ;
-(void)_xpcConnectionRequest:(id)arg0 ;
-(void)_xpcDiagnosticControl:(id)arg0 ;
-(void)_xpcDiagnosticLog:(id)arg0 ;
-(void)_xpcDiagnosticShow:(id)arg0 ;
-(void)_xpcDownload:(id)arg0 ;
-(void)_xpcEntitlementCheck:(id)arg0 ;
-(void)_xpcExposureDetectionFileActivate:(id)arg0 ;
-(void)_xpcExposureDetectionFileAdd:(id)arg0 ;
-(void)_xpcExposureDetectionFileAddNext:(id)arg0 fileSession:(id)arg1 publicKey:(id)arg2 ;
-(void)_xpcExposureDetectionFileFinish:(id)arg0 ;
-(void)_xpcExposureDetectionFileGetExposureWindows:(id)arg0 ;
-(void)_xpcExposureDetectionFileGetExposures:(id)arg0 ;
-(void)_xpcExposureDetectionHistoryGetFiles:(id)arg0 ;
-(void)_xpcExposureDetectionHistoryGetSessions:(id)arg0 ;
-(void)_xpcFetchTestVerificationMetadata:(id)arg0 ;
-(void)_xpcFinishTestVerificationSession:(id)arg0 ;
-(void)_xpcGetActiveRegion:(id)arg0 ;
-(void)_xpcGetAllRegionAgencyConfig:(id)arg0 ;
-(void)_xpcGetAllRegionConfig:(id)arg0 ;
-(void)_xpcGetAllRegionGeneralConfig:(id)arg0 ;
-(void)_xpcGetAllRegionServerConfig:(id)arg0 ;
-(void)_xpcGetCurrentAgencyConfig:(id)arg0 ;
-(void)_xpcGetDataVaultSize:(id)arg0 ;
-(void)_xpcGetDiagnosisKeys:(id)arg0 testMode:(BOOL)arg1 ;
-(void)_xpcGetDiagnosisKeysCompletion:(id)arg0 didPrompt:(BOOL)arg1 testMode:(BOOL)arg2 error:(id)arg3 ;
-(void)_xpcGetEntities:(id)arg0 ;
-(void)_xpcGetInfo:(id)arg0 ;
-(void)_xpcGetLastExposureNotification:(id)arg0 ;
-(void)_xpcGetPreAuthorizeDiagnosisKeysEnabled:(id)arg0 ;
-(void)_xpcGetRegionAgencyConfig:(id)arg0 ;
-(void)_xpcGetRegionConfig:(id)arg0 ;
-(void)_xpcGetRegionHistory:(id)arg0 ;
-(void)_xpcGetRegionHistoryEnabled:(id)arg0 ;
-(void)_xpcGetRegionMonitorEnabled:(id)arg0 ;
-(void)_xpcGetRegionServerConfig:(id)arg0 ;
-(void)_xpcGetRegionSystemConfig:(id)arg0 ;
-(void)_xpcGetRemotePresentationRequestIfNeeded:(id)arg0 ;
-(void)_xpcGetStatusForBundleIdentifier:(id)arg0 ;
-(void)_xpcGetSubdivisionList:(id)arg0 ;
-(void)_xpcGetTravelStatusEnabled:(id)arg0 ;
-(void)_xpcGetUserTraveled:(id)arg0 ;
-(void)_xpcGetUserTraveledPromptWithCompletion:(id)arg0 ;
-(void)_xpcGetUserTraveledReplyAllowed:(BOOL)arg0 request:(id)arg1 ;
-(void)_xpcLegalConsentPageCount:(id)arg0 ;
-(void)_xpcManagerActivate:(id)arg0 ;
-(void)_xpcMessageAddCommonKeys:(id)arg0 allowed:(BOOL)arg1 ;
-(void)_xpcNotificationTrigger:(id)arg0 ;
-(void)_xpcOnboardingDidStart:(id)arg0 ;
-(void)_xpcPreAuthorizeDiagnosisKeys:(id)arg0 ;
-(void)_xpcPreAuthorizeDiagnosisKeysComplete:(id)arg0 userDecision:(BOOL)arg1 ;
-(void)_xpcRemotePresentationReceivedDecision:(id)arg0 ;
-(void)_xpcRequestPreAuthorizedDiagnosisKeys:(id)arg0 ;
-(void)_xpcResetData:(id)arg0 ;
-(void)_xpcSendMessage:(id)arg0 ;
-(void)_xpcSendReplyError:(id)arg0 reply:(id)arg1 ;
-(void)_xpcSendReplyError:(id)arg0 request:(id)arg1 ;
-(void)_xpcSetActiveApp:(id)arg0 ;
-(void)_xpcSetActiveEntity:(id)arg0 ;
-(void)_xpcSetActiveRegion:(id)arg0 ;
-(void)_xpcSetAutomaticRegionSwitch:(id)arg0 ;
-(void)_xpcSetAvailabilityAlertEnabled:(id)arg0 ;
-(void)_xpcSetDeveloperRegionServerConfig:(id)arg0 ;
-(void)_xpcSetEnabled:(id)arg0 ;
-(void)_xpcSetMonthlySummaryAlertEnabled:(id)arg0 ;
-(void)_xpcSetPaused:(id)arg0 ;
-(void)_xpcSetPreAuthorizeDiagnosisKeysEnabled:(id)arg0 ;
-(void)_xpcSetRegionConsent:(id)arg0 ;
-(void)_xpcSetRegionHistoryEnabled:(id)arg0 ;
-(void)_xpcSetTravelStatusEnabled:(id)arg0 ;
-(void)_xpcShowBuddy:(id)arg0 ;
-(void)_xpcStartSelfReportWebSession:(id)arg0 ;
-(void)_xpcStartTestVerificationSession:(id)arg0 ;
-(void)_xpcTCCCheck:(id)arg0 ;
-(void)_xpcVerifyTextMessage:(id)arg0 ;
-(void)activate;
-(void)enqueuePreAuthorizedLockScreenActionForRequest:(id)arg0 outError:(*id)arg1 ;
-(void)invalidate;
-(void)updateDiagnosisKeysPreAuthorizationForRequest:(id)arg0 withDecision:(BOOL)arg1 errorOut:(*id)arg2 ;
-(void)xpcConnectionEvent:(id)arg0 ;
-(void)xpcPreAuthorizedDiagnosisKeysAvailable;
-(void)xpcReportActivityFlags:(unsigned int)arg0 ;
-(void)xpcStatusChanged;


@end


#endif