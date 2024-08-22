// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCODABLECOVERAGERECORD_H
#define HDCODABLECOVERAGERECORD_H

@class PBCodable, NSString, NSData;
@protocol HDDecoding, NSCopying;


#import "HDCodableFHIRIdentifierElement.h"
#import "HDCodableCoverageClassificationList.h"
#import "HDCodableMedicalCodingList.h"
#import "HDCodableMedicalRecord.h"
#import "HDCodableStringList.h"
#import "HDCodableMedicalCoding.h"

@interface HDCodableCoverageRecord : PBCodable <HDDecoding, NSCopying>



@property (retain, nonatomic) NSString *beneficiary; // ivar: _beneficiary
@property (retain, nonatomic) HDCodableFHIRIdentifierElement *beneficiaryIdentifier; // ivar: _beneficiaryIdentifier
@property (retain, nonatomic) HDCodableCoverageClassificationList *classification; // ivar: _classification
@property (retain, nonatomic) HDCodableMedicalCodingList *coverageTypeCodingCollection; // ivar: _coverageTypeCodingCollection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasBeneficiary;
@property (readonly, nonatomic) BOOL hasBeneficiaryIdentifier;
@property (readonly, nonatomic) BOOL hasClassification;
@property (readonly, nonatomic) BOOL hasCoverageTypeCodingCollection;
@property (readonly, nonatomic) BOOL hasMedicalRecord;
@property (readonly, nonatomic) BOOL hasNetwork;
@property (readonly, nonatomic) BOOL hasPayor;
@property (readonly, nonatomic) BOOL hasPeriodEndDate;
@property (readonly, nonatomic) BOOL hasPeriodStartDate;
@property (readonly, nonatomic) BOOL hasPolicyHolder;
@property (readonly, nonatomic) BOOL hasRelationshipCodingCollection;
@property (readonly, nonatomic) BOOL hasStatusCoding;
@property (readonly, nonatomic) BOOL hasSubscriber;
@property (readonly, nonatomic) BOOL hasSubscriberId;
@property (readonly, nonatomic) BOOL hasSubscriberIdentifier;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord; // ivar: _medicalRecord
@property (retain, nonatomic) NSString *network; // ivar: _network
@property (retain, nonatomic) HDCodableStringList *payor; // ivar: _payor
@property (retain, nonatomic) NSData *periodEndDate; // ivar: _periodEndDate
@property (retain, nonatomic) NSData *periodStartDate; // ivar: _periodStartDate
@property (retain, nonatomic) NSString *policyHolder; // ivar: _policyHolder
@property (retain, nonatomic) HDCodableMedicalCodingList *relationshipCodingCollection; // ivar: _relationshipCodingCollection
@property (retain, nonatomic) HDCodableMedicalCoding *statusCoding; // ivar: _statusCoding
@property (retain, nonatomic) NSString *subscriber; // ivar: _subscriber
@property (retain, nonatomic) NSString *subscriberId; // ivar: _subscriberId
@property (retain, nonatomic) HDCodableFHIRIdentifierElement *subscriberIdentifier; // ivar: _subscriberIdentifier
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