// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CVAIMUCALIBRATION_H
#define CVAIMUCALIBRATION_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CVAIMUCalibration : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *accelConversion; // ivar: _accelConversion
@property (nonatomic) CGFloat accelTimestampCorrection; // ivar: _accelTimestampCorrection
@property (retain, nonatomic) NSArray *gravity; // ivar: _gravity
@property (retain, nonatomic) NSArray *gyroConversion; // ivar: _gyroConversion
@property (retain, nonatomic) NSArray *imuToIMURotation; // ivar: _imuToIMURotation
@property (retain, nonatomic) NSArray *imuToIMUTranslation; // ivar: _imuToIMUTranslation
@property (retain, nonatomic) NSArray *noiseCharacteristics; // ivar: _noiseCharacteristics


+(BOOL)supportsSecureCoding;
+(id)classes;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif