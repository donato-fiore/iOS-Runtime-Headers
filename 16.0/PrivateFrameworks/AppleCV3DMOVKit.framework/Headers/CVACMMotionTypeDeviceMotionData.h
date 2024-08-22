// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CVACMMOTIONTYPEDEVICEMOTIONDATA_H
#define CVACMMOTIONTYPEDEVICEMOTIONDATA_H


#import <Foundation/Foundation.h>

#import "CVACLMotionTypeVector3.h"
#import "CVACLMotionTypeDoubleVector4.h"

@interface CVACMMotionTypeDeviceMotionData : NSObject

@property (nonatomic) BOOL doingBiasEstimation; // ivar: _doingBiasEstimation
@property (nonatomic) BOOL doingYawCorrection; // ivar: _doingYawCorrection
@property (retain, nonatomic) CVACLMotionTypeVector3 *gravity; // ivar: _gravity
@property (nonatomic) BOOL isInitialized; // ivar: _isInitialized
@property (retain, nonatomic) CVACLMotionTypeVector3 *magneticField; // ivar: _magneticField
@property (nonatomic) int magneticFieldCalibrationLevel; // ivar: _magneticFieldCalibrationLevel
@property (retain, nonatomic) CVACLMotionTypeDoubleVector4 *quaternion; // ivar: _quaternion
@property (retain, nonatomic) CVACLMotionTypeVector3 *rotationRate; // ivar: _rotationRate
@property (retain, nonatomic) CVACLMotionTypeVector3 *userAcceleration; // ivar: _userAcceleration


-(id)init;


@end


#endif