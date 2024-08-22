// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKFDEVICE_H
#define _MKFDEVICE_H

@class MKFModel, NSString, NSArray, NSUUID, HMFProductInfo, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFDevice, MKFDevicePrivateExtensions, MKFAppleMediaAccessory, MKFAccount, MKFHome, MKFResident, MKFHomeNetworkRouterManagingDeviceSetting;


#import "_MKFAppleMediaAccessory.h"
#import "_MKFAccount.h"
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
@property (copy, nonatomic) NSUUID *modelID;
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
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfDevice;


@end


#endif