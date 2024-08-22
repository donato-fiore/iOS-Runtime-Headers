// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFAPPLEMEDIAACCESSORY_H
#define _MKFAPPLEMEDIAACCESSORY_H

@class MKFMediaAccessory, NSData, NSNumber, NSArray, NSSet, NSString, NSUUID, HMFPairingIdentity, HMFSoftwareVersion, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAppleMediaAccessory, MKFAppleMediaAccessoryPrivateExtensions, MKFApplicationData, MKFDevice, MKFHome, MKFAccessory, MKFResident, MKFRoom, MKFSoftwareUpdate;


#import "MKFAppleMediaAccessoryDatabaseID.h"
#import "_MKFDevice.h"
#import "_MKFResident.h"

@interface _MKFAppleMediaAccessory : MKFMediaAccessory <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAppleMediaAccessory, MKFAppleMediaAccessoryPrivateExtensions>



@property (retain, nonatomic) NSData *accessoryCapabilities;
@property (retain, nonatomic) NSData *accessoryCapabilities;
@property (copy, nonatomic) NSNumber *accessoryCategory;
@property (readonly, retain, nonatomic) NSArray *actionMediaPlaybacks;
@property (readonly, retain, nonatomic) NSArray *actionsAppleMediaAccessoryPower;
@property (retain, nonatomic) NSSet *actionsAppleMediaAccessoryPower_;
@property (readonly, retain, nonatomic) NSArray *analysisEventBulletinRegistrations;
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
@property (retain, nonatomic) _MKFDevice *device;
@property (retain, nonatomic) NSObject<MKFDevice> *device;
@property (retain, nonatomic) NSData *deviceIRKData;
@property (retain, nonatomic) NSData *deviceIRKData;
@property (copy, nonatomic) NSString *firmwareVersion;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly, retain, nonatomic) NSObject<MKFHome> *home;
@property (retain, nonatomic) NSObject<MKFAccessory> *hostAccessory;
@property (readonly, retain, nonatomic) NSArray *hostedAccessories;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *idsDestination;
@property (copy, nonatomic) NSString *idsDestination;
@property (copy, nonatomic) NSUUID *idsIdentifier;
@property (copy, nonatomic) NSUUID *idsIdentifier;
@property (copy, nonatomic) NSNumber *initialCategoryIdentifier;
@property (copy, nonatomic) NSString *initialManufacturer;
@property (copy, nonatomic) NSString *initialModel;
@property (copy, nonatomic) NSNumber *lastNetworkAccessViolationOccurrenceSince1970;
@property (copy, nonatomic) NSNumber *lastNetworkAccessViolationResetSince1970;
@property (copy, nonatomic) NSString *manufacturer;
@property (readonly, retain, nonatomic) NSArray *mediaPropertyNotificationRegistrations;
@property (copy, nonatomic) NSString *model;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSNumber *networkClientIdentifier;
@property (copy, nonatomic) NSNumber *networkClientLAN;
@property (copy, nonatomic) NSString *networkClientProfileFingerprint;
@property (copy, nonatomic) NSString *networkRouterUUID;
@property (retain, nonatomic) HMFPairingIdentity *pairingIdentity;
@property (retain, nonatomic) HMFPairingIdentity *pairingIdentity;
@property (copy, nonatomic) NSString *pendingConfigurationIdentifier;
@property (copy, nonatomic) NSString *primaryProfileVersion;
@property (copy, nonatomic) NSString *productData;
@property (copy, nonatomic) NSString *providedName;
@property (retain, nonatomic) _MKFResident *resident;
@property (retain, nonatomic) NSObject<MKFResident> *resident;
@property (retain, nonatomic) NSObject<MKFRoom> *room;
@property (copy, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) NSObject<MKFSoftwareUpdate> *softwareUpdate;
@property (retain, nonatomic) HMFSoftwareVersion *softwareVersion;
@property (retain, nonatomic) HMFSoftwareVersion *softwareVersion;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *supportedStereoPairVersions;
@property (copy, nonatomic) NSNumber *supportedStereoPairVersions;
@property (copy, nonatomic) NSNumber *suspendCapable;
@property (readonly, retain, nonatomic) NSArray *usersWithListeningHistoryEnabled;
@property (readonly, retain, nonatomic) NSArray *usersWithMediaContentProfileEnabled;
@property (readonly, retain, nonatomic) NSArray *usersWithPersonalRequestsEnabled;
@property (copy, nonatomic) NSNumber *variant;
@property (copy, nonatomic) NSNumber *variant;
@property (copy, nonatomic) NSNumber *wiFiCredentialType;
@property (retain, nonatomic) NSData *wiFiUniquePreSharedKey;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)_analysisPredicateToFetchBulletinRegistrationOnDeviceIdsIdentifier:(id)arg0 ;
-(id)analysisBulletinRegistrationWithDeviceIdsIdentifier:(id)arg0 context:(id)arg1 ;
-(id)bulletinRegistrationFromFetchRequest:(id)arg0 context:(id)arg1 ;
-(id)castIfAppleMediaAccessory;
-(void)willSave;


@end


#endif