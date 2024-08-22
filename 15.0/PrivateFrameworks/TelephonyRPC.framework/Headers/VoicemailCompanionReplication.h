// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VOICEMAILCOMPANIONREPLICATION_H
#define VOICEMAILCOMPANIONREPLICATION_H

@class NPSDomainAccessor, NSMutableArray, PSYSyncCoordinator, PSYServiceSyncSession, VMVoicemailManager, NSString, SYService;
@protocol SYServiceDelegate, PSYSyncCoordinatorDelegate, NPHVMSessionDelegate, OS_dispatch_queue, OS_os_transaction, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "NPHVMSyncSessionManager.h"

@interface VoicemailCompanionReplication : NSObject <SYServiceDelegate, PSYSyncCoordinatorDelegate, NPHVMSessionDelegate>

 {
    NPSDomainAccessor *_domainAccessor;
    _opaque_pthread_mutex_t _domainAccessorMutexLock;
    NSObject<OS_dispatch_queue> *_companionSyncQueue;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    NSObject<OS_dispatch_queue> *_vmSyncServiceQueue;
    NSMutableArray *_vmAfterSyncComplete;
    PSYSyncCoordinator *_coordinator;
    NPHVMSyncSessionManager *_vmSyncSessionManager;
    PSYServiceSyncSession *_vmServiceSyncSession;
    _opaque_pthread_mutex_t _syncTransactionMutex;
    NSObject<OS_os_transaction> *_syncTransaction;
    VMVoicemailManager *_voicemailManager;
    BOOL _deltaSyncSuccessful;
    NSObject<OS_dispatch_semaphore> *waitForFirstSyncRestrictionSemaphore;
    BOOL _didSuspendCompanionSyncQueue;
    NSObject<OS_dispatch_semaphore> *vmdIsReadySemaphore;
    BOOL _syncRestrictionsAtStartup;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL sigtermCalled; // ivar: _sigtermCalled
@property (readonly) Class superclass;
@property (retain, nonatomic) SYService *vmSyncService; // ivar: _vmSyncService


-(BOOL)service:(id)arg0 startSession:(id)arg1 error:(*id)arg2 ;
-(BOOL)syncSession:(id)arg0 resetDataStoreWithError:(*id)arg1 ;
-(NSInteger)indexOfVoicemail:(id)arg0 inArray:(id)arg1 ;
-(id)changeSetForRemoteVoicemails:(id)arg0 fromVMVoicemails:(id)arg1 ;
-(id)init;
-(id)listOfVoicemailsToSync;
-(id)remoteVoicemails;
-(id)vmMetaVoicemailsToSync;
-(id)voicemailChangeSetFrom:(id)arg0 ;
-(void)_deltaSyncIsReunion:(BOOL)arg0 ;
-(void)_enqueueAllVoicemailsAndLockSyncTransactionMutex;
-(void)_handleVoicemailSubscriptionStateStatusChanged:(id)arg0 ;
-(void)_handleVoicemailsChangedNotification:(id)arg0 ;
-(void)_initializeDomainAccessor;
-(void)_performAfterFirstDeviceUnlockAndSyncRestrictionNone:(id)arg0 ;
-(void)_registerForNotifications;
-(void)_retrySyncSession:(id)arg0 ;
-(void)dealloc;
-(void)handleSIGTERM;
-(void)removeFromRemoteVoicemails:(id)arg0 ;
-(void)reportProgress:(CGFloat)arg0 ;
-(void)service:(id)arg0 encounteredError:(id)arg1 context:(id)arg2 ;
-(void)service:(id)arg0 sessionEnded:(id)arg1 error:(id)arg2 ;
-(void)serviceDidPairDevice:(id)arg0 ;
-(void)setRemoteVoicemails:(id)arg0 ;
-(void)syncCoordinator:(id)arg0 beginSyncSession:(id)arg1 ;
-(void)syncCoordinator:(id)arg0 didInvalidateSyncSession:(id)arg1 ;
-(void)syncCoordinatorDidChangeSyncRestriction:(id)arg0 ;
-(void)syncSession:(id)arg0 applyChanges:(id)arg1 completion:(id)arg2 ;
-(void)syncSession:(id)arg0 didEndWithError:(id)arg1 ;
-(void)waitForVMDToBeUpAndRunning;


@end


#endif