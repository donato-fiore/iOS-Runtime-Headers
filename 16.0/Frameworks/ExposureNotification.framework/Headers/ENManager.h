// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENMANAGER_H
#define ENMANAGER_H

@class NSMutableArray;
@protocol OS_xpc_object, ENUIRemotePresentationController, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ENExposureDetectionClientSession.h"

@interface ENManager : NSObject {
    BOOL _activateCalled;
    ENExposureDetectionClientSession *_detectionSession;
    NSMutableArray *_exposureWindows;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_xpc_object> *_xpcCnx;
    BOOL _isTestEntitlement;
    id<ENUIRemotePresentationController> *_remotePresentationController;
}


@property (copy, nonatomic) id *activityHandler; // ivar: _activityHandler
@property (readonly, nonatomic) BOOL analyticsEnabled; // ivar: _analyticsEnabled
@property (nonatomic) unsigned int clientID; // ivar: _clientID
@property (copy, nonatomic) id *diagnosisKeysAvailableHandler; // ivar: _diagnosisKeysAvailableHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly, nonatomic) BOOL exposureNotificationEnabled; // ivar: _exposureNotificationEnabled
@property (readonly, nonatomic) BOOL exposureNotificationPaused; // ivar: _exposureNotificationPaused
@property (readonly, nonatomic) NSInteger exposureNotificationStatus; // ivar: _exposureNotificationStatus
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) id *statusChangedHandler; // ivar: _statusChangedHandler
@property (retain, nonatomic) NSObject<OS_xpc_object> *testListenerEndpoint; // ivar: _testListenerEndpoint


+(NSInteger)authorizationStatus;
-(BOOL)_setActivationPropertiesOnRequest:(id)arg0 error:(*id)arg1 ;
-(id)_ensureXPCStarted;
-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)detectExposuresWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(id)detectExposuresWithConfiguration:(id)arg0 diagnosisKeyURLs:(id)arg1 completionHandler:(id)arg2 ;
-(id)getExposureInfoFromSummary:(id)arg0 userExplanation:(id)arg1 completionHandler:(id)arg2 ;
-(id)getExposureWindowsFromSummary:(id)arg0 completionHandler:(id)arg1 ;
-(id)init;
-(void)_activateInitial:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_checkRemoteDialogueRequirementForRequestType:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)_entitlementCheckUpdate:(id)arg0 ;
-(void)_entitlementCheckWithCompletion:(id)arg0 ;
-(void)_getDetectionHistoryFilesCompleted:(id)arg0 completion:(id)arg1 ;
-(void)_getDetectionHistorySessionsCompleted:(id)arg0 completion:(id)arg1 ;
-(void)_getDiagnosisKeysReply:(id)arg0 completionHandler:(id)arg1 ;
-(void)_getExposureInfoCompleted:(id)arg0 completionHandler:(id)arg1 ;
-(void)_getExposureWindowsCompleted:(id)arg0 completionHandler:(id)arg1 ;
-(void)_getExposureWindowsFromIndex:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)_handleRemotePresentationRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)_interrupted;
-(void)_invalidate;
-(void)_invalidated;
-(void)_populateDetectionHistoryChecks:(id)arg0 forSessions:(id)arg1 sessionIndex:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)_preAuthorizeDiagnosisKeysWithSessionID:(id)arg0 completionHandler:(id)arg1 ;
-(void)_reactivate;
-(void)_setPreAuthorizeDiagnosisKeysEnabled:(BOOL)arg0 region:(id)arg1 metadata:(id)arg2 completionHandler:(id)arg3 ;
-(void)_tccCheckWithCompletion:(id)arg0 ;
-(void)_xpcHandleActivity:(id)arg0 ;
-(void)_xpcHandlePreAuthorizedDiagnosisKeysAvailable:(id)arg0 ;
-(void)_xpcHandleStatusChanged:(id)arg0 initial:(BOOL)arg1 ;
-(void)_xpcReceivedEvent:(id)arg0 ;
-(void)_xpcReceivedMessage:(id)arg0 ;
-(void)activateWithCompletionHandler:(id)arg0 ;
-(void)activeRegionWithCompletion:(id)arg0 ;
-(void)agencyConfigurationForLocale:(id)arg0 withCompletion:(id)arg1 ;
-(void)allAgencyConfigurationsForLocale:(id)arg0 withCompletion:(id)arg1 ;
-(void)allRegionConfigurationsWithCompletion:(id)arg0 ;
-(void)allRegionServerConfigurationsWithCompletion:(id)arg0 ;
-(void)clearDeveloperServerConfigurationWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)deleteExposureDetectionHistoryWithCompletionHandler:(id)arg0 ;
-(void)diagnosticControl:(id)arg0 completion:(id)arg1 ;
-(void)diagnosticShow:(id)arg0 completion:(id)arg1 ;
-(void)didEnterLegalConsentPage:(id)arg0 completionHandler:(id)arg1 ;
-(void)downloadAndDetectExposure:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)exposureDetectionActivate:(id)arg0 completion:(id)arg1 ;
-(void)exposureDetectionAddKeys:(id)arg0 completion:(id)arg1 ;
-(void)exposureDetectionFileActivate:(id)arg0 completion:(id)arg1 ;
-(void)exposureDetectionFileAdd:(id)arg0 signatureURL:(id)arg1 completion:(id)arg2 ;
-(void)exposureDetectionFileFinishWithCompletion:(id)arg0 ;
-(void)exposureDetectionFinishWithCompletion:(id)arg0 ;
-(void)exposureDetectionGetExposureInfoCompleted:(id)arg0 completion:(id)arg1 ;
-(void)exposureDetectionGetExposureInfoWithMaximumCount:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)exposureNotificationGetStatusForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)fetchConfigurationsForRegion:(id)arg0 fetchReason:(unsigned int)arg1 completion:(id)arg2 ;
-(void)fetchConfigurationsForRegion:(id)arg0 forceServerFetch:(BOOL)arg1 completion:(id)arg2 ;
-(void)fetchSubdivisionsForCountry:(id)arg0 completion:(id)arg1 ;
-(void)fetchTestMetadataForSession:(id)arg0 completionHandler:(id)arg1 ;
-(void)finishTestVerificationForSession:(id)arg0 userDidConsent:(BOOL)arg1 metadata:(id)arg2 completionHandler:(id)arg3 ;
-(void)getAllEntitiesWithCompletion:(id)arg0 ;
-(void)getDataVaultSizeWithCompletion:(id)arg0 ;
-(void)getDetectionHistoryChecksWithCompletion:(id)arg0 ;
-(void)getDetectionHistoryFilesForSession:(id)arg0 completion:(id)arg1 ;
-(void)getDetectionHistorySessionsWithCompletion:(id)arg0 ;
-(void)getDiagnosisKeysForTesting:(BOOL)arg0 forceRefresh:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)getDiagnosisKeysWithCompletionHandler:(id)arg0 ;
-(void)getInfoForKey:(id)arg0 completion:(id)arg1 ;
-(void)getLastExposureNotificationWithCompletion:(id)arg0 ;
-(void)getPreAuthorizeDiagnosisKeysEnabledForRegion:(id)arg0 completionHandler:(id)arg1 ;
-(void)getRegionHistoryEnabledWithCompletionHandler:(id)arg0 ;
-(void)getRegionMonitorEnabledWithCompletionHandler:(id)arg0 ;
-(void)getRegionVisitHistoryWithCompletion:(id)arg0 ;
-(void)getTestDiagnosisKeysWithCompletionHandler:(id)arg0 ;
-(void)getTravelStatusEnabledForRegion:(id)arg0 completionHandler:(id)arg1 ;
-(void)getTravelStatusEnabledWithCompletionHandler:(id)arg0 ;
-(void)getUserTraveledWithCompletionHandler:(id)arg0 ;
-(void)invalidate;
-(void)onboardingDidStartForRegion:(id)arg0 withSource:(id)arg1 completion:(id)arg2 ;
-(void)pauseWithExpiration:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)preAuthorizeDiagnosisKeysWithCompletionHandler:(id)arg0 ;
-(void)regionConfigurationWithCompletion:(id)arg0 ;
-(void)regionHistoryWithCompletion:(id)arg0 ;
-(void)regionServerConfigurationWithCompletion:(id)arg0 ;
-(void)remotePresentationRequestDidComplete:(id)arg0 completion:(id)arg1 ;
-(void)requestPreAuthorizedDiagnosisKeysWithCompletionHandler:(id)arg0 ;
-(void)resetAllDataWithCompletionHandler:(id)arg0 ;
-(void)resetDataWithFlags:(unsigned int)arg0 completionHandler:(id)arg1 ;
-(void)sendChaffTestVerificationRequestForRegion:(id)arg0 completionHandler:(id)arg1 ;
-(void)setActiveEntityWithAppBundleID:(id)arg0 completion:(id)arg1 ;
-(void)setActiveEntityWithRegion:(id)arg0 completion:(id)arg1 ;
-(void)setActiveRegion:(id)arg0 completion:(id)arg1 ;
-(void)setAutomaticRegionSwitchEnabled:(BOOL)arg0 completion:(id)arg1 ;
-(void)setAvailabilityAlertEnabled:(BOOL)arg0 completion:(id)arg1 ;
-(void)setCurrentActiveApp:(id)arg0 completion:(id)arg1 ;
-(void)setDeveloperServerConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)setPaused:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)setPreAuthorizeDiagnosisKeysEnabled:(BOOL)arg0 region:(id)arg1 completionHandler:(id)arg2 ;
-(void)setPreAuthorizeDiagnosisKeysEnabled:(BOOL)arg0 region:(id)arg1 metadata:(id)arg2 completionHandler:(id)arg3 ;
-(void)setRegionConsent:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)setRegionConsent:(NSInteger)arg0 region:(id)arg1 completionHandler:(id)arg2 ;
-(void)setRegionHistoryEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)setRegionUserConsent:(id)arg0 region:(id)arg1 completionHandler:(id)arg2 ;
-(void)setTravelStatusEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)setTravelStatusEnabled:(BOOL)arg0 region:(id)arg1 completionHandler:(id)arg2 ;
-(void)setWeeklySummaryAlertEnabled:(BOOL)arg0 completion:(id)arg1 ;
-(void)showBuddyForRegion:(id)arg0 completionHandler:(id)arg1 ;
-(void)startSelfReportWebSession:(id)arg0 completionHandler:(id)arg1 ;
-(void)startTestVerificationSessionWithCode:(id)arg0 region:(id)arg1 completionHandler:(id)arg2 ;
-(void)triggerNotificationOfType:(int)arg0 appBundleIdentifier:(id)arg1 classificationName:(id)arg2 interval:(id)arg3 region:(id)arg4 completion:(id)arg5 ;
-(void)verifyTextMessage:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif