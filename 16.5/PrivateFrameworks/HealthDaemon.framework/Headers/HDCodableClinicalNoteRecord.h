// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLECLINICALNOTERECORD_H
#define HDCODABLECLINICALNOTERECORD_H

@class PBCodable, NSString, NSData;
@protocol HDDecoding, NSCopying;


#import "HDCodableStringList.h"
#import "HDCodableMedicalCodingListList.h"
#import "HDCodableMedicalCodingList.h"
#import "HDCodableMedicalRecord.h"
#import "HDCodableMedicalCoding.h"

@interface HDCodableClinicalNoteRecord : PBCodable <HDDecoding, NSCopying>



@property (retain, nonatomic) HDCodableStringList *authors; // ivar: _authors
@property (retain, nonatomic) HDCodableMedicalCodingListList *categoriesCodingCollections; // ivar: _categoriesCodingCollections
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HDCodableMedicalCodingList *documentTypeCodingCollection; // ivar: _documentTypeCodingCollection
@property (readonly, nonatomic) BOOL hasAuthors;
@property (readonly, nonatomic) BOOL hasCategoriesCodingCollections;
@property (readonly, nonatomic) BOOL hasDocumentTypeCodingCollection;
@property (readonly, nonatomic) BOOL hasMedicalRecord;
@property (readonly, nonatomic) BOOL hasNoteCreationDate;
@property (readonly, nonatomic) BOOL hasRelevantEndDate;
@property (readonly, nonatomic) BOOL hasRelevantStartDate;
@property (readonly, nonatomic) BOOL hasStatusCoding;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord; // ivar: _medicalRecord
@property (retain, nonatomic) NSData *noteCreationDate; // ivar: _noteCreationDate
@property (retain, nonatomic) NSData *relevantEndDate; // ivar: _relevantEndDate
@property (retain, nonatomic) NSData *relevantStartDate; // ivar: _relevantStartDate
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