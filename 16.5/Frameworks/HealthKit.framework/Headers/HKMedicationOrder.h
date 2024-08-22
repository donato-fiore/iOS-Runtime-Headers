// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICATIONORDER_H
#define HKMEDICATIONORDER_H

@class NSString, NSArray, NSUUID, NSLocale;
@protocol HKConceptIndexable, NSSecureCoding, NSCopying;


#import "HKMedicalRecord.h"
#import "HKMedicalCodingCollection.h"
#import "HKMedicalDate.h"
#import "HKMedicalCoding.h"
#import "HKConcept.h"
#import "HKMedicationOrderType.h"

@interface HKMedicationOrder : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying>

 {
    HKMedicalCodingCollection *_medicationCodingCollection;
    NSString *_prescriber;
    NSInteger _numberOfFills;
    NSArray *_dosages;
    HKMedicalDate *_earliestDosageDate;
    HKMedicalDate *_writtenDate;
    HKMedicalDate *_endedDate;
    HKMedicalCoding *_statusCoding;
    NSArray *_reasonCodingCollections;
    HKMedicalCodingCollection *_reasonEndedCodingCollection;
    HKMedicalCodingCollection *_statusReasonCodingCollection;
    HKConcept *_medication;
    HKConcept *_status;
    NSArray *_reason;
    HKConcept *_reasonEnded;
    HKConcept *_statusReason;
}


@property (readonly) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *dosages;
@property (readonly, copy) HKMedicalDate *earliestDosageDate;
@property (readonly, copy) HKMedicalDate *endedDate;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, copy) HKConcept *medication;
@property (readonly, copy) HKMedicalCodingCollection *medicationCodingCollection;
@property (readonly, copy) HKMedicationOrderType *medicationOrderType;
@property (readonly) NSInteger numberOfFills;
@property (readonly, copy) NSString *prescriber;
@property (readonly, copy) NSArray *reason;
@property (readonly, copy) NSArray *reasonCodingCollections;
@property (readonly, copy) HKConcept *reasonEnded;
@property (readonly, copy) HKMedicalCodingCollection *reasonEndedCodingCollection;
@property (readonly, nonatomic) NSInteger recordCategoryType;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly, copy) HKConcept *statusReason;
@property (readonly, copy) HKMedicalCodingCollection *statusReasonCodingCollection;
@property (readonly) Class superclass;
@property (readonly, copy) HKMedicalDate *writtenDate;


+(BOOL)_isConcreteObjectClass;
+(BOOL)groupsByUserDomainConcept;
+(BOOL)supportsEquivalence;
+(BOOL)supportsSecureCoding;
+(id)_newMedicationOrderWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 country:(id)arg10 state:(NSUInteger)arg11 medicationCodingCollection:(id)arg12 prescriber:(id)arg13 numberOfFills:(NSInteger)arg14 dosages:(id)arg15 earliestDosageDate:(id)arg16 writtenDate:(id)arg17 endedDate:(id)arg18 statusCoding:(id)arg19 reasonCodingCollections:(id)arg20 reasonEndedCodingCollection:(id)arg21 statusReasonCodingCollection:(id)arg22 config:(id)arg23 ;
+(id)cachedConceptRelationshipKeyPaths;
+(id)defaultDisplayString;
+(id)indexableConceptKeyPaths;
+(id)medicationOrderWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 country:(id)arg9 state:(NSUInteger)arg10 medicationCodingCollection:(id)arg11 prescriber:(id)arg12 numberOfFills:(NSInteger)arg13 dosages:(id)arg14 earliestDosageDate:(id)arg15 writtenDate:(id)arg16 endedDate:(id)arg17 statusCoding:(id)arg18 reasonCodingCollections:(id)arg19 reasonEndedCodingCollection:(id)arg20 statusReasonCodingCollection:(id)arg21 ;
+(id)medicationOrderWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 country:(id)arg10 state:(NSUInteger)arg11 medicationCodingCollection:(id)arg12 prescriber:(id)arg13 numberOfFills:(NSInteger)arg14 dosages:(id)arg15 earliestDosageDate:(id)arg16 writtenDate:(id)arg17 endedDate:(id)arg18 statusCoding:(id)arg19 reasonCodingCollections:(id)arg20 reasonEndedCodingCollection:(id)arg21 statusReasonCodingCollection:(id)arg22 ;
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