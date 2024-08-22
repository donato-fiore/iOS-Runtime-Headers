// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DADAGENTMANAGER_H
#define DADAGENTMANAGER_H

@class NSArray, NSMutableDictionary, NSDictionary, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DADAgentManager : NSObject {
    NSArray *_activeAgents;
    NSObject<OS_dispatch_queue> *_activeAgentsQueue;
    NSMutableDictionary *_watchedIDs;
    unsigned int _pmNotifier;
    *IONotificationPort _pmPort;
    *__CFRunLoopSource _pmRunLoopSource;
    id *_startAgentsWhenSystemReadyBlock;
    NSObject<OS_dispatch_queue> *_CTCellularUsagePolicyNotificationQ;
    *__CTServerConnection _ctServerConnection;
    NSDictionary *_wirelessPolicies;
    int _pendingAccountSetupCount;
}


@property (readonly, nonatomic) NSArray *activeAgents;
@property (readonly, nonatomic) NSMutableDictionary *disableMonitoringAgentsTokens; // ivar: _disableMonitoringAgentsTokens
@property (nonatomic) NSUInteger nextDisableMonitoringAgentsToken; // ivar: _nextDisableMonitoringAgentsToken
@property (retain, nonatomic) NSMutableArray *subCalHandlers; // ivar: _subCalHandlers


+(BOOL)_shouldAccount:(id)arg0 syncWhenSyncingParentAccountWithID:(id)arg1 ;
+(BOOL)wirelessPolicy:(id)arg0 isMorePermissiveThanPolicy:(id)arg1 ;
+(id)sharedManager;
-(BOOL)_clearOrphanedSubscribedCalendars:(*void)arg0 eventAccountIds:(id)arg1 ;
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
-(id)accountWithAccountID:(id)arg0 ;
-(id)accountWithAccountID:(id)arg0 andClassName:(id)arg1 ;
-(id)accountsProviderWithDBHelper:(id)arg0 ;
-(id)activeAccountBundleIDs;
-(id)agentWithAccountID:(id)arg0 ;
-(id)agentsToSyncForAccountID:(id)arg0 ;
-(id)appleAccountsMatchingClass:(id)arg0 errror:(*id)arg1 ;
-(id)changeHistoryClerkWithDBHelper:(id)arg0 ;
-(id)containerProviderWithDBHelper:(id)arg0 ;
-(id)currentPolicyKeyForAccount:(id)arg0 ;
-(id)init;
-(id)stateString;
-(void)_calDaysToSyncDidChange;
-(void)_clearOrphanedStores;
-(void)_deviceDidWake;
-(void)_deviceWillSleep;
-(void)_handleCellularDataUsageChangedNotification;
-(void)_loadAndStartMonitoringAgents;
-(void)_registerForCTDataUsageNotificaiton;
-(void)_resetMonitoringRequestsAndLoadAgents;
-(void)_sendAccountAnalytics;
-(void)_stopMonitoringAndSaveAgents;
-(void)addPendingAccountSetup;
-(void)dealloc;
-(void)disableActiveSync;
-(void)enableActiveSync;
-(void)enableMonitoringAgentsWithToken:(NSUInteger)arg0 ;
-(void)getStatusReportDictsWithCompletionBlock:(id)arg0 ;
-(void)handleURLString:(id)arg0 ;
-(void)loadAgents;
-(void)processMeetingRequestDatas:(id)arg0 deliveryIdsToClear:(id)arg1 deliveryIdsToSoftClear:(id)arg2 inFolderWithId:(id)arg3 forAccountWithId:(id)arg4 callback:(id)arg5 ;
-(void)registerForBuddy;
-(void)removePendingAccountSetup;
-(void)reportFolderItemsSyncSuccess:(BOOL)arg0 forFolderWithID:(id)arg1 withItemsCount:(NSUInteger)arg2 andAccountWithID:(id)arg3 ;
-(void)requestPolicyUpdateForAccount:(id)arg0 ;
-(void)saveAndReleaseAgents;


@end


#endif