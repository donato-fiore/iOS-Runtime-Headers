// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HOMEKITSCHEMAHKACCESSORYOPERATIONREPORTED_H
#define HOMEKITSCHEMAHKACCESSORYOPERATIONREPORTED_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface HomeKitSchemaHKAccessoryOperationReported : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *accessoryCategory; // ivar: _accessoryCategory
@property (nonatomic) int communicationProtocol; // ivar: _communicationProtocol
@property (nonatomic) unsigned int consecutiveFailureCount; // ivar: _consecutiveFailureCount
@property (nonatomic) unsigned int finalErrorCode; // ivar: _finalErrorCode
@property (copy, nonatomic) NSString *finalErrorDomain; // ivar: _finalErrorDomain
@property (nonatomic) BOOL hasAccessoryCategory; // ivar: _hasAccessoryCategory
@property (nonatomic) BOOL hasCommunicationProtocol;
@property (nonatomic) BOOL hasConsecutiveFailureCount;
@property (nonatomic) BOOL hasFinalErrorCode;
@property (nonatomic) BOOL hasFinalErrorDomain; // ivar: _hasFinalErrorDomain
@property (nonatomic) BOOL hasOperationType;
@property (nonatomic) BOOL hasResidentFirstDuration;
@property (nonatomic) BOOL hasResidentFirstErrorCode;
@property (nonatomic) BOOL hasResidentFirstErrorDomain; // ivar: _hasResidentFirstErrorDomain
@property (nonatomic) BOOL hasSharedMetricsId; // ivar: _hasSharedMetricsId
@property (nonatomic) BOOL hasTotalDuration;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) BOOL hasWasCached;
@property (nonatomic) BOOL hasWasLocal;
@property (nonatomic) BOOL hasWasRapportSlow;
@property (nonatomic) BOOL hasWasRemoteAccessAllowed;
@property (nonatomic) BOOL hasWasResidentFirstEnabled;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int operationType; // ivar: _operationType
@property (nonatomic) unsigned int residentFirstDuration; // ivar: _residentFirstDuration
@property (nonatomic) unsigned int residentFirstErrorCode; // ivar: _residentFirstErrorCode
@property (copy, nonatomic) NSString *residentFirstErrorDomain; // ivar: _residentFirstErrorDomain
@property (retain, nonatomic) SISchemaUUID *sharedMetricsId; // ivar: _sharedMetricsId
@property (nonatomic) unsigned int totalDuration; // ivar: _totalDuration
@property (nonatomic) int transportType; // ivar: _transportType
@property (nonatomic) BOOL wasCached; // ivar: _wasCached
@property (nonatomic) BOOL wasLocal; // ivar: _wasLocal
@property (nonatomic) BOOL wasRapportSlow; // ivar: _wasRapportSlow
@property (nonatomic) BOOL wasRemoteAccessAllowed; // ivar: _wasRemoteAccessAllowed
@property (nonatomic) BOOL wasResidentFirstEnabled; // ivar: _wasResidentFirstEnabled


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAccessoryCategory;
-(void)deleteCommunicationProtocol;
-(void)deleteConsecutiveFailureCount;
-(void)deleteFinalErrorCode;
-(void)deleteFinalErrorDomain;
-(void)deleteOperationType;
-(void)deleteResidentFirstDuration;
-(void)deleteResidentFirstErrorCode;
-(void)deleteResidentFirstErrorDomain;
-(void)deleteSharedMetricsId;
-(void)deleteTotalDuration;
-(void)deleteTransportType;
-(void)deleteWasCached;
-(void)deleteWasLocal;
-(void)deleteWasRapportSlow;
-(void)deleteWasRemoteAccessAllowed;
-(void)deleteWasResidentFirstEnabled;
-(void)writeTo:(id)arg0 ;


@end


#endif