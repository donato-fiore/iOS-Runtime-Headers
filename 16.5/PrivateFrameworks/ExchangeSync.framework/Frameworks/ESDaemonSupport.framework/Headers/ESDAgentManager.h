// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ESDAGENTMANAGER_H
#define ESDAGENTMANAGER_H

@class NSArray, NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ESDAgentManager : NSObject {
    NSArray *_activeAgents;
    NSObject<OS_dispatch_queue> *_activeAgentsQueue;
    NSMutableDictionary *_watchedIDs;
    unsigned int _pmNotifier;
    *IONotificationPort _pmPort;
    *__CFRunLoopSource _pmRunLoopSource;
    id *_startAgentsWhenSystemReadyBlock;
    NSObject<OS_dispatch_queue> *_CTCellularUsagePolicyNotificationQ;
    *__CTServerConnection _ctServerConnection;
    int _pendingAccountSetupCount;
}


@property (readonly, nonatomic) NSArray *activeAgents;
@property (readonly, nonatomic) NSMutableDictionary *disableMonitoringAgentsTokens; // ivar: _disableMonitoringAgentsTokens
@property (nonatomic) NSUInteger nextDisableMonitoringAgentsToken; // ivar: _nextDisableMonitoringAgentsToken
@property (retain, nonatomic) NSMutableArray *subCalHandlers; // ivar: _subCalHandlers


+(id)sharedManager;
-(BOOL)_clearOrphanedStoresInCalendarDatabase:(struct CalDatabase *)arg0 eventAccountIds:(id)arg1 toDoAccountIds:(id)arg2 ;
-(BOOL)_hasDataclassWeCareAbout:(id)arg0 ;
-(BOOL)_systemMayNowBeReady;
-(BOOL)addPersistMonitoringAccountID:(id)arg0 folderIDs:(id)arg1 clientID:(id)arg2 ;
-(BOOL)clearPersistMonitoringAccountID:(id)arg0 clientID:(id)arg1 ;
-(BOOL)hasActiveAccounts;
-(BOOL)hasEASAccountConfigured;
-(BOOL)hasPendingAccountSetup;
-(BOOL)processFolderChange:(id)arg0 forAccountWithID:(id)arg1 completionBlock:(id)arg2 ;
-(BOOL)removePersistMonitoringAccountID:(id)arg0 folderIDs:(id)arg1 clientID:(id)arg2 ;
-(BOOL)resetCertWarningsForAccountWithId:(id)arg0 andDataclasses:(NSInteger)arg1 ;
-(BOOL)resumeMonitoringAccountID:(id)arg0 folderIDs:(id)arg1 ;
-(BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg0 deleted:(id)arg1 foldersTag:(id)arg2 forAccountID:(id)arg3 ;
-(BOOL)startMonitoringAccountID:(id)arg0 folderIDs:(id)arg1 ;
-(BOOL)stopMonitoringAccountID:(id)arg0 folderIDs:(id)arg1 ;
-(BOOL)suspendMonitoringAccountID:(id)arg0 folderIDs:(id)arg1 ;
-(BOOL)updateContentsOfAllFoldersForAccountID:(id)arg0 andDataclasses:(NSInteger)arg1 isUserRequested:(BOOL)arg2 ;
-(BOOL)updateContentsOfFolders:(id)arg0 forAccountID:(id)arg1 andDataclasses:(NSInteger)arg2 isUserRequested:(BOOL)arg3 ;
-(BOOL)updateFolderListForAccountID:(id)arg0 andDataclasses:(NSInteger)arg1 requireChangedFolders:(BOOL)arg2 isUserRequested:(BOOL)arg3 ;
-(NSUInteger)disableMonitoringAgents;
-(id)_accountInfoPath;
-(id)_configFileForAgent:(id)arg0 ;
-(id)_phoneVersion;
-(id)accountWithAccountID:(id)arg0 ;
-(id)accountWithAccountID:(id)arg0 andClassName:(id)arg1 ;
-(id)accountsProviderWithDBHelper:(id)arg0 ;
-(id)activeAccountBundleIDs;
-(id)agentWithAccountID:(id)arg0 ;
-(id)changeHistoryClerkWithDBHelper:(id)arg0 ;
-(id)currentPolicyKeyForAccount:(id)arg0 ;
-(id)init;
-(id)stateString;
-(void)_addAccountAggdEntries;
-(void)_calDaysToSyncDidChange;
-(void)_clearOrphanedStores;
-(void)_deviceDidWake;
-(void)_deviceWillSleep;
-(void)_handleCellularDataUsageChangedNotification;
-(void)_loadAndStartExchangeMonitoringAgents;
-(void)_registerForCTDataUsageNotificaiton;
-(void)_resetMonitoringRequestsAndLoadAgents;
-(void)_stopMonitoringAndSaveAgents;
-(void)addPendingAccountSetup;
-(void)cleanupLaunchdSemaphore;
-(void)dealloc;
-(void)disableActiveSync;
-(void)disableDaemon;
-(void)enableActiveSync;
-(void)enableDaemon;
-(void)enableMonitoringAgentsWithToken:(NSUInteger)arg0 ;
-(void)getStatusReportDictsWithCompletionBlock:(id)arg0 ;
-(void)handleURLString:(id)arg0 ;
-(void)loadAgents;
-(void)loadExchangeAgents;
-(void)processMeetingRequestDatas:(id)arg0 deliveryIdsToClear:(id)arg1 deliveryIdsToSoftClear:(id)arg2 inFolderWithId:(id)arg3 forAccountWithId:(id)arg4 callback:(id)arg5 ;
-(void)registerForBuddy;
-(void)removePendingAccountSetup;
-(void)reportFolderItemsSyncSuccess:(BOOL)arg0 forFolderWithID:(id)arg1 withItemsCount:(NSUInteger)arg2 andAccountWithID:(id)arg3 ;
-(void)requestPolicyUpdateForAccount:(id)arg0 ;
-(void)saveAndReleaseAgents;


@end


#endif