// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMEDIASYSTEMMODEL_H
#define HMDMEDIASYSTEMMODEL_H

@class NSString, NSArray;


#import "HMDBackingStoreModelObject.h"

@interface HMDMediaSystemModel : HMDBackingStoreModelObject

@property (copy, nonatomic) NSString *configuredName;
@property (copy, nonatomic) NSArray *mediaSystemComponents;
@property (retain, nonatomic) NSString *name;


+(id)properties;
+(id)schemaHashRoot;
-(id)dependentUUIDs;


@end


#endif