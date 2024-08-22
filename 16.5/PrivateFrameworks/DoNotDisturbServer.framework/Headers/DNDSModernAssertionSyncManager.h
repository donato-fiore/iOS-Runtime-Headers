// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSMODERNASSERTIONSYNCMANAGER_H
#define DNDSMODERNASSERTIONSYNCMANAGER_H

@class NSMutableSet, NSString;
@protocol DNDSSyncServiceDelegate, DNDSSysdiagnoseDataProvider, DNDSAssertionSyncManager, OS_dispatch_queue, OS_dispatch_source, DNDSSyncService, DNDSBackingStore, OS_os_transaction, DNDSAssertionSyncManagerDataSource, DNDSAssertionSyncManagerDelegate;

#import <Foundation/Foundation.h>

#import "DNDSClientDetailsProvider.h"
#import "DNDSModernAssertionSyncMetadataStore.h"

@interface DNDSModernAssertionSyncManager : NSObject <DNDSSyncServiceDelegate, DNDSSysdiagnoseDataProvider, DNDSAssertionSyncManager>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_fuzzTimer;
    id<DNDSSyncService> *_localSyncService;
    id<DNDSSyncService> *_cloudSyncService;
    DNDSClientDetailsProvider *_clientDetailsProvider;
    DNDSModernAssertionSyncMetadataStore *_metadata;
    NSObject<DNDSBackingStore> *_metadataBackingStore;
    NSMutableSet *_timerQueuedDevices;
    BOOL _timerQueuedForceUpdate;
    NSUInteger _timerCurrentDelay;
    NSObject<OS_os_transaction> *_timerQueuedTransaction;
    os_unfair_lock_s _timerLock;
}


@property (weak, nonatomic) NSObject<DNDSAssertionSyncManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DNDSAssertionSyncManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;


-(BOOL)_maintainMetadataBackingStore;
-(BOOL)_saveMetadataToBackingStore;
-(BOOL)syncService:(id)arg0 shouldAcceptIncomingMessage:(id)arg1 withVersionNumber:(NSUInteger)arg2 messageType:(id)arg3 fromDeviceIdentifier:(id)arg4 ;
-(id)initWithClientDetailsProvider:(id)arg0 localSyncService:(id)arg1 cloudSyncService:(id)arg2 ;
-(id)sysdiagnoseDataForDate:(id)arg0 redacted:(BOOL)arg1 ;
-(void)_loadMetadataFromBackingStore;
-(void)_queue_handleDidSendRequestIdentifier:(id)arg0 withSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_queue_handleMessage:(id)arg0 withVersionNumber:(NSUInteger)arg1 fromDeviceIdentifier:(id)arg2 ;
-(void)_queue_sendStateSnapshotToPairedDevices:(id)arg0 force:(BOOL)arg1 ;
-(void)_queue_updateDevices;
-(void)dealloc;
-(void)forceUpdateAllDevices;
-(void)resume;
-(void)syncService:(id)arg0 didReceiveMessage:(id)arg1 withVersionNumber:(NSUInteger)arg2 messageType:(id)arg3 fromDeviceIdentifier:(id)arg4 ;
-(void)syncService:(id)arg0 didSendWithRequestIdentifier:(id)arg1 withSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)updateDevices:(id)arg0 ;
-(void)updateDevices:(id)arg0 force:(BOOL)arg1 shouldFuzz:(BOOL)arg2 ;
-(void)updateForModeAssertionUpdateResult:(id)arg0 ;
-(void)updateForStateUpdate:(id)arg0 ;


@end


#endif