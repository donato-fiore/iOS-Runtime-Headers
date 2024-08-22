// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKMEDICALCODINGSYSTEM_H
#define HKMEDICALCODINGSYSTEM_H

@class NSString, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HKMedicalCodingSystem : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *OID; // ivar: _OID
@property (nonatomic) BOOL hasDisplayStrings; // ivar: _hasDisplayStrings
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSArray *synonyms; // ivar: _synonyms
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)CVXSystem;
+(id)FHIRAllergyIntoleranceCategory;
+(id)FHIRAllergyIntoleranceClinicalStatus;
+(id)FHIRAllergyIntoleranceCriticality;
+(id)FHIRAllergyIntoleranceSeverity;
+(id)FHIRAllergyIntoleranceStatus;
+(id)FHIRAllergyIntoleranceType;
+(id)FHIRAllergyIntoleranceVerificationStatus;
+(id)FHIRCarePlanStatus;
+(id)FHIRConditionClinicalStatus;
+(id)FHIRConditionVerificationStatus;
+(id)FHIRCoverageClassification;
+(id)FHIRCoverageStatus;
+(id)FHIRCoverageType;
+(id)FHIRDeviceStatus;
+(id)FHIRDiagnosticReportStatus;
+(id)FHIREventStatus;
+(id)FHIRGoalStatus;
+(id)FHIRImmunizationStatus;
+(id)FHIRMedicationAdminStatus;
+(id)FHIRMedicationDispenseStatus;
+(id)FHIRMedicationDispenseStatusR4;
+(id)FHIRMedicationOrderStatus;
+(id)FHIRMedicationRequestStatus;
+(id)FHIRMedicationStatementStatus;
+(id)FHIRObservationStatus;
+(id)FHIRProcedureStatus;
+(id)FHIRQuantityComparatorSystem;
+(id)ICD10System;
+(id)ICD9System;
+(id)LOINCCodeSystem;
+(id)NDCSystem;
+(id)RxNormCodeSystem;
+(id)SNOMEDCodeSystem;
+(id)UCUMSystem;
+(id)adHocConceptSystem;
+(id)appleHealthDataTypeSystem;
+(id)appleOntologySystem;
+(id)argonautHL7System;
+(id)codeSystemWithIdentifier:(id)arg0 ;
+(id)externalCodeSystems;
+(id)systemWithSystemDefinition:(struct ? )arg0 ;
+(id)textSystem;
+(id)unknownSystem;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)ontology_hasCodingSystemAttributeIdentifier;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCustomIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 OID:(id)arg2 type:(NSUInteger)arg3 synonyms:(id)arg4 hasDisplayStrings:(BOOL)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif