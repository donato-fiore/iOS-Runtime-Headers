// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDRESIDENTDEVICEMODEL_H
#define HMDRESIDENTDEVICEMODEL_H

@class NSString, NSNumber;


#import "HMDBackingStoreModelObject.h"
#import "HMDDevice.h"

@interface HMDResidentDeviceModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSString *changeToken;
@property (retain, nonatomic) NSNumber *confirmed;
@property (retain, nonatomic) HMDDevice *device;
@property (retain, nonatomic) NSString *deviceUUID;
@property (retain, nonatomic) NSNumber *enabled;


+(id)properties;


@end


#endif