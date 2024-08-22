// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKPROCEDURERECORD_H
#define HKPROCEDURERECORD_H

@class NSArray, NSUUID, NSString, NSLocale;
@protocol HKConceptIndexable, NSSecureCoding, NSCopying;


#import "HKMedicalRecord.h"
#import "HKMedicalCodingCollection.h"
#import "HKMedicalDate.h"
#import "HKMedicalCoding.h"
#import "HKConcept.h"
#import "HKProcedureRecordType.h"

@interface HKProcedureRecord : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying>

 {
    HKMedicalCodingCollection *_procedureCodingCollection;
    NSArray *_performers;
    HKMedicalDate *_executionStartDate;
    HKMedicalDate *_executionEndDate;
    BOOL _notPerformed;
    HKMedicalCoding *_statusCoding;
    HKMedicalCodingCollection *_categoryCodingCollection;
    NSArray *_reasonCodingCollections;
    NSArray *_reasonsNotPerformedCodingCollections;
    HKMedicalCodingCollection *_outcomeCodingCollection;
    NSArray *_complicationsCodingCollections;
    NSArray *_followUpsCodingCollections;
    NSArray *_bodySitesCodingCollections;
    HKConcept *_procedure;
    HKConcept *_status;
    HKConcept *_category;
    NSArray *_reason;
    NSArray *_reasonsNotPerformed;
    HKConcept *_outcome;
    NSArray *_complications;
    NSArray *_followUps;
    NSArray *_bodySites;
}


@property (readonly) NSUUID *UUID;
@property (readonly, copy) NSArray *bodySites;
@property (readonly, copy) NSArray *bodySitesCodingCollections;
@property (readonly, copy) HKConcept *category;
@property (readonly, copy) HKMedicalCodingCollection *categoryCodingCollection;
@property (readonly, copy) NSArray *complications;
@property (readonly, copy) NSArray *complicationsCodingCollections;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HKMedicalDate *executionEndDate;
@property (readonly, copy) HKMedicalDate *executionStartDate;
@property (readonly, copy) NSArray *followUps;
@property (readonly, copy) NSArray *followUpsCodingCollections;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly) BOOL notPerformed;
@property (readonly, copy) HKConcept *outcome;
@property (readonly, copy) HKMedicalCodingCollection *outcomeCodingCollection;
@property (readonly, copy) NSArray *performers;
@property (readonly, copy) HKConcept *procedure;
@property (readonly, copy) HKMedicalCodingCollection *procedureCodingCollection;
@property (readonly, copy) HKProcedureRecordType *procedureRecordType;
@property (readonly, copy) NSArray *reason;
@property (readonly, copy) NSArray *reasonCodingCollections;
@property (readonly, copy) NSArray *reasonsNotPerformed;
@property (readonly, copy) NSArray *reasonsNotPerformedCodingCollections;
@property (readonly, nonatomic) NSInteger recordCategoryType;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly) Class superclass;


+(BOOL)_isConcreteObjectClass;
+(BOOL)groupsByUserDomainConcept;
+(BOOL)supportsEquivalence;
+(BOOL)supportsSecureCoding;
+(id)_newProcedureRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 country:(id)arg10 state:(NSUInteger)arg11 procedureCodingCollection:(id)arg12 performers:(id)arg13 executionStartDate:(id)arg14 executionEndDate:(id)arg15 notPerformed:(BOOL)arg16 statusCoding:(id)arg17 categoryCodingCollection:(id)arg18 reasonCodingCollections:(id)arg19 reasonsNotPerformedCodingCollections:(id)arg20 outcomeCodingCollection:(id)arg21 complicationsCodingCollections:(id)arg22 followUpsCodingCollections:(id)arg23 bodySitesCodingCollections:(id)arg24 config:(id)arg25 ;
+(id)cachedConceptRelationshipKeyPaths;
+(id)defaultDisplayString;
+(id)indexableConceptKeyPaths;
+(id)procedureRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 country:(id)arg9 state:(NSUInteger)arg10 procedureCodingCollection:(id)arg11 performers:(id)arg12 executionStartDate:(id)arg13 executionEndDate:(id)arg14 notPerformed:(BOOL)arg15 statusCoding:(id)arg16 categoryCodingCollection:(id)arg17 reasonCodingCollections:(id)arg18 reasonsNotPerformedCodingCollections:(id)arg19 outcomeCodingCollection:(id)arg20 complicationsCodingCollections:(id)arg21 followUpsCodingCollections:(id)arg22 bodySitesCodingCollections:(id)arg23 ;
+(id)procedureRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 country:(id)arg10 state:(NSUInteger)arg11 procedureCodingCollection:(id)arg12 performers:(id)arg13 executionStartDate:(id)arg14 executionEndDate:(id)arg15 notPerformed:(BOOL)arg16 statusCoding:(id)arg17 categoryCodingCollection:(id)arg18 reasonCodingCollections:(id)arg19 reasonsNotPerformedCodingCollections:(id)arg20 outcomeCodingCollection:(id)arg21 complicationsCodingCollections:(id)arg22 followUpsCodingCollections:(id)arg23 bodySitesCodingCollections:(id)arg24 ;
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