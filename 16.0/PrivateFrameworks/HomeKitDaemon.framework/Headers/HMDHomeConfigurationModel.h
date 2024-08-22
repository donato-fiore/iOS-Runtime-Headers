// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHOMECONFIGURATIONMODEL_H
#define HMDHOMECONFIGURATIONMODEL_H

@class NSNumber;


#import "HMDBackingStoreModelObject.h"

@interface HMDHomeConfigurationModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSNumber *configurationVersion;
@property (nonatomic) BOOL homeHasLocalChanges; // ivar: _homeHasLocalChanges


+(id)properties;


@end


#endif