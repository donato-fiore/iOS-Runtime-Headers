// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLECONDITIONRECORD_H
#define HDCODABLECONDITIONRECORD_H

@class PBCodable, NSString, NSData;
@protocol HDDecoding, NSCopying;


#import "HDCodableInspectableValue.h"
#import "HDCodableMedicalCodingListList.h"
#import "HDCodableMedicalCoding.h"
#import "HDCodableMedicalCodingList.h"
#import "HDCodableMedicalRecord.h"

@interface HDCodableConditionRecord : PBCodable <HDDecoding, NSCopying>



@property (retain, nonatomic) HDCodableInspectableValue *abatement; // ivar: _abatement
@property (retain, nonatomic) NSString *asserter; // ivar: _asserter
@property (retain, nonatomic) HDCodableMedicalCodingListList *bodySitesCodingCollections; // ivar: _bodySitesCodingCollections
@property (retain, nonatomic) HDCodableMedicalCodingListList *categoriesCodingCollections; // ivar: _categoriesCodingCollections
@property (retain, nonatomic) HDCodableMedicalCoding *clinicalStatusCoding; // ivar: _clinicalStatusCoding
@property (retain, nonatomic) HDCodableMedicalCodingList *conditionCodingCollection; // ivar: _conditionCodingCollection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAbatement;
@property (readonly, nonatomic) BOOL hasAsserter;
@property (readonly, nonatomic) BOOL hasBodySitesCodingCollections;
@property (readonly, nonatomic) BOOL hasCategoriesCodingCollections;
@property (readonly, nonatomic) BOOL hasClinicalStatusCoding;
@property (readonly, nonatomic) BOOL hasConditionCodingCollection;
@property (readonly, nonatomic) BOOL hasMedicalRecord;
@property (readonly, nonatomic) BOOL hasOnset;
@property (readonly, nonatomic) BOOL hasRecordedDate;
@property (readonly, nonatomic) BOOL hasSeverityCodingCollection;
@property (readonly, nonatomic) BOOL hasVerificationStatusCoding;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord; // ivar: _medicalRecord
@property (retain, nonatomic) HDCodableInspectableValue *onset; // ivar: _onset
@property (retain, nonatomic) NSData *recordedDate; // ivar: _recordedDate
@property (retain, nonatomic) HDCodableMedicalCodingList *severityCodingCollection; // ivar: _severityCodingCollection
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