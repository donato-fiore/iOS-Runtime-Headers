// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHEALTHRECORDSEXTRACTIONUTILITIES_H
#define HDHEALTHRECORDSEXTRACTIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface HDHealthRecordsExtractionUtilities : NSObject



+(BOOL)_determineEnteredInError:(id)arg0 ;
+(NSInteger)_integerFromTextCheckingResult:(id)arg0 string:(id)arg1 index:(NSInteger)arg2 ;
+(id)_FHIRMedicalCodingWithCode:(id)arg0 medicalCodingSystem:(id)arg1 codingVersion:(id)arg2 error:(*id)arg3 ;
+(id)_earliestDosageDateWithMedicationDosageArray:(id)arg0 error:(*id)arg1 ;
+(id)_firstCodingForSystem:(id)arg0 inCodeableConcept:(id)arg1 error:(*id)arg2 ;
+(id)_medicalDateIntervalWithDosage:(id)arg0 error:(*id)arg1 ;
+(id)_medicalDateWithDateTimeString:(id)arg0 range:(struct _NSRange )arg1 error:(*id)arg2 ;
+(id)_medicalDateWithOnlyDateString:(id)arg0 range:(struct _NSRange )arg1 error:(*id)arg2 ;
+(id)_medicationDosagesWithDosageArray:(id)arg0 FHIRRelease:(id)arg1 error:(*id)arg2 ;
+(id)_transformArray:(id)arg0 error:(*id)arg1 transformBlock:(id)arg2 ;
+(id)allergyIntoleranceClinicalStatusCodingWithCodeableConcept:(id)arg0 error:(*id)arg1 ;
+(id)allergyIntoleranceVerificationStatusCodingWithCodeableConcept:(id)arg0 error:(*id)arg1 ;
+(id)allergyReactionsWithAllergyIntoleranceReaction:(id)arg0 error:(*id)arg1 ;
+(id)booleanNotDoneFromStatusCode:(id)arg0 error:(*id)arg1 ;
+(id)booleanNotTakenFromStatusCode:(id)arg0 error:(*id)arg1 ;
+(id)codedQuantityWithQuantity:(id)arg0 error:(*id)arg1 ;
+(id)codedValueWithObservationComponent:(id)arg0 FHIRVersion:(id)arg1 error:(*id)arg2 ;
+(id)conditionClinicalStatusCodingWithCodeableConcept:(id)arg0 error:(*id)arg1 ;
+(id)conditionVerificationStatusCodingWithCodeableConcept:(id)arg0 error:(*id)arg1 ;
+(id)coverageClassificationWithClassElements:(id)arg0 error:(*id)arg1 ;
+(id)earliestDosageDateWithDosageArray:(id)arg0 error:(*id)arg1 ;
+(id)earliestDosageDateWithMedicationDispenseDosageArray:(id)arg0 error:(*id)arg1 ;
+(id)earliestDosageDateWithMedicationOrderDosageArray:(id)arg0 error:(*id)arg1 ;
+(id)earliestDosageDateWithMedicationStatementDosageArray:(id)arg0 error:(*id)arg1 ;
+(id)enteredInErrorWithAllergyIntoleranceVerificationStatusCodeableConcept:(id)arg0 error:(*id)arg1 ;
+(id)enteredInErrorWithConditionVerificationStatusCodeableConcept:(id)arg0 error:(*id)arg1 ;
+(id)enteredInErrorWithStatusString:(id)arg0 error:(*id)arg1 ;
+(id)identifierFromReference:(id)arg0 error:(*id)arg1 ;
+(id)identifierWithReference:(id)arg0 parentResource:(id)arg1 error:(*id)arg2 ;
+(id)identifiersWithReferences:(id)arg0 parentResource:(id)arg1 error:(*id)arg2 ;
+(id)inspectableValueCollectionWithCodeableConcept:(id)arg0 error:(*id)arg1 ;
+(id)inspectableValueCollectionWithDateTime:(id)arg0 error:(*id)arg1 ;
+(id)inspectableValueCollectionWithObservationComponents:(id)arg0 FHIRVersion:(id)arg1 error:(*id)arg2 ;
+(id)inspectableValueCollectionWithObservationValues:(id)arg0 FHIRVersion:(id)arg1 error:(*id)arg2 ;
+(id)inspectableValueCollectionWithPeriod:(id)arg0 error:(*id)arg1 ;
+(id)inspectableValueCollectionWithQuantity:(id)arg0 error:(*id)arg1 ;
+(id)inspectableValueCollectionWithRatio:(id)arg0 error:(*id)arg1 ;
+(id)inspectableValueCollectionWithString:(id)arg0 error:(*id)arg1 ;
+(id)inspectableValueCollectionWithTime:(id)arg0 error:(*id)arg1 ;
+(id)inspectableValueWithAbatementValue:(id)arg0 error:(*id)arg1 ;
+(id)inspectableValueWithObservationValues:(id)arg0 FHIRVersion:(id)arg1 error:(*id)arg2 ;
+(id)inspectableValueWithOnsetValue:(id)arg0 error:(*id)arg1 ;
+(id)localeFromLanguage:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingCollectionArrayWithCodeableConcepts:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingCollectionWithCodeableConcept:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingWithAllergyIntoleranceCategoryCode:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingWithAllergyIntoleranceCriticalityCode:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingWithAllergyIntoleranceSeverityCode:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingWithAllergyIntoleranceStatusCode:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingWithAllergyIntoleranceTypeCode:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingWithCarePlanStatusCode:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingWithCode:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingWithCoding:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingWithConditionClinicalStatusCode:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingWithConditionVerificationStatusCode:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingWithCoverageStatusCode:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingWithDeviceStatusCode:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingWithDiagnosticReportStatusCode:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingWithEventStatusCode:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingWithGoalStatusCode:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingWithImmunizationStatusCode:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingWithMedicationAdminStatusCode:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingWithMedicationDispenseStatusCode:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingWithMedicationOrderStatusCode:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingWithMedicationStatementStatusCode:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingWithObservationStatus:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingWithProcedureStatusCode:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingWithR4AllergyIntoleranceCriticalityCode:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingWithR4MedicationDispenseStatusCode:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingWithR4MedicationRequestStatusCode:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingsArrayWithCodeableConcept:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingsWithCodeableConcept:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingsWithCodeableConcepts:(id)arg0 error:(*id)arg1 ;
+(id)medicalCodingsWithReference:(id)arg0 error:(*id)arg1 ;
+(id)medicalDateIntervalWithPeriod:(id)arg0 error:(*id)arg1 ;
+(id)medicalDateWithDateString:(id)arg0 error:(*id)arg1 ;
+(id)medicalDateWithDateTimeString:(id)arg0 error:(*id)arg1 ;
+(id)medicalDateWithInstantString:(id)arg0 error:(*id)arg1 ;
+(id)medicationDosagesWithDispenseDosageInstructionArray:(id)arg0 error:(*id)arg1 ;
+(id)medicationDosagesWithDosageArray:(id)arg0 error:(*id)arg1 ;
+(id)medicationDosagesWithOrderDosageInstructionArray:(id)arg0 error:(*id)arg1 ;
+(id)medicationDosagesWithStatementDosageInstructionArray:(id)arg0 error:(*id)arg1 ;
+(id)observationCategoryWithObservationCategories:(id)arg0 error:(*id)arg1 ;
+(id)observationCategoryWithObservationCategory:(id)arg0 error:(*id)arg1 ;
+(id)preferredNameWithHumanNames:(id)arg0 FHIRVersion:(id)arg1 error:(*id)arg2 ;
+(id)preferredSupporedCategory:(id)arg0 unsupportedCategories:(id)arg1 error:(*id)arg2 ;
+(id)ratioValueWithRatio:(id)arg0 error:(*id)arg1 ;
+(id)referenceRangeWithObservationReferenceRange:(id)arg0 error:(*id)arg1 ;
+(id)referenceRangesWithObservationReferenceRanges:(id)arg0 error:(*id)arg1 ;
+(id)referencedMedicationStatementActorTypeWithString:(id)arg0 error:(*id)arg1 ;
+(id)resourceReferencedBy:(id)arg0 containedIn:(id)arg1 error:(*id)arg2 ;
+(id)stringArrayWithStrings:(id)arg0 error:(*id)arg1 ;
+(id)stringWithAttachment:(id)arg0 error:(*id)arg1 ;
+(id)stringWithRTF:(id)arg0 error:(*id)arg1 ;
+(id)timeSinceMidnightWithTimeString:(id)arg0 error:(*id)arg1 ;
+(id)wasEnteredInError:(id)arg0 error:(*id)arg1 ;
+(id)wrapInArray:(id)arg0 error:(*id)arg1 ;


@end


#endif