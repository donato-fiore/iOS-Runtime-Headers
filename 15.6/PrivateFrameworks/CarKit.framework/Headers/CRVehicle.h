// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRVEHICLE_H
#define CRVEHICLE_H

@class NSString, NSSet, NSData, NSUUID, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CRVehicle : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *PPID; // ivar: _PPID
@property (retain, nonatomic) NSSet *accessoryProtocols; // ivar: _accessoryProtocols
@property (nonatomic) NSInteger albumArtUserPreference; // ivar: _albumArtUserPreference
@property (nonatomic) NSInteger appearanceModePreference; // ivar: _appearanceModePreference
@property (retain, nonatomic) NSString *bluetoothAddress; // ivar: _bluetoothAddress
@property (retain, nonatomic) NSString *carplayWiFiUUID; // ivar: _carplayWiFiUUID
@property (retain, nonatomic) NSData *certificateSerialNumber; // ivar: _certificateSerialNumber
@property (nonatomic) NSUInteger enhancedIntegrationStatus; // ivar: _enhancedIntegrationStatus
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *internalNotes; // ivar: _internalNotes
@property (readonly, nonatomic) BOOL isEnhancedIntegrationEnabled;
@property (readonly, nonatomic) BOOL isPaired;
@property (retain, nonatomic) NSDate *lastConnectedDate; // ivar: _lastConnectedDate
@property (nonatomic) NSInteger mapsAppearancePreference; // ivar: _mapsAppearancePreference
@property (nonatomic) NSUInteger pairingStatus; // ivar: _pairingStatus
@property (retain, nonatomic) NSString *previousWallpaperIdentifier; // ivar: _previousWallpaperIdentifier
@property (nonatomic) BOOL supportsEnhancedIntegration; // ivar: _supportsEnhancedIntegration
@property (nonatomic) BOOL supportsStartSessionRequest; // ivar: _supportsStartSessionRequest
@property (nonatomic) BOOL supportsUSBCarPlay; // ivar: _supportsUSBCarPlay
@property (nonatomic) BOOL supportsWirelessCarPlay; // ivar: _supportsWirelessCarPlay
@property (retain, nonatomic) NSString *vehicleModelName; // ivar: _vehicleModelName
@property (retain, nonatomic) NSString *vehicleName; // ivar: _vehicleName
@property (retain, nonatomic) NSString *wallpaperIdentifier; // ivar: _wallpaperIdentifier


+(BOOL)supportsSecureCoding;
+(id)vehicleForVehicleAccessory:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_enhancedIntegrationDebugDescription;
-(id)_pairingDebugDescription;
-(id)description;
-(id)displayName;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 certificateSerial:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeAttributesFromVehicle:(id)arg0 ;


@end


#endif