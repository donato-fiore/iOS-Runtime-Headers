// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSYSYNCCOORDINATOR_H
#define PSYSYNCCOORDINATOR_H

@class NSXPCListener, NSMutableDictionary, NSXPCConnection, NSString;
@protocol NSXPCListenerDelegate, PSYActivity, PSYServiceSyncSessionDelegate, OS_dispatch_queue, PSYSyncCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "PSYServiceSyncSession.h"

@interface PSYSyncCoordinator : NSObject <NSXPCListenerDelegate, PSYActivity, PSYServiceSyncSessionDelegate>

 {
    NSXPCListener *_listener;
    id *_pendingCompletion;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    _opaque_pthread_mutex_t _delegateLock;
    id<PSYSyncCoordinatorDelegate> *_delegate;
    PSYServiceSyncSession *_activeSyncSession;
    int _syncSwitchIDToken;
    NSUInteger _syncRestriction;
    NSUInteger _syncIDOfStartedSync;
    BOOL _hasStartedListening;
    NSMutableDictionary *_nrDevices;
}


@property (readonly, nonatomic) PSYServiceSyncSession *activeSyncSession;
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PSYSyncCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly) Class superclass;


+(id)filteredErrorWithError:(id)arg0 ;
+(id)syncCoordinatorWithServiceName:(id)arg0 ;
+(void)initialize;
-(BOOL)_pairedSyncFinishedMigrationSyncWithPairingID:(id)arg0 ;
-(BOOL)_pairedSyncFinishedReunionSync;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(NSUInteger)_syncRestriction;
-(NSUInteger)readNotifyToken:(int)arg0 ;
-(NSUInteger)syncRestriction;
-(id)initWithServiceName:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 serviceLookupPath:(id)arg1 ;
-(id)progressHandler;
-(id)syncSessionForOptions:(id)arg0 supportsMigrationSync:(BOOL)arg1 ;
-(int)registerNotifyTokenWithName:(id)arg0 withBlock:(id)arg1 ;
-(int)registerNotifyTokenWithName:(id)arg0 withQueue:(id)arg1 withBlock:(id)arg2 ;
-(void)_cleanup;
-(void)_registerMonitorAllNRDevicesForMigrationChanges:(id)arg0 ;
-(void)_registerMonitorNRDevice:(id)arg0 forMigrationChanges:(id)arg1 ;
-(void)_syncRestrictionDidUpdate:(id)arg0 forServiceName:(id)arg1 ;
-(void)_unregisterNRDeviceMonitors;
-(void)abortSyncWithCompletion:(id)arg0 ;
-(void)beginDryRunSyncWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)beginSyncWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)deviceChanged:(id)arg0 ;
-(void)exitForTestInput:(id)arg0 ;
-(void)invalidateActiveSyncSession;
-(void)performDelegateBlock:(id)arg0 ;
-(void)registerForDeviceChangeNotifications;
-(void)reportProgress:(CGFloat)arg0 ;
-(void)syncDidComplete;
-(void)syncDidCompleteSending;
-(void)syncDidFailWithError:(id)arg0 ;
-(void)syncSession:(id)arg0 didFailWithError:(id)arg1 ;
-(void)syncSession:(id)arg0 reportProgress:(CGFloat)arg1 ;
-(void)syncSessionDidComplete:(id)arg0 ;
-(void)syncSessionDidCompleteSending:(id)arg0 ;
-(void)unregisterForDeviceChangeNotifications;


@end


#endif