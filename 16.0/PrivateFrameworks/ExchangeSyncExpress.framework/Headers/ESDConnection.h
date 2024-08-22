// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ESDCONNECTION_H
#define ESDCONNECTION_H

@class NSMutableSet, NSMutableDictionary;
@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ESDConnection : NSObject {
    NSObject<OS_xpc_object> *_connExchange;
    NSObject<OS_dispatch_queue> *_muckingWithConn;
    NSObject<OS_dispatch_queue> *_muckingWithInFlightCollections;
    NSMutableSet *_accountIdsWithAlreadyResetCerts;
    NSMutableSet *_accountIdsWithAlreadyResetThrottleTimers;
    id *_statusReportBlock;
    NSMutableDictionary *_inFlightSearchQueries;
    NSMutableDictionary *_inFlightFolderChanges;
    NSMutableDictionary *_inFlightAttachmentDownloads;
    NSMutableDictionary *_inFlightCalendarAvailabilityRequests;
    NSMutableDictionary *_inFlightCalendarDirectorySearches;
    NSMutableDictionary *_inFlightShareRequests;
    NSMutableDictionary *_inFlightOofSettingsRequests;
}


@property (nonatomic) BOOL registered; // ivar: _registered


+(NSUInteger)_nextStopMonitoringStatusToken;
+(id)sharedConnection;
-(BOOL)_performOofSettingsRequest:(id)arg0 forAccountWithID:(id)arg1 forUpdate:(BOOL)arg2 ;
-(BOOL)_validateXPCReply:(id)arg0 ;
-(BOOL)performServerContactsSearch:(id)arg0 forAccountWithID:(id)arg1 ;
-(BOOL)processFolderChange:(id)arg0 forAccountWithID:(id)arg1 ;
-(BOOL)processMeetingRequests:(id)arg0 deliveryIdsToClear:(id)arg1 deliveryIdsToSoftClear:(id)arg2 inFolderWithId:(id)arg3 forAccountWithId:(id)arg4 ;
-(BOOL)registerForInterrogationWithBlock:(id)arg0 ;
-(BOOL)requestPolicyUpdateForAccountID:(id)arg0 ;
-(BOOL)resumeWatchingFoldersWithKeys:(id)arg0 forAccountID:(id)arg1 ;
-(BOOL)retrieveOofSettingsRequest:(id)arg0 forAccountWithID:(id)arg1 ;
-(BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg0 deleted:(id)arg1 foldersTag:(id)arg2 forAccountID:(id)arg3 ;
-(BOOL)stopWatchingFoldersWithKeys:(id)arg0 forAccountID:(id)arg1 ;
-(BOOL)suspendWatchingFoldersWithKeys:(id)arg0 forAccountID:(id)arg1 ;
-(BOOL)updateContentsOfAllFoldersForAccountID:(id)arg0 andDataclass:(NSInteger)arg1 ;
-(BOOL)updateContentsOfAllFoldersForAccountID:(id)arg0 andDataclass:(NSInteger)arg1 isUserRequested:(BOOL)arg2 ;
-(BOOL)updateContentsOfAllFoldersForAccountID:(id)arg0 andDataclasses:(NSInteger)arg1 isUserRequested:(BOOL)arg2 ;
-(BOOL)updateContentsOfFoldersWithKeys:(id)arg0 forAccountID:(id)arg1 andDataclass:(NSInteger)arg2 ;
-(BOOL)updateContentsOfFoldersWithKeys:(id)arg0 forAccountID:(id)arg1 andDataclass:(NSInteger)arg2 isUserRequested:(BOOL)arg3 ;
-(BOOL)updateContentsOfFoldersWithKeys:(id)arg0 forAccountID:(id)arg1 andDataclasses:(NSInteger)arg2 isUserRequested:(BOOL)arg3 ;
-(BOOL)updateFolderListForAccountID:(id)arg0 andDataclasses:(NSInteger)arg1 ;
-(BOOL)updateFolderListForAccountID:(id)arg0 andDataclasses:(NSInteger)arg1 isUserRequested:(BOOL)arg2 ;
-(BOOL)updateFolderListForAccountID:(id)arg0 andDataclasses:(NSInteger)arg1 requireChangedFolders:(BOOL)arg2 isUserRequested:(BOOL)arg3 ;
-(BOOL)updateOofSettingsRequest:(id)arg0 forAccountWithID:(id)arg1 ;
-(BOOL)watchFoldersWithKeys:(id)arg0 forAccountID:(id)arg1 ;
-(BOOL)watchFoldersWithKeys:(id)arg0 forAccountID:(id)arg1 persistent:(BOOL)arg2 ;
-(NSUInteger)requestDaemonStopMonitoringAgents;
-(NSUInteger)requestDaemonStopMonitoringAgentsSync;
-(id)_connectionForExchange;
-(id)_createReplyToRequest:(id)arg0 withProperties:(id)arg1 ;
-(id)_init;
-(id)activeSyncDeviceIdentifier;
// -(id)beginDownloadingAttachmentWithUUID:(id)arg0 accountID:(id)arg1 queue:(id)arg2 progressBlock:(id)arg3 completionBlock:(unk)arg4  ;
-(id)currentPolicyKeyForAccountID:(id)arg0 ;
-(id)decodedErrorFromData:(id)arg0 ;
-(id)init;
// -(id)performCalendarDirectorySearchWithAccountID:(id)arg0 terms:(id)arg1 recordTypes:(id)arg2 resultLimit:(NSUInteger)arg3 resultsBlock:(id)arg4 completionBlock:(unk)arg5  ;
// -(id)requestCalendarAvailabilityWithAccountID:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ignoredEventID:(id)arg3 addresses:(id)arg4 resultsBlock:(id)arg5 completionBlock:(unk)arg6  ;
-(id)statusReports;
-(void)_calendarAvailabilityRequestFinished:(id)arg0 ;
-(void)_calendarAvailabilityRequestReturnedResults:(id)arg0 ;
-(void)_calendarDirectorySearchFinished:(id)arg0 ;
-(void)_calendarDirectorySearchReturnedResults:(id)arg0 ;
-(void)_cancelDownloadsWithIDs:(id)arg0 error:(id)arg1 ;
-(void)_dispatchMessage:(id)arg0 ;
-(void)_downloadFinished:(id)arg0 ;
-(void)_downloadProgress:(id)arg0 ;
-(void)_exchangeServerDiedWithReason:(id)arg0 ;
-(void)_folderChangeFinished:(id)arg0 ;
-(void)_foldersUpdated:(id)arg0 ;
-(void)_getStatusReportsFromClient:(id)arg0 ;
-(void)_initializeConnectionWithXPCEndpoint:(id)arg0 ;
-(void)_initializeExchangeConnection;
-(void)_initializeXPCConnection:(id)arg0 ;
-(void)_initializeXPCConnectionForExchange:(id)arg0 ;
-(void)_logDataAccessStatus:(id)arg0 ;
-(void)_oofSettingsRequestsFinished:(id)arg0 ;
-(void)_policyKeyChanged:(id)arg0 ;
-(void)_registerForAppResumedNotification;
-(void)_requestDaemonChangeAgentMonitoringStatus:(BOOL)arg0 withToken:(NSUInteger)arg1 waitForReply:(BOOL)arg2 ;
-(void)_resetCertWarningsForAccountId:(id)arg0 andDataclasses:(NSInteger)arg1 isUserRequested:(BOOL)arg2 ;
-(void)_resetThrottleTimersForAccountId:(id)arg0 ;
-(void)_sendSynchronousXPCMessageWithParameters:(id)arg0 handlerBlock:(id)arg1 ;
-(void)_serverContactsSearchQueryFinished:(id)arg0 ;
-(void)_serverDiedWithReason:(id)arg0 ;
-(void)_shareResponseFinished:(id)arg0 ;
-(void)_tearDownInFlightObjects;
-(void)asyncProcessMeetingRequests:(id)arg0 deliveryIdsToClear:(id)arg1 deliveryIdsToSoftClear:(id)arg2 inFolderWithId:(id)arg3 forAccountWithId:(id)arg4 ;
-(void)cancelCalendarAvailabilityRequestWithID:(id)arg0 ;
-(void)cancelCalendarDirectorySearchWithID:(id)arg0 ;
-(void)cancelDownloadingAttachmentWithDownloadID:(id)arg0 error:(id)arg1 ;
-(void)cancelServerContactsSearch:(id)arg0 ;
-(void)dealloc;
-(void)externalIdentificationForAccountID:(id)arg0 resultsBlock:(id)arg1 ;
-(void)fillOutCurrentEASTimeZoneInfo;
-(void)handleURL:(id)arg0 ;
-(void)isOofSettingsSupportedForAccountWithID:(id)arg0 completionBlock:(id)arg1 ;
-(void)reallyRegisterForInterrogation;
-(void)reportFolderItemsSyncSuccess:(BOOL)arg0 forFolderWithID:(id)arg1 withItemsCount:(NSUInteger)arg2 andAccountWithID:(id)arg3 ;
-(void)reportSharedCalendarInviteAsJunkForCalendarWithID:(id)arg0 accountID:(id)arg1 queue:(id)arg2 completionBlock:(id)arg3 ;
-(void)requestDaemonShutdown;
-(void)requestDaemonStartMonitoringAgentsSyncWithToken:(NSUInteger)arg0 ;
-(void)requestDaemonStartMonitoringAgentsWithToken:(NSUInteger)arg0 ;
-(void)resetTimersAndWarnings;
-(void)respondToSharedCalendarInvite:(NSInteger)arg0 forCalendarWithID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(id)arg4 ;


@end


#endif