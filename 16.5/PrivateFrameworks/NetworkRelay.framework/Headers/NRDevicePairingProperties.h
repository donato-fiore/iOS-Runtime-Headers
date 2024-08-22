// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NRDEVICEPAIRINGPROPERTIES_H
#define NRDEVICEPAIRINGPROPERTIES_H

@class NSData;


#import "NRDeviceProperties.h"

@interface NRDevicePairingProperties : NRDeviceProperties

@property (retain, nonatomic) NSData *awdlAddressData; // ivar: _awdlAddressData
@property (retain, nonatomic) NSData *bluetoothMACAddress; // ivar: _bluetoothMACAddress
@property (nonatomic) BOOL isAltAccountPairing; // ivar: _isAltAccountPairing
@property (retain, nonatomic) NSData *outOfBandKey; // ivar: _outOfBandKey
@property (nonatomic) BOOL pairWithSPPLink; // ivar: _pairWithSPPLink
@property (nonatomic) BOOL wasInitiallySetupUsingIDSPairing; // ivar: _wasInitiallySetupUsingIDSPairing


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif