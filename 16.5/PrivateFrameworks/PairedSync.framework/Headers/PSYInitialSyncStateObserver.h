// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSYINITIALSYNCSTATEOBSERVER_H
#define PSYINITIALSYNCSTATEOBSERVER_H

@class NSMutableDictionary, NSXPCConnection, NSString;
@protocol PSYSyncStateObserverInterface, OS_dispatch_queue, PSYInitialSyncStateObserverDelegate;

#import <Foundation/Foundation.h>


@interface PSYInitialSyncStateObserver : NSObject <PSYSyncStateObserverInterface>

 {
    NSMutableDictionary *_syncStateCache;
    NSMutableDictionary *_initialSyncStateCache;
    NSMutableDictionary *_syncStateEntryCache;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    BOOL _init;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    int _daemonStartedNotifyToken;
    int _syncSwitchNotifyToken;
    NSMutableDictionary *_nrDevices;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<PSYInitialSyncStateObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)syncProviderWithErrorHandler:(id)arg0 ;
-(void)_handleConnectionInvalidated;
-(void)_queue_initializeIfNotInitialized;
-(void)_queue_notifyCanRetryFailedRequests;
-(void)_queue_querySyncState;
-(void)_queue_updateSyncStates:(id)arg0 notifyDelegateOfChanges:(BOOL)arg1 ;
-(void)_registerMonitorAllNRDevicesForMigrationChanges:(id)arg0 ;
-(void)_registerMonitorNRDevice:(id)arg0 forMigrationChanges:(id)arg1 ;
-(void)_unregisterNRDeviceMonitors;
-(void)dealloc;
-(void)didUpdateSyncForPairingID:(id)arg0 ;
-(void)requestInitialNonMigrationSyncStateForPairingIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)requestInitialSyncStateForPairingIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)requestSyncStateForPairingIdentifier:(id)arg0 completion:(id)arg1 ;


@end


#endif