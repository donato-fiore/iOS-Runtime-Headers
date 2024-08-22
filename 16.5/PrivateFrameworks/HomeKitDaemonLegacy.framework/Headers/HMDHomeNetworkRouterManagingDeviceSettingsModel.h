// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMENETWORKROUTERMANAGINGDEVICESETTINGSMODEL_H
#define HMDHOMENETWORKROUTERMANAGINGDEVICESETTINGSMODEL_H

@class NSString;


#import "HMDHomeSettingsBaseModel.h"

@interface HMDHomeNetworkRouterManagingDeviceSettingsModel : HMDHomeSettingsBaseModel

@property (copy, nonatomic) NSString *primaryNetworkRouterManagingDeviceUUID;


+(id)defaultModelForHomeUUID:(id)arg0 ;
+(id)modelIDForHomeUUID:(id)arg0 ;
+(id)modelNamespace;
+(id)properties;
-(id)dependentUUIDs;


@end


#endif