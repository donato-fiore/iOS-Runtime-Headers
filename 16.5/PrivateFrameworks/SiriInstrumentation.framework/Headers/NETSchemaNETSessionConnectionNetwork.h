// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NETSCHEMANETSESSIONCONNECTIONNETWORK_H
#define NETSCHEMANETSESSIONCONNECTIONNETWORK_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface NETSchemaNETSessionConnectionNetwork : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int attempCount; // ivar: _attempCount
@property (copy, nonatomic) NSString *carrierName; // ivar: _carrierName
@property (nonatomic) CGFloat clearChannelAssessmentScore; // ivar: _clearChannelAssessmentScore
@property (nonatomic) NSUInteger connectionEstablishmentTime; // ivar: _connectionEstablishmentTime
@property (nonatomic) int connectionMethod; // ivar: _connectionMethod
@property (nonatomic) NSUInteger connectionStartToEstablishmentTime; // ivar: _connectionStartToEstablishmentTime
@property (nonatomic) NSUInteger connectionStartToTLSHandshake; // ivar: _connectionStartToTLSHandshake
@property (nonatomic) NSUInteger dnsResolutionTime; // ivar: _dnsResolutionTime
@property (nonatomic) NSUInteger firstByteTime; // ivar: _firstByteTime
@property (nonatomic) BOOL hasAttempCount;
@property (nonatomic) BOOL hasCarrierName; // ivar: _hasCarrierName
@property (nonatomic) BOOL hasClearChannelAssessmentScore;
@property (nonatomic) BOOL hasConnectionEstablishmentTime;
@property (nonatomic) BOOL hasConnectionMethod;
@property (nonatomic) BOOL hasConnectionStartToEstablishmentTime;
@property (nonatomic) BOOL hasConnectionStartToTLSHandshake;
@property (nonatomic) BOOL hasDnsResolutionTime;
@property (nonatomic) BOOL hasFirstByteTime;
@property (nonatomic) BOOL hasIsCaptive;
@property (nonatomic) BOOL hasPrimarySubflowInterfaceName; // ivar: _hasPrimarySubflowInterfaceName
@property (nonatomic) BOOL hasRssi;
@property (nonatomic) BOOL hasSnr;
@property (nonatomic) BOOL hasStartToDNSResolution;
@property (nonatomic) BOOL hasTlsHandshakeTime;
@property (nonatomic) BOOL hasTlsVersion;
@property (nonatomic) BOOL isCaptive; // ivar: _isCaptive
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *primarySubflowInterfaceName; // ivar: _primarySubflowInterfaceName
@property (nonatomic) CGFloat rssi; // ivar: _rssi
@property (nonatomic) CGFloat snr; // ivar: _snr
@property (nonatomic) NSUInteger startToDNSResolution; // ivar: _startToDNSResolution
@property (nonatomic) NSUInteger tlsHandshakeTime; // ivar: _tlsHandshakeTime
@property (nonatomic) int tlsVersion; // ivar: _tlsVersion


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAttempCount;
-(void)deleteCarrierName;
-(void)deleteClearChannelAssessmentScore;
-(void)deleteConnectionEstablishmentTime;
-(void)deleteConnectionMethod;
-(void)deleteConnectionStartToEstablishmentTime;
-(void)deleteConnectionStartToTLSHandshake;
-(void)deleteDnsResolutionTime;
-(void)deleteFirstByteTime;
-(void)deleteIsCaptive;
-(void)deletePrimarySubflowInterfaceName;
-(void)deleteRssi;
-(void)deleteSnr;
-(void)deleteStartToDNSResolution;
-(void)deleteTlsHandshakeTime;
-(void)deleteTlsVersion;
-(void)writeTo:(id)arg0 ;


@end


#endif