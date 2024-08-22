// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMEDIASYSTEMMODEL_H
#define HMDMEDIASYSTEMMODEL_H

@class NSString, NSArray, NSData;


#import "HMDBackingStoreModelObject.h"

@interface HMDMediaSystemModel : HMDBackingStoreModelObject

@property (copy, nonatomic) NSString *configuredName;
@property (copy, nonatomic) NSArray *mediaSystemComponents;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSData *symptoms;


+(id)properties;
+(id)schemaHashRoot;
-(id)dependentUUIDs;


@end


#endif