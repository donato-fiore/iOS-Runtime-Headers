// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPAPPLICATIONBEACON_H
#define SPAPPLICATIONBEACON_H

@class NSString, NSUUID, NSSet, NSDictionary;

#import <Foundation/Foundation.h>

#import "SPDiscoveredAccessoryProductInformation.h"
#import "SPLostModeInfo.h"
#import "SPHandle.h"
#import "SPBeaconRole.h"

@interface SPApplicationBeacon : NSObject

@property (copy, nonatomic) SPDiscoveredAccessoryProductInformation *accessoryProductInfo; // ivar: _accessoryProductInfo
@property (nonatomic) NSInteger batteryLevel; // ivar: _batteryLevel
@property (nonatomic) BOOL canBeLeashedByHost; // ivar: _canBeLeashedByHost
@property (nonatomic) BOOL connected; // ivar: _connected
@property (nonatomic) NSString *discoveryId; // ivar: _discoveryId
@property (copy, nonatomic) NSUUID *groupIdentifier; // ivar: _groupIdentifier
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (nonatomic) BOOL isAppleAudioAccessory; // ivar: _isAppleAudioAccessory
@property (nonatomic) BOOL isZeus; // ivar: _isZeus
@property (copy, nonatomic) SPLostModeInfo *lostModeInfo; // ivar: _lostModeInfo
@property (copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) SPHandle *owner; // ivar: _owner
@property (nonatomic) NSInteger partIdentifier; // ivar: _partIdentifier
@property (nonatomic) NSInteger productId; // ivar: _productId
@property (copy, nonatomic) NSUUID *productUUID; // ivar: _productUUID
@property (copy, nonatomic) SPBeaconRole *role; // ivar: _role
@property (copy, nonatomic) NSSet *safeLocations; // ivar: _safeLocations
@property (copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (copy, nonatomic) NSString *systemVersion; // ivar: _systemVersion
@property (copy, nonatomic) NSDictionary *taskInformation; // ivar: _taskInformation
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (nonatomic) NSInteger vendorId; // ivar: _vendorId


-(id)initWithInternalSimpleBeacon:(id)arg0 ;


@end


#endif