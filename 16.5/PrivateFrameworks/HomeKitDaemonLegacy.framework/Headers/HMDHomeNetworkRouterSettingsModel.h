// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMENETWORKROUTERSETTINGSMODEL_H
#define HMDHOMENETWORKROUTERSETTINGSMODEL_H

@class NSString;


#import "HMDHomeSettingsBaseModel.h"

@interface HMDHomeNetworkRouterSettingsModel : HMDHomeSettingsBaseModel

@property (copy, nonatomic) NSString *activeNetworkRouterAccessoryUUID;
@property (copy, nonatomic) NSString *activeNetworkRouterInitialSetupNeededUUID;
@property (copy, nonatomic) NSString *minHomeKitVersionForAccessoryNetworkProtectionChange;
@property (copy, nonatomic) NSString *minimumNetworkRouterSupportHomeKitVersion;


+(id)defaultModelForHomeUUID:(id)arg0 ;
+(id)modelIDForHomeUUID:(id)arg0 ;
+(id)modelNamespace;
+(id)properties;
-(id)dependentUUIDs;


@end


#endif