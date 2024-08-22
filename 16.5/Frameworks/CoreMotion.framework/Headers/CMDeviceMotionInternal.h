// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMDEVICEMOTIONINTERNAL_H
#define CMDEVICEMOTIONINTERNAL_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CMAttitude.h"

@interface CMDeviceMotionInternal : NSObject <NSCopying>

 {
    ? fGravity;
    ? fUserAcceleration;
    ? fRotationRate;
    CMAttitude *fAttitude;
    ? fMagneticField;
    int fMagneticFieldCalibrationLevel;
    BOOL fDoingYawCorrection;
    BOOL fDoingBiasEstimation;
    float fHeading;
    float fHeadingAccuracy;
    BOOL fFusedWithVision;
    BOOL fUsingVisionCorrections;
    NSInteger fSensorLocation;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDeviceMotion:(struct ? )arg0 internal:(struct ? )arg1 ;
-(void)dealloc;
-(void)setDeviceMotion:(struct ? )arg0 internal:(struct ? )arg1 ;


@end


#endif