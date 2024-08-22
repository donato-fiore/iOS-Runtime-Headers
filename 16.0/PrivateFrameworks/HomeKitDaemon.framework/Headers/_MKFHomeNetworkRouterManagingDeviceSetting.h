// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFHOMENETWORKROUTERMANAGINGDEVICESETTING_H
#define _MKFHOMENETWORKROUTERMANAGINGDEVICESETTING_H

@class MKFHomeSetting, NSString, NSUUID, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomeNetworkRouterManagingDeviceSetting, MKFHomeNetworkRouterManagingDeviceSettingPrivateExtensions, MKFDevice, MKFHome;


#import "MKFHomeNetworkRouterManagingDeviceSettingDatabaseID.h"
#import "_MKFDevice.h"

@interface _MKFHomeNetworkRouterManagingDeviceSetting : MKFHomeSetting <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomeNetworkRouterManagingDeviceSetting, MKFHomeNetworkRouterManagingDeviceSettingPrivateExtensions>



@property (readonly, copy, nonatomic) MKFHomeNetworkRouterManagingDeviceSettingDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _MKFDevice *device;
@property (retain, nonatomic) NSObject<MKFDevice> *device;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly, retain, nonatomic) NSObject<MKFHome> *home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfHomeNetworkRouterManagingDeviceSetting;


@end


#endif