// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MDMSERVERCORE_H
#define MDMSERVERCORE_H

@class NSDictionary, NSString, DMCJobQueue, NSArray, NSURL, APSConnection, NSDate, NSNumber, NSData;
@protocol UMUserSwitchStakeholder, APSConnectionDelegate, MDMXPCProtocol, MDMUserXPCProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MDMServerAppInstallBlocking.h"

@interface MDMServerCore : NSObject <UMUserSwitchStakeholder, APSConnectionDelegate, MDMXPCProtocol, MDMUserXPCProtocol>

 {
    unsigned int _reauthMAIDNotifyToken;
}


@property (copy, nonatomic) NSDictionary *MDMOptions;
@property (copy, nonatomic) id *appBlockCompletionBlock; // ivar: _appBlockCompletionBlock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *appBlockQueue; // ivar: _appBlockQueue
@property (retain, nonatomic) MDMServerAppInstallBlocking *appInstallBlocker; // ivar: _appInstallBlocker
@property (nonatomic) int buddyDoneEventToken; // ivar: _buddyDoneEventToken
@property (nonatomic) NSUInteger channelType; // ivar: _channelType
@property (readonly, copy, nonatomic) NSString *daemonIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL executionQueueIsCheckinInProgress; // ivar: _executionQueueIsCheckinInProgress
@property (copy, nonatomic) id *executionQueuePushTokenWaitContinuationBlock; // ivar: _executionQueuePushTokenWaitContinuationBlock
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isObservingReachability; // ivar: _isObservingReachability
@property (readonly, nonatomic) DMCJobQueue *jobQueue; // ivar: _jobQueue
@property (nonatomic) int keybagEventToken; // ivar: _keybagEventToken
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // ivar: _memberQueue
@property (nonatomic) NSUInteger memberQueueAccessRights; // ivar: _memberQueueAccessRights
@property (retain, nonatomic) NSDictionary *memberQueueCachedResponse; // ivar: _memberQueueCachedResponse
@property (retain, nonatomic) NSArray *memberQueueCheckInPinnedSecCertificateRefs; // ivar: _memberQueueCheckInPinnedSecCertificateRefs
@property (retain, nonatomic) NSURL *memberQueueCheckInURL; // ivar: _memberQueueCheckInURL
@property (retain, nonatomic) NSString *memberQueueCommandUUID; // ivar: _memberQueueCommandUUID
@property (retain, nonatomic) APSConnection *memberQueueDevAPSConnection; // ivar: _memberQueueDevAPSConnection
@property (retain, nonatomic) NSString *memberQueueEnrollmentID; // ivar: _memberQueueEnrollmentID
@property (nonatomic) *__SecIdentity memberQueueIdentity; // ivar: _memberQueueIdentity
@property (nonatomic) BOOL memberQueueIsMDMConfigurationValid; // ivar: _memberQueueIsMDMConfigurationValid
@property (nonatomic) BOOL memberQueueIsUprooting; // ivar: _memberQueueIsUprooting
@property (retain, nonatomic) NSDate *memberQueueLastPollingAttempt; // ivar: _memberQueueLastPollingAttempt
@property (retain, nonatomic) NSNumber *memberQueueLastPollingAttemptMonotonicTime; // ivar: _memberQueueLastPollingAttemptMonotonicTime
@property (retain, nonatomic) NSNumber *memberQueueLastPollingAttemptRTCResetCount; // ivar: _memberQueueLastPollingAttemptRTCResetCount
@property (retain, nonatomic) NSDate *memberQueueLastPollingSuccess; // ivar: _memberQueueLastPollingSuccess
@property (retain, nonatomic) NSNumber *memberQueueLastPollingSuccessMonotonicTime; // ivar: _memberQueueLastPollingSuccessMonotonicTime
@property (retain, nonatomic) NSNumber *memberQueueLastPollingSuccessRTCResetCount; // ivar: _memberQueueLastPollingSuccessRTCResetCount
@property (nonatomic) BOOL memberQueueLastResponseWasNotNow; // ivar: _memberQueueLastResponseWasNotNow
@property (retain, nonatomic) NSDictionary *memberQueueMDMOptions; // ivar: _memberQueueMDMOptions
@property (retain, nonatomic) NSString *memberQueueManagingProfileIdentifier; // ivar: _memberQueueManagingProfileIdentifier
@property (retain, nonatomic) NSDictionary *memberQueueOrganizationInfo; // ivar: _memberQueueOrganizationInfo
@property (nonatomic) BOOL memberQueuePinningRevocationCheckRequired; // ivar: _memberQueuePinningRevocationCheckRequired
@property (retain, nonatomic) NSNumber *memberQueuePollingInterval; // ivar: _memberQueuePollingInterval
@property (nonatomic) int memberQueuePowerAssertionDeassertedNotificationToken; // ivar: _memberQueuePowerAssertionDeassertedNotificationToken
@property (retain, nonatomic) APSConnection *memberQueueProdAPSConnection; // ivar: _memberQueueProdAPSConnection
@property (retain, nonatomic) NSString *memberQueuePushMagic; // ivar: _memberQueuePushMagic
@property (retain, nonatomic) NSData *memberQueuePushToken; // ivar: _memberQueuePushToken
@property (retain, nonatomic) NSArray *memberQueueServerPinnedSecCertificateRefs; // ivar: _memberQueueServerPinnedSecCertificateRefs
@property (retain, nonatomic) NSURL *memberQueueServerURL; // ivar: _memberQueueServerURL
@property (nonatomic) BOOL memberQueueSignMessage; // ivar: _memberQueueSignMessage
@property (retain, nonatomic) NSString *memberQueueTopic; // ivar: _memberQueueTopic
@property (nonatomic) BOOL memberQueueUseDevelopmentAPNS; // ivar: _memberQueueUseDevelopmentAPNS
@property (nonatomic) BOOL memberQueueUseEnrollmentID; // ivar: _memberQueueUseEnrollmentID
@property (nonatomic) BOOL memberQueueUserSwitchAlreadyInitiated; // ivar: _memberQueueUserSwitchAlreadyInitiated
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // ivar: _notificationQueue
@property (copy, nonatomic) NSDictionary *organizationInfo;
@property (readonly, copy, nonatomic) NSString *organizationName;
@property (readonly, copy, nonatomic) NSString *serverName;
@property (readonly, copy, nonatomic) NSDictionary *softwareUpdatePathFromDisk;
@property (readonly) Class superclass;
@property (nonatomic) BOOL userSwitchAlreadyInitiated;


-(BOOL)_handleHTTPStatusGoneResponse;
-(BOOL)_isMAIDNotificationActive;
-(BOOL)_isTokenUpdateScheduled;
-(BOOL)_memberQueueParseMDMConfigurationDict:(id)arg0 ;
-(BOOL)_readConfigurationOutError:(*id)arg0 isUproot:(BOOL)arg1 ;
-(BOOL)isAppInstallBlocked;
-(BOOL)startOutError:(*id)arg0 ;
-(NSInteger)_tokenUpdateCount;
-(id)_cachedResponse;
-(id)_createBadInstallationError;
-(id)_httpErrorFromTransaction:(id)arg0 assertion:(id)arg1 rmAccountID:(id)arg2 enrollmentMode:(id)arg3 reauthQueue:(id)arg4 ;
-(id)_idleResponse;
-(id)_mdmFilePathForChannelType:(NSUInteger)arg0 ;
-(id)_mdmOutstandingActivitiesFilePathForChannelType:(NSUInteger)arg0 ;
-(id)_mdmPropertiesFilePathForChannelType:(NSUInteger)arg0 ;
-(id)_prefixNameForChannelType:(NSUInteger)arg0 ;
-(id)_processTraditionalErrorFromTransaction:(id)arg0 ;
-(id)_processTraditionalUnauthorizedFromTransaction:(id)arg0 assertion:(id)arg1 ;
-(id)_processUnauthorizedFromTransaction:(id)arg0 authParams:(id)arg1 rmAccountID:(id)arg2 rmAccountUsername:(id)arg3 reauthQueue:(id)arg4 ;
-(id)_processUserChannelUnauthorizedFromTransaction:(id)arg0 rmAccountID:(id)arg1 reauthQueue:(id)arg2 ;
-(id)_reasonStringWithReason:(id)arg0 ;
-(id)_responseDataFromResponseDictionary:(id)arg0 ;
-(id)_sendResponseSynchornously:(id)arg0 ;
-(id)_transactionForResponse:(id)arg0 ;
-(id)_triggerReauthenticationForTransaction:(id)arg0 authenticator:(id)arg1 authParams:(id)arg2 rmAccountID:(id)arg3 rmAccountUsername:(id)arg4 ;
-(id)_triggerRefreshTokenForTransaction:(id)arg0 authenticator:(id)arg1 authParams:(id)arg2 rmAccountID:(id)arg3 rmAccountUsername:(id)arg4 reauthQueue:(id)arg5 ;
-(id)_userFieldsForResponse;
-(id)initWithChannelType:(NSUInteger)arg0 ;
-(id)responseFromBasicResponse:(id)arg0 ;
-(id)sendResponseSynchronously:(id)arg0 outStatusCode:(*NSInteger)arg1 outError:(*id)arg2 ;
-(unsigned int)_cancelDispatchNotificationWithToken:(unsigned int)arg0 ;
-(unsigned int)_registerForDispatchNotification:(id)arg0 outToken:(*int)arg1 targetQueue:(id)arg2 handler:(id)arg3 ;
-(void)_changeOrganizationNameForRMAccountIdentifier:(id)arg0 personaID:(id)arg1 organizationName:(id)arg2 ;
-(void)_clearCachedResponse;
-(void)_clearCoreFollowup;
-(void)_clearMAIDNotification;
-(void)_currentLocaleDidChange:(id)arg0 ;
-(void)_executeBlockWhenPushTokenIsAvailable:(id)arg0 ;
-(void)_executionQueueCheckForOutstandingActivityIsReachabilityEvent:(BOOL)arg0 assertion:(id)arg1 completionBlock:(id)arg2 ;
-(void)_executionQueueHandleRequest:(id)arg0 assertion:(id)arg1 completionBlock:(id)arg2 ;
-(void)_executionQueuePollServerForCommandWithAssertion:(id)arg0 completionBlock:(id)arg1 ;
-(void)_executionQueueRemoveMDMProfileWithAssertion:(id)arg0 ;
-(void)_executionQueueTellServerAboutDeviceTokenWithAssertion:(id)arg0 completionBlock:(id)arg1 ;
-(void)_executionQueueUpdateTokenIfNeededAndCheckForOutstandingActivityIsReachabilityEvent:(BOOL)arg0 assertion:(id)arg1 completionBlock:(id)arg2 ;
-(void)_keybagStateDidChange;
-(void)_listenForManagedAppleAccountLongLivedTokenChangedNotificationsOnQueue:(id)arg0 perform:(id)arg1 ;
-(void)_memberQueueRemoveOutstandingActivityForKey:(id)arg0 ;
-(void)_memberQueueSetCachedResponse:(id)arg0 ;
-(void)_memberQueueSetLastPushTokenHash:(id)arg0 ;
-(void)_memberQueueSetOutstandingActivity:(id)arg0 forKey:(id)arg1 ;
-(void)_memberQueueSetPushMagicMismatchDateMarker:(id)arg0 ;
-(void)_memberQueueSetTokenUpdateRequestCount:(NSInteger)arg0 ;
-(void)_memberQueueSetupAPSConnectionIfNeeeded:(BOOL)arg0 valid:(BOOL)arg1 ;
-(void)_memberQueueSetupAPSConnectionIsMDMConfigurationValid:(BOOL)arg0 isUserDaemon:(BOOL)arg1 ;
-(void)_memberQueueUpdateMDMConfiguration:(id)arg0 organizationInfo:(id)arg1 ;
-(void)_memberQueueWriteDict:(id)arg0 toMDMConfigurationFileForChannel:(NSUInteger)arg1 shouldNotify:(BOOL)arg2 ;
-(void)_networkReachabilityDidChange;
-(void)_pollFromServerIfNeeded:(BOOL)arg0 isReachabilityEvent:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_pollOrScheduleNextPollForHRN;
-(void)_pollingFailed;
-(void)_pollingSucceeded;
-(void)_presentFollowUpForAuthURL:(id)arg0 accountUsername:(id)arg1 isMAIDAccount:(BOOL)arg2 ;
-(void)_processRequest:(id)arg0 encodeResponse:(BOOL)arg1 completion:(id)arg2 ;
-(void)_registerAsUserSwitchStakeholder;
-(void)_scheduleNextPollWithInterval:(CGFloat)arg0 ;
-(void)_schedulePollingServerForCommand;
-(void)_sendResponse:(id)arg0 completionBlock:(id)arg1 ;
-(void)_setCachedResponse:(id)arg0 ;
-(void)_setLastPollingAttempt;
-(void)_setLastPollingSuccess;
-(void)_setTokenUpdateRequestCountToZero;
-(void)blockAppInstallsWithCompletion:(id)arg0 ;
-(void)buddyDidFinish;
-(void)connection:(id)arg0 didReceiveMessageForTopic:(id)arg1 userInfo:(id)arg2 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)dealloc;
-(void)getAssertionDescriptionsWithCompletion:(id)arg0 ;
-(void)migrateMDMWithContext:(int)arg0 completion:(id)arg1 ;
-(void)notifyNewConfigurationWithCompletion:(id)arg0 ;
-(void)processDeviceRequest:(id)arg0 encodeResponse:(BOOL)arg1 completion:(id)arg2 ;
-(void)processUserRequest:(id)arg0 encodeResponse:(BOOL)arg1 completion:(id)arg2 ;
-(void)pushTokenWithCompletion:(id)arg0 ;
-(void)reauthenticationCompleteWithCompletion:(id)arg0 ;
-(void)requestInstallOfAppsInRestoreWithCompletion:(id)arg0 ;
-(void)retryNotNowWithCompletion:(id)arg0 ;
-(void)scheduleTokenUpdateIfNecessaryWithCompletion:(id)arg0 ;
-(void)scheduleTokenUpdateWithCompletion:(id)arg0 ;
-(void)simulatePushIfNetworkTetheredWithCompletion:(id)arg0 ;
-(void)simulatePushWithCompletion:(id)arg0 ;
-(void)touchWithCompletion:(id)arg0 ;
-(void)unblockAppInstallsWithCompletion:(id)arg0 ;
-(void)uprootMDMWithCompletion:(id)arg0 ;
-(void)willSwitchUser;


@end


#endif