// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKAUDIOGRAMSENSITIVITYPOINT_H
#define HKAUDIOGRAMSENSITIVITYPOINT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKQuantity.h"

@interface HKAudiogramSensitivityPoint : NSObject <NSSecureCoding>

 {
    HKQuantity *_frequency;
    HKQuantity *_leftEarSensitivity;
    HKQuantity *_rightEarSensitivity;
}


@property (readonly, copy) HKQuantity *frequency;
@property (readonly, copy) HKQuantity *leftEarSensitivity;
@property (readonly, copy) HKQuantity *rightEarSensitivity;


+(BOOL)_validateUnitForFrequency:(id)arg0 ;
+(BOOL)_validateUnitForSensitivity:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(BOOL)validFrequency:(id)arg0 error:(*id)arg1 ;
+(BOOL)validSensitivity:(id)arg0 error:(*id)arg1 ;
+(id)_incompatibleUnit:(id)arg0 incompatibleWith:(id)arg1 ;
+(id)_rangeViolationMin:(id)arg0 max:(id)arg1 value:(id)arg2 ;
+(id)sensitivityPointWithFrequency:(id)arg0 leftEarSensitivity:(id)arg1 rightEarSensitivity:(id)arg2 error:(*id)arg3 ;
-(id)_audiogramDiagnosticSensitivityPointForEarSensitivity:(id)arg0 ;
-(id)_leftDiagnosticSensitivityPoint;
-(id)_rightDiagnosticSensitivityPoint;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrequency:(id)arg0 leftEarSensitivity:(id)arg1 rightEarSensitivity:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif