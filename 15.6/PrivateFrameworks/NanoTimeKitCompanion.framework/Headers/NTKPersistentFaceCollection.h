// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKPERSISTENTFACECOLLECTION_H
#define NTKPERSISTENTFACECOLLECTION_H

@class NSXPCConnection, NSNumber, NSArray, NSUUID, NSMutableArray, NSString;
@protocol NTKFaceObserver, NTKCollectionClient;


#import "NTKFaceCollection.h"

@interface NTKPersistentFaceCollection : NTKFaceCollection <NTKFaceObserver, NTKCollectionClient>

 {
    BOOL _hasLoaded;
    NSXPCConnection *_connection;
    BOOL _registrationNeeded;
    NSNumber *_seqId;
    NSArray *_referenceOrderedUUIDs;
    NSUUID *_referenceSelectedUUID;
    BOOL _suppressingFaceObserverCallbacks;
    BOOL _updatesFromDaemonSuspended;
    NSMutableArray *_updatesFromDaemonEnqueuedWhileSuspended;
    NSString *_updateSuspensionIdentifier;
    BOOL _isLibraryCollection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasLoaded;
-(id)_serverProxy;
-(id)initWithCollectionIdentifier:(id)arg0 deviceUUID:(id)arg1 ;
-(void)_didAddFace:(id)arg0 withUUID:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)_didMoveFace:(id)arg0 withUUID:(id)arg1 toIndex:(NSUInteger)arg2 ;
-(void)_didRemoveFace:(id)arg0 withUUID:(id)arg1 ;
-(void)_didSelectFaceUUID:(id)arg0 suppressingCallback:(BOOL)arg1 ;
-(void)_fromDaemon_addFace:(id)arg0 forUUID:(id)arg1 ;
-(void)_fromDaemon_computeSelectedUUIDFromReferenceAndNotifySelected;
-(void)_fromDaemon_removeFaceForUUID:(id)arg0 ;
-(void)_fromDaemon_updateFaceForUUID:(id)arg0 withConfiguration:(id)arg1 ;
-(void)_fromDaemon_updateFaceForUUID:(id)arg0 withResourceDirectory:(id)arg1 ;
-(void)_fromDaemon_upgradeFace:(id)arg0 forUUID:(id)arg1 ;
-(void)_handleConnectionInterrupted;
-(void)_handleFlushCompleteForIdentifier:(id)arg0 ;
-(void)_notifyLoaded;
-(void)_notifyReset;
-(void)_performOrEnqueueUpdateOfType:(NSInteger)arg0 forFaceUUID:(id)arg1 block:(id)arg2 ;
-(void)_performSuppressingFaceObserverCallbacks:(id)arg0 ;
-(void)_pruneEnqueuedUpdatesMadeObsoleteByNewUpdate:(id)arg0 ;
-(void)_register;
-(void)_registerIfNeeded;
-(void)_sendToDaemonAddedFace:(id)arg0 forUUID:(id)arg1 ;
-(void)_sendToDaemonFlushWithIdentifier:(id)arg0 ;
-(void)_sendToDaemonOrderedUUIDs;
-(void)_sendToDaemonRemovedFaceForUUID:(id)arg0 ;
-(void)_sendToDaemonReset;
-(void)_sendToDaemonSelectedUUIDSuppressingCallback:(BOOL)arg0 ;
-(void)_sendToDaemonUpdatedConfigurationForFace:(id)arg0 withUUID:(id)arg1 ;
-(void)_sendToDaemonUpdatedResourceDirectoryForFace:(id)arg0 withUUID:(id)arg1 ;
-(void)_sendToDaemonUpgradeForFace:(id)arg0 withUUID:(id)arg1 ;
-(void)addFaceInstanceDescriptor:(id)arg0 forUUID:(id)arg1 seqId:(id)arg2 ;
-(void)dealloc;
-(void)faceConfigurationDidChange:(id)arg0 ;
-(void)faceResourceDirectoryDidChange:(id)arg0 ;
-(void)faceUpgradeOccurred:(id)arg0 ;
-(void)flushCompleteForIdentifier:(id)arg0 ;
-(void)loadFullCollectionWithOrderedUUIDs:(id)arg0 selectedUUID:(id)arg1 facesDescriptorsByUUID:(id)arg2 seqId:(id)arg3 completion:(id)arg4 ;
-(void)removeFaceForUUID:(id)arg0 seqId:(id)arg1 completion:(id)arg2 ;
-(void)reset;
-(void)resetClientCollectionWithCompletion:(id)arg0 ;
-(void)resumeUpdatesFromDaemon;
-(void)suspendUpdatesFromDaemon;
-(void)updateFaceForUUID:(id)arg0 withConfiguration:(id)arg1 seqId:(id)arg2 ;
-(void)updateFaceForUUID:(id)arg0 withResourceDirectory:(id)arg1 seqId:(id)arg2 completion:(id)arg3 ;
-(void)updateOrderedFaceUUIDs:(id)arg0 seqId:(id)arg1 ;
-(void)updateSelectedFaceUUID:(id)arg0 seqId:(id)arg1 ;
-(void)upgradeFaceInstanceDescriptor:(id)arg0 forUUID:(id)arg1 seqID:(id)arg2 ;


@end


#endif