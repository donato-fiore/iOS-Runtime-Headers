// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKVISIONPRESCRIPTION_H
#define HKVISIONPRESCRIPTION_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;


#import "HKSample.h"
#import "HKQuantity.h"

@interface HKVisionPrescription : HKSample <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSDate *dateIssued;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) HKQuantity *leftAddPower; // ivar: _leftAddPower
@property (readonly, copy, nonatomic) HKQuantity *leftAxis; // ivar: _leftAxis
@property (readonly, copy, nonatomic) HKQuantity *leftCylinder; // ivar: _leftCylinder
@property (readonly, copy, nonatomic) HKQuantity *leftSphere; // ivar: _leftSphere
@property (readonly, nonatomic) NSUInteger prescriptionType; // ivar: _prescriptionType
@property (readonly, copy, nonatomic) HKQuantity *rightAddPower; // ivar: _rightAddPower
@property (readonly, copy, nonatomic) HKQuantity *rightAxis; // ivar: _rightAxis
@property (readonly, copy, nonatomic) HKQuantity *rightCylinder; // ivar: _rightCylinder
@property (readonly, copy, nonatomic) HKQuantity *rightSphere; // ivar: _rightSphere


+(BOOL)_isConcreteObjectClass;
+(BOOL)_validateAddPower:(id)arg0 error:(*id)arg1 ;
+(BOOL)_validateAxis:(id)arg0 error:(*id)arg1 ;
+(BOOL)_validateCylinder:(id)arg0 error:(*id)arg1 ;
+(BOOL)_validateSphere:(id)arg0 error:(*id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)prescriptionWithType:(NSUInteger)arg0 dateIssued:(id)arg1 expirationDate:(id)arg2 device:(id)arg3 metadata:(id)arg4 ;
-(BOOL)_validateCommonFieldsWithError:(*id)arg0 ;
-(BOOL)_validateForSavingWithClientEntitlements:(id)arg0 applicationSDKVersion:(unsigned int)arg1 isAppleWatch:(BOOL)arg2 error:(*id)arg3 ;
-(id)_validateWithConfiguration:(struct HKObjectValidationConfiguration )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif