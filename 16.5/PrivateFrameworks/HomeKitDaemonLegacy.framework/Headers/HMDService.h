// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSERVICE_H
#define HMDSERVICE_H

@class HMFObject, NSDictionary, NSString, NSUUID, NSArray, NSNumber, NSMutableDictionary, HMFMessageDispatcher, NSSet;
@protocol HMDBulletinIdentifiers, NSSecureCoding, HMFDumpState, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, OS_dispatch_queue, HMDServiceOwner;


#import "HMDHAPAccessory.h"
#import "HMDApplicationData.h"
#import "HMDBulletinBoardNotification.h"

@interface HMDService : HMFObject <HMDBulletinIdentifiers, NSSecureCoding, HMFDumpState, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver>

 {
    os_unfair_recursive_lock_s _lock;
}


@property (readonly, weak, nonatomic) HMDHAPAccessory *accessory; // ivar: _accessory
@property (retain, nonatomic) HMDApplicationData *appData; // ivar: _appData
@property (readonly, copy) NSDictionary *assistantObject;
@property (readonly, nonatomic) NSString *associatedServiceType; // ivar: _associatedServiceType
@property (retain, nonatomic) HMDBulletinBoardNotification *bulletinBoardNotification; // ivar: _bulletinBoardNotification
@property (retain, nonatomic) NSUUID *cachedAccessoryUUID; // ivar: _cachedAccessoryUUID
@property (copy, nonatomic) NSArray *characteristics; // ivar: _characteristics
@property (retain, nonatomic) NSNumber *configurationState; // ivar: _configurationState
@property (copy, nonatomic) NSString *configuredName; // ivar: _configuredName
@property (readonly, copy, nonatomic) NSString *contextID;
@property (readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property (readonly, getter=isCustom) BOOL custom;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *defaultName; // ivar: _defaultName
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *deviceLastRequestPresenceDateMap; // ivar: _deviceLastRequestPresenceDateMap
@property (copy, nonatomic) NSString *expectedConfiguredName; // ivar: _expectedConfiguredName
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (copy, nonatomic) NSNumber *instanceID; // ivar: _instanceID
@property (retain, nonatomic) NSNumber *labelIndex; // ivar: _labelIndex
@property (retain, nonatomic) NSNumber *labelNamespace; // ivar: _labelNamespace
@property (retain, nonatomic) NSNumber *lastKnownDiscoveryMode; // ivar: _lastKnownDiscoveryMode
@property (retain, nonatomic) NSNumber *lastKnownOperatingState; // ivar: _lastKnownOperatingState
@property (retain, nonatomic) NSNumber *lastKnownOperatingStateAbnormalReasons; // ivar: _lastKnownOperatingStateAbnormalReasons
@property (copy, nonatomic) NSString *lastSeenConfiguredName; // ivar: _lastSeenConfiguredName
@property (copy, nonatomic) NSArray *linkedServices; // ivar: _linkedServices
@property (readonly, nonatomic) NSString *logID; // ivar: _logID
@property (retain, nonatomic) NSArray *mediaSourceDisplayOrder; // ivar: _mediaSourceDisplayOrder
@property (retain, nonatomic) NSNumber *mediaSourceIdentifier; // ivar: _mediaSourceIdentifier
@property (readonly, nonatomic) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (weak, nonatomic) NSObject<HMDServiceOwner> *owner; // ivar: _owner
@property (nonatomic, getter=isPrimary) BOOL primary; // ivar: _primary
@property (retain, nonatomic) NSString *providedName; // ivar: _providedName
@property (readonly, copy, nonatomic) NSString *serviceIdentifier;
@property (nonatomic) NSUInteger serviceProperties; // ivar: _serviceProperties
@property (retain, nonatomic) NSString *serviceSubtype; // ivar: _serviceSubtype
@property (retain, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (readonly, copy, nonatomic) NSUUID *spiClientIdentifier;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy) NSString *urlString;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)_parseOperatingStateResponseValue:(id)arg0 intoState:(*id)arg1 abnormalReasons:(*id)arg2 ;
+(BOOL)_processUpdateOnPowerManagementServiceForCharacteristicType:(id)arg0 value:(id)arg1 serviceType:(id)arg2 accessory:(id)arg3 accessoryTransaction:(id)arg4 ;
+(BOOL)hasMessageReceiverChildren;
// +(BOOL)processUpdateForCharacteristicType:(id)arg0 value:(id)arg1 serviceType:(id)arg2 service:(id)arg3 serviceTransactionGetter:(id)arg4 accessory:(unk)arg5 accessoryTransaction:(id)arg6 accessoryTransactionChanged:(id)arg7  ;
+(BOOL)supportsSecureCoding;
+(BOOL)validateProvidedName:(id)arg0 ;
+(id)generateUUIDWithAccessoryUUID:(id)arg0 serviceID:(id)arg1 ;
+(id)logCategory;
-(BOOL)_supportsBulletinNotification;
-(BOOL)isEmptyConfiguredNameAllowed;
-(BOOL)isReadingRequiredForBTLEServiceCharacteristic:(id)arg0 ;
-(BOOL)shouldEnableDaemonRelaunch;
-(BOOL)shouldIncludePresenceForDeviceWithDestination:(id)arg0 ;
-(BOOL)shouldUpdateLastSeenConfiguredName:(id)arg0 ;
-(BOOL)updateAssociatedServiceType:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateCharacteristics:(id)arg0 ;
-(id)_checkIfDefaultNameChanged;
-(id)_deriveDefaultName;
-(id)_messagesForConfiguredNameChange;
-(id)_sanitizeNameToWriteToAccessory:(id)arg0 ;
-(id)_serviceSubtypeFromLinkedServicesForServiceType:(id)arg0 accessoryCategory:(id)arg1 ;
-(id)_updateProvidedName:(id)arg0 ;
-(id)backingStoreObjects:(NSInteger)arg0 ;
-(id)configureWithService:(id)arg0 accessory:(id)arg1 ;
-(id)configureWithService:(id)arg0 accessory:(id)arg1 shouldRead:(BOOL)arg2 added:(BOOL)arg3 ;
-(id)dumpState;
-(id)findCharacteristic:(id)arg0 ;
-(id)findCharacteristicWithType:(id)arg0 ;
-(id)gatherRequiredReadRequestsForceReadFWVersion:(BOOL)arg0 ;
-(id)getConfiguredName;
-(id)getConfiguredNameForXPCClients;
-(id)getLastSeenConfiguredName;
-(id)home;
-(id)init;
-(id)initWithAccessory:(id)arg0 owner:(id)arg1 instance:(id)arg2 uuid:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTransaction:(id)arg0 accessory:(id)arg1 owner:(id)arg2 ;
-(id)logIdentifier;
-(id)messagesForUpdatedRoom:(id)arg0 ;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 ;
-(id)transactionWithObjectChangeType:(NSUInteger)arg0 ;
-(void)_createAndRunTransactionWithName:(id)arg0 transaction:(id)arg1 message:(id)arg2 ;
-(void)_createNotification;
-(void)_handleSetAppData:(id)arg0 ;
-(void)_processTransactionForNameComponents:(id)arg0 messagesToSendToAccessory:(id)arg1 result:(id)arg2 ;
-(void)_readRequiredCharacteristicValuesForceReadFWVersion:(BOOL)arg0 ;
-(void)_recalculateUUID;
-(void)_registerForMessages;
-(void)_saveCurrentNameAsExpectedAndLastSeen:(id)arg0 ;
-(void)_saveForExpectedConfiguredNameUpdate;
-(void)_saveForLastSeenConfiguredNameUpdate;
-(void)_saveLastSeenAndExpectedConfiguredName:(id)arg0 ;
-(void)_shouldServiceBeHidden;
-(void)_transactionServiceUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)_updateDefaultName;
-(void)_writeConfiguredNameToAccessory:(id)arg0 ;
-(void)appDataRemoved:(id)arg0 message:(id)arg1 ;
-(void)appDataUpdated:(id)arg0 message:(id)arg1 ;
-(void)configureBulletinNotification;
-(void)configureWithWorkQueue:(id)arg0 messageDispatcher:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fillCharacteristicsInServiceBackingStoreObject:(id)arg0 ;
-(void)persistMediaSourceDisplayOrder:(id)arg0 requestMessage:(id)arg1 ;
-(void)populateModelObjectWithChangeType:(id)arg0 version:(NSInteger)arg1 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)updateLastKnownValues;
-(void)updateMediaSourceDisplayOrder:(id)arg0 requestMessage:(id)arg1 ;
-(void)updatePresenceRequestTimeForDeviceWithDestination:(id)arg0 ;


@end


#endif