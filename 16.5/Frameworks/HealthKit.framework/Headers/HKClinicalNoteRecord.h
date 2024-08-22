// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCLINICALNOTERECORD_H
#define HKCLINICALNOTERECORD_H

@class NSArray, NSUUID, NSString, NSLocale;
@protocol HKConceptIndexable, NSSecureCoding, NSCopying;


#import "HKMedicalRecord.h"
#import "HKMedicalCoding.h"
#import "HKMedicalCodingCollection.h"
#import "HKMedicalDate.h"
#import "HKConcept.h"
#import "HKClinicalNoteRecordType.h"

@interface HKClinicalNoteRecord : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying>

 {
    HKMedicalCoding *_statusCoding;
    HKMedicalCodingCollection *_documentTypeCodingCollection;
    HKMedicalDate *_noteCreationDate;
    NSArray *_categoriesCodingCollections;
    HKMedicalDate *_relevantStartDate;
    HKMedicalDate *_relevantEndDate;
    NSArray *_authors;
    HKConcept *_status;
    HKConcept *_documentType;
    NSArray *_categories;
}


@property (readonly) NSUUID *UUID;
@property (readonly, copy) NSArray *authors;
@property (readonly, copy) NSArray *categories;
@property (readonly, copy) NSArray *categoriesCodingCollections;
@property (readonly, copy) HKClinicalNoteRecordType *clinicalNoteRecordType;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HKConcept *documentType;
@property (readonly, copy) HKMedicalCodingCollection *documentTypeCodingCollection;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, copy) HKMedicalDate *noteCreationDate;
@property (readonly, nonatomic) NSInteger recordCategoryType;
@property (readonly, copy) HKMedicalDate *relevantEndDate;
@property (readonly, copy) HKMedicalDate *relevantStartDate;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly) Class superclass;


+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsEquivalence;
+(BOOL)supportsSecureCoding;
+(id)_newClinicalNoteRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 country:(id)arg10 state:(NSUInteger)arg11 statusCoding:(id)arg12 documentTypeCodingCollection:(id)arg13 noteCreationDate:(id)arg14 categoriesCodingCollections:(id)arg15 relevantStartDate:(id)arg16 relevantEndDate:(id)arg17 authors:(id)arg18 config:(id)arg19 ;
+(id)cachedConceptRelationshipKeyPaths;
+(id)clinicalNoteRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 country:(id)arg9 state:(NSUInteger)arg10 statusCoding:(id)arg11 documentTypeCodingCollection:(id)arg12 noteCreationDate:(id)arg13 categoriesCodingCollections:(id)arg14 relevantStartDate:(id)arg15 relevantEndDate:(id)arg16 authors:(id)arg17 ;
+(id)clinicalNoteRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 country:(id)arg10 state:(NSUInteger)arg11 statusCoding:(id)arg12 documentTypeCodingCollection:(id)arg13 noteCreationDate:(id)arg14 categoriesCodingCollections:(id)arg15 relevantStartDate:(id)arg16 relevantEndDate:(id)arg17 authors:(id)arg18 ;
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