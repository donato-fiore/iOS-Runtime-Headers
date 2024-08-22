// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPDEVICE_H
#define RPDEVICE_H

@class NSString, NSDate, NSData, SFDevice, NSUUID, CUMobileDevice, CUPairedPeer, CURangingMeasurement, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RPDevice : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *accountID; // ivar: _accountID
@property (readonly, nonatomic) int activityLevel; // ivar: _activityLevel
@property (readonly, nonatomic) NSDate *activityLevelTimeStamp; // ivar: _activityLevelTimeStamp
@property (readonly, copy, nonatomic) NSData *authTag; // ivar: _authTag
@property (readonly, copy, nonatomic) NSData *bleAdvertisementData; // ivar: _bleAdvertisementData
@property (readonly, copy, nonatomic) NSData *bleAuthTag; // ivar: _bleAuthTag
@property (retain, nonatomic) SFDevice *bleDevice; // ivar: _bleDevice
@property (readonly, copy, nonatomic) NSData *bleDeviceAddress; // ivar: _bleDeviceAddress
@property (readonly, nonatomic) unsigned int blePairState; // ivar: _blePairState
@property (readonly, copy, nonatomic) NSString *contactID; // ivar: _contactID
@property (readonly, nonatomic) unsigned char deviceActionType; // ivar: _deviceActionType
@property (readonly, nonatomic) unsigned int flags; // ivar: _flags
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSUUID *identifierUUID; // ivar: _identifierUUID
@property (readonly, copy, nonatomic) NSString *idsDeviceIdentifier; // ivar: _idsDeviceIdentifier
@property (readonly, nonatomic) BOOL idsDeviceIdentifierConflict; // ivar: _idsDeviceIdentifierConflict
@property (retain, nonatomic) CUMobileDevice *mobileDevice; // ivar: _mobileDevice
@property (readonly, copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL needsSetup; // ivar: _needsSetup
@property (retain, nonatomic) CUPairedPeer *pairedPeer; // ivar: _pairedPeer
@property (copy, nonatomic) NSUUID *pairingIdentifier; // ivar: _pairingIdentifier
@property (readonly, nonatomic) int proximity; // ivar: _proximity
@property (readonly, nonatomic) int rawRSSI; // ivar: _rawRSSI
@property (retain) CURangingMeasurement *relativeLocation; // ivar: _relativeLocation
@property (readonly, nonatomic) int smoothedRSSI; // ivar: _smoothedRSSI
@property (nonatomic) unsigned int systemPairState; // ivar: _systemPairState
@property (readonly, copy, nonatomic) NSData *txtData; // ivar: _txtData
@property (readonly, copy, nonatomic) NSDictionary *txtDictionary; // ivar: _txtDictionary
@property (copy, nonatomic) NSString *udid; // ivar: _udid
@property (copy, nonatomic) NSData *wifiAddress; // ivar: _wifiAddress
@property (copy, nonatomic) NSData *wifiBSSID; // ivar: _wifiBSSID
@property (copy, nonatomic) NSData *wifiDeviceIEDeviceID; // ivar: _wifiDeviceIEDeviceID
@property (readonly, nonatomic) unsigned int wifiDeviceIEFlags; // ivar: _wifiDeviceIEFlags
@property (copy, nonatomic) NSData *wifiDeviceIEName; // ivar: _wifiDeviceIEName
@property (copy, nonatomic) NSData *wifiIEData; // ivar: _wifiIEData
@property (retain, nonatomic) id *wifiPlatformObject; // ivar: _wifiPlatformObject
@property (copy, nonatomic) NSString *wifiSSID; // ivar: _wifiSSID


+(BOOL)supportsSecureCoding;
-(CGFloat)timeSinceLastActivityLevelChange;
-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(unsigned int)updateWithBonjourDevice:(id)arg0 ;
-(unsigned int)updateWithMobileDevice:(id)arg0 ;
-(unsigned int)updateWithSFDevice:(id)arg0 changes:(unsigned int)arg1 ;
-(void)_updateTXTDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithSystemInfo:(id)arg0 ;
-(void)updateWithWiFiDevice:(id)arg0 changes:(unsigned int)arg1 ;


@end


#endif