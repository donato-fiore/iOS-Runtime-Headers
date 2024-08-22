// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFAUTOUNLOCKDEVICE_H
#define SFAUTOUNLOCKDEVICE_H

@class NSUUID, NSData, NSString, NSDictionary;
@protocol NSSecureCoding;


#import "SFPeerDevice.h"

@interface SFAutoUnlockDevice : SFPeerDevice <NSSecureCoding>



@property (nonatomic) BOOL bluetoothCloudPaired; // ivar: _bluetoothCloudPaired
@property (retain, nonatomic) NSUUID *bluetoothID; // ivar: _bluetoothID
@property (retain, nonatomic) NSData *hintToken; // ivar: _hintToken
@property (nonatomic) BOOL keyExists; // ivar: _keyExists
@property (nonatomic) NSInteger majorOSVersion; // ivar: _majorOSVersion
@property (copy, nonatomic) NSString *modelDescription; // ivar: _modelDescription
@property (retain, nonatomic) NSString *modelName; // ivar: _modelName
@property (nonatomic) BOOL placeholder; // ivar: _placeholder
@property (copy, nonatomic) NSUUID *proxyBluetoothID; // ivar: _proxyBluetoothID
@property (retain, nonatomic) NSDictionary *results; // ivar: _results
@property (nonatomic) BOOL supportsAdvertisingUnlocked; // ivar: _supportsAdvertisingUnlocked
@property (nonatomic) BOOL supportsAlwaysDirect; // ivar: _supportsAlwaysDirect
@property (nonatomic) BOOL supportsApproveIcon; // ivar: _supportsApproveIcon
@property (nonatomic) BOOL supportsApproveWithWatch; // ivar: _supportsApproveWithWatch
@property (nonatomic) BOOL supportsConnectionCache; // ivar: _supportsConnectionCache
@property (nonatomic) BOOL supportsEncryption; // ivar: _supportsEncryption
@property (nonatomic) BOOL supportsHEIC; // ivar: _supportsHEIC
@property (readonly, nonatomic) NSInteger type;
@property (nonatomic) BOOL unlockEnabled; // ivar: _unlockEnabled


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif