// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHOMENETWORKROUTERSETTINGSMODEL_H
#define HMDHOMENETWORKROUTERSETTINGSMODEL_H

@class NSString;


#import "HMDBackingStoreModelObject.h"

@interface HMDHomeNetworkRouterSettingsModel : HMDBackingStoreModelObject

@property (copy, nonatomic) NSString *activeNetworkRouterAccessoryUUID;
@property (copy, nonatomic) NSString *activeNetworkRouterInitialSetupNeededUUID;
@property (copy, nonatomic) NSString *minHomeKitVersionForAccessoryNetworkProtectionChange;
@property (copy, nonatomic) NSString *minimumNetworkRouterSupportHomeKitVersion;


+(id)defaultModelForHome:(id)arg0 ;
+(id)modelIDForHome:(id)arg0 ;
+(id)modelNamespace;
+(id)properties;
-(id)dependentUUIDs;


@end


#endif