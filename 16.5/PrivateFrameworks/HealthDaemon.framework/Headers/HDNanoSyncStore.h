// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDNANOSYNCSTORE_H
#define HDNANOSYNCSTORE_H

@class NSString, NSMutableDictionary, NSMutableArray, NSUUID, NSDate, NSError, NSArray, IDSDevice, NRDevice, HKNanoSyncPairedDeviceInfo, NSSet;
@protocol NRDevicePropertyObserver, HDSyncStore, HDNanoSyncStoreDelegate;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDNanoPairingEntity.h"
#import "HDNanoSyncRestoreSession.h"

@interface HDNanoSyncStore : NSObject <NRDevicePropertyObserver, HDSyncStore>

 {
    HDProfile *_profile;
    NSString *_remoteSystemBuildVersion;
    NSString *_remoteProductType;
    HDNanoPairingEntity *_pairingEntity;
    NSMutableDictionary *_pendingRequestContexts;
    int _protocolVersion;
    BOOL _active;
    BOOL _invalidated;
    NSMutableArray *_incomingSyncObserverTimers;
    NSUUID *_lastIncompleteIncomingSyncUUID;
    NSDate *_lastIncompleteIncomingSyncDate;
    NSDate *_lastCompleteIncomingSyncDate;
    NSError *_lastCompleteIncomingSyncError;
    NSMutableDictionary *_expectedSequenceNumbers;
    NSArray *_orderedSyncEntities;
    BOOL _isTinkerPairing;
    IDSDevice *_identityServicesDevice;
    NRDevice *_nanoRegistryDevice;
}


@property (readonly, getter=isActive) BOOL active;
@property (readonly, getter=isAltAccount) BOOL altAccount;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDNanoSyncStoreDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) IDSDevice *device;
@property (readonly, copy) HKNanoSyncPairedDeviceInfo *deviceInfo;
@property (readonly, copy) NSString *deviceName;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSUUID *healthUUID;
@property (readonly, getter=isInvalidated) BOOL invalidated;
@property (readonly) NSDate *lastInactiveDate;
@property (readonly, getter=isMaster) BOOL master; // ivar: _master
@property (readonly) NSUUID *nanoRegistryUUID;
@property (nonatomic) BOOL needsSyncOnUnlock; // ivar: _needsSyncOnUnlock
@property (readonly, copy, nonatomic) NSSet *obliteratedDatabaseUUIDs; // ivar: _obliteratedDatabaseUUIDs
@property (copy, nonatomic) NSUUID *persistentUUID;
@property (readonly) int protocolVersion;
@property (readonly, copy) NSString *remoteProductType;
@property (readonly, copy) NSString *remoteSystemBuildVersion;
@property (readonly, nonatomic, getter=isRestoreComplete) BOOL restoreComplete;
@property (readonly, nonatomic) HDNanoSyncRestoreSession *restoreSession; // ivar: _restoreSession
@property (readonly, nonatomic) NSInteger restoreState; // ivar: _restoreState
@property (readonly, copy) NSString *sourceBundleIdentifier;
@property (readonly) Class superclass;
@property (readonly) NSInteger syncStoreType;


+(id)nanoSyncStoreWithProfile:(id)arg0 device:(id)arg1 delegate:(id)arg2 tinkerPaired:(BOOL)arg3 ;
+(id)orderedSyncEntitiesForProfile:(id)arg0 protocolVersion:(int)arg1 companion:(BOOL)arg2 ;
-(BOOL)canRecieveSyncObjectsForEntityClass:(Class)arg0 ;
-(BOOL)enforceSyncEntityOrdering;
-(BOOL)resetProvenanceWithError:(*id)arg0 ;
-(BOOL)shouldContinueAfterAnchorValidationError:(id)arg0 ;
-(BOOL)shouldEnforceSequenceOrdering;
-(BOOL)supportsSpeculativeChangesForSyncEntityClass:(Class)arg0 ;
-(BOOL)validatePairingUUIDsWithIncomingMessage:(id)arg0 ;
-(NSInteger)expectedSequenceNumberForSyncEntityClass:(Class)arg0 ;
-(NSInteger)syncEpoch;
-(NSInteger)syncProvenance;
-(id)beginRestoreSessionWithUUID:(id)arg0 timeout:(CGFloat)arg1 timeoutHandler:(id)arg2 ;
-(id)createRequestWithMessageID:(unsigned short)arg0 ;
-(id)databaseIdentifier;
-(id)diagnosticDescription;
-(id)nanoSyncStoreForProtocolVersion:(int)arg0 ;
-(id)orderedSyncEntities;
-(id)pendingRequestContextForUUID:(id)arg0 ;
-(id)profile;
-(id)syncEntityDependenciesForSyncEntity:(Class)arg0 ;
-(id)syncStoreDefaultSourceBundleIdentifier;
-(id)syncStoreIdentifier;
// -(void)addIncomingSyncObserverWithTimeout:(CGFloat)arg0 timeoutHandler:(id)arg1 completion:(unk)arg2  ;
-(void)addPendingRequestContext:(id)arg0 forUUID:(id)arg1 ;
-(void)configureOutgoingResponse:(id)arg0 ;
-(void)dealloc;
-(void)device:(id)arg0 propertyDidChange:(id)arg1 fromValue:(id)arg2 ;
-(void)didReceiveRequestWithChangeSet:(id)arg0 ;
-(void)finishRestoreSessionWithError:(id)arg0 ;
-(void)invalidate;
-(void)prepareForObliteration;
-(void)removeExpiredIncomingSyncObservers;
-(void)removePendingRequestContextForUUID:(id)arg0 ;
-(void)setExpectedSequenceNumber:(NSInteger)arg0 forSyncEntityClass:(Class)arg1 ;


@end


#endif