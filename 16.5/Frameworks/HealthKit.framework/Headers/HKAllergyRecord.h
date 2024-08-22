// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKALLERGYRECORD_H
#define HKALLERGYRECORD_H

@class NSString, NSArray, NSUUID, NSLocale;
@protocol HKConceptIndexable, NSSecureCoding, NSCopying;


#import "HKMedicalRecord.h"
#import "HKMedicalCodingCollection.h"
#import "HKMedicalDate.h"
#import "HKMedicalCoding.h"
#import "HKConcept.h"
#import "HKAllergyRecordType.h"

@interface HKAllergyRecord : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying>

 {
    HKMedicalCodingCollection *_allergyCodingCollection;
    HKMedicalDate *_onsetDate;
    NSString *_asserter;
    NSArray *_reactions;
    HKMedicalCoding *_criticalityCoding;
    HKMedicalDate *_lastOccurrenceDate;
    HKMedicalDate *_recordedDate;
    HKMedicalCoding *_verificationStatusCoding;
    HKMedicalCoding *_clinicalStatusCoding;
    HKMedicalCoding *_allergyTypeCoding;
    HKMedicalCoding *_categoryCoding;
    HKConcept *_allergy;
    HKConcept *_criticality;
    HKConcept *_verificationStatus;
    HKConcept *_clinicalStatus;
    HKConcept *_allergyType;
    HKConcept *_category;
}


@property (readonly) NSUUID *UUID;
@property (readonly, copy) HKConcept *allergy;
@property (readonly, copy) HKMedicalCodingCollection *allergyCodingCollection;
@property (readonly, copy) HKAllergyRecordType *allergyRecordType;
@property (readonly, copy) HKConcept *allergyType;
@property (readonly, copy) HKMedicalCoding *allergyTypeCoding;
@property (readonly, copy) NSString *asserter;
@property (readonly, copy) HKConcept *category;
@property (readonly, copy) HKMedicalCoding *categoryCoding;
@property (readonly, copy) HKConcept *clinicalStatus;
@property (readonly, copy) HKMedicalCoding *clinicalStatusCoding;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, copy) HKConcept *criticality;
@property (readonly, copy) HKMedicalCoding *criticalityCoding;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) HKMedicalDate *lastOccurrenceDate;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, copy) HKMedicalDate *onsetDate;
@property (readonly, copy) NSArray *reactions;
@property (readonly, nonatomic) NSInteger recordCategoryType;
@property (readonly, copy) HKMedicalDate *recordedDate;
@property (readonly) Class superclass;
@property (readonly, copy) HKConcept *verificationStatus;
@property (readonly, copy) HKMedicalCoding *verificationStatusCoding;


+(BOOL)_isConcreteObjectClass;
+(BOOL)groupsByUserDomainConcept;
+(BOOL)supportsEquivalence;
+(BOOL)supportsSecureCoding;
+(id)_newAllergyRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 country:(id)arg10 state:(NSUInteger)arg11 allergyCodingCollection:(id)arg12 onsetDate:(id)arg13 asserter:(id)arg14 reactions:(id)arg15 criticalityCoding:(id)arg16 lastOccurrenceDate:(id)arg17 recordedDate:(id)arg18 verificationStatusCoding:(id)arg19 clinicalStatusCoding:(id)arg20 allergyTypeCoding:(id)arg21 categoryCoding:(id)arg22 config:(id)arg23 ;
+(id)allergyRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 country:(id)arg9 state:(NSUInteger)arg10 allergyCodingCollection:(id)arg11 onsetDate:(id)arg12 asserter:(id)arg13 reactions:(id)arg14 criticalityCoding:(id)arg15 lastOccurrenceDate:(id)arg16 recordedDate:(id)arg17 verificationStatusCoding:(id)arg18 clinicalStatusCoding:(id)arg19 allergyTypeCoding:(id)arg20 categoryCoding:(id)arg21 ;
+(id)allergyRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 country:(id)arg10 state:(NSUInteger)arg11 allergyCodingCollection:(id)arg12 onsetDate:(id)arg13 asserter:(id)arg14 reactions:(id)arg15 criticalityCoding:(id)arg16 lastOccurrenceDate:(id)arg17 recordedDate:(id)arg18 verificationStatusCoding:(id)arg19 clinicalStatusCoding:(id)arg20 allergyTypeCoding:(id)arg21 categoryCoding:(id)arg22 ;
+(id)cachedConceptRelationshipKeyPaths;
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