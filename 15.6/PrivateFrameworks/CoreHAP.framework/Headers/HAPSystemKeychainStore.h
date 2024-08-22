// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPSYSTEMKEYCHAINSTORE_H
#define HAPSYSTEMKEYCHAINSTORE_H

@class HMFObject, NSString;
@protocol HAPKeyStore, HMFDumpState, HMFLogging, HAPSystemKeychainStore, OS_dispatch_queue;



@interface HAPSystemKeychainStore : HMFObject <HAPKeyStore, HMFDumpState, HMFLogging, HAPSystemKeychainStore>



@property (retain, nonatomic) NSString *activeControllerIdentifier; // ivar: _activeControllerIdentifier
@property (readonly, nonatomic) NSString *activeControllerPairingIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property int keychainStoreUpdatedNotificationToken; // ivar: _keychainStoreUpdatedNotificationToken
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)getDictionaryFromGenericData:(id)arg0 ;
+(id)logCategory;
+(id)serializeDictionary:(id)arg0 ;
+(id)systemStore;
+(id)updateAccessoryPairingGenericData:(id)arg0 updatedControllerKeyIdentifier:(id)arg1 ;
+(id)viewHintForType:(id)arg0 ;
-(BOOL)_getControllerPublicKey:(*id)arg0 secretKey:(*id)arg1 keyPair:(*id)arg2 username:(*id)arg3 allowCreation:(BOOL)arg4 forAccessory:(id)arg5 error:(*id)arg6 ;
-(BOOL)_getFirstAvailableControllerKeyChainItemForAccount:(id)arg0 publicKey:(*id)arg1 secretKey:(*id)arg2 userName:(*id)arg3 keyPair:(*id)arg4 error:(*id)arg5 ;
-(BOOL)_updateKeychainItemWithPlatformIdentifier:(*void)arg0 keychainItem:(id)arg1 error:(*id)arg2 ;
-(BOOL)createAccessoryPairingKey:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteAllPeripheralIdentifiers:(*id)arg0 ;
-(BOOL)deleteKeychainItem:(id)arg0 error:(*id)arg1 ;
-(BOOL)deletePairingKeysForAccessory:(id)arg0 error:(*id)arg1 ;
-(BOOL)deletePeripheralIdentifierForAccessoryIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)deserializeKeyPair:(id)arg0 publicKey:(*id)arg1 secretKey:(*id)arg2 error:(*id)arg3 ;
-(BOOL)establishRelationshipBetweenAccessoryAndControllerKey:(id)arg0 error:(*id)arg1 ;
-(BOOL)getAllAvailableControllerPublicKeys:(*id)arg0 secretKeys:(*id)arg1 userNames:(*id)arg2 error:(*id)arg3 ;
-(BOOL)getControllerPublicKey:(*id)arg0 secretKey:(*id)arg1 keyPair:(*id)arg2 username:(*id)arg3 allowCreation:(BOOL)arg4 error:(*id)arg5 ;
-(BOOL)getControllerPublicKey:(*id)arg0 secretKey:(*id)arg1 keyPair:(*id)arg2 username:(*id)arg3 allowCreation:(BOOL)arg4 forAccessory:(id)arg5 error:(*id)arg6 ;
-(BOOL)getControllerPublicKey:(*id)arg0 secretKey:(*id)arg1 username:(*id)arg2 allowCreation:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)getControllerPublicKey:(*id)arg0 secretKey:(*id)arg1 username:(*id)arg2 allowCreation:(BOOL)arg3 forAccessory:(id)arg4 error:(*id)arg5 ;
-(BOOL)getCurrentiCloudIdentifier:(*id)arg0 controllerPairingIdentifier:(*id)arg1 error:(*id)arg2 ;
-(BOOL)getOrCreateHH2ControllerKey:(*id)arg0 secretKey:(*id)arg1 keyPair:(*id)arg2 username:(*id)arg3 ;
-(BOOL)isAccessoryAssociatedWithControllerKey:(id)arg0 controllerID:(*id)arg1 ;
-(BOOL)registerAccessoryWithHomeKit:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeAccessoryKeyForName:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeAllAccessoryKeys:(*id)arg0 ;
-(BOOL)removeControllerKeyPairForIdentifier:(id)arg0 leaveTombstone:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)removeControllerKeyPairLeaveTombstone:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)removeControllerKeyPairWithError:(*id)arg0 ;
-(BOOL)saveHH2PairingIdentity:(id)arg0 syncable:(BOOL)arg1 ;
-(BOOL)saveKeyPair:(id)arg0 username:(id)arg1 syncable:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)saveLocalPairingIdentity:(id)arg0 syncable:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)savePeripheralIdentifier:(id)arg0 forAccessoryIdentifier:(id)arg1 protocolVersion:(NSUInteger)arg2 resumeSessionID:(NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)savePublicKey:(id)arg0 forAccessoryName:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateAccessoryPairingKey:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateActiveControllerPairingIdentifier:(id)arg0 ;
-(BOOL)updateCurrentiCloudIdentifier:(id)arg0 controllerPairingIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateKeychainItem:(id)arg0 createIfNeeded:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)updatePeripheralIdentifier:(id)arg0 forAccessoryIdentifier:(id)arg1 protocolVersion:(NSUInteger)arg2 previousVersion:(*NSUInteger)arg3 resumeSessionID:(NSUInteger)arg4 error:(*id)arg5 ;
-(id)_auditKeychainItems:(id)arg0 managedAccessories:(id)arg1 ;
-(id)_getControllerKeychainItemError:(*int)arg0 ;
-(id)_getControllerKeychainItemForKeyType:(id)arg0 error:(*int)arg1 ;
-(id)_getKeychainItemsForAccessGroup:(id)arg0 type:(id)arg1 account:(id)arg2 shouldReturnData:(BOOL)arg3 error:(*int)arg4 ;
-(id)_getLocalPairingIdentityAllowingCreation:(BOOL)arg0 error:(*id)arg1 ;
-(id)allAccessoryPairingKeys;
-(id)allKeychainItemsForType:(id)arg0 identifier:(id)arg1 syncable:(id)arg2 error:(*id)arg3 ;
-(id)allKeysForType:(id)arg0 error:(*id)arg1 ;
-(id)auditKeysOfManagedAccessories:(id)arg0 ;
-(id)dumpState;
-(id)getAssociatedControllerKeyForAccessory:(id)arg0 ;
-(id)getHH2ControllerKey;
-(id)getLocalPairingIdentity:(*id)arg0 ;
-(id)getOrCreateLocalPairingIdentity:(*id)arg0 ;
-(id)getPeripherialIdentifiersAndAccessoryNames;
-(id)init;
-(id)readAccessoryPairingKeyForAccessory:(id)arg0 error:(*id)arg1 ;
-(id)readControllerPairingKeyForAccessory:(id)arg0 error:(*id)arg1 ;
-(id)readPeripheralIdentifierForAccessoryIdentifier:(id)arg0 protocolVersion:(*NSUInteger)arg1 resumeSessionID:(*NSUInteger)arg2 error:(*id)arg3 ;
-(id)readPublicKeyForAccessoryName:(id)arg0 registeredWithHomeKit:(*BOOL)arg1 error:(*id)arg2 ;
-(int)_addKeychainItem:(id)arg0 logDuplicateItemError:(BOOL)arg1 ;
-(int)_createControllerPublicKey:(*id)arg0 secretKey:(*id)arg1 keyPair:(*id)arg2 username:(*id)arg3 ;
-(int)_deleteAllPeripheralIdentifiers;
-(int)_deletePeripheralIdentifierForAccessoryIdentifier:(id)arg0 ;
-(int)_getAllAvailableControllerPublicKeys:(*id)arg0 secretKeys:(*id)arg1 userNames:(*id)arg2 ;
-(int)_getControllerPublicKey:(*id)arg0 secretKey:(*id)arg1 keyPair:(*id)arg2 username:(*id)arg3 ;
-(int)_getPeripheralIdentifier:(*id)arg0 forAccessoryIdentifier:(id)arg1 protocolVersion:(*NSUInteger)arg2 resumeSessionID:(*NSUInteger)arg3 ;
-(int)_getPublicKey:(*id)arg0 registeredWithHomeKit:(*BOOL)arg1 forAccessoryName:(id)arg2 ;
-(int)_removeAccessoryKeyForName:(id)arg0 ;
-(int)_removeControllerKeyPairForIdentifier:(id)arg0 leaveTombstone:(BOOL)arg1 ;
-(int)_removeControllerKeyPairForKeyType:(id)arg0 identifier:(id)arg1 leaveTombstone:(BOOL)arg2 ;
-(int)_removeKeychainItem:(id)arg0 leaveTombstone:(BOOL)arg1 ;
-(int)_saveKeyPair:(id)arg0 username:(id)arg1 syncable:(BOOL)arg2 keyType:(id)arg3 ;
-(int)_savePeripheralIdentifier:(id)arg0 forAccessoryIdentifier:(id)arg1 protocolVersion:(NSUInteger)arg2 resumeSessionID:(NSUInteger)arg3 ;
-(int)_savePublicKey:(id)arg0 forAccessoryName:(id)arg1 ;
-(int)_updateCurrentiCloudIdentifier:(id)arg0 controllerPairingIdentifier:(id)arg1 ;
-(int)createHH2ControllerKey:(*id)arg0 secretKey:(*id)arg1 keyPair:(*id)arg2 username:(*id)arg3 ;
-(void)_updateKeychainItemToInvisible:(id)arg0 ;
-(void)configure;
-(void)dealloc;
-(void)ensureControllerKeyExistsForAllViews;


@end


#endif