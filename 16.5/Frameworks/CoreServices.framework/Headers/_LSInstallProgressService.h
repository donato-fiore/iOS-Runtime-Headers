// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LSINSTALLPROGRESSSERVICE_H
#define _LSINSTALLPROGRESSSERVICE_H

@class NSMutableSet, NSMutableDictionary, NSMutableOrderedSet, NSArray, NSMutableArray, NSString;
@protocol NSXPCListenerDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "LSInstallProgressList.h"

@interface _LSInstallProgressService : NSObject <NSXPCListenerDelegate>

 {
    NSMutableSet *_observers;
    LSInstallProgressList *_progresses;
    NSMutableSet *_publishingStrings;
    NSMutableDictionary *_installIndexes;
    NSMutableOrderedSet *_orderedInstalls;
    NSMutableSet *_inactiveInstalls;
    NSMutableDictionary *_installTypes;
    NSObject<OS_dispatch_queue> *_installControlsQueue;
    NSObject<OS_dispatch_queue> *_observersQueue;
    NSArray *_journalledNotificationsToReplay;
    NSMutableArray *_startupJournalledNotifications;
    BOOL _replayingJournalToNewClients;
    NSObject<OS_dispatch_source> *_progressProportionsSaveTimerSource;
    os_unfair_lock_s _progressProportionsLock;
    NSMutableDictionary *_progressProportions;
    BOOL _usingNetwork;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
+(int)notificationTypeForOperation:(NSUInteger)arg0 ;
+(void)beginListening;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(NSUInteger)finalInstallPhaseForAppProxy:(id)arg0 ;
-(SEL)observerSelectorForNotification:(int)arg0 ;
-(id)_LSFindPlaceholderApplications;
-(id)_prepareApplicationProxiesForNotification:(int)arg0 identifiers:(id)arg1 withPlugins:(BOOL)arg2 ;
-(id)init;
-(id)loadJournalledNotificationsFromDisk;
-(id)parentProgressForApplication:(id)arg0 andPhase:(NSUInteger)arg1 isActive:(BOOL)arg2 ;
-(id)progressProportionsForBundleID:(id)arg0 ;
-(void)_placeholderIconUpdatedForApp:(id)arg0 ;
-(void)_placeholdersUninstalled:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)addSendNotificationFenceWithTimeout:(CGFloat)arg0 fenceBlock:(id)arg1 ;
-(void)coalesceProportionsSave;
-(void)createInstallProgressForApplication:(id)arg0 withPhase:(NSUInteger)arg1 andPublishingString:(id)arg2 reply:(id)arg3 ;
-(void)directlySendNotification:(int)arg0 withProxies:(id)arg1 toObserver:(id)arg2 ;
-(void)directlySendNotification:(int)arg0 withProxies:(id)arg1 toObserverProxy:(id)arg2 ;
-(void)discardProportionsForBundleID:(id)arg0 ;
-(void)dispatchJournalledNotificationsToConnectedClients;
-(void)dispatchJournalledNotificationsToObserver:(id)arg0 ;
-(void)getMaxProgressPhaseUnitsForLoading:(*int)arg0 restoring:(*int)arg1 installing:(*int)arg2 essentialAssets:(*int)arg3 forAppProxy:(id)arg4 ;
-(void)installationEndedForApplication:(id)arg0 withState:(NSUInteger)arg1 ;
-(void)installationFailedForApplication:(id)arg0 ;
-(void)loadProportions;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performJournalRecovery;
-(void)rebuildInstallIndexes;
-(void)removeObserver:(id)arg0 ;
-(void)restoreInactiveInstalls;
-(void)saveProportions;
-(void)sendDatabaseRebuiltNotification;
-(void)sendDatabaseRebuiltNotificationToObserver:(id)arg0 ;
-(void)sendNetworkUsageChangedNotification;
-(void)sendNotification:(id)arg0 ForPlugins:(id)arg1 ;
-(void)sendNotification:(id)arg0 forApplicationExtensionRecords:(id)arg1 ;
-(void)sendNotification:(int)arg0 forAppProxies:(id)arg1 Plugins:(BOOL)arg2 completion:(id)arg3 ;
-(void)sendNotification:(int)arg0 forApps:(id)arg1 withPlugins:(BOOL)arg2 completion:(id)arg3 ;
-(void)setProgressProportionsByPhase:(id)arg0 forInstallOfApplicationWithIdentifier:(id)arg1 completion:(id)arg2 ;


@end


#endif