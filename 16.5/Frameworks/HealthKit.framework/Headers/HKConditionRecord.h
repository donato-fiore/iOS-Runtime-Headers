// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCONDITIONRECORD_H
#define HKCONDITIONRECORD_H

@class NSArray, NSString, NSUUID, NSLocale;
@protocol HKConceptIndexable, NSSecureCoding, NSCopying;


#import "HKMedicalRecord.h"
#import "HKMedicalCodingCollection.h"
#import "HKInspectableValue.h"
#import "HKMedicalDate.h"
#import "HKMedicalCoding.h"
#import "HKConcept.h"
#import "HKConditionRecordType.h"

@interface HKConditionRecord : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying>

 {
    HKMedicalCodingCollection *_conditionCodingCollection;
    NSArray *_categoriesCodingCollections;
    NSString *_asserter;
    HKInspectableValue *_abatement;
    HKInspectableValue *_onset;
    HKMedicalDate *_recordedDate;
    HKMedicalCoding *_clinicalStatusCoding;
    HKMedicalCoding *_verificationStatusCoding;
    HKMedicalCodingCollection *_severityCodingCollection;
    NSArray *_bodySitesCodingCollections;
    HKConcept *_condition;
    NSArray *_categories;
    HKConcept *_clinicalStatus;
    HKConcept *_verificationStatus;
    HKConcept *_severity;
    NSArray *_bodySites;
}


@property (readonly) NSUUID *UUID;
@property (readonly, copy) HKInspectableValue *abatement;
@property (readonly, copy) NSString *asserter;
@property (readonly, copy) NSArray *bodySites;
@property (readonly, copy) NSArray *bodySitesCodingCollections;
@property (readonly, copy) NSArray *categories;
@property (readonly, copy) NSArray *categoriesCodingCollections;
@property (readonly, copy) HKConcept *clinicalStatus;
@property (readonly, copy) HKMedicalCoding *clinicalStatusCoding;
@property (readonly, copy) HKConcept *condition;
@property (readonly, copy) HKMedicalCodingCollection *conditionCodingCollection;
@property (readonly, copy) HKConditionRecordType *conditionRecordType;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, copy) HKInspectableValue *onset;
@property (readonly, nonatomic) NSInteger recordCategoryType;
@property (readonly, copy) HKMedicalDate *recordedDate;
@property (readonly, copy) HKConcept *severity;
@property (readonly, copy) HKMedicalCodingCollection *severityCodingCollection;
@property (readonly) Class superclass;
@property (readonly, copy) HKConcept *verificationStatus;
@property (readonly, copy) HKMedicalCoding *verificationStatusCoding;


+(BOOL)_isConcreteObjectClass;
+(BOOL)groupsByUserDomainConcept;
+(BOOL)supportsEquivalence;
+(BOOL)supportsSecureCoding;
+(id)_newConditionRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 country:(id)arg10 state:(NSUInteger)arg11 conditionCodingCollection:(id)arg12 categoriesCodingCollections:(id)arg13 asserter:(id)arg14 abatement:(id)arg15 onset:(id)arg16 recordedDate:(id)arg17 clinicalStatusCoding:(id)arg18 verificationStatusCoding:(id)arg19 severityCodingCollection:(id)arg20 bodySitesCodingCollections:(id)arg21 config:(id)arg22 ;
+(id)cachedConceptRelationshipKeyPaths;
+(id)conditionRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 country:(id)arg9 state:(NSUInteger)arg10 conditionCodingCollection:(id)arg11 categoriesCodingCollections:(id)arg12 asserter:(id)arg13 abatement:(id)arg14 onset:(id)arg15 recordedDate:(id)arg16 clinicalStatusCoding:(id)arg17 verificationStatusCoding:(id)arg18 severityCodingCollection:(id)arg19 bodySitesCodingCollections:(id)arg20 ;
+(id)conditionRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 country:(id)arg10 state:(NSUInteger)arg11 conditionCodingCollection:(id)arg12 categoriesCodingCollections:(id)arg13 asserter:(id)arg14 abatement:(id)arg15 onset:(id)arg16 recordedDate:(id)arg17 clinicalStatusCoding:(id)arg18 verificationStatusCoding:(id)arg19 severityCodingCollection:(id)arg20 bodySitesCodingCollections:(id)arg21 ;
+(id)defaultDisplayString;
+(id)indexableConceptKeyPaths;
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