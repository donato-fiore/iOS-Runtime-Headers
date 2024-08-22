// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCODABLESIGNEDCLINICALDATAITEM_H
#define HDCODABLESIGNEDCLINICALDATAITEM_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "HDCodableMedicalCodingList.h"

@interface HDCodableSignedClinicalDataItem : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasMedicalRecordSampleID;
@property (readonly, nonatomic) BOOL hasPrimaryConceptCodings;
@property (nonatomic) BOOL hasRelevantDate;
@property (retain, nonatomic) NSData *medicalRecordSampleID; // ivar: _medicalRecordSampleID
@property (retain, nonatomic) HDCodableMedicalCodingList *primaryConceptCodings; // ivar: _primaryConceptCodings
@property (nonatomic) CGFloat relevantDate; // ivar: _relevantDate


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif