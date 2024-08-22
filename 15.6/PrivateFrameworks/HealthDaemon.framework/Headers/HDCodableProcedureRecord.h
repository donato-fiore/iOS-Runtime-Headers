// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCODABLEPROCEDURERECORD_H
#define HDCODABLEPROCEDURERECORD_H

@class PBCodable, NSString, NSData;
@protocol HDDecoding, NSCopying;


#import "HDCodableMedicalCodingListList.h"
#import "HDCodableMedicalCodingList.h"
#import "HDCodableMedicalRecord.h"
#import "HDCodableStringList.h"
#import "HDCodableMedicalCoding.h"

@interface HDCodableProcedureRecord : PBCodable <HDDecoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) HDCodableMedicalCodingListList *bodySitesCodingCollections; // ivar: _bodySitesCodingCollections
@property (retain, nonatomic) HDCodableMedicalCodingList *categoryCodingCollection; // ivar: _categoryCodingCollection
@property (retain, nonatomic) HDCodableMedicalCodingListList *complicationsCodingCollections; // ivar: _complicationsCodingCollections
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSData *executionEndDate; // ivar: _executionEndDate
@property (retain, nonatomic) NSData *executionStartDate; // ivar: _executionStartDate
@property (retain, nonatomic) HDCodableMedicalCodingListList *followUpsCodingCollections; // ivar: _followUpsCodingCollections
@property (readonly, nonatomic) BOOL hasBodySitesCodingCollections;
@property (readonly, nonatomic) BOOL hasCategoryCodingCollection;
@property (readonly, nonatomic) BOOL hasComplicationsCodingCollections;
@property (readonly, nonatomic) BOOL hasExecutionEndDate;
@property (readonly, nonatomic) BOOL hasExecutionStartDate;
@property (readonly, nonatomic) BOOL hasFollowUpsCodingCollections;
@property (readonly, nonatomic) BOOL hasMedicalRecord;
@property (nonatomic) BOOL hasNotPerformed;
@property (readonly, nonatomic) BOOL hasOutcomeCodingCollection;
@property (readonly, nonatomic) BOOL hasPerformers;
@property (readonly, nonatomic) BOOL hasProcedureCodingCollection;
@property (readonly, nonatomic) BOOL hasReasonCodingCollections;
@property (readonly, nonatomic) BOOL hasReasonsNotPerformedCodingCollections;
@property (readonly, nonatomic) BOOL hasStatusCoding;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord; // ivar: _medicalRecord
@property (nonatomic) BOOL notPerformed; // ivar: _notPerformed
@property (retain, nonatomic) HDCodableMedicalCodingList *outcomeCodingCollection; // ivar: _outcomeCodingCollection
@property (retain, nonatomic) HDCodableStringList *performers; // ivar: _performers
@property (retain, nonatomic) HDCodableMedicalCodingList *procedureCodingCollection; // ivar: _procedureCodingCollection
@property (retain, nonatomic) HDCodableMedicalCodingListList *reasonCodingCollections; // ivar: _reasonCodingCollections
@property (retain, nonatomic) HDCodableMedicalCodingListList *reasonsNotPerformedCodingCollections; // ivar: _reasonsNotPerformedCodingCollections
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