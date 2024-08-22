// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCLINICALRECORD_H
#define HKCLINICALRECORD_H

@class NSString;
@protocol NSSecureCoding, NSCopying;


#import "HKSample.h"
#import "HKFHIRResource.h"
#import "HKClinicalType.h"

@interface HKClinicalRecord : HKSample <NSSecureCoding, NSCopying>

 {
    NSString *_displayName;
    HKFHIRResource *_FHIRResource;
}


@property (readonly, copy) HKFHIRResource *FHIRResource;
@property (readonly, copy) HKClinicalType *clinicalType;
@property (readonly, copy) NSString *displayName;


+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsEquivalence;
+(BOOL)supportsSecureCoding;
+(id)_newClinicalRecordWithType:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 device:(id)arg3 metadata:(id)arg4 displayName:(id)arg5 FHIRResource:(id)arg6 config:(id)arg7 ;
+(id)clinicalRecordWithType:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 device:(id)arg3 metadata:(id)arg4 displayName:(id)arg5 FHIRResource:(id)arg6 ;
-(BOOL)isEquivalent:(id)arg0 ;
-(id)_validateWithConfiguration:(struct HKObjectValidationConfiguration )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif