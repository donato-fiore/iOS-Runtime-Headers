// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKFAIRPLAYACCESSORY_H
#define _MKFAIRPLAYACCESSORY_H

@class MKFMediaAccessory, NSNumber, NSArray, NSString, NSUUID, NSDate, NSSet, HMFPairingIdentity, NSData;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAirPlayAccessory, MKFAirPlayAccessoryPrivateExtensions, MKFApplicationData, MKFHome, MKFAccessory, MKFRoom, MKFSoftwareUpdate;


#import "MKFAirPlayAccessoryDatabaseID.h"

@interface _MKFAirPlayAccessory : MKFMediaAccessory <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAirPlayAccessory, MKFAirPlayAccessoryPrivateExtensions>



@property (copy, nonatomic) NSNumber *accessoryCategory;
@property (readonly, retain, nonatomic) NSArray *actionMediaPlaybacks;
@property (readonly, retain, nonatomic) NSArray *analysisEventBulletinRegistrations;
@property (retain, nonatomic) NSObject<MKFApplicationData> *applicationData;
@property (retain, nonatomic) NSArray *appliedFirewallWANRules;
@property (readonly, retain, nonatomic) NSArray *cameraAccessModeBulletinRegistrations;
@property (readonly, retain, nonatomic) NSArray *cameraReachabilityBulletinRegistrations;
@property (readonly, retain, nonatomic) NSArray *cameraSignificantEventBulletinRegistrations;
@property (copy, nonatomic) NSString *configurationAppIdentifier;
@property (copy, nonatomic) NSString *configuredName;
@property (copy, nonatomic) NSNumber *currentNetworkProtectionMode;
@property (readonly, copy, nonatomic) MKFAirPlayAccessoryDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *firmwareVersion;
@property (copy, nonatomic) NSUUID *groupIdentifier;
@property (copy, nonatomic) NSString *groupName;
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
@property (copy, nonatomic) NSDate *lastPairingAuditTime;
@property (copy, nonatomic) NSDate *lastPairingAuditTime;
@property (copy, nonatomic) NSDate *lastSeenDate;
@property (copy, nonatomic) NSNumber *lowBattery;
@property (copy, nonatomic) NSString *manufacturer;
@property (readonly, retain, nonatomic) NSArray *mediaPropertyNotificationRegistrations;
@property (copy, nonatomic) NSNumber *minimumUserPriviledge;
@property (copy, nonatomic) NSNumber *minimumUserPriviledge;
@property (copy, nonatomic) NSString *model;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSNumber *needsPairingAudit;
@property (copy, nonatomic) NSNumber *needsPairingAudit;
@property (copy, nonatomic) NSNumber *networkClientIdentifier;
@property (copy, nonatomic) NSNumber *networkClientLAN;
@property (copy, nonatomic) NSString *networkClientProfileFingerprint;
@property (copy, nonatomic) NSString *networkRouterUUID;
@property (readonly, retain, nonatomic) NSArray *pairedUsers;
@property (retain, nonatomic) NSSet *pairedUsers_;
@property (retain, nonatomic) HMFPairingIdentity *pairingIdentity;
@property (retain, nonatomic) HMFPairingIdentity *pairingIdentity;
@property (retain, nonatomic) NSSet *pairingsToRemove;
@property (retain, nonatomic) NSSet *pairingsToRemove;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *pendingConfigurationIdentifier;
@property (copy, nonatomic) NSString *primaryProfileVersion;
@property (copy, nonatomic) NSString *productData;
@property (copy, nonatomic) NSString *providedName;
@property (retain, nonatomic) NSObject<MKFRoom> *room;
@property (copy, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) NSObject<MKFSoftwareUpdate> *softwareUpdate;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *suspendCapable;
@property (readonly, retain, nonatomic) NSArray *usersWithListeningHistoryEnabled;
@property (readonly, retain, nonatomic) NSArray *usersWithMediaContentProfileEnabled;
@property (readonly, retain, nonatomic) NSArray *usersWithPersonalRequestsEnabled;
@property (copy, nonatomic) NSNumber *wiFiCredentialType;
@property (retain, nonatomic) NSData *wiFiUniquePreSharedKey;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfAirPlayAccessory;
-(void)addPairedUsersObject:(id)arg0 ;
-(void)removePairedUsersObject:(id)arg0 ;


@end


#endif