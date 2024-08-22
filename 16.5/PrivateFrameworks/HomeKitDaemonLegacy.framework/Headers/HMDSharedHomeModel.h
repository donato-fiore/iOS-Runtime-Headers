// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSHAREDHOMEMODEL_H
#define HMDSHAREDHOMEMODEL_H

@class NSNumber, NSData;


#import "HMDBackingStoreModelObject.h"

@interface HMDSharedHomeModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSNumber *configurationVersion;
@property (retain, nonatomic) NSData *homeData;


+(id)properties;
-(BOOL)isReplayable;


@end


#endif