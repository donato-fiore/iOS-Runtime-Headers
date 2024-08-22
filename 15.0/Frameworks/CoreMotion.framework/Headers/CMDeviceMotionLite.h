// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMDEVICEMOTIONLITE_H
#define CMDEVICEMOTIONLITE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CMAttitude.h"

@interface CMDeviceMotionLite : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CMAttitude *attitude; // ivar: _attitude
@property (readonly, nonatomic) float compassTemperature; // ivar: _compassTemperature
@property (readonly, nonatomic) ? gravity; // ivar: _gravity
@property (readonly, nonatomic) float gyroTemperature; // ivar: _gyroTemperature
@property (readonly, nonatomic) NSUInteger machTimestamp; // ivar: _machTimestamp
@property (readonly, copy, nonatomic) NSString *physicalDeviceUniqueID; // ivar: _physicalDeviceUniqueID
@property (readonly, nonatomic) ? rawAcceleration; // ivar: _rawAcceleration
@property (readonly, nonatomic) ? rawMagneticField; // ivar: _rawMagneticField
@property (readonly, nonatomic) ? rawRotationRate; // ivar: _rawRotationRate
@property (readonly, nonatomic) ? rotationRate; // ivar: _rotationRate
@property (readonly, nonatomic) float tilt;
@property (readonly, nonatomic) float tip;
@property (readonly, nonatomic) ? userAcceleration; // ivar: _userAcceleration
@property (readonly, nonatomic, getter=isUsingCompass) BOOL usingCompass; // ivar: _usingCompass


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceMotionLite:(struct ? )arg0 andDeviceID:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif