// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLEMEDICATIONDISPENSERECORD_H
#define HDCODABLEMEDICATIONDISPENSERECORD_H

@class PBCodable, NSString, NSData;
@protocol HDDecoding, NSCopying;


#import "HDCodableCodedQuantity.h"
#import "HDCodableMedicationDosageList.h"
#import "HDCodableMedicalRecord.h"
#import "HDCodableMedicalCodingList.h"
#import "HDCodableMedicalCoding.h"

@interface HDCodableMedicationDispenseRecord : PBCodable <HDDecoding, NSCopying>



@property (retain, nonatomic) HDCodableCodedQuantity *daysSupplyQuantity; // ivar: _daysSupplyQuantity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HDCodableMedicationDosageList *dosages; // ivar: _dosages
@property (retain, nonatomic) NSData *earliestDosageDate; // ivar: _earliestDosageDate
@property (retain, nonatomic) NSData *handOverDate; // ivar: _handOverDate
@property (readonly, nonatomic) BOOL hasDaysSupplyQuantity;
@property (readonly, nonatomic) BOOL hasDosages;
@property (readonly, nonatomic) BOOL hasEarliestDosageDate;
@property (readonly, nonatomic) BOOL hasHandOverDate;
@property (readonly, nonatomic) BOOL hasMedicalRecord;
@property (readonly, nonatomic) BOOL hasMedicationCodings;
@property (readonly, nonatomic) BOOL hasPreparationDate;
@property (readonly, nonatomic) BOOL hasQuantityDispensed;
@property (readonly, nonatomic) BOOL hasStatusCoding;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord; // ivar: _medicalRecord
@property (retain, nonatomic) HDCodableMedicalCodingList *medicationCodings; // ivar: _medicationCodings
@property (retain, nonatomic) NSData *preparationDate; // ivar: _preparationDate
@property (retain, nonatomic) HDCodableCodedQuantity *quantityDispensed; // ivar: _quantityDispensed
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