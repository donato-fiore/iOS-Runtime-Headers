// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BTMAGICPAIRINGSETTINGS_H
#define BTMAGICPAIRINGSETTINGS_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BTMagicPairingSettings : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *accessoryHint; // ivar: _accessoryHint
@property (retain, nonatomic) NSData *accessoryKey; // ivar: _accessoryKey
@property (retain, nonatomic) NSString *bluetoothAddress; // ivar: _bluetoothAddress
@property (retain, nonatomic) NSString *buttonModes; // ivar: _buttonModes
@property (retain, nonatomic) NSString *color; // ivar: _color
@property (retain, nonatomic) NSString *deviceIDFeatureBitsV1; // ivar: _deviceIDFeatureBitsV1
@property (retain, nonatomic) NSString *deviceIDFeatureBitsV2; // ivar: _deviceIDFeatureBitsV2
@property (retain, nonatomic) NSData *encryptionKey; // ivar: _encryptionKey
@property (retain, nonatomic) NSData *irk; // ivar: _irk
@property (retain, nonatomic) NSString *listeningServices; // ivar: _listeningServices
@property (retain, nonatomic) NSData *masterHint; // ivar: _masterHint
@property (retain, nonatomic) NSData *masterKey; // ivar: _masterKey
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *optimizedBatteryCharging; // ivar: _optimizedBatteryCharging
@property (retain, nonatomic) NSString *optimizedBatteryFullChargeDeadline; // ivar: _optimizedBatteryFullChargeDeadline
@property (retain, nonatomic) NSString *productID; // ivar: _productID
@property (retain, nonatomic) NSString *ratchet; // ivar: _ratchet
@property (retain, nonatomic) NSString *reserved; // ivar: _reserved
@property (retain, nonatomic) NSString *settingsMask; // ivar: _settingsMask
@property (retain, nonatomic) NSString *spatialAudio; // ivar: _spatialAudio
@property (retain, nonatomic) NSString *supportedServices; // ivar: _supportedServices
@property (retain, nonatomic) NSString *vendorID; // ivar: _vendorID
@property (retain, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)magicSettingsWithBluetoothAddress:(id)arg0 ;
-(id)description;
-(id)initWithBluetoothAddress:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif