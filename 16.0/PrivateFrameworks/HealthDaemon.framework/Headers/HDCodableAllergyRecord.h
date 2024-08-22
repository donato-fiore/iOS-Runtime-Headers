// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCODABLEALLERGYRECORD_H
#define HDCODABLEALLERGYRECORD_H

@class PBCodable, NSString, NSData;
@protocol HDDecoding, NSCopying;


#import "HDCodableMedicalCodingList.h"
#import "HDCodableMedicalCoding.h"
#import "HDCodableMedicalRecord.h"
#import "HDCodableAllergyReactionList.h"

@interface HDCodableAllergyRecord : PBCodable <HDDecoding, NSCopying>



@property (retain, nonatomic) HDCodableMedicalCodingList *allergyCodingCollection; // ivar: _allergyCodingCollection
@property (retain, nonatomic) HDCodableMedicalCoding *allergyTypeCoding; // ivar: _allergyTypeCoding
@property (retain, nonatomic) NSString *asserter; // ivar: _asserter
@property (retain, nonatomic) HDCodableMedicalCoding *categoryCoding; // ivar: _categoryCoding
@property (retain, nonatomic) HDCodableMedicalCoding *clinicalStatusCoding; // ivar: _clinicalStatusCoding
@property (retain, nonatomic) HDCodableMedicalCoding *criticalityCoding; // ivar: _criticalityCoding
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAllergyCodingCollection;
@property (readonly, nonatomic) BOOL hasAllergyTypeCoding;
@property (readonly, nonatomic) BOOL hasAsserter;
@property (readonly, nonatomic) BOOL hasCategoryCoding;
@property (readonly, nonatomic) BOOL hasClinicalStatusCoding;
@property (readonly, nonatomic) BOOL hasCriticalityCoding;
@property (readonly, nonatomic) BOOL hasLastOccurrenceDate;
@property (readonly, nonatomic) BOOL hasMedicalRecord;
@property (readonly, nonatomic) BOOL hasOnsetDate;
@property (readonly, nonatomic) BOOL hasReactions;
@property (readonly, nonatomic) BOOL hasRecordedDate;
@property (readonly, nonatomic) BOOL hasVerificationStatusCoding;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *lastOccurrenceDate; // ivar: _lastOccurrenceDate
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord; // ivar: _medicalRecord
@property (retain, nonatomic) NSData *onsetDate; // ivar: _onsetDate
@property (retain, nonatomic) HDCodableAllergyReactionList *reactions; // ivar: _reactions
@property (retain, nonatomic) NSData *recordedDate; // ivar: _recordedDate
@property (readonly) Class superclass;
@property (retain, nonatomic) HDCodableMedicalCoding *verificationStatusCoding; // ivar: _verificationStatusCoding


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