// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NINEARBYOBJECT_H
#define NINEARBYOBJECT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NIDiscoveryToken.h"

@interface NINearbyObject : NSObject <NSCopying, NSSecureCoding>

 {
    ? _direction;
}


@property (nonatomic) float azimuth; // ivar: _azimuth
@property (copy) NSString *deviceIdentifer; // ivar: _deviceIdentifer
@property ? direction;
@property (copy, nonatomic) NIDiscoveryToken *discoveryToken; // ivar: _discoveryToken
@property (nonatomic) float distance; // ivar: _distance
@property (nonatomic) NSInteger distanceMeasurementQuality; // ivar: _distanceMeasurementQuality
@property (nonatomic) float elevation; // ivar: _elevation
@property (nonatomic) NSInteger motionState; // ivar: _motionState
@property (nonatomic) ? quaternion; // ivar: _quaternion
@property (nonatomic) NSUInteger relationship; // ivar: _relationship
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNearbyObject:(id)arg0 ;
-(id)initWithToken:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif