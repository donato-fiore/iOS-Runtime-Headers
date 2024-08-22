// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCLOUDZONEINFORMATIONMODEL_H
#define HMDCLOUDZONEINFORMATIONMODEL_H

@class NSString;


#import "HMDBackingStoreModelObject.h"

@interface HMDCloudZoneInformationModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSString *ownerName;
@property (nonatomic) BOOL requiresHomeManagerUpdate; // ivar: _requiresHomeManagerUpdate


+(id)properties;
-(id)dependentUUIDs;


@end


#endif