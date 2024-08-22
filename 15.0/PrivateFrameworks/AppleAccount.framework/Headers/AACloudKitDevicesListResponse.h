// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AACLOUDKITDEVICESLISTRESPONSE_H
#define AACLOUDKITDEVICESLISTRESPONSE_H

@class NSArray;


#import "AAResponse.h"

@interface AACloudKitDevicesListResponse : AAResponse

@property (readonly, nonatomic) NSArray *incompatibleDeviceNames; // ivar: _incompatibleDeviceNames
@property (readonly, nonatomic) NSArray *incompatibleDevices; // ivar: _incompatibleDevices
@property (readonly, nonatomic) NSArray *needUpgradeDeviceNames; // ivar: _needUpgradeDeviceNames
@property (readonly, nonatomic) NSArray *needUpgradeDevices; // ivar: _needUpgradeDevices


-(id)initWithHTTPResponse:(id)arg0 data:(id)arg1 ;


@end


#endif