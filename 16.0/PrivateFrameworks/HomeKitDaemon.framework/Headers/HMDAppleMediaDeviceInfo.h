// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDAPPLEMEDIADEVICEINFO_H
#define HMDAPPLEMEDIADEVICEINFO_H

@class HMFObject, NSString, NSUUID;


#import "HMDDeviceCapabilities.h"

@interface HMDAppleMediaDeviceInfo : HMFObject

@property (readonly, nonatomic) HMDDeviceCapabilities *capabilities; // ivar: _capabilities
@property (readonly, nonatomic) NSString *deviceID; // ivar: _deviceID
@property (readonly, nonatomic) NSUUID *mediaRouteUUID; // ivar: _mediaRouteUUID
@property (retain, nonatomic) NSUUID *modelID; // ivar: _modelID


-(id)asPayload;
-(id)attributeDescriptions;
-(id)init;
-(id)initWithDeviceID:(id)arg0 mediaRouteID:(id)arg1 deviceCapabilities:(id)arg2 ;
-(id)initWithPayload:(id)arg0 ;


@end


#endif