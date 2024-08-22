// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHOMENETWORKROUTERMANAGINGDEVICESETTINGSMODEL_H
#define HMDHOMENETWORKROUTERMANAGINGDEVICESETTINGSMODEL_H

@class NSString;


#import "HMDBackingStoreModelObject.h"

@interface HMDHomeNetworkRouterManagingDeviceSettingsModel : HMDBackingStoreModelObject

@property (copy, nonatomic) NSString *primaryNetworkRouterManagingDeviceUUID;


+(id)defaultModelForHome:(id)arg0 ;
+(id)modelIDForHome:(id)arg0 ;
+(id)modelNamespace;
+(id)properties;
-(id)dependentUUIDs;


@end


#endif