// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDZONEMODEL_H
#define HMDZONEMODEL_H

@class NSString, NSArray;


#import "HMDBackingStoreModelObject.h"

@interface HMDZoneModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *roomUUIDs;


+(id)properties;
-(id)dependentUUIDs;


@end


#endif