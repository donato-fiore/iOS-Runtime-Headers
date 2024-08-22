// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCODABLEMEDICATIONRECORD_H
#define HDCODABLEMEDICATIONRECORD_H

@class PBCodable, NSString, NSData;
@protocol HDDecoding, NSCopying;


#import "HDCodableMedicationDosageList.h"
#import "HDCodableMedicalRecord.h"
#import "HDCodableMedicalCodingList.h"
#import "HDCodableMedicalCodingListList.h"
#import "HDCodableMedicalCoding.h"

@interface HDCodableMedicationRecord : PBCodable <HDDecoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *asserter; // ivar: _asserter
@property (retain, nonatomic) NSData *assertionDate; // ivar: _assertionDate
@property (nonatomic) NSInteger assertionType; // ivar: _assertionType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HDCodableMedicationDosageList *dosages; // ivar: _dosages
@property (retain, nonatomic) NSData *earliestDosageDate; // ivar: _earliestDosageDate
@property (retain, nonatomic) NSData *effectiveEndDate; // ivar: _effectiveEndDate
@property (retain, nonatomic) NSData *effectiveStartDate; // ivar: _effectiveStartDate
@property (readonly, nonatomic) BOOL hasAsserter;
@property (readonly, nonatomic) BOOL hasAssertionDate;
@property (nonatomic) BOOL hasAssertionType;
@property (readonly, nonatomic) BOOL hasDosages;
@property (readonly, nonatomic) BOOL hasEarliestDosageDate;
@property (readonly, nonatomic) BOOL hasEffectiveEndDate;
@property (readonly, nonatomic) BOOL hasEffectiveStartDate;
@property (readonly, nonatomic) BOOL hasMedicalRecord;
@property (readonly, nonatomic) BOOL hasMedicationCodingCollection;
@property (nonatomic) BOOL hasNotTaken;
@property (readonly, nonatomic) BOOL hasReasonForUseCodingCollections;
@property (readonly, nonatomic) BOOL hasReasonsNotTakenCodingCollections;
@property (readonly, nonatomic) BOOL hasStatusCoding;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord; // ivar: _medicalRecord
@property (retain, nonatomic) HDCodableMedicalCodingList *medicationCodingCollection; // ivar: _medicationCodingCollection
@property (nonatomic) BOOL notTaken; // ivar: _notTaken
@property (retain, nonatomic) HDCodableMedicalCodingListList *reasonForUseCodingCollections; // ivar: _reasonForUseCodingCollections
@property (retain, nonatomic) HDCodableMedicalCodingListList *reasonsNotTakenCodingCollections; // ivar: _reasonsNotTakenCodingCollections
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