// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLEVACCINATIONRECORD_H
#define HDCODABLEVACCINATIONRECORD_H

@class PBCodable, NSData, NSString;
@protocol HDDecoding, NSCopying;


#import "HDCodableMedicalCodingList.h"
#import "HDCodableMedicalRecord.h"
#import "HDCodableMedicalCodingListList.h"
#import "HDCodableMedicalCoding.h"

@interface HDCodableVaccinationRecord : PBCodable <HDDecoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *administrationDate; // ivar: _administrationDate
@property (retain, nonatomic) HDCodableMedicalCodingList *bodySiteCodings; // ivar: _bodySiteCodings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *doseNumber; // ivar: _doseNumber
@property (retain, nonatomic) NSString *doseQuantity; // ivar: _doseQuantity
@property (retain, nonatomic) NSData *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) BOOL hasAdministrationDate;
@property (readonly, nonatomic) BOOL hasBodySiteCodings;
@property (readonly, nonatomic) BOOL hasDoseNumber;
@property (readonly, nonatomic) BOOL hasDoseQuantity;
@property (readonly, nonatomic) BOOL hasExpirationDate;
@property (readonly, nonatomic) BOOL hasLotNumber;
@property (readonly, nonatomic) BOOL hasMedicalRecord;
@property (nonatomic) BOOL hasNotGiven;
@property (nonatomic) BOOL hasPatientReported;
@property (readonly, nonatomic) BOOL hasPerformer;
@property (readonly, nonatomic) BOOL hasReaction;
@property (readonly, nonatomic) BOOL hasReasonsCodings;
@property (readonly, nonatomic) BOOL hasReasonsNotGivenCodings;
@property (readonly, nonatomic) BOOL hasRouteCodings;
@property (readonly, nonatomic) BOOL hasStatusCoding;
@property (readonly, nonatomic) BOOL hasVaccinationCodings;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *lotNumber; // ivar: _lotNumber
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord; // ivar: _medicalRecord
@property (nonatomic) BOOL notGiven; // ivar: _notGiven
@property (nonatomic) BOOL patientReported; // ivar: _patientReported
@property (retain, nonatomic) NSString *performer; // ivar: _performer
@property (retain, nonatomic) NSString *reaction; // ivar: _reaction
@property (retain, nonatomic) HDCodableMedicalCodingListList *reasonsCodings; // ivar: _reasonsCodings
@property (retain, nonatomic) HDCodableMedicalCodingListList *reasonsNotGivenCodings; // ivar: _reasonsNotGivenCodings
@property (retain, nonatomic) HDCodableMedicalCodingList *routeCodings; // ivar: _routeCodings
@property (retain, nonatomic) HDCodableMedicalCoding *statusCoding; // ivar: _statusCoding
@property (readonly) Class superclass;
@property (retain, nonatomic) HDCodableMedicalCodingList *vaccinationCodings; // ivar: _vaccinationCodings


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