// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHOMENETWORKROUTERSETTINGSMODEL_H
#define HMDHOMENETWORKROUTERSETTINGSMODEL_H

@class NSString;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDHomeSettingsBaseModel.h"

@interface HMDHomeNetworkRouterSettingsModel : HMDHomeSettingsBaseModel <HMDBackingStoreModelObjectCDRepresentable>



@property (copy, nonatomic) NSString *activeNetworkRouterAccessoryUUID;
@property (copy, nonatomic) NSString *activeNetworkRouterInitialSetupNeededUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *minHomeKitVersionForAccessoryNetworkProtectionChange;
@property (copy, nonatomic) NSString *minimumNetworkRouterSupportHomeKitVersion;
@property (readonly) Class superclass;


+(Class)cd_entityClass;
+(id)defaultModelForHomeUUID:(id)arg0 ;
+(id)modelIDForHomeUUID:(id)arg0 ;
+(id)modelNamespace;
+(id)properties;
-(id)cd_generateValueForModelObjectFromManagedObject:(id)arg0 modelObjectField:(id)arg1 modelFieldInfo:(id)arg2 ;
-(id)cd_generateValueForProperty:(id)arg0 managedObjectField:(id)arg1 context:(id)arg2 ;
-(id)dependentUUIDs;


@end


#endif