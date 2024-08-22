// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYSETTINGCONSTRAINTMODEL_H
#define HMDACCESSORYSETTINGCONSTRAINTMODEL_H

@class NSNumber, NSData;


#import "HMDBackingStoreModelObject.h"

@interface HMDAccessorySettingConstraintModel : HMDBackingStoreModelObject

@property (copy, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSData *value;


+(id)properties;
+(id)schemaHashRoot;


@end


#endif