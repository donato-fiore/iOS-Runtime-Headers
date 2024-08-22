// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSIDSSYNCENGINE_H
#define DNDSIDSSYNCENGINE_H

@class NSMapTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol DNDSSyncServiceDelegate, DNDSKeybagStateObserver, DNDSSysdiagnoseDataProvider, DNDSIDSSyncEngineSynchronizing, DNDSSyncService, DNDSIDSSyncEngineMetadataStoring, DNDSKeybagStateProviding, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "DNDSPairedDevice.h"

@interface DNDSIDSSyncEngine : NSObject <DNDSSyncServiceDelegate, DNDSKeybagStateObserver, DNDSSysdiagnoseDataProvider, DNDSIDSSyncEngineSynchronizing>

 {
    NSMapTable *_sourcesByZone;
    id<DNDSSyncService> *_syncService;
    DNDSPairedDevice *_pairedDevice;
    NSUInteger _syncState;
    id<DNDSIDSSyncEngineMetadataStoring> *_metadataStore;
    id<DNDSKeybagStateProviding> *_keybag;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_retryTimer;
    NSObject<OS_dispatch_source> *_inflightExpirationTimer;
    NSUInteger _retriesAvailable;
    NSUInteger _inflightExpirationTime;
    NSMutableDictionary *_inflightMetadataByRequestIdentifier;
    NSMutableDictionary *_inflightDateByRequestIdentifier;
    NSMutableSet *_inflightMetadata;
    NSUInteger _role;
    id *_didReceiveUnlockMessage;
    id *_didFireMetadataExpirationTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger pairSyncState;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;


-(BOOL)_queue_cancelInflightExpirationTimer;
-(BOOL)_queue_cancelRetryTimer;
-(BOOL)syncService:(id)arg0 shouldAcceptIncomingMessage:(id)arg1 withVersionNumber:(NSUInteger)arg2 messageType:(id)arg3 fromDeviceIdentifier:(id)arg4 ;
-(CGFloat)_queue_earliestExpirationTimeSinceNowForInflightMetadata;
-(id)_queue_dataSourceForZone:(id)arg0 ;
-(id)inflightMetadata;
-(id)initWithMetadataStore:(id)arg0 syncService:(id)arg1 keybag:(id)arg2 ;
-(id)initWithMetadataStore:(id)arg0 syncService:(id)arg1 keybag:(id)arg2 role:(NSUInteger)arg3 syncState:(NSUInteger)arg4 inflightExpirationTime:(NSUInteger)arg5 ;
-(id)sysdiagnoseDataForDate:(id)arg0 redacted:(BOOL)arg1 ;
-(void)_queue_handleAckMessage:(id)arg0 fromPairedDeviceIdentifier:(id)arg1 ;
-(void)_queue_handleMessage:(id)arg0 fromPairedDeviceIdentifier:(id)arg1 ;
-(void)_queue_handleReplaceMessage:(id)arg0 fromPairedDeviceIdentifier:(id)arg1 ;
-(void)_queue_handleResyncMessage:(id)arg0 fromPairedDeviceIdentifier:(id)arg1 ;
-(void)_queue_handleUnlockMessage:(id)arg0 fromPairedDeviceIdentifier:(id)arg1 ;
-(void)_queue_handleUpdateMessage:(id)arg0 fromPairedDeviceIdentifier:(id)arg1 ;
-(void)_queue_removeAllInflightMetadata;
-(void)_queue_removeAllInflightMetadataWithExpirationDate:(id)arg0 ;
-(void)_queue_resetRetryTimer;
-(void)_queue_restartInflightExpirationTimer;
-(void)_queue_sendAckWithMetadata:(id)arg0 forAction:(id)arg1 toDeviceWithIdentifier:(id)arg2 ;
-(void)_queue_sendModifiedRecordIDs:(id)arg0 deletedRecordIDs:(id)arg1 toDeviceWithIdentifier:(id)arg2 ;
-(void)_queue_sendResyncMessageToDeviceWithIdentifier:(id)arg0 ;
-(void)_queue_sendUnlockMessageToDeviceWithIdentifier:(id)arg0 ;
-(void)_queue_startInflightExpirationTimer;
-(void)_queue_startRetryTimer;
-(void)_queue_syncDataSourcesToDeviceWithIdentifier:(id)arg0 ;
-(void)_queue_validate;
-(void)addRecordIDsToSave:(id)arg0 recordIDsToDelete:(id)arg1 ;
-(void)keybagDidUnlockForTheFirstTime:(id)arg0 ;
-(void)setDataSource:(id)arg0 forZone:(id)arg1 ;
-(void)setDidFireMetadataExpirationTimer:(id)arg0 ;
-(void)setDidReceiveUnlockMessage:(id)arg0 ;
-(void)setPairedDevice:(id)arg0 syncEnabled:(BOOL)arg1 ;
-(void)sync;
-(void)syncService:(id)arg0 didReceiveMessage:(id)arg1 withVersionNumber:(NSUInteger)arg2 messageType:(id)arg3 fromDeviceIdentifier:(id)arg4 ;
-(void)syncService:(id)arg0 didSendWithRequestIdentifier:(id)arg1 withSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)validate;


@end


#endif