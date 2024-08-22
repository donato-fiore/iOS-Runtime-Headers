// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMDEVICEMOTION_H
#define CMDEVICEMOTION_H



#import "CMLogItem.h"
#import "CMAttitude.h"

@interface CMDeviceMotion : CMLogItem {
    id *_internal;
}


@property (readonly, nonatomic) CMAttitude *attitude;
@property (readonly, nonatomic) BOOL doingBiasEstimation;
@property (readonly, nonatomic) BOOL doingYawCorrection;
@property (readonly, nonatomic) BOOL fusedWithVision;
@property (readonly, nonatomic) ? gravity;
@property (readonly, nonatomic) CGFloat heading;
@property (readonly, nonatomic) CGFloat headingAccuracy;
@property (readonly, nonatomic) ? magneticField;
@property (readonly, nonatomic) int magneticFieldCalibrationLevel;
@property (readonly, nonatomic) ? rotationRate;
@property (readonly, nonatomic) NSInteger sensorLocation;
@property (readonly, nonatomic) ? userAcceleration;
@property (readonly, nonatomic) BOOL usingVisionCorrections;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceMotion:(struct ? )arg0 internal:(struct ? )arg1 timestamp:(CGFloat)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif