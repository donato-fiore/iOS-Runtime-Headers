// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICALRECORDORIGINIDENTIFIER_H
#define HKMEDICALRECORDORIGINIDENTIFIER_H

@class NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKFHIRIdentifier.h"

@interface HKMedicalRecordOriginIdentifier : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) HKFHIRIdentifier *fhirIdentifier; // ivar: _fhirIdentifier
@property (readonly, copy, nonatomic) NSUUID *signedClinicalDataRecordIdentifier; // ivar: _signedClinicalDataRecordIdentifier


+(BOOL)supportsSecureCoding;
+(id)originIdentifierWithFHIRResourceType:(id)arg0 identifier:(id)arg1 ;
+(id)unitTesting_identifierWithAllPropertiesAllocated;
+(id)unitTesting_identifierWithNeitherPropertyAllocated;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithFHIRIdentifier:(id)arg0 signedClinicalDataRecordIdentifier:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFHIRIdentifier:(id)arg0 ;
-(id)initWithSignedClinicalDataRecordIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif