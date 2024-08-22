// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKGLASSESPRESCRIPTION_H
#define HKGLASSESPRESCRIPTION_H

@protocol NSSecureCoding, NSCopying;


#import "HKVisionPrescription.h"
#import "HKGlassesLensSpecification.h"

@interface HKGlassesPrescription : HKVisionPrescription <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) HKGlassesLensSpecification *leftEye; // ivar: _leftEye
@property (readonly, copy, nonatomic) HKGlassesLensSpecification *rightEye; // ivar: _rightEye


+(BOOL)_validatePrism:(id)arg0 error:(*id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)prescriptionWithRightEyeSpecification:(id)arg0 leftEyeSpecification:(id)arg1 dateIssued:(id)arg2 expirationDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 ;
-(BOOL)_validateGlassesFieldsWithError:(*id)arg0 ;
-(id)_validateWithConfiguration:(struct HKObjectValidationConfiguration )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)leftAddPower;
-(id)leftAxis;
-(id)leftCylinder;
-(id)leftSphere;
-(id)rightAddPower;
-(id)rightAxis;
-(id)rightCylinder;
-(id)rightSphere;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif