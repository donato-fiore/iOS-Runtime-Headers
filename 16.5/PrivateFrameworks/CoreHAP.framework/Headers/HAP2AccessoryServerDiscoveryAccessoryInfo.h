// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAP2ACCESSORYSERVERDISCOVERYACCESSORYINFO_H
#define HAP2ACCESSORYSERVERDISCOVERYACCESSORYINFO_H

@class NSDictionary;


#import "HAP2LoggingObject.h"
#import "HAPDeviceID.h"

@interface HAP2AccessoryServerDiscoveryAccessoryInfo : HAP2LoggingObject

@property (readonly, nonatomic) HAPDeviceID *deviceID; // ivar: _deviceID
@property (readonly, nonatomic) NSDictionary *rawDiscoveryInfo; // ivar: _rawDiscoveryInfo


+(id)new;
-(id)init;
-(id)initWithDeviceID:(id)arg0 rawDiscoveryInfo:(id)arg1 ;


@end


#endif