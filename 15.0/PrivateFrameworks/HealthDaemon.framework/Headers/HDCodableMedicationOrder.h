// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCODABLEMEDICATIONORDER_H
#define HDCODABLEMEDICATIONORDER_H

@class PBCodable, NSString, NSData;
@protocol HDDecoding, NSCopying;


#import "HDCodableMedicationDosageList.h"
#import "HDCodableMedicalRecord.h"
#import "HDCodableMedicalCodingList.h"
#import "HDCodableMedicalCodingListList.h"
#import "HDCodableMedicalCoding.h"

@interface HDCodableMedicationOrder : PBCodable <HDDecoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HDCodableMedicationDosageList *dosages; // ivar: _dosages
@property (retain, nonatomic) NSData *earliestDosageDate; // ivar: _earliestDosageDate
@property (retain, nonatomic) NSData *endedDate; // ivar: _endedDate
@property (readonly, nonatomic) BOOL hasDosages;
@property (readonly, nonatomic) BOOL hasEarliestDosageDate;
@property (readonly, nonatomic) BOOL hasEndedDate;
@property (readonly, nonatomic) BOOL hasMedicalRecord;
@property (readonly, nonatomic) BOOL hasMedicationCodingCollection;
@property (nonatomic) BOOL hasNumberOfFills;
@property (readonly, nonatomic) BOOL hasPrescriber;
@property (readonly, nonatomic) BOOL hasReasonCodingCollections;
@property (readonly, nonatomic) BOOL hasReasonEndedCodingCollection;
@property (readonly, nonatomic) BOOL hasStatusCoding;
@property (readonly, nonatomic) BOOL hasStatusReasonCodingCollection;
@property (readonly, nonatomic) BOOL hasWrittenDate;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord; // ivar: _medicalRecord
@property (retain, nonatomic) HDCodableMedicalCodingList *medicationCodingCollection; // ivar: _medicationCodingCollection
@property (nonatomic) NSInteger numberOfFills; // ivar: _numberOfFills
@property (retain, nonatomic) NSString *prescriber; // ivar: _prescriber
@property (retain, nonatomic) HDCodableMedicalCodingListList *reasonCodingCollections; // ivar: _reasonCodingCollections
@property (retain, nonatomic) HDCodableMedicalCodingList *reasonEndedCodingCollection; // ivar: _reasonEndedCodingCollection
@property (retain, nonatomic) HDCodableMedicalCoding *statusCoding; // ivar: _statusCoding
@property (retain, nonatomic) HDCodableMedicalCodingList *statusReasonCodingCollection; // ivar: _statusReasonCodingCollection
@property (readonly) Class superclass;
@property (retain, nonatomic) NSData *writtenDate; // ivar: _writtenDate


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