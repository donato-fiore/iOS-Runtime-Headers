// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRVEHICLEACCESSORY_H
#define CRVEHICLEACCESSORY_H

@class NSString, EAAccessory, NSArray, NSDictionary, NSData, NSNumber;
@protocol CRMessagingServiceVehicleRepresenting;

#import <Foundation/Foundation.h>


@interface CRVehicleAccessory : NSObject <CRMessagingServiceVehicleRepresenting>



@property (retain, nonatomic) NSString *PPID; // ivar: _PPID
@property (weak, nonatomic) EAAccessory *accessory; // ivar: _accessory
@property (retain, nonatomic) NSArray *accessoryProtocols; // ivar: _accessoryProtocols
@property (readonly, nonatomic) NSDictionary *analyticsDescription;
@property (retain, nonatomic) NSString *bluetoothAddress; // ivar: _bluetoothAddress
@property (retain, nonatomic) NSData *certificateSerialNumber; // ivar: _certificateSerialNumber
@property (retain, nonatomic) NSNumber *connectionID; // ivar: _connectionID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *radarDescription;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsCarPlayConnectionRequest; // ivar: _supportsCarPlayConnectionRequest
@property (nonatomic) BOOL supportsEnhancedIntegration; // ivar: _supportsEnhancedIntegration
@property (nonatomic) BOOL supportsUSBCarPlay; // ivar: _supportsUSBCarPlay
@property (nonatomic) BOOL supportsWiredBluetoothPairing; // ivar: _supportsWiredBluetoothPairing
@property (nonatomic) BOOL supportsWirelessCarPlay; // ivar: _supportsWirelessCarPlay
@property (nonatomic) NSInteger transportType; // ivar: _transportType
@property (readonly, nonatomic) NSDictionary *vehicleAccessoryInfoKeys;
@property (copy, nonatomic) NSDictionary *vehicleAccessoryInfoKeysCache; // ivar: _vehicleAccessoryInfoKeysCache
@property (copy, nonatomic) NSDictionary *vehicleInfoDataCache; // ivar: _vehicleInfoDataCache
@property (retain, nonatomic) NSString *vehicleModelName; // ivar: _vehicleModelName
@property (retain, nonatomic) NSString *vehicleName; // ivar: _vehicleName


+(NSInteger)_transportTypeForExternalAccessoryTransportType:(int)arg0 ;
-(BOOL)_updateName;
-(BOOL)isBluetoothConnected;
-(id)displayName;
-(void)beginWiredBluetoothPairing:(id)arg0 ;
-(void)requestWiFiCredentials;
-(void)sendDeviceTransportIdentifiers;
-(void)sendWiredCarPlayAvailable:(id)arg0 usbIdentifier:(id)arg1 wirelessCarPlayAvailable:(id)arg2 bluetoothIdentifier:(id)arg3 ;


@end


#endif