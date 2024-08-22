// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDSERVICEGROUPMODEL_H
#define HMDSERVICEGROUPMODEL_H

@class NSString, NSArray;


#import "HMDBackingStoreModelObject.h"

@interface HMDServiceGroupModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *services;


+(id)properties;
-(id)dependentUUIDs;


@end


#endif