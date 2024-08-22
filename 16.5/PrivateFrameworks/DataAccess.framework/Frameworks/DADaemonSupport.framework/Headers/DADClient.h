// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DADCLIENT_H
#define DADCLIENT_H

@class DADisableableObject, NSMutableDictionary, NSString, NSCountedSet;
@protocol OS_xpc_object;



@interface DADClient : DADisableableObject {
    BOOL _hasCalendarAccess;
    BOOL _hasReminderAccess;
    BOOL _hasContactsAccess;
    BOOL _isInternalTool;
    BOOL _isAccountsDaemon;
    os_unfair_lock_s _callAccountingLock;
}


@property (retain, nonatomic) NSMutableDictionary *accountTimers; // ivar: _accountTimers
@property (retain, nonatomic) NSMutableDictionary *actionDelegatesById; // ivar: _actionDelegatesById
@property (retain, nonatomic) NSMutableDictionary *agentMonitoringTokens; // ivar: _agentMonitoringTokens
@property (retain, nonatomic) NSMutableDictionary *busyIDs; // ivar: _busyIDs
@property (retain, nonatomic) NSString *clientBundleID; // ivar: _clientBundleID
@property (retain, nonatomic) NSString *clientName; // ivar: _clientName
@property (nonatomic) int clientPID; // ivar: _clientPID
@property (retain, nonatomic) NSString *clientUniqueID; // ivar: _clientUniqueID
@property (retain, nonatomic) NSObject<OS_xpc_object> *conn; // ivar: _conn
@property (nonatomic) int numOutstandingBlockingClientCalls; // ivar: _numOutstandingBlockingClientCalls
@property (nonatomic) int numOutstandingRefreshPriorityClientCalls; // ivar: _numOutstandingRefreshPriorityClientCalls
@property (readonly, nonatomic) NSUInteger outstandingStopMonitoringAgentRequests;
@property (readonly, nonatomic) BOOL persistent; // ivar: _persistent
@property (retain, nonatomic) NSCountedSet *simulatedCalDAVHostnames; // ivar: _simulatedCalDAVHostnames
@property (retain, nonatomic) NSMutableDictionary *updatedIDs; // ivar: _updatedIDs
@property (retain, nonatomic) NSMutableDictionary *watchedIDs; // ivar: _watchedIDs


+(BOOL)_shouldReloadAgentsForAccountChange:(id)arg0 ;
+(NSUInteger)permissionsForMessage:(id)arg0 ;
+(id)clientsToInterrogate;
-(BOOL)_checkAccessForMessage:(id)arg0 ;
-(BOOL)_checkAccountId:(id)arg0 ;
-(BOOL)_hasCalendarAccess;
-(BOOL)_hasContactsAccess;
-(BOOL)_hasReminderAccess;
-(BOOL)_isAccountsDaemon;
-(BOOL)_isInternalTool;
-(BOOL)isMonitoringAccountID:(id)arg0 folderID:(id)arg1 ;
-(NSUInteger)watchedFolderCount;
-(id)_createReplyToRequest:(id)arg0 withProperties:(id)arg1 ;
-(id)initWithClientID:(id)arg0 ;
-(id)initWithConnection:(id)arg0 clientID:(id)arg1 ;
-(id)rawConnection;
-(id)timersForAccountWithID:(id)arg0 ;
-(void)_agentsStopped:(id)arg0 ;
-(void)_asPolicyKeyChanged:(id)arg0 ;
-(void)_asyncProcessMeetingRequests:(id)arg0 ;
-(void)_beginDownloadingAttachmentEvent:(id)arg0 eventDict:(id)arg1 ;
-(void)_beginMonitoringFolders:(id)arg0 ;
-(void)_cancelCalendarAvailabilityRequest:(id)arg0 eventDict:(id)arg1 ;
-(void)_cancelCalendarDirectorySearch:(id)arg0 eventDict:(id)arg1 ;
-(void)_cancelDownloadingAttachmentEvent:(id)arg0 eventDict:(id)arg1 ;
-(void)_cancelDownloadingSubscribedCalendar:(id)arg0 eventDict:(id)arg1 ;
-(void)_cancelGrantedDelegatesListRequest:(id)arg0 eventDict:(id)arg1 ;
-(void)_cancelRestartingAgentsDueToTimeout;
-(void)_cancelServerContactsSearch:(id)arg0 ;
-(void)_checkIsOofSettingsSupported:(id)arg0 ;
-(void)_checkSubscribedCalendarIsJunk:(id)arg0 eventDict:(id)arg1 ;
-(void)_clearAllStopMonitoringAgentsTokens;
-(void)_clientDiedWithReason:(id)arg0 ;
-(void)_dispatchMessage:(id)arg0 ;
-(void)_downloadSubscribedCalendar:(id)arg0 eventDict:(id)arg1 ;
-(void)_endAllServerSimulations;
-(void)_fetchHolidayCalendars:(id)arg0 eventDict:(id)arg1 ;
-(void)_fetchOfficeHoursEvent:(id)arg0 eventDict:(id)arg1 ;
-(void)_foldersUpdated:(id)arg0 ;
-(void)_getCurrentPolicyKey:(id)arg0 ;
-(void)_getStatusReports:(id)arg0 ;
-(void)_handleAccountChange:(id)arg0 ;
-(void)_handleURL:(id)arg0 ;
-(void)_manageCalDAVServerSimulatorWithHostname:(id)arg0 action:(id)arg1 ;
-(void)_openServerContactsSearch:(id)arg0 ;
-(void)_openServerOofSettingsRequest:(id)arg0 ;
-(void)_performCalendarDirectorySearch:(id)arg0 eventDict:(id)arg1 ;
-(void)_performGroupExpansion:(id)arg0 eventDict:(id)arg1 ;
-(void)_processFolderChange:(id)arg0 ;
-(void)_processMeetingRequests:(id)arg0 ;
-(void)_registerForInterrogation:(id)arg0 ;
-(void)_removeBusyFolderIDs:(id)arg0 forAccountWithID:(id)arg1 ;
-(void)_removeWatchedFolderIDs:(id)arg0 forAccountWithID:(id)arg1 ;
-(void)_reportFolderItemsSyncResult:(id)arg0 ;
-(void)_reportSharedCalendarAsJunkEvent:(id)arg0 eventDict:(id)arg1 ;
-(void)_reportSubscribedCalendarAsJunk:(id)arg0 eventDict:(id)arg1 ;
-(void)_requestAllFolderContentsUpdate:(id)arg0 ;
-(void)_requestAllFolderContentsUpdateForAccountId:(id)arg0 dataclasses:(NSInteger)arg1 isUserRequested:(BOOL)arg2 ;
-(void)_requestCalendarAvailability:(id)arg0 eventDict:(id)arg1 ;
-(void)_requestClientStatusDump:(id)arg0 ;
-(void)_requestFolderContentsUpdate:(id)arg0 ;
-(void)_requestFolderContentsUpdateForFolders:(id)arg0 accountId:(id)arg1 dataclasses:(NSInteger)arg2 isUserRequested:(BOOL)arg3 ;
-(void)_requestFolderListUpdate:(id)arg0 ;
-(void)_requestFolderListUpdateForAccountId:(id)arg0 dataclasses:(NSInteger)arg1 requireChangedFolders:(BOOL)arg2 isUserRequested:(BOOL)arg3 ;
-(void)_requestGrantedDelegatesList:(id)arg0 eventDict:(id)arg1 ;
-(void)_requestPolicyUpdate:(id)arg0 ;
-(void)_resetCertWarnings:(id)arg0 ;
-(void)_resetThrottleTimers:(id)arg0 ;
-(void)_respondToSharedCalendarEvent:(id)arg0 eventDict:(id)arg1 ;
-(void)_restartAgentsDueToTimeout;
-(void)_resumeMonitoringFolders:(id)arg0 ;
-(void)_sendAccessDeniedReplyForMessage:(id)arg0 ;
-(void)_sendInvalidAccountIDReplyToMessage:(id)arg0 withAccountID:(id)arg1 ;
-(void)_setFolderIdsThatExternalClientsCareAbout:(id)arg0 ;
-(void)_setOfficeHoursEvent:(id)arg0 eventDict:(id)arg1 ;
-(void)_setUserNameAndPasswordForSubscribedCalendar:(id)arg0 eventDict:(id)arg1 ;
-(void)_startMonitoringAgents:(id)arg0 ;
-(void)_startMonitoringAgentsWithClientToken:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)_startMonitoringAgentsWithServerToken:(int)arg0 completion:(id)arg1 ;
-(void)_startTimeoutWithClientToken:(NSUInteger)arg0 ;
-(void)_stopMonitoringAgents:(id)arg0 ;
-(void)_stopMonitoringAgentsWithClientToken:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)_stopMonitoringFolders:(id)arg0 ;
-(void)_suspendMonitoringFolders:(id)arg0 ;
-(void)_updateGrantedDelegatePermission:(id)arg0 eventDict:(id)arg1 ;
-(void)applyClientStatusReportToAggregator:(id)arg0 ;
-(void)beginMonitoringPersistentFolders:(id)arg0 forAccount:(id)arg1 ;
-(void)dealloc;
-(void)delegateWithIDIsGoingAway:(id)arg0 ;
-(void)disable;
-(void)exitBlockingCallAndSendReplyToRequest:(id)arg0 withStatus:(NSInteger)arg1 ;
-(void)noteBlockedClientCallChange:(int)arg0 ;
-(void)noteRefreshClientCallChange:(int)arg0 ;
-(void)reconnectWithConnection:(id)arg0 ;
-(void)registerForInterrogation;
-(void)unregisterForInterrogation;


@end


#endif