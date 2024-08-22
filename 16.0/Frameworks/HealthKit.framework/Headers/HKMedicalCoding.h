// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMEDICALCODING_H
#define HKMEDICALCODING_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HKMedicalCodingSystem.h"

@interface HKMedicalCoding : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *code; // ivar: _code
@property (readonly, copy, nonatomic) HKMedicalCodingSystem *codingSystem; // ivar: _codingSystem
@property (readonly, copy, nonatomic) NSString *codingVersion; // ivar: _codingVersion
@property (readonly, copy, nonatomic) NSString *displayString; // ivar: _displayString


+(BOOL)supportsSecureCoding;
+(id)ICD10CodingWithCode:(id)arg0 ;
+(id)ICD10CodingWithCode:(id)arg0 displayString:(id)arg1 ;
+(id)ICD9CodingWithCode:(id)arg0 ;
+(id)ICD9CodingWithCode:(id)arg0 displayString:(id)arg1 ;
+(id)LOINCCodingWithCode:(id)arg0 ;
+(id)LOINCCodingWithCode:(id)arg0 displayString:(id)arg1 ;
+(id)RxNormCodingWithCode:(id)arg0 ;
+(id)RxNormCodingWithCode:(id)arg0 displayString:(id)arg1 ;
+(id)SNOMEDCodingWithCode:(id)arg0 ;
+(id)SNOMEDCodingWithCode:(id)arg0 displayString:(id)arg1 ;
+(id)appleOntologyCodingWithIdentifier:(id)arg0 ;
+(id)appleOntologyCodingWithRawIdentifier:(NSInteger)arg0 ;
+(id)loinc_diastolicBloodPressureCoding;
+(id)loinc_systolicBloodPressureCoding;
+(id)medicalCodingWithSystem:(id)arg0 codingVersion:(id)arg1 code:(id)arg2 displayString:(id)arg3 ;
+(id)text_codingWithDisplayString:(id)arg0 ;
+(id)ucum_centimeterUnitCoding;
+(id)ucum_codingWithCode:(id)arg0 displayString:(id)arg1 ;
+(id)ucum_meterUnitCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalent:(id)arg0 ;
-(NSUInteger)hash;
-(id)_validateConfiguration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCodingSystem:(id)arg0 codingVersion:(id)arg1 code:(id)arg2 displayString:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif