// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OTESCROWRECORD_H
#define OTESCROWRECORD_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "OTEscrowRecordMetadata.h"

@interface OTEscrowRecord : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger coolOffEnd; // ivar: _coolOffEnd
@property (nonatomic) NSUInteger creationDate; // ivar: _creationDate
@property (retain, nonatomic) OTEscrowRecordMetadata *escrowInformationMetadata; // ivar: _escrowInformationMetadata
@property (retain, nonatomic) NSString *expectedFederationId; // ivar: _expectedFederationId
@property (retain, nonatomic) NSString *federationId; // ivar: _federationId
@property (nonatomic) BOOL hasCoolOffEnd;
@property (nonatomic) BOOL hasCreationDate;
@property (readonly, nonatomic) BOOL hasEscrowInformationMetadata;
@property (readonly, nonatomic) BOOL hasExpectedFederationId;
@property (readonly, nonatomic) BOOL hasFederationId;
@property (readonly, nonatomic) BOOL hasLabel;
@property (readonly, nonatomic) BOOL hasRecordId;
@property (nonatomic) BOOL hasRecordStatus;
@property (nonatomic) BOOL hasRecordViability;
@property (nonatomic) BOOL hasRecoveryStatus;
@property (nonatomic) BOOL hasRemainingAttempts;
@property (readonly, nonatomic) BOOL hasSerialNumber;
@property (nonatomic) BOOL hasSilentAttemptAllowed;
@property (nonatomic) BOOL hasViabilityStatus;
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) NSString *recordId; // ivar: _recordId
@property (nonatomic) int recordStatus; // ivar: _recordStatus
@property (nonatomic) int recordViability; // ivar: _recordViability
@property (nonatomic) int recoveryStatus; // ivar: _recoveryStatus
@property (nonatomic) NSUInteger remainingAttempts; // ivar: _remainingAttempts
@property (retain, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (nonatomic) NSUInteger silentAttemptAllowed; // ivar: _silentAttemptAllowed
@property (nonatomic) int viabilityStatus; // ivar: _viabilityStatus


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)recordStatusAsString:(int)arg0 ;
-(id)recordViabilityAsString:(int)arg0 ;
-(id)recoveryStatusAsString:(int)arg0 ;
-(id)viabilityStatusAsString:(int)arg0 ;
-(int)StringAsRecordStatus:(id)arg0 ;
-(int)StringAsRecordViability:(id)arg0 ;
-(int)StringAsRecoveryStatus:(id)arg0 ;
-(int)StringAsViabilityStatus:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif