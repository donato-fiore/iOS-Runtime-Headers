// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ESDCLIENT_H
#define ESDCLIENT_H

@class DADisableableObject, NSMutableDictionary, NSString;
@protocol OS_xpc_object;



@interface ESDClient : DADisableableObject

@property (retain, nonatomic) NSMutableDictionary *accountTimers; // ivar: _accountTimers
@property (retain, nonatomic) NSMutableDictionary *actionDelegatesById; // ivar: _actionDelegatesById
@property (retain, nonatomic) NSMutableDictionary *agentMonitoringTokens; // ivar: _agentMonitoringTokens
@property (retain, nonatomic) NSMutableDictionary *busyIDs; // ivar: _busyIDs
@property (retain, nonatomic) NSString *clientBundleID; // ivar: _clientBundleID
@property (retain, nonatomic) NSString *clientName; // ivar: _clientName
@property (retain, nonatomic) NSString *clientUniqueID; // ivar: _clientUniqueID
@property (retain, nonatomic) NSObject<OS_xpc_object> *conn; // ivar: _conn
@property (nonatomic) int numOutstandingBlockingClientCalls; // ivar: _numOutstandingBlockingClientCalls
@property (nonatomic) int numOutstandingRefreshPriorityClientCalls; // ivar: _numOutstandingRefreshPriorityClientCalls
@property (readonly, nonatomic) BOOL persistent; // ivar: _persistent
@property (retain, nonatomic) NSMutableDictionary *updatedIDs; // ivar: _updatedIDs
@property (retain, nonatomic) NSMutableDictionary *watchedIDs; // ivar: _watchedIDs


+(id)clientsToInterrogate;
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
-(void)_cancelServerContactsSearch:(id)arg0 ;
-(void)_checkIsOofSettingsSupported:(id)arg0 ;
-(void)_clearAllStopMonitoringAgentsTokens;
-(void)_clientDiedWithReason:(id)arg0 ;
-(void)_dispatchMessage:(id)arg0 ;
-(void)_fillOutEASTimeZoneInfo:(id)arg0 ;
-(void)_foldersUpdated:(id)arg0 ;
-(void)_getAccountExternalIdentification:(id)arg0 eventDict:(id)arg1 ;
-(void)_getActiveSyncDeviceIdentifier:(id)arg0 ;
-(void)_getCurrentPolicyKey:(id)arg0 ;
-(void)_getStatusReports:(id)arg0 ;
-(void)_handleURL:(id)arg0 ;
-(void)_openServerContactsSearch:(id)arg0 ;
-(void)_openServerOofSettingsRequest:(id)arg0 ;
-(void)_performCalendarDirectorySearch:(id)arg0 eventDict:(id)arg1 ;
-(void)_processFolderChange:(id)arg0 ;
-(void)_processMeetingRequests:(id)arg0 ;
-(void)_registerForInterrogation:(id)arg0 ;
-(void)_removeBusyFolderIDs:(id)arg0 forAccountWithID:(id)arg1 ;
-(void)_removeWatchedFolderIDs:(id)arg0 forAccountWithID:(id)arg1 ;
-(void)_reportFolderItemsSyncResult:(id)arg0 ;
-(void)_reportSharedCalendarAsJunkEvent:(id)arg0 eventDict:(id)arg1 ;
-(void)_requestAllFolderContentsUpdate:(id)arg0 ;
-(void)_requestAllFolderContentsUpdateForAccountId:(id)arg0 dataclasses:(NSInteger)arg1 isUserRequested:(BOOL)arg2 ;
-(void)_requestCalendarAvailability:(id)arg0 eventDict:(id)arg1 ;
-(void)_requestClientStatusDump:(id)arg0 ;
-(void)_requestFolderContentsUpdate:(id)arg0 ;
-(void)_requestFolderContentsUpdateForFolders:(id)arg0 accountId:(id)arg1 dataclasses:(NSInteger)arg2 isUserRequested:(BOOL)arg3 ;
-(void)_requestFolderListUpdate:(id)arg0 ;
-(void)_requestFolderListUpdateForAccountId:(id)arg0 dataclasses:(NSInteger)arg1 requireChangedFolders:(BOOL)arg2 isUserRequested:(BOOL)arg3 ;
-(void)_requestPolicyUpdate:(id)arg0 ;
-(void)_resetCertWarnings:(id)arg0 ;
-(void)_resetThrottleTimers:(id)arg0 ;
-(void)_respondToSharedCalendarEvent:(id)arg0 eventDict:(id)arg1 ;
-(void)_resumeMonitoringFolders:(id)arg0 ;
-(void)_setFolderIdsThatExternalClientsCareAbout:(id)arg0 ;
-(void)_startMonitoringAgents:(id)arg0 ;
-(void)_startMonitoringAgentsWithClientToken:(NSUInteger)arg0 ;
-(void)_startMonitoringAgentsWithServerToken:(NSUInteger)arg0 ;
-(void)_stopMonitoringAgents:(id)arg0 ;
-(void)_stopMonitoringAgentsWithClientToken:(NSUInteger)arg0 ;
-(void)_stopMonitoringFolders:(id)arg0 ;
-(void)_suspendMonitoringFolders:(id)arg0 ;
-(void)applyClientStatusReportToAggregator:(id)arg0 ;
-(void)beginMonitoringPersistentFolders:(id)arg0 forAccount:(id)arg1 ;
-(void)dealloc;
-(void)delegateWithIDIsGoingAway:(id)arg0 ;
-(void)disable;
-(void)noteBlockedClientCallChange:(int)arg0 ;
-(void)noteRefreshClientCallChange:(int)arg0 ;
-(void)reconnectWithConnection:(id)arg0 ;
-(void)registerForInterrogation;
-(void)unregisterForInterrogation;


@end


#endif