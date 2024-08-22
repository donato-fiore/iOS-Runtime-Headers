// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCODABLEDIAGNOSTICTESTRESULT_H
#define HDCODABLEDIAGNOSTICTESTRESULT_H

@class PBCodable, NSString, NSData;
@protocol HDDecoding, NSCopying;


#import "HDCodableMedicalCodingList.h"
#import "HDCodableMedicalCodingListList.h"
#import "HDCodableMedicalRecord.h"
#import "HDCodableStringList.h"
#import "HDCodableReferenceRangeList.h"
#import "HDCodableMedicalCoding.h"
#import "HDCodableInspectableValueCollection.h"

@interface HDCodableDiagnosticTestResult : PBCodable <HDDecoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) HDCodableMedicalCodingList *bodySiteCodingCollection; // ivar: _bodySiteCodingCollection
@property (retain, nonatomic) HDCodableMedicalCodingListList *categoriesCodingCollections; // ivar: _categoriesCodingCollections
@property (retain, nonatomic) NSString *category; // ivar: _category
@property (retain, nonatomic) NSString *comments; // ivar: _comments
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HDCodableMedicalCodingList *diagnosticTestCodingCollection; // ivar: _diagnosticTestCodingCollection
@property (retain, nonatomic) NSData *effectiveEndDate; // ivar: _effectiveEndDate
@property (retain, nonatomic) NSData *effectiveStartDate; // ivar: _effectiveStartDate
@property (readonly, nonatomic) BOOL hasBodySiteCodingCollection;
@property (readonly, nonatomic) BOOL hasCategoriesCodingCollections;
@property (readonly, nonatomic) BOOL hasCategory;
@property (readonly, nonatomic) BOOL hasComments;
@property (readonly, nonatomic) BOOL hasDiagnosticTestCodingCollection;
@property (readonly, nonatomic) BOOL hasEffectiveEndDate;
@property (readonly, nonatomic) BOOL hasEffectiveStartDate;
@property (readonly, nonatomic) BOOL hasInterpretationCodingCollections;
@property (readonly, nonatomic) BOOL hasIssueDate;
@property (readonly, nonatomic) BOOL hasMedicalRecord;
@property (readonly, nonatomic) BOOL hasMethodCodingCollection;
@property (readonly, nonatomic) BOOL hasPerformers;
@property (nonatomic) BOOL hasReferenceRangeStatus;
@property (readonly, nonatomic) BOOL hasReferenceRanges;
@property (readonly, nonatomic) BOOL hasStatusCoding;
@property (readonly, nonatomic) BOOL hasValue;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HDCodableMedicalCodingListList *interpretationCodingCollections; // ivar: _interpretationCodingCollections
@property (retain, nonatomic) NSData *issueDate; // ivar: _issueDate
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord; // ivar: _medicalRecord
@property (retain, nonatomic) HDCodableMedicalCodingList *methodCodingCollection; // ivar: _methodCodingCollection
@property (retain, nonatomic) HDCodableStringList *performers; // ivar: _performers
@property (nonatomic) NSInteger referenceRangeStatus; // ivar: _referenceRangeStatus
@property (retain, nonatomic) HDCodableReferenceRangeList *referenceRanges; // ivar: _referenceRanges
@property (retain, nonatomic) HDCodableMedicalCoding *statusCoding; // ivar: _statusCoding
@property (readonly) Class superclass;
@property (retain, nonatomic) HDCodableInspectableValueCollection *value; // ivar: _value


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