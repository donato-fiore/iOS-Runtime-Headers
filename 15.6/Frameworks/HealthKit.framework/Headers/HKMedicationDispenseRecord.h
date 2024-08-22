// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKMEDICATIONDISPENSERECORD_H
#define HKMEDICATIONDISPENSERECORD_H

@class NSArray, NSUUID, NSString, NSLocale;
@protocol HKConceptIndexable, NSSecureCoding, NSCopying;


#import "HKMedicalRecord.h"
#import "HKCodedQuantity.h"
#import "HKMedicalDate.h"
#import "HKMedicalCoding.h"
#import "HKConcept.h"
#import "HKMedicationDispenseRecordType.h"

@interface HKMedicationDispenseRecord : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying>

 {
    NSArray *_medicationCodings;
    HKCodedQuantity *_quantityDispensed;
    HKMedicalDate *_preparationDate;
    HKMedicalDate *_handOverDate;
    NSArray *_dosages;
    HKMedicalDate *_earliestDosageDate;
    HKMedicalCoding *_statusCoding;
    HKCodedQuantity *_daysSupplyQuantity;
    HKConcept *_medication;
    HKConcept *_status;
}


@property (readonly) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, copy) HKCodedQuantity *daysSupplyQuantity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *dosages;
@property (readonly, copy) HKMedicalDate *earliestDosageDate;
@property (readonly, copy) HKMedicalDate *handOverDate;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, copy) HKConcept *medication;
@property (readonly, copy) NSArray *medicationCodings;
@property (readonly, copy) HKMedicationDispenseRecordType *medicationDispenseRecordType;
@property (readonly, copy) HKMedicalDate *preparationDate;
@property (readonly, copy) HKCodedQuantity *quantityDispensed;
@property (readonly, nonatomic) NSInteger recordCategoryType;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly) Class superclass;


+(BOOL)_isConcreteObjectClass;
+(BOOL)groupsByUserDomainConcept;
+(BOOL)supportsEquivalence;
+(BOOL)supportsSecureCoding;
+(id)_newMedicationDispenseRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 country:(id)arg10 state:(NSUInteger)arg11 medicationCodings:(id)arg12 quantityDispensed:(id)arg13 preparationDate:(id)arg14 handOverDate:(id)arg15 dosages:(id)arg16 earliestDosageDate:(id)arg17 statusCoding:(id)arg18 daysSupplyQuantity:(id)arg19 config:(id)arg20 ;
+(id)cachedConceptRelationshipKeyPaths;
+(id)defaultDisplayString;
+(id)indexableConceptKeyPaths;
+(id)medicationDispenseRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 country:(id)arg9 state:(NSUInteger)arg10 medicationCodings:(id)arg11 quantityDispensed:(id)arg12 preparationDate:(id)arg13 handOverDate:(id)arg14 dosages:(id)arg15 earliestDosageDate:(id)arg16 statusCoding:(id)arg17 daysSupplyQuantity:(id)arg18 ;
+(id)medicationDispenseRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 country:(id)arg10 state:(NSUInteger)arg11 medicationCodings:(id)arg12 quantityDispensed:(id)arg13 preparationDate:(id)arg14 handOverDate:(id)arg15 dosages:(id)arg16 earliestDosageDate:(id)arg17 statusCoding:(id)arg18 daysSupplyQuantity:(id)arg19 ;
-(BOOL)applyConcepts:(id)arg0 forKeyPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)isEquivalent:(id)arg0 ;
-(id)_validateWithConfiguration:(struct HKObjectValidationConfiguration )arg0 ;
-(id)codingsForKeyPath:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)medicalRecordCodings;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif