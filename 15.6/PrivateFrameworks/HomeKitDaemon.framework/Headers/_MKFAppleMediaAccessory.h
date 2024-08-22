// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFAPPLEMEDIAACCESSORY_H
#define _MKFAPPLEMEDIAACCESSORY_H

@class MKFMediaAccessory, NSNumber, NSArray, NSString, NSUUID, NSData, HMFPairingIdentity, HMFSoftwareVersion, HMFWiFiNetworkInfo, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAppleMediaAccessory, MKFAppleMediaAccessoryPrivateExtensions, MKFAssistantAccessControl, MKFApplicationData, MKFMediaDestinationController, MKFDevice, MKFHome, MKFAccessory, MKFAppleMediaAccessoryResident, MKFRoom, MKFAccessorySettingGroup, MKFSoftwareUpdate;


#import "MKFAppleMediaAccessoryDatabaseID.h"
#import "_MKFMediaDestinationController.h"
#import "_MKFDevice.h"
#import "_MKFAppleMediaAccessoryResident.h"
#import "_MKFAccessorySettingGroup.h"

@interface _MKFAppleMediaAccessory : MKFMediaAccessory <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAppleMediaAccessory, MKFAppleMediaAccessoryPrivateExtensions>



@property (retain, nonatomic) NSObject<MKFAssistantAccessControl> *accessControl;
@property (copy, nonatomic) NSNumber *accessoryCategory;
@property (readonly, retain, nonatomic) NSArray *actionMediaPlaybacks;
@property (copy, nonatomic) NSString *appleMediaAccessoryChangeTag;
@property (copy, nonatomic) NSString *appleMediaAccessoryChangeTag;
@property (retain, nonatomic) NSObject<MKFApplicationData> *applicationData;
@property (retain, nonatomic) NSArray *appliedFirewallWANRules;
@property (readonly, retain, nonatomic) NSArray *cameraAccessModeBulletinRegistrations;
@property (readonly, retain, nonatomic) NSArray *cameraReachabilityBulletinRegistrations;
@property (readonly, retain, nonatomic) NSArray *cameraSignificantEventBulletinRegistrations;
@property (copy, nonatomic) NSString *configurationAppIdentifier;
@property (copy, nonatomic) NSString *configuredName;
@property (copy, nonatomic) NSNumber *currentNetworkProtectionMode;
@property (readonly, copy, nonatomic) MKFAppleMediaAccessoryDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _MKFMediaDestinationController *destinationController;
@property (retain, nonatomic) NSObject<MKFMediaDestinationController> *destinationController;
@property (retain, nonatomic) _MKFDevice *device;
@property (retain, nonatomic) NSObject<MKFDevice> *device;
@property (copy, nonatomic) NSString *firmwareVersion;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly, retain, nonatomic) NSObject<MKFHome> *home;
@property (retain, nonatomic) NSObject<MKFAccessory> *hostAccessory;
@property (readonly, retain, nonatomic) NSArray *hostedAccessories;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSNumber *initialCategoryIdentifier;
@property (copy, nonatomic) NSString *initialManufacturer;
@property (copy, nonatomic) NSString *initialModel;
@property (copy, nonatomic) NSNumber *lastNetworkAccessViolationOccurrenceSince1970;
@property (copy, nonatomic) NSNumber *lastNetworkAccessViolationResetSince1970;
@property (retain, nonatomic) NSData *loggedInAccount;
@property (retain, nonatomic) NSData *loggedInAccount;
@property (copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSString *model;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSNumber *networkClientIdentifier;
@property (copy, nonatomic) NSNumber *networkClientLAN;
@property (copy, nonatomic) NSString *networkClientProfileFingerprint;
@property (copy, nonatomic) NSString *networkRouterUUID;
@property (retain, nonatomic) HMFPairingIdentity *pairingIdentity;
@property (retain, nonatomic) HMFPairingIdentity *pairingIdentity;
@property (copy, nonatomic) NSString *pendingConfigurationIdentifier;
@property (copy, nonatomic) NSUUID *preferredMediaUserUUID;
@property (copy, nonatomic) NSUUID *preferredMediaUserUUID;
@property (copy, nonatomic) NSNumber *preferredUserSelectionType;
@property (copy, nonatomic) NSNumber *preferredUserSelectionType;
@property (copy, nonatomic) NSString *primaryProfileVersion;
@property (copy, nonatomic) NSString *productData;
@property (copy, nonatomic) NSString *providedName;
@property (retain, nonatomic) _MKFAppleMediaAccessoryResident *resident;
@property (retain, nonatomic) NSObject<MKFAppleMediaAccessoryResident> *resident;
@property (retain, nonatomic) NSObject<MKFRoom> *room;
@property (copy, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) _MKFAccessorySettingGroup *settings;
@property (retain, nonatomic) NSObject<MKFAccessorySettingGroup> *settings;
@property (retain, nonatomic) NSObject<MKFSoftwareUpdate> *softwareUpdate;
@property (retain, nonatomic) HMFSoftwareVersion *softwareVersion;
@property (retain, nonatomic) HMFSoftwareVersion *softwareVersion;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *supportedStereoPairVersions;
@property (copy, nonatomic) NSNumber *supportedStereoPairVersions;
@property (copy, nonatomic) NSNumber *suspendCapable;
@property (retain, nonatomic) NSData *symptoms;
@property (retain, nonatomic) NSData *symptoms;
@property (copy, nonatomic) NSNumber *variant;
@property (copy, nonatomic) NSNumber *variant;
@property (copy, nonatomic) NSNumber *wiFiCredentialType;
@property (retain, nonatomic) NSData *wiFiUniquePreSharedKey;
@property (retain, nonatomic) HMFWiFiNetworkInfo *wifiNetworkInfo;
@property (retain, nonatomic) HMFWiFiNetworkInfo *wifiNetworkInfo;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfAppleMediaAccessory;
-(id)findSettingsRelationWithModelID:(id)arg0 ;
-(id)materializeOrCreateSettingsRelationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;


@end


#endif