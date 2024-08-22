// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAPPLICATIONDATAMODEL_H
#define HMDAPPLICATIONDATAMODEL_H

@class NSDictionary;


#import "HMDBackingStoreModelObject.h"

@interface HMDApplicationDataModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSDictionary *appDataDictionary;


+(id)properties;
+(id)schemaHashRoot;


@end


#endif