// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFHOMENETWORKROUTERSETTING_H
#define _MKFHOMENETWORKROUTERSETTING_H

@class MKFHomeSetting, NSString, NSUUID, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomeNetworkRouterSetting, MKFHomeNetworkRouterSettingPrivateExtensions, MKFHome, MKFHAPAccessory;


#import "MKFHomeNetworkRouterSettingDatabaseID.h"
#import "_MKFHAPAccessory.h"

@interface _MKFHomeNetworkRouterSetting : MKFHomeSetting <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomeNetworkRouterSetting, MKFHomeNetworkRouterSettingPrivateExtensions>



@property (copy, nonatomic) NSString *activeNetworkRouterInitialSetupNeededUUID;
@property (copy, nonatomic) NSString *activeNetworkRouterInitialSetupNeededUUID;
@property (readonly, copy, nonatomic) MKFHomeNetworkRouterSettingDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly, retain, nonatomic) NSObject<MKFHome> *home;
@property (copy, nonatomic) NSString *minHomeKitVersionForAccessoryNetworkProtectionChange;
@property (copy, nonatomic) NSString *minHomeKitVersionForAccessoryNetworkProtectionChange;
@property (copy, nonatomic) NSString *minimumNetworkRouterSupportHomeKitVersion;
@property (copy, nonatomic) NSString *minimumNetworkRouterSupportHomeKitVersion;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (retain, nonatomic) _MKFHAPAccessory *networkAccessory;
@property (retain, nonatomic) NSObject<MKFHAPAccessory> *networkAccessory;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfHomeNetworkRouterSetting;


@end


#endif