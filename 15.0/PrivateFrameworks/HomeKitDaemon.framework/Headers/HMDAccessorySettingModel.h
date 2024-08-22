// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDACCESSORYSETTINGMODEL_H
#define HMDACCESSORYSETTINGMODEL_H

@class NSNumber, NSString, NSData;


#import "HMDBackingStoreModelObject.h"

@interface HMDAccessorySettingModel : HMDBackingStoreModelObject

@property (copy, nonatomic) NSNumber *configurationVersion;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *properties;
@property (copy, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSData *value;


+(id)schemaHashRoot;


@end


#endif