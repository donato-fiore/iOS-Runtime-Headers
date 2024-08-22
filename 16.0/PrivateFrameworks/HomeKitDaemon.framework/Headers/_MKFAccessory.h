// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFACCESSORY_H
#define _MKFACCESSORY_H

@class MKFModel, NSNumber, NSArray, NSSet, NSString, NSUUID, NSData, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAccessory, MKFAccessoryPrivateExtensions, MKFApplicationData, MKFHome, MKFRoom, MKFSoftwareUpdate;


#import "_MKFApplicationData.h"
#import "MKFAccessoryDatabaseID.h"
#import "_MKFHome.h"
#import "_MKFAccessory.h"
#import "_MKFRoom.h"
#import "_MKFSoftwareUpdate.h"

@interface _MKFAccessory : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAccessory, MKFAccessoryPrivateExtensions>



@property (copy, nonatomic) NSNumber *accessoryCategory;
@property (copy, nonatomic) NSNumber *accessoryCategory;
@property (readonly, retain, nonatomic) NSArray *actionMediaPlaybacks;
@property (retain, nonatomic) NSSet *actionMediaPlaybacks_;
@property (readonly, retain, nonatomic) NSArray *analysisEventBulletinRegistrations;
@property (retain, nonatomic) NSSet *analysisEventBulletinRegistrations_;
@property (retain, nonatomic) _MKFApplicationData *applicationData;
@property (retain, nonatomic) NSObject<MKFApplicationData> *applicationData;
@property (retain, nonatomic) NSArray *appliedFirewallWANRules;
@property (retain, nonatomic) NSArray *appliedFirewallWANRules;
@property (readonly, retain, nonatomic) NSArray *cameraAccessModeBulletinRegistrations;
@property (retain, nonatomic) NSSet *cameraAccessModeBulletinRegistrations_;
@property (readonly, retain, nonatomic) NSArray *cameraReachabilityBulletinRegistrations;
@property (retain, nonatomic) NSSet *cameraReachabilityBulletinRegistrations_;
@property (readonly, retain, nonatomic) NSArray *cameraSignificantEventBulletinRegistrations;
@property (retain, nonatomic) NSSet *cameraSignificantEventBulletinRegistrations_;
@property (copy, nonatomic) NSString *configurationAppIdentifier;
@property (copy, nonatomic) NSString *configurationAppIdentifier;
@property (copy, nonatomic) NSString *configuredName;
@property (copy, nonatomic) NSString *configuredName;
@property (copy, nonatomic) NSNumber *currentNetworkProtectionMode;
@property (copy, nonatomic) NSNumber *currentNetworkProtectionMode;
@property (readonly, copy, nonatomic) MKFAccessoryDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *firmwareVersion;
@property (copy, nonatomic) NSString *firmwareVersion;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (retain, nonatomic) _MKFHome *home;
@property (readonly, retain, nonatomic) NSObject<MKFHome> *home;
@property (retain, nonatomic) _MKFAccessory *hostAccessory;
@property (retain, nonatomic) NSObject<MKFAccessory> *hostAccessory;
@property (readonly, retain, nonatomic) NSArray *hostedAccessories;
@property (retain, nonatomic) NSSet *hostedAccessories_;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSNumber *initialCategoryIdentifier;
@property (copy, nonatomic) NSNumber *initialCategoryIdentifier;
@property (copy, nonatomic) NSString *initialManufacturer;
@property (copy, nonatomic) NSString *initialManufacturer;
@property (copy, nonatomic) NSString *initialModel;
@property (copy, nonatomic) NSString *initialModel;
@property (copy, nonatomic) NSNumber *lastNetworkAccessViolationOccurrenceSince1970;
@property (copy, nonatomic) NSNumber *lastNetworkAccessViolationOccurrenceSince1970;
@property (copy, nonatomic) NSNumber *lastNetworkAccessViolationResetSince1970;
@property (copy, nonatomic) NSNumber *lastNetworkAccessViolationResetSince1970;
@property (copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSString *manufacturer;
@property (readonly, retain, nonatomic) NSArray *mediaPropertyNotificationRegistrations;
@property (retain, nonatomic) NSSet *mediaPropertyNotificationRegistrations_;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSUUID *modelID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSNumber *networkClientIdentifier;
@property (copy, nonatomic) NSNumber *networkClientIdentifier;
@property (copy, nonatomic) NSNumber *networkClientLAN;
@property (copy, nonatomic) NSNumber *networkClientLAN;
@property (copy, nonatomic) NSString *networkClientProfileFingerprint;
@property (copy, nonatomic) NSString *networkClientProfileFingerprint;
@property (copy, nonatomic) NSString *networkRouterUUID;
@property (copy, nonatomic) NSString *networkRouterUUID;
@property (copy, nonatomic) NSString *pendingConfigurationIdentifier;
@property (copy, nonatomic) NSString *pendingConfigurationIdentifier;
@property (copy, nonatomic) NSString *primaryProfileVersion;
@property (copy, nonatomic) NSString *primaryProfileVersion;
@property (copy, nonatomic) NSString *productData;
@property (copy, nonatomic) NSString *productData;
@property (copy, nonatomic) NSString *providedName;
@property (copy, nonatomic) NSString *providedName;
@property (retain, nonatomic) _MKFRoom *room;
@property (retain, nonatomic) NSObject<MKFRoom> *room;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) _MKFSoftwareUpdate *softwareUpdate;
@property (retain, nonatomic) NSObject<MKFSoftwareUpdate> *softwareUpdate;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *suspendCapable;
@property (copy, nonatomic) NSNumber *suspendCapable;
@property (readonly, retain, nonatomic) NSArray *usersWithListeningHistoryEnabled;
@property (retain, nonatomic) NSSet *usersWithListeningHistoryEnabled_;
@property (readonly, retain, nonatomic) NSArray *usersWithMediaContentProfileEnabled;
@property (retain, nonatomic) NSSet *usersWithMediaContentProfileEnabled_;
@property (readonly, retain, nonatomic) NSArray *usersWithPersonalRequestsEnabled;
@property (retain, nonatomic) NSSet *usersWithPersonalRequestsEnabled_;
@property (copy, nonatomic) NSNumber *wiFiCredentialType;
@property (copy, nonatomic) NSNumber *wiFiCredentialType;
@property (retain, nonatomic) NSData *wiFiUniquePreSharedKey;
@property (retain, nonatomic) NSData *wiFiUniquePreSharedKey;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfAccessory;
-(id)materializeOrCreateApplicationDataRelation:(*BOOL)arg0 ;
-(id)materializeOrCreateSoftwareUpdateRelation:(*BOOL)arg0 ;
-(void)addHostedAccessoriesObject:(id)arg0 ;
-(void)addUsersWithListeningHistoryEnabledObject:(id)arg0 ;
-(void)addUsersWithMediaContentProfileEnabledObject:(id)arg0 ;
-(void)addUsersWithPersonalRequestsEnabledObject:(id)arg0 ;
-(void)removeHostedAccessoriesObject:(id)arg0 ;
-(void)removeUsersWithListeningHistoryEnabledObject:(id)arg0 ;
-(void)removeUsersWithMediaContentProfileEnabledObject:(id)arg0 ;
-(void)removeUsersWithPersonalRequestsEnabledObject:(id)arg0 ;


@end


#endif