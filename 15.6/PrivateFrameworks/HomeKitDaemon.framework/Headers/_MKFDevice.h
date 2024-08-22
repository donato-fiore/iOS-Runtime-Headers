// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFDEVICE_H
#define _MKFDEVICE_H

@class MKFModel, NSArray, NSSet, NSString, NSUUID, HMFProductInfo, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFDevice, MKFDevicePrivateExtensions, MKFAppleMediaAccessory, MKFAccount, MKFDeviceCapabilities, MKFHome, MKFResident, MKFHomeNetworkRouterManagingDeviceSetting;


#import "_MKFAppleMediaAccessory.h"
#import "_MKFAccount.h"
#import "_MKFDeviceCapabilities.h"
#import "MKFDeviceDatabaseID.h"
#import "_MKFHome.h"
#import "_MKFResident.h"
#import "HMDRPIdentity.h"
#import "_MKFHomeNetworkRouterManagingDeviceSetting.h"
#import "HMDHomeKitVersion.h"

@interface _MKFDevice : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFDevice, MKFDevicePrivateExtensions>



@property (retain, nonatomic) _MKFAppleMediaAccessory *accessoryAppleMedia;
@property (readonly, retain, nonatomic) NSObject<MKFAppleMediaAccessory> *accessoryAppleMedia;
@property (retain, nonatomic) _MKFAccount *account;
@property (readonly, retain, nonatomic) NSObject<MKFAccount> *account;
@property (readonly, retain, nonatomic) NSArray *bulletinRegistrations;
@property (retain, nonatomic) NSSet *bulletinRegistrations_;
@property (retain, nonatomic) _MKFDeviceCapabilities *capabilities;
@property (retain, nonatomic) NSObject<MKFDeviceCapabilities> *capabilities;
@property (readonly, copy, nonatomic) MKFDeviceDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *handles;
@property (retain, nonatomic) NSArray *handles;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSUUID *mediaRouteID;
@property (copy, nonatomic) NSUUID *mediaRouteID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) _MKFHome *primaryResidentOf;
@property (retain, nonatomic) NSObject<MKFHome> *primaryResidentOf;
@property (retain, nonatomic) HMFProductInfo *productInfo;
@property (retain, nonatomic) HMFProductInfo *productInfo;
@property (retain, nonatomic) _MKFResident *resident;
@property (retain, nonatomic) NSObject<MKFResident> *resident;
@property (retain, nonatomic) HMDRPIdentity *rpIdentity;
@property (retain, nonatomic) HMDRPIdentity *rpIdentity;
@property (retain, nonatomic) _MKFHomeNetworkRouterManagingDeviceSetting *settingRouterManager;
@property (retain, nonatomic) NSObject<MKFHomeNetworkRouterManagingDeviceSetting> *settingRouterManager;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) HMDHomeKitVersion *version;
@property (retain, nonatomic) HMDHomeKitVersion *version;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfDevice;
-(id)characteristicBulletinRegistrationFrom:(id)arg0 accessory:(id)arg1 context:(id)arg2 ;
-(id)findBulletinRegistrationsRelationOfTypeBulletinRegistrationWithModelID:(id)arg0 ;
-(id)findBulletinRegistrationsRelationOfTypeCameraAccessModeBulletinRegistrationWithModelID:(id)arg0 ;
-(id)findBulletinRegistrationsRelationOfTypeCameraReachabilityBulletinRegistrationWithModelID:(id)arg0 ;
-(id)findBulletinRegistrationsRelationOfTypeCameraSignificantEventBulletinRegistrationWithModelID:(id)arg0 ;
-(id)findBulletinRegistrationsRelationOfTypeCharacteristicBulletinRegistrationWithModelID:(id)arg0 ;
-(id)materializeOrCreateBulletinRegistrationsRelationOfType:(id)arg0 modelID:(id)arg1 createdNew:(*BOOL)arg2 ;
-(id)materializeOrCreateBulletinRegistrationsRelationOfTypeBulletinRegistrationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateBulletinRegistrationsRelationOfTypeCameraAccessModeBulletinRegistrationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateBulletinRegistrationsRelationOfTypeCameraReachabilityBulletinRegistrationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateBulletinRegistrationsRelationOfTypeCameraSignificantEventBulletinRegistrationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateBulletinRegistrationsRelationOfTypeCharacteristicBulletinRegistrationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateCapabilitiesRelation:(*BOOL)arg0 ;


@end


#endif