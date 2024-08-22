// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLEDIAGNOSTICTESTREPORT_H
#define HDCODABLEDIAGNOSTICTESTREPORT_H

@class PBCodable, NSString, NSData;
@protocol HDDecoding, NSCopying;


#import "HDCodableMedicalCodingList.h"
#import "HDCodableMedicalRecord.h"
#import "HDCodableFHIRIdentifierList.h"
#import "HDCodableMedicalCoding.h"

@interface HDCodableDiagnosticTestReport : PBCodable <HDDecoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HDCodableMedicalCodingList *diagnosticTestCodingCollection; // ivar: _diagnosticTestCodingCollection
@property (retain, nonatomic) NSData *effectiveEndDate; // ivar: _effectiveEndDate
@property (retain, nonatomic) NSData *effectiveStartDate; // ivar: _effectiveStartDate
@property (readonly, nonatomic) BOOL hasDiagnosticTestCodingCollection;
@property (readonly, nonatomic) BOOL hasEffectiveEndDate;
@property (readonly, nonatomic) BOOL hasEffectiveStartDate;
@property (readonly, nonatomic) BOOL hasIssueDate;
@property (readonly, nonatomic) BOOL hasMedicalRecord;
@property (readonly, nonatomic) BOOL hasResults;
@property (readonly, nonatomic) BOOL hasStatusCoding;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *issueDate; // ivar: _issueDate
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord; // ivar: _medicalRecord
@property (retain, nonatomic) HDCodableFHIRIdentifierList *results; // ivar: _results
@property (retain, nonatomic) HDCodableMedicalCoding *statusCoding; // ivar: _statusCoding
@property (readonly) Class superclass;


-(BOOL)applyToObject:(id)arg0 ;
-(BOOL)applyToObject:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif