// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKDIAGNOSTICTESTRESULT_H
#define HKDIAGNOSTICTESTRESULT_H

@class NSArray, NSString, NSUUID, NSLocale;
@protocol HKConceptIndexable, NSSecureCoding, NSCopying;


#import "HKMedicalRecord.h"
#import "HKMedicalCodingCollection.h"
#import "HKInspectableValueCollection.h"
#import "HKMedicalDate.h"
#import "HKMedicalCoding.h"
#import "HKConcept.h"
#import "HKDiagnosticTestResultType.h"

@interface HKDiagnosticTestResult : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying>

 {
    HKMedicalCodingCollection *_diagnosticTestCodingCollection;
    HKInspectableValueCollection *_value;
    NSArray *_referenceRanges;
    HKMedicalDate *_effectiveStartDate;
    NSString *_category;
    NSArray *_categoriesCodingCollections;
    HKMedicalDate *_issueDate;
    HKMedicalDate *_effectiveEndDate;
    HKMedicalCoding *_statusCoding;
    NSArray *_interpretationCodingCollections;
    NSString *_comments;
    HKMedicalCodingCollection *_bodySiteCodingCollection;
    HKMedicalCodingCollection *_methodCodingCollection;
    NSArray *_performers;
    NSInteger _referenceRangeStatus;
    HKConcept *_diagnosticTest;
    NSArray *_categories;
    HKConcept *_status;
    NSArray *_interpretation;
    HKConcept *_bodySite;
    HKConcept *_method;
}


@property (readonly) NSUUID *UUID;
@property (readonly, copy) HKConcept *bodySite;
@property (readonly, copy) HKMedicalCodingCollection *bodySiteCodingCollection;
@property (readonly, copy) NSArray *categories;
@property (readonly, copy) NSArray *categoriesCodingCollections;
@property (readonly, copy) NSString *category;
@property (readonly, copy) NSString *comments;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HKConcept *diagnosticTest;
@property (readonly, copy) HKMedicalCodingCollection *diagnosticTestCodingCollection;
@property (readonly, copy) HKDiagnosticTestResultType *diagnosticTestResultType;
@property (readonly, copy) HKMedicalDate *effectiveEndDate;
@property (readonly, copy) HKMedicalDate *effectiveStartDate;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSArray *interpretation;
@property (readonly, copy) NSArray *interpretationCodingCollections;
@property (readonly, copy) HKMedicalDate *issueDate;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, copy) HKConcept *method;
@property (readonly, copy) HKMedicalCodingCollection *methodCodingCollection;
@property (readonly, copy) NSArray *performers;
@property (readonly, nonatomic) NSInteger recordCategoryType;
@property (readonly) NSInteger referenceRangeStatus;
@property (readonly, copy) NSArray *referenceRanges;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly) Class superclass;
@property (readonly, copy) HKInspectableValueCollection *value;


+(BOOL)_isConcreteObjectClass;
+(BOOL)groupsByUserDomainConcept;
+(BOOL)supportsEquivalence;
+(BOOL)supportsSecureCoding;
+(id)_newDiagnosticTestResultWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 country:(id)arg10 state:(NSUInteger)arg11 diagnosticTestCodingCollection:(id)arg12 value:(id)arg13 referenceRanges:(id)arg14 effectiveStartDate:(id)arg15 category:(id)arg16 categoriesCodingCollections:(id)arg17 issueDate:(id)arg18 effectiveEndDate:(id)arg19 statusCoding:(id)arg20 interpretationCodingCollections:(id)arg21 comments:(id)arg22 bodySiteCodingCollection:(id)arg23 methodCodingCollection:(id)arg24 performers:(id)arg25 referenceRangeStatus:(NSInteger)arg26 config:(id)arg27 ;
+(id)cachedConceptRelationshipKeyPaths;
+(id)defaultDisplayString;
+(id)diagnosticTestResultWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 country:(id)arg9 state:(NSUInteger)arg10 diagnosticTestCodingCollection:(id)arg11 value:(id)arg12 referenceRanges:(id)arg13 effectiveStartDate:(id)arg14 category:(id)arg15 categoriesCodingCollections:(id)arg16 issueDate:(id)arg17 effectiveEndDate:(id)arg18 statusCoding:(id)arg19 interpretationCodingCollections:(id)arg20 comments:(id)arg21 bodySiteCodingCollection:(id)arg22 methodCodingCollection:(id)arg23 performers:(id)arg24 referenceRangeStatus:(NSInteger)arg25 ;
+(id)diagnosticTestResultWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 country:(id)arg10 state:(NSUInteger)arg11 diagnosticTestCodingCollection:(id)arg12 value:(id)arg13 referenceRanges:(id)arg14 effectiveStartDate:(id)arg15 category:(id)arg16 categoriesCodingCollections:(id)arg17 issueDate:(id)arg18 effectiveEndDate:(id)arg19 statusCoding:(id)arg20 interpretationCodingCollections:(id)arg21 comments:(id)arg22 bodySiteCodingCollection:(id)arg23 methodCodingCollection:(id)arg24 performers:(id)arg25 referenceRangeStatus:(NSInteger)arg26 ;
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