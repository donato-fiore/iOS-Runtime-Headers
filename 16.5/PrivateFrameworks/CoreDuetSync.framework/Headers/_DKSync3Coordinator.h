// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKSYNC3COORDINATOR_H
#define _DKSYNC3COORDINATOR_H

@class DKSync2Coordinator, NSUUID;
@protocol _DKSyncRemoteContextStorageDelegate, _CDRemoteUserContextServer, OS_os_transaction, _DKSyncRemoteContextStorage;



@interface _DKSync3Coordinator : DKSync2Coordinator <_DKSyncRemoteContextStorageDelegate, _CDRemoteUserContextServer>

 {
    NSUInteger _watchingDeviceTypes;
    NSObject<OS_os_transaction> *_watchingDevicesTransaction;
}


@property (readonly, nonatomic) NSUUID *deviceUUID;
@property (retain, nonatomic) NSObject<_DKSyncRemoteContextStorage> *transportMDCSRapport; // ivar: _transportMDCSRapport


-(BOOL)remoteContextStorage:(id)arg0 hasKnowledgeOfKeyPath:(id)arg1 ;
-(BOOL)subscribeToContextValueChangeNotificationsWithRegistration:(id)arg0 deviceIDs:(id)arg1 error:(*id)arg2 ;
-(BOOL)subscribeToDeviceStatusChangeNotificationsForDeviceTypes:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)unsubscribeFromContextValueChangeNotificationsWithRegistration:(id)arg0 deviceIDs:(id)arg1 error:(*id)arg2 ;
-(id)archivedObjectsForKeyPaths:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)keyPathsByDeviceIDFromRemoteKeyPaths:(id)arg0 ;
-(id)multiDeviceContextStoreDevices;
-(id)peersForContextStoreDeviceIDs:(id)arg0 ;
-(id)registrationIdentifierForPeer:(id)arg0 remoteRegistrationIdentifier:(id)arg1 ;
-(id)remoteContextStorage:(id)arg0 archivedObjectsForKeyPaths:(id)arg1 ;
-(id)sourceDeviceUUID;
-(void)_fetchPropertiesOfRemoteKeyPaths:(id)arg0 handler:(id)arg1 ;
-(void)_requestActivateDevicesWithHandler:(id)arg0 ;
-(void)_syncDisabledToggle;
-(void)_syncEnabledToggle;
-(void)dealloc;
-(void)fetchPropertiesOfRemoteKeyPaths:(id)arg0 handler:(id)arg1 ;
-(void)handleContextChangedNotification:(id)arg0 ;
-(void)handleStatusChangeForPeer:(id)arg0 previousTransports:(NSInteger)arg1 ;
-(void)remoteContextStorage:(id)arg0 registrationIdentifier:(id)arg1 setArchivedObjects:(id)arg2 peer:(id)arg3 ;
-(void)remoteContextStorage:(id)arg0 subscribeToChangesWithPeer:(id)arg1 registrationIdentifier:(id)arg2 predicate:(id)arg3 ;
-(void)remoteContextStorage:(id)arg0 unsubscribeFromChangesWithPeer:(id)arg1 registrationIdentifier:(id)arg2 predicate:(id)arg3 ;
-(void)requestActivateDevicesWithHandler:(id)arg0 ;
-(void)sendContextValuesToPeer:(id)arg0 registrationIdentifier:(id)arg1 keyPaths:(id)arg2 ;
-(void)setArchivedObjects:(id)arg0 peer:(id)arg1 ;
-(void)setupStorage;
-(void)start;
-(void)subscribeToContextValueChangeNotificationsWithRegistration:(id)arg0 deviceIDs:(id)arg1 handler:(id)arg2 ;
-(void)subscribeToDeviceStatusChangeNotificationsForDeviceTypes:(NSUInteger)arg0 handler:(id)arg1 ;
-(void)unsubscribeFromContextValueChangeNotificationsWithRegistration:(id)arg0 deviceIDs:(id)arg1 handler:(id)arg2 ;


@end


#endif