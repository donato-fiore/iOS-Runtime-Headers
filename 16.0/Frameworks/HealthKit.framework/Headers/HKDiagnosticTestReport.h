// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKDIAGNOSTICTESTREPORT_H
#define HKDIAGNOSTICTESTREPORT_H

@class NSArray, NSUUID, NSString, NSLocale;
@protocol HKConceptIndexable, NSSecureCoding, NSCopying;


#import "HKMedicalRecord.h"
#import "HKMedicalCodingCollection.h"
#import "HKMedicalDate.h"
#import "HKMedicalCoding.h"
#import "HKConcept.h"
#import "HKDiagnosticTestReportType.h"

@interface HKDiagnosticTestReport : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying>

 {
    HKMedicalCodingCollection *_diagnosticTestCodingCollection;
    NSArray *_results;
    HKMedicalDate *_effectiveStartDate;
    HKMedicalCoding *_statusCoding;
    HKMedicalDate *_effectiveEndDate;
    HKMedicalDate *_issueDate;
    HKConcept *_diagnosticTest;
    HKConcept *_status;
}


@property (readonly) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HKConcept *diagnosticTest;
@property (readonly, copy) HKMedicalCodingCollection *diagnosticTestCodingCollection;
@property (readonly, copy) HKDiagnosticTestReportType *diagnosticTestReportType;
@property (readonly, copy) HKMedicalDate *effectiveEndDate;
@property (readonly, copy) HKMedicalDate *effectiveStartDate;
@property (readonly) NSUInteger hash;
@property (readonly, copy) HKMedicalDate *issueDate;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSInteger recordCategoryType;
@property (readonly, copy) NSArray *results;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly) Class superclass;


+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsEquivalence;
+(BOOL)supportsSecureCoding;
+(id)_newDiagnosticTestReportWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 country:(id)arg10 state:(NSUInteger)arg11 diagnosticTestCodingCollection:(id)arg12 results:(id)arg13 effectiveStartDate:(id)arg14 statusCoding:(id)arg15 effectiveEndDate:(id)arg16 issueDate:(id)arg17 config:(id)arg18 ;
+(id)cachedConceptRelationshipKeyPaths;
+(id)defaultDisplayString;
+(id)diagnosticTestReportWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 country:(id)arg9 state:(NSUInteger)arg10 diagnosticTestCodingCollection:(id)arg11 results:(id)arg12 effectiveStartDate:(id)arg13 statusCoding:(id)arg14 effectiveEndDate:(id)arg15 issueDate:(id)arg16 ;
+(id)diagnosticTestReportWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 country:(id)arg10 state:(NSUInteger)arg11 diagnosticTestCodingCollection:(id)arg12 results:(id)arg13 effectiveStartDate:(id)arg14 statusCoding:(id)arg15 effectiveEndDate:(id)arg16 issueDate:(id)arg17 ;
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