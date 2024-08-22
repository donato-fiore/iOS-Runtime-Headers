// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSBATTERYCHARGINGINFO_H
#define CSBATTERYCHARGINGINFO_H

@class BCBatteryDevice;

#import <Foundation/Foundation.h>


@interface CSBatteryChargingInfo : NSObject

@property (nonatomic, getter=isChargingWithInternalWirelessAccessory) BOOL chargingWithInternalWirelessAccessory; // ivar: _chargingWithInternalWirelessAccessory
@property (retain, nonatomic) BCBatteryDevice *externalBatteryDevice; // ivar: _externalBatteryDevice
@property (retain, nonatomic) BCBatteryDevice *internalBatteryDevice; // ivar: _internalBatteryDevice




@end


#endif