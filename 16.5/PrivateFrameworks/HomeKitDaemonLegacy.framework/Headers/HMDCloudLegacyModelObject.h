// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCLOUDLEGACYMODELOBJECT_H
#define HMDCLOUDLEGACYMODELOBJECT_H

@class NSData, NSNumber;


#import "HMDBackingStoreModelObject.h"

@interface HMDCloudLegacyModelObject : HMDBackingStoreModelObject

@property (retain, nonatomic) NSData *data1;
@property (retain, nonatomic) NSData *data2;
@property (retain, nonatomic) NSNumber *legacyRecordType;


+(id)properties;


@end


#endif