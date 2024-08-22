// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCODABLEGENERATEDOBJECTCOLLECTION_H
#define HDCODABLEGENERATEDOBJECTCOLLECTION_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HDCodableGeneratedObjectCollection : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *accountOwners; // ivar: _accountOwners
@property (retain, nonatomic) NSMutableArray *allergyRecords; // ivar: _allergyRecords
@property (retain, nonatomic) NSMutableArray *clinicalRecords; // ivar: _clinicalRecords
@property (retain, nonatomic) NSMutableArray *conditionRecords; // ivar: _conditionRecords
@property (retain, nonatomic) NSMutableArray *coverageRecords; // ivar: _coverageRecords
@property (retain, nonatomic) NSMutableArray *diagnosticTestReports; // ivar: _diagnosticTestReports
@property (retain, nonatomic) NSMutableArray *diagnosticTestResults; // ivar: _diagnosticTestResults
@property (retain, nonatomic) NSMutableArray *medicationDispenseRecords; // ivar: _medicationDispenseRecords
@property (retain, nonatomic) NSMutableArray *medicationDoseEvents; // ivar: _medicationDoseEvents
@property (retain, nonatomic) NSMutableArray *medicationOrders; // ivar: _medicationOrders
@property (retain, nonatomic) NSMutableArray *medicationRecords; // ivar: _medicationRecords
@property (retain, nonatomic) NSMutableArray *procedureRecords; // ivar: _procedureRecords
@property (retain, nonatomic) NSMutableArray *signedClinicalDataRecords; // ivar: _signedClinicalDataRecords
@property (retain, nonatomic) NSMutableArray *unknownRecords; // ivar: _unknownRecords
@property (retain, nonatomic) NSMutableArray *vaccinationRecords; // ivar: _vaccinationRecords
@property (retain, nonatomic) NSMutableArray *verifiableClinicalRecords; // ivar: _verifiableClinicalRecords


+(Class)accountOwnerType;
+(Class)allergyRecordType;
+(Class)clinicalRecordType;
+(Class)conditionRecordType;
+(Class)coverageRecordType;
+(Class)diagnosticTestReportType;
+(Class)diagnosticTestResultType;
+(Class)medicationDispenseRecordType;
+(Class)medicationDoseEventType;
+(Class)medicationOrderType;
+(Class)medicationRecordType;
+(Class)procedureRecordType;
+(Class)signedClinicalDataRecordType;
+(Class)unknownRecordType;
+(Class)vaccinationRecordType;
+(Class)verifiableClinicalRecordType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(BOOL)unitTest_isEquivalentToGeneratedObjectCollection:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)hash;
-(id)accountOwnerAtIndex:(NSUInteger)arg0 ;
-(id)allergyRecordAtIndex:(NSUInteger)arg0 ;
-(id)clinicalRecordAtIndex:(NSUInteger)arg0 ;
-(id)conditionRecordAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)coverageRecordAtIndex:(NSUInteger)arg0 ;
-(id)decodedObjects;
-(id)description;
-(id)diagnosticTestReportAtIndex:(NSUInteger)arg0 ;
-(id)diagnosticTestResultAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)medicationDispenseRecordAtIndex:(NSUInteger)arg0 ;
-(id)medicationDoseEventAtIndex:(NSUInteger)arg0 ;
-(id)medicationOrderAtIndex:(NSUInteger)arg0 ;
-(id)medicationRecordAtIndex:(NSUInteger)arg0 ;
-(id)procedureRecordAtIndex:(NSUInteger)arg0 ;
-(id)signedClinicalDataRecordAtIndex:(NSUInteger)arg0 ;
-(id)unknownRecordAtIndex:(NSUInteger)arg0 ;
-(id)vaccinationRecordAtIndex:(NSUInteger)arg0 ;
-(id)verifiableClinicalRecordAtIndex:(NSUInteger)arg0 ;
-(void)addAccountOwner:(id)arg0 ;
-(void)addAllergyRecord:(id)arg0 ;
-(void)addClinicalRecord:(id)arg0 ;
-(void)addConditionRecord:(id)arg0 ;
-(void)addCoverageRecord:(id)arg0 ;
-(void)addDiagnosticTestReport:(id)arg0 ;
-(void)addDiagnosticTestResult:(id)arg0 ;
-(void)addMedicationDispenseRecord:(id)arg0 ;
-(void)addMedicationDoseEvent:(id)arg0 ;
-(void)addMedicationOrder:(id)arg0 ;
-(void)addMedicationRecord:(id)arg0 ;
-(void)addProcedureRecord:(id)arg0 ;
-(void)addSignedClinicalDataRecord:(id)arg0 ;
-(void)addUnknownRecord:(id)arg0 ;
-(void)addVaccinationRecord:(id)arg0 ;
-(void)addVerifiableClinicalRecord:(id)arg0 ;
-(void)clearAccountOwners;
-(void)clearAllergyRecords;
-(void)clearClinicalRecords;
-(void)clearConditionRecords;
-(void)clearCoverageRecords;
-(void)clearDiagnosticTestReports;
-(void)clearDiagnosticTestResults;
-(void)clearMedicationDispenseRecords;
-(void)clearMedicationDoseEvents;
-(void)clearMedicationOrders;
-(void)clearMedicationRecords;
-(void)clearProcedureRecords;
-(void)clearSignedClinicalDataRecords;
-(void)clearUnknownRecords;
-(void)clearVaccinationRecords;
-(void)clearVerifiableClinicalRecords;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif