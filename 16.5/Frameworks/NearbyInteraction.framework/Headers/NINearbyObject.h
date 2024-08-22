// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NINEARBYOBJECT_H
#define NINEARBYOBJECT_H

@class NSData, NSString, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NIDiscoveryToken.h"
#import "UWBSignalFeatures.h"

@interface NINearbyObject : NSObject <NSCopying, NSSecureCoding>

 {
    ? _direction;
    ? _worldPosition;
}


@property (nonatomic) float azimuth; // ivar: _azimuth
@property (copy, nonatomic) NSData *bluetoothAdvertisingAddress; // ivar: _bluetoothAdvertisingAddress
@property (copy, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property ? direction;
@property (copy, nonatomic) NIDiscoveryToken *discoveryToken; // ivar: _discoveryToken
@property (nonatomic) float distance; // ivar: _distance
@property (nonatomic) NSInteger distanceMeasurementQuality; // ivar: _distanceMeasurementQuality
@property (nonatomic) float elevation; // ivar: _elevation
@property (nonatomic) float horizontalAngle; // ivar: _horizontalAngle
@property (nonatomic) NSInteger motionState; // ivar: _motionState
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) ? quaternion; // ivar: _quaternion
@property (nonatomic) CGFloat rangeBiasEstimate; // ivar: _rangeBiasEstimate
@property (nonatomic) CGFloat rangeUncertainty; // ivar: _rangeUncertainty
@property (nonatomic) NSUInteger relationship; // ivar: _relationship
@property (nonatomic) unsigned char remoteTxAntennaMask; // ivar: _remoteTxAntennaMask
@property (nonatomic) BOOL requiresBiasCorrection; // ivar: _requiresBiasCorrection
@property (nonatomic) CGFloat signalStrength; // ivar: _signalStrength
@property (copy, nonatomic) NSNumber *spatialScore; // ivar: _spatialScore
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (copy, nonatomic) UWBSignalFeatures *uwbSignalFeatures; // ivar: _uwbSignalFeatures
@property (nonatomic) NSInteger verticalDirectionEstimate; // ivar: _verticalDirectionEstimate
@property ? worldPosition;


+(id)fauxObjectWithDiscoveryToken:(id)arg0 name:(id)arg1 deviceIdentifier:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNearbyObject:(id)arg0 ;
-(id)initWithToken:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)overrideDirection;
-(void)overrideDistance:(float)arg0 ;
-(void)overrideDistanceMeasurementQuality:(NSInteger)arg0 ;
-(void)overrideMotionState:(NSInteger)arg0 ;
-(void)overrideRelationship:(NSUInteger)arg0 ;
-(void)overrideSpatialScore:(id)arg0 ;
-(void)overrideTimestamp:(float)arg0 ;


@end


#endif