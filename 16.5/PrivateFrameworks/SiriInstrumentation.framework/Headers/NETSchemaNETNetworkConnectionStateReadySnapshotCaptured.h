// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NETSCHEMANETNETWORKCONNECTIONSTATEREADYSNAPSHOTCAPTURED_H
#define NETSCHEMANETNETWORKCONNECTIONSTATEREADYSNAPSHOTCAPTURED_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface NETSchemaNETNetworkConnectionStateReadySnapshotCaptured : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int connectionEstablishmentAttemptDelay; // ivar: _connectionEstablishmentAttemptDelay
@property (nonatomic) unsigned int connectionEstablishmentPreviousAttemptCount; // ivar: _connectionEstablishmentPreviousAttemptCount
@property (copy, nonatomic) NSString *connectionInfo; // ivar: _connectionInfo
@property (nonatomic) BOOL hasConnectionEstablishmentAttemptDelay;
@property (nonatomic) BOOL hasConnectionEstablishmentPreviousAttemptCount;
@property (nonatomic) BOOL hasConnectionInfo; // ivar: _hasConnectionInfo
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteConnectionEstablishmentAttemptDelay;
-(void)deleteConnectionEstablishmentPreviousAttemptCount;
-(void)deleteConnectionInfo;
-(void)writeTo:(id)arg0 ;


@end


#endif