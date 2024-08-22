// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSPAIREDDEVICE_H
#define DNDSPAIREDDEVICE_H

@class NSString, NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface DNDSPairedDevice : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger deviceClass; // ivar: _deviceClass
@property (readonly, copy, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (copy, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (nonatomic, getter=isICloudEnabled) BOOL iCloudEnabled; // ivar: _iCloudEnabled
@property (readonly, nonatomic, getter=isIOS14EraOS) BOOL iOS14EraOS; // ivar: _iOS14EraOS
@property (copy, nonatomic) NSString *osBuild; // ivar: _osBuild
@property (readonly, copy, nonatomic) NSString *pairingDataStore; // ivar: _pairingDataStore
@property (readonly, copy, nonatomic) NSUUID *pairingIdentifier; // ivar: _pairingIdentifier
@property (readonly, nonatomic) BOOL supportsKettle;
@property (readonly, nonatomic) NSUInteger syncProtocolVersion; // ivar: _syncProtocolVersion
@property (readonly, nonatomic) NSUInteger syncServiceType; // ivar: _syncServiceType


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCloudDeviceIdentifier:(id)arg0 deviceClass:(NSUInteger)arg1 syncProtocolVersion:(NSUInteger)arg2 ;
-(id)initWithLocalDeviceIdentifier:(id)arg0 deviceClass:(NSUInteger)arg1 syncProtocolVersion:(NSUInteger)arg2 iOS14EraOS:(BOOL)arg3 pairingIdentifier:(id)arg4 pairingDataStore:(id)arg5 ;


@end


#endif