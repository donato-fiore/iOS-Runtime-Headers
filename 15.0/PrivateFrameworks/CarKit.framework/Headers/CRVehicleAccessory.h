// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRVEHICLEACCESSORY_H
#define CRVEHICLEACCESSORY_H

@class NSString, EAAccessory, NSArray, NSData, NSNumber, NSDictionary;

#import <Foundation/Foundation.h>


@interface CRVehicleAccessory : NSObject

@property (retain, nonatomic) NSString *PPID; // ivar: _PPID
@property (weak, nonatomic) EAAccessory *accessory; // ivar: _accessory
@property (retain, nonatomic) NSArray *accessoryProtocols; // ivar: _accessoryProtocols
@property (retain, nonatomic) NSString *bluetoothAddress; // ivar: _bluetoothAddress
@property (retain, nonatomic) NSData *certificateSerialNumber; // ivar: _certificateSerialNumber
@property (retain, nonatomic) NSNumber *connectionID; // ivar: _connectionID
@property (nonatomic) BOOL supportsCarPlayConnectionRequest; // ivar: _supportsCarPlayConnectionRequest
@property (nonatomic) BOOL supportsEnhancedIntegration; // ivar: _supportsEnhancedIntegration
@property (nonatomic) BOOL supportsUSBCarPlay; // ivar: _supportsUSBCarPlay
@property (nonatomic) BOOL supportsWiredBluetoothPairing; // ivar: _supportsWiredBluetoothPairing
@property (nonatomic) BOOL supportsWirelessCarPlay; // ivar: _supportsWirelessCarPlay
@property (nonatomic) NSInteger transportType; // ivar: _transportType
@property (copy, nonatomic) NSDictionary *vehicleAccessoryInfoKeysCache; // ivar: _vehicleAccessoryInfoKeysCache
@property (copy, nonatomic) NSDictionary *vehicleInfoDataCache; // ivar: _vehicleInfoDataCache
@property (retain, nonatomic) NSString *vehicleModelName; // ivar: _vehicleModelName
@property (retain, nonatomic) NSString *vehicleName; // ivar: _vehicleName


+(NSInteger)_transportTypeForExternalAccessoryTransportType:(int)arg0 ;
+(id)_descriptionForTransportType:(NSInteger)arg0 ;
-(BOOL)_updateName;
-(BOOL)isBluetoothConnected;
-(id)analyticsDescription;
-(id)description;
-(id)displayName;
-(id)radarDescription;
-(id)vehicleAccessoryInfoKeys;
-(void)beginWiredBluetoothPairing:(id)arg0 ;
-(void)requestWiFiCredentials;
-(void)sendDeviceTransportIdentifiers;
-(void)sendWiredCarPlayAvailable:(id)arg0 wirelessCarPlayAvailable:(id)arg1 ;


@end


#endif