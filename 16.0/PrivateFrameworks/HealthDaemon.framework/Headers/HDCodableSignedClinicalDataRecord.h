// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCODABLESIGNEDCLINICALDATARECORD_H
#define HDCODABLESIGNEDCLINICALDATARECORD_H

@class PBCodable, NSData, NSString;
@protocol HDDecoding, NSCopying;


#import "HDCodableStringList.h"
#import "HDCodableSignedClinicalDataItemList.h"
#import "HDCodableMedicalRecord.h"
#import "HDCodableSignedClinicalDataSubject.h"

@interface HDCodableSignedClinicalDataRecord : PBCodable <HDDecoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) HDCodableStringList *credentialTypes; // ivar: _credentialTypes
@property (retain, nonatomic) NSData *dataValue; // ivar: _dataValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) BOOL hasCredentialTypes;
@property (readonly, nonatomic) BOOL hasDataValue;
@property (nonatomic) BOOL hasExpirationDate;
@property (nonatomic) BOOL hasIssuedDate;
@property (readonly, nonatomic) BOOL hasIssuerIdentifier;
@property (readonly, nonatomic) BOOL hasItems;
@property (readonly, nonatomic) BOOL hasMedicalRecord;
@property (nonatomic) BOOL hasRelevantDate;
@property (nonatomic) BOOL hasSignatureStatus;
@property (nonatomic) BOOL hasSourceType;
@property (readonly, nonatomic) BOOL hasSubject;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat issuedDate; // ivar: _issuedDate
@property (retain, nonatomic) NSString *issuerIdentifier; // ivar: _issuerIdentifier
@property (retain, nonatomic) HDCodableSignedClinicalDataItemList *items; // ivar: _items
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord; // ivar: _medicalRecord
@property (nonatomic) CGFloat relevantDate; // ivar: _relevantDate
@property (nonatomic) NSInteger signatureStatus; // ivar: _signatureStatus
@property (nonatomic) NSInteger sourceType; // ivar: _sourceType
@property (retain, nonatomic) HDCodableSignedClinicalDataSubject *subject; // ivar: _subject
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