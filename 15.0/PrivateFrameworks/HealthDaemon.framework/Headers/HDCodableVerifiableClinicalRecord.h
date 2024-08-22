// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCODABLEVERIFIABLECLINICALRECORD_H
#define HDCODABLEVERIFIABLECLINICALRECORD_H

@class PBCodable, NSString, NSData;
@protocol HDDecoding, NSCopying;


#import "HDCodableStringList.h"
#import "HDCodableSample.h"
#import "HDCodableVerifiableClinicalRecordSubject.h"

@interface HDCodableVerifiableClinicalRecord : PBCodable <HDDecoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat expirationDate; // ivar: _expirationDate
@property (nonatomic) BOOL hasExpirationDate;
@property (nonatomic) BOOL hasIssuedDate;
@property (readonly, nonatomic) BOOL hasIssuerIdentifier;
@property (readonly, nonatomic) BOOL hasItemNames;
@property (readonly, nonatomic) BOOL hasJwsRepresentation;
@property (readonly, nonatomic) BOOL hasOriginIdentifier;
@property (readonly, nonatomic) BOOL hasRecordTypes;
@property (nonatomic) BOOL hasRelevantDate;
@property (readonly, nonatomic) BOOL hasSample;
@property (readonly, nonatomic) BOOL hasSubject;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat issuedDate; // ivar: _issuedDate
@property (retain, nonatomic) NSString *issuerIdentifier; // ivar: _issuerIdentifier
@property (retain, nonatomic) HDCodableStringList *itemNames; // ivar: _itemNames
@property (retain, nonatomic) NSData *jwsRepresentation; // ivar: _jwsRepresentation
@property (retain, nonatomic) NSData *originIdentifier; // ivar: _originIdentifier
@property (retain, nonatomic) HDCodableStringList *recordTypes; // ivar: _recordTypes
@property (nonatomic) CGFloat relevantDate; // ivar: _relevantDate
@property (retain, nonatomic) HDCodableSample *sample; // ivar: _sample
@property (retain, nonatomic) HDCodableVerifiableClinicalRecordSubject *subject; // ivar: _subject
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