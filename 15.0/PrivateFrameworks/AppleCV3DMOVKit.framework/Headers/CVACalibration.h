// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CVACALIBRATION_H
#define CVACALIBRATION_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CVAIMUCalibration.h"

@interface CVACalibration : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *cameraCalibrations; // ivar: _cameraCalibrations
@property (retain, nonatomic) CVAIMUCalibration *imuCalibration; // ivar: _imuCalibration


+(BOOL)supportsSecureCoding;
+(id)classes;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif