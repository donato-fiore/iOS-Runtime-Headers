// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPBEACON_H
#define SPBEACON_H

@class NSDate, NSString, NSUUID, NSSet, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SPDiscoveredAccessoryProductInformation.h"
#import "SPLostModeInfo.h"
#import "SPHandle.h"
#import "SPBeaconRole.h"

@interface SPBeacon : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL accepted; // ivar: _accepted
@property (copy, nonatomic) SPDiscoveredAccessoryProductInformation *accessoryProductInfo; // ivar: _accessoryProductInfo
@property (nonatomic) NSInteger batteryLevel; // ivar: _batteryLevel
@property (nonatomic) NSInteger beaconSeparationState; // ivar: _beaconSeparationState
@property (nonatomic) BOOL canBeLeashedByHost; // ivar: _canBeLeashedByHost
@property (nonatomic) NSInteger connectableDeviceCount; // ivar: _connectableDeviceCount
@property (nonatomic) BOOL connected; // ivar: _connected
@property (copy, nonatomic) NSDate *connectedStateExpiryDate; // ivar: _connectedStateExpiryDate
@property (nonatomic) BOOL connectionAllowed; // ivar: _connectionAllowed
@property (copy, nonatomic) NSString *correlationIdentifier; // ivar: _correlationIdentifier
@property (copy, nonatomic) NSUUID *groupIdentifier; // ivar: _groupIdentifier
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (nonatomic) BOOL isAppleAudioAccessory; // ivar: _isAppleAudioAccessory
@property (nonatomic) BOOL isZeus; // ivar: _isZeus
@property (copy, nonatomic) NSDate *keyAlignmentLastIndexObservationDate; // ivar: _keyAlignmentLastIndexObservationDate
@property (nonatomic) NSUInteger keyAlignmentLastObservedIndex; // ivar: _keyAlignmentLastObservedIndex
@property (copy, nonatomic) NSDate *keySyncLastIndexObservationDate; // ivar: _keySyncLastIndexObservationDate
@property (nonatomic) NSUInteger keySyncLastObservedIndex; // ivar: _keySyncLastObservedIndex
@property (nonatomic) NSUInteger keySyncWildIndexFallback; // ivar: _keySyncWildIndexFallback
@property (copy, nonatomic) NSSet *locationProviders; // ivar: _locationProviders
@property (copy, nonatomic) SPLostModeInfo *lostModeInfo; // ivar: _lostModeInfo
@property (copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) SPHandle *owner; // ivar: _owner
@property (copy, nonatomic) NSDate *pairingDate; // ivar: _pairingDate
@property (nonatomic) NSInteger partIdentifier; // ivar: _partIdentifier
@property (nonatomic) NSInteger productId; // ivar: _productId
@property (copy, nonatomic) NSUUID *productUUID; // ivar: _productUUID
@property (copy, nonatomic) SPBeaconRole *role; // ivar: _role
@property (copy, nonatomic) NSSet *safeLocations; // ivar: _safeLocations
@property (copy, nonatomic) NSString *separationState; // ivar: _separationState
@property (copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (copy, nonatomic) NSSet *shares; // ivar: _shares
@property (copy, nonatomic) NSString *stableIdentifier; // ivar: _stableIdentifier
@property (copy, nonatomic) NSString *systemVersion; // ivar: _systemVersion
@property (copy, nonatomic) NSDictionary *taskInformation; // ivar: _taskInformation
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (nonatomic) NSInteger vendorId; // ivar: _vendorId


+(BOOL)supportsSecureCoding;
+(id)SPOwner;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif