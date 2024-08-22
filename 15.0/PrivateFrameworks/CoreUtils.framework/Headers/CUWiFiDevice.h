// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUWIFIDEVICE_H
#define CUWIFIDEVICE_H

@class NSData, NSString, NSUUID, NSDictionary;

#import <Foundation/Foundation.h>


@interface CUWiFiDevice : NSObject

@property (copy, nonatomic) NSData *bssid; // ivar: _bssid
@property (copy, nonatomic) NSData *deviceIDOUI; // ivar: _deviceIDOUI
@property (copy, nonatomic) NSData *deviceIDSetupHash; // ivar: _deviceIDSetupHash
@property (copy, nonatomic) NSData *deviceIEBluetoothMAC; // ivar: _deviceIEBluetoothMAC
@property (nonatomic) unsigned int deviceIECategory; // ivar: _deviceIECategory
@property (copy, nonatomic) NSData *deviceIEDeviceID; // ivar: _deviceIEDeviceID
@property (nonatomic) unsigned int deviceIEFlags; // ivar: _deviceIEFlags
@property (copy, nonatomic) NSString *deviceIEManufacturer; // ivar: _deviceIEManufacturer
@property (copy, nonatomic) NSString *deviceIEModel; // ivar: _deviceIEModel
@property (copy, nonatomic) NSString *deviceIEName; // ivar: _deviceIEName
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (copy, nonatomic) NSData *ieData; // ivar: _ieData
@property (retain, nonatomic) id *platformObject; // ivar: _platformObject
@property (nonatomic) int present; // ivar: _present
@property (copy, nonatomic) NSDictionary *rawScanResult; // ivar: _rawScanResult
@property (nonatomic) int rssi; // ivar: _rssi
@property (copy, nonatomic) NSString *ssid; // ivar: _ssid


-(id)description;
-(unsigned int)_updateWithDeviceIE:(char *)arg0 end:(char *)arg1 ;


@end


#endif