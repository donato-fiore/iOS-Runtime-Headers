// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMENETWORKROUTERMANAGINGDEVICESETTINGSMODEL_H
#define HMDHOMENETWORKROUTERMANAGINGDEVICESETTINGSMODEL_H

@class NSString;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDHomeSettingsBaseModel.h"

@interface HMDHomeNetworkRouterManagingDeviceSettingsModel : HMDHomeSettingsBaseModel <HMDBackingStoreModelObjectCDRepresentable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *primaryNetworkRouterManagingDeviceUUID;
@property (readonly) Class superclass;


+(Class)cd_entityClass;
+(id)defaultModelForHomeUUID:(id)arg0 ;
+(id)modelIDForHomeUUID:(id)arg0 ;
+(id)modelNamespace;
+(id)properties;
-(id)cd_generateValueForProperty:(id)arg0 managedObjectField:(id)arg1 context:(id)arg2 ;
-(id)dependentUUIDs;


@end


#endif