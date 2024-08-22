// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDRESIDENTUSERMODEL_H
#define HMDRESIDENTUSERMODEL_H

@class NSNumber, NSString;


#import "HMDUserModel.h"
#import "HMDDevice.h"

@interface HMDResidentUserModel : HMDUserModel

@property (retain, nonatomic) NSNumber *configState;
@property (retain, nonatomic) HMDDevice *device;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName


+(id)properties;


@end


#endif