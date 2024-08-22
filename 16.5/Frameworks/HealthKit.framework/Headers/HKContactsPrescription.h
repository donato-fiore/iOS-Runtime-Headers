// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCONTACTSPRESCRIPTION_H
#define HKCONTACTSPRESCRIPTION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;


#import "HKVisionPrescription.h"
#import "HKContactsLensSpecification.h"

@interface HKContactsPrescription : HKVisionPrescription <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *brand; // ivar: _brand
@property (readonly, copy, nonatomic) HKContactsLensSpecification *leftEye; // ivar: _leftEye
@property (readonly, copy, nonatomic) HKContactsLensSpecification *rightEye; // ivar: _rightEye


+(BOOL)_validateBaseCurve:(id)arg0 error:(*id)arg1 ;
+(BOOL)_validateDiameter:(id)arg0 error:(*id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)prescriptionWithRightEyeSpecification:(id)arg0 leftEyeSpecification:(id)arg1 brand:(id)arg2 dateIssued:(id)arg3 expirationDate:(id)arg4 device:(id)arg5 metadata:(id)arg6 ;
-(BOOL)_validateContactsFieldsWithError:(*id)arg0 ;
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