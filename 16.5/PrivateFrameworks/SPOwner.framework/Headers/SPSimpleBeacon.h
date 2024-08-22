// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPSIMPLEBEACON_H
#define SPSIMPLEBEACON_H

@class NSUUID, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SPKeySyncRecord.h"

@interface SPSimpleBeacon : NSObject <NSCopying>



@property (nonatomic) NSInteger batteryLevel; // ivar: _batteryLevel
@property (nonatomic) NSInteger connectableDeviceCount; // ivar: _connectableDeviceCount
@property (nonatomic) BOOL connectionAllowed; // ivar: _connectionAllowed
@property (copy, nonatomic) NSUUID *groupIdentifier; // ivar: _groupIdentifier
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (copy, nonatomic) SPKeySyncRecord *keySyncRecord; // ivar: _keySyncRecord
@property (copy, nonatomic) NSString *manufacturerName; // ivar: _manufacturerName
@property (copy, nonatomic) NSString *modelName; // ivar: _modelName
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger partIdentifier; // ivar: _partIdentifier
@property (nonatomic) NSInteger productId; // ivar: _productId
@property (copy, nonatomic) NSUUID *productUUID; // ivar: _productUUID
@property (copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (copy, nonatomic) NSString *systemVersion; // ivar: _systemVersion
@property (nonatomic) CGFloat txPower; // ivar: _txPower
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (nonatomic) NSInteger vendorId; // ivar: _vendorId


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithInternalSimpleBeacon:(id)arg0 ;


@end


#endif