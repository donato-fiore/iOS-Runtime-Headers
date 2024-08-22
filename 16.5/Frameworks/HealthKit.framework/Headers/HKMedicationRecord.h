// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICATIONRECORD_H
#define HKMEDICATIONRECORD_H

@class NSString, NSArray, NSUUID, NSLocale;
@protocol HKConceptIndexable, NSSecureCoding, NSCopying;


#import "HKMedicalRecord.h"
#import "HKMedicalCodingCollection.h"
#import "HKMedicalDate.h"
#import "HKMedicalCoding.h"
#import "HKConcept.h"
#import "HKMedicationRecordType.h"

@interface HKMedicationRecord : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying>

 {
    HKMedicalCodingCollection *_medicationCodingCollection;
    NSInteger _assertionType;
    NSString *_asserter;
    HKMedicalDate *_assertionDate;
    HKMedicalCoding *_statusCoding;
    NSArray *_dosages;
    HKMedicalDate *_earliestDosageDate;
    NSArray *_reasonForUseCodingCollections;
    BOOL _notTaken;
    NSArray *_reasonsNotTakenCodingCollections;
    HKMedicalDate *_effectiveStartDate;
    HKMedicalDate *_effectiveEndDate;
    HKConcept *_medication;
    HKConcept *_status;
    NSArray *_reasonForUse;
    NSArray *_reasonsNotTaken;
}


@property (readonly) NSUUID *UUID;
@property (readonly, copy) NSString *asserter;
@property (readonly, copy) HKMedicalDate *assertionDate;
@property (readonly) NSInteger assertionType;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *dosages;
@property (readonly, copy) HKMedicalDate *earliestDosageDate;
@property (readonly, copy) HKMedicalDate *effectiveEndDate;
@property (readonly, copy) HKMedicalDate *effectiveStartDate;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, copy) HKConcept *medication;
@property (readonly, copy) HKMedicalCodingCollection *medicationCodingCollection;
@property (readonly, copy) HKMedicationRecordType *medicationRecordType;
@property (readonly) BOOL notTaken;
@property (readonly, copy) NSArray *reasonForUse;
@property (readonly, copy) NSArray *reasonForUseCodingCollections;
@property (readonly, copy) NSArray *reasonsNotTaken;
@property (readonly, copy) NSArray *reasonsNotTakenCodingCollections;
@property (readonly, nonatomic) NSInteger recordCategoryType;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly) Class superclass;


+(BOOL)_isConcreteObjectClass;
+(BOOL)groupsByUserDomainConcept;
+(BOOL)supportsEquivalence;
+(BOOL)supportsSecureCoding;
+(id)_newMedicationRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 country:(id)arg10 state:(NSUInteger)arg11 medicationCodingCollection:(id)arg12 assertionType:(NSInteger)arg13 asserter:(id)arg14 assertionDate:(id)arg15 statusCoding:(id)arg16 dosages:(id)arg17 earliestDosageDate:(id)arg18 reasonForUseCodingCollections:(id)arg19 notTaken:(BOOL)arg20 reasonsNotTakenCodingCollections:(id)arg21 effectiveStartDate:(id)arg22 effectiveEndDate:(id)arg23 config:(id)arg24 ;
+(id)cachedConceptRelationshipKeyPaths;
+(id)defaultDisplayString;
+(id)indexableConceptKeyPaths;
+(id)medicationRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 country:(id)arg9 state:(NSUInteger)arg10 medicationCodingCollection:(id)arg11 assertionType:(NSInteger)arg12 asserter:(id)arg13 assertionDate:(id)arg14 statusCoding:(id)arg15 dosages:(id)arg16 earliestDosageDate:(id)arg17 reasonForUseCodingCollections:(id)arg18 notTaken:(BOOL)arg19 reasonsNotTakenCodingCollections:(id)arg20 effectiveStartDate:(id)arg21 effectiveEndDate:(id)arg22 ;
+(id)medicationRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 country:(id)arg10 state:(NSUInteger)arg11 medicationCodingCollection:(id)arg12 assertionType:(NSInteger)arg13 asserter:(id)arg14 assertionDate:(id)arg15 statusCoding:(id)arg16 dosages:(id)arg17 earliestDosageDate:(id)arg18 reasonForUseCodingCollections:(id)arg19 notTaken:(BOOL)arg20 reasonsNotTakenCodingCollections:(id)arg21 effectiveStartDate:(id)arg22 effectiveEndDate:(id)arg23 ;
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