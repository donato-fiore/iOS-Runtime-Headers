// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSLOCALPAIRINGADDPAIREDDEVICEINFO_H
#define IDSLOCALPAIRINGADDPAIREDDEVICEINFO_H

@class NSData, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IDSLocalPairingAddPairedDeviceInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *BTOutOfBandKey; // ivar: _BTOutOfBandKey
@property (retain, nonatomic) NSData *bluetoothMACAddress; // ivar: _bluetoothMACAddress
@property (readonly, nonatomic) NSUUID *cbuuid; // ivar: _cbuuid
@property (readonly, nonatomic) NSInteger pairingProtocolVersion; // ivar: _pairingProtocolVersion
@property (nonatomic) NSInteger pairingType; // ivar: _pairingType
@property (nonatomic) BOOL shouldPairDirectlyOverIPsec; // ivar: _shouldPairDirectlyOverIPsec
@property (nonatomic) BOOL supportsIPsecWithSPPLink; // ivar: _supportsIPsecWithSPPLink


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCBUUID:(id)arg0 pairingProtocolVersion:(NSInteger)arg1 BTOutOfBandKey:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif