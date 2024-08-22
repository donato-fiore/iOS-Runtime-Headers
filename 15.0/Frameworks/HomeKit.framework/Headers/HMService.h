// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMSERVICE_H
#define HMSERVICE_H

@class HMFUnfairLock, NSUUID, NSString, NSArray, NSURL, NSNumber, NSDictionary;
@protocol HMFLogging, NSSecureCoding, HMObjectMerge, HMMutableApplicationData;

#import <Foundation/Foundation.h>

#import "HMAccessory.h"
#import "HMApplicationData.h"
#import "HMBulletinBoardNotification.h"
#import "_HMContext.h"
#import "HMMutableArray.h"

@interface HMService : NSObject <HMFLogging, NSSecureCoding, HMObjectMerge, HMMutableApplicationData>

 {
    HMFUnfairLock *_lock;
}


@property (weak, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (retain, nonatomic) HMApplicationData *applicationData; // ivar: _applicationData
@property (readonly, copy) NSUUID *applicationDataIdentifier;
@property (copy, nonatomic) NSString *assistantIdentifier; // ivar: _assistantIdentifier
@property (copy, nonatomic) NSString *associatedServiceType; // ivar: _associatedServiceType
@property (readonly, nonatomic) HMBulletinBoardNotification *bulletinBoardNotificationInternal; // ivar: _bulletinBoardNotificationInternal
@property (readonly, copy, nonatomic) NSArray *characteristics;
@property (nonatomic) NSInteger configurationState; // ivar: _configurationState
@property (copy, nonatomic) NSString *configuredName; // ivar: _configuredName
@property (retain, nonatomic) _HMContext *context; // ivar: _context
@property (copy, nonatomic) HMMutableArray *currentCharacteristics; // ivar: _currentCharacteristics
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *defaultName; // ivar: _defaultName
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSURL *homeObjectURLInternal; // ivar: _homeObjectURLInternal
@property (readonly, nonatomic) NSNumber *instanceID; // ivar: _instanceID
@property (copy, nonatomic) NSNumber *lastKnownDiscoveryMode; // ivar: _lastKnownDiscoveryMode
@property (copy, nonatomic) NSNumber *lastKnownOperatingStateAbnormalReasonsValue; // ivar: _lastKnownOperatingStateAbnormalReasonsValue
@property (copy, nonatomic) NSNumber *lastKnownOperatingStateValue; // ivar: _lastKnownOperatingStateValue
@property (readonly, copy, nonatomic) NSArray *linkedServiceInstanceIDs; // ivar: _linkedServiceInstanceIDs
@property (readonly, copy, nonatomic) NSArray *linkedServices;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (retain, nonatomic) NSArray *mediaSourceDisplayOrder; // ivar: _mediaSourceDisplayOrder
@property (nonatomic) BOOL mediaSourceDisplayOrderModifiable; // ivar: _mediaSourceDisplayOrderModifiable
@property (retain, nonatomic) NSNumber *mediaSourceIdentifier; // ivar: _mediaSourceIdentifier
@property (copy, nonatomic) NSString *name; // ivar: _name
@property BOOL nameModifiable; // ivar: _nameModifiable
@property (readonly, nonatomic, getter=isPrimaryService) BOOL primaryService; // ivar: _primaryService
@property (readonly, copy) NSDictionary *serializedDictionaryRepresentation;
@property (copy, nonatomic) NSString *serviceSubtype; // ivar: _serviceSubtype
@property (copy, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic, getter=isUserInteractive) BOOL userInteractive; // ivar: _userInteractive
@property (copy, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(NSInteger)_mapToServiceConfigurationStateFromIsConfiguredValue:(id)arg0 ;
+(id)__localizedDescriptionForServiceType:(id)arg0 ;
+(id)_mapToIsConfiguredValueFromServiceConfigurationState:(NSInteger)arg0 ;
+(id)_serviceTypeAsString:(id)arg0 ;
+(id)characteristicBlacklistForShortcutConditions;
+(id)defaultCharacteristicByServiceDictionary;
+(id)localizedDescriptionForServiceType:(id)arg0 ;
+(id)logCategory;
+(id)serviceWithSerializedDictionaryRepresentation:(id)arg0 home:(id)arg1 ;
+(id)serviceWithServiceReference:(id)arg0 home:(id)arg1 ;
+(void)initializeCharacteristicDictionaries;
-(BOOL)_hasCharacteristic:(id)arg0 ;
-(BOOL)_hasCharacteristicOfType:(id)arg0 ;
-(BOOL)_mergeWithNewObject:(id)arg0 operations:(id)arg1 ;
-(BOOL)hasOperatingState;
-(BOOL)hasOperatingStateAbnormalReasons;
-(BOOL)hasSleepDiscoveryMode;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isNameModifiable;
-(NSInteger)lastKnownOperatingState;
-(NSInteger)lastKnownSleepDiscoveryMode;
-(NSUInteger)lastKnownOperatingStateAbnormalReasons;
-(id)_findCharacteristic:(id)arg0 ;
-(id)_findCharacteristicWithUniqueIdentifier:(id)arg0 ;
-(id)bulletinBoardNotification;
-(id)defaultCharacteristic;
-(id)homeObjectURL;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)logIdentifier;
-(void)__configureWithContext:(id)arg0 accessory:(id)arg1 ;
-(void)_addCharacteristic:(id)arg0 ;
-(void)_addLastKnownOperatingStateWithResponsesDidUpdateDelegateCallbackToOperations:(id)arg0 ;
-(void)_handleMarkServiceInteractive:(id)arg0 ;
-(void)_handleMediaSourceIdentifierUpdated:(id)arg0 ;
-(void)_handleUpdateAssociatedServiceType:(id)arg0 ;
-(void)_handleUpdateConfigurationState:(NSInteger)arg0 ;
-(void)_handleUpdateDefaultName:(id)arg0 ;
-(void)_handleUpdateName:(id)arg0 ;
-(void)_handleUpdateServicePrimary:(id)arg0 ;
-(void)_handleUpdateServiceSubtype:(id)arg0 ;
-(void)_recomputeAssistantIdentifier;
-(void)_removeCharacteristic:(id)arg0 ;
-(void)_unconfigure;
-(void)_unconfigureContext;
-(void)_updateAssociatedServiceType:(id)arg0 completionHandler:(id)arg1 ;
-(void)_updateConfigurationState:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)_updateName:(id)arg0 completionHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)recomputeAssistantIdentifier;
-(void)updateApplicationData:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateAssociatedServiceType:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateConfigurationState:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)updateName:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif