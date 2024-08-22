// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NETSCHEMANETDEBUGNETWORKCONNECTIONSTATEPREPARATIONSNAPSHOTCAPTURED_H
#define NETSCHEMANETDEBUGNETWORKCONNECTIONSTATEPREPARATIONSNAPSHOTCAPTURED_H

@class NSString, NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface NETSchemaNETDebugNetworkConnectionStatePreparationSnapshotCaptured : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *connectionInfo; // ivar: _connectionInfo
@property (nonatomic) BOOL hasConnectionInfo; // ivar: _hasConnectionInfo
@property (nonatomic) BOOL hasHasIpv4;
@property (nonatomic) BOOL hasHasIpv6;
@property (nonatomic) BOOL hasIpv4; // ivar: _hasIpv4
@property (nonatomic) BOOL hasIpv6; // ivar: _hasIpv6
@property (nonatomic) BOOL hasIsConstrained;
@property (nonatomic) BOOL hasIsExpensive;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL isConstrained; // ivar: _isConstrained
@property (nonatomic) BOOL isExpensive; // ivar: _isExpensive
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *pathGateways; // ivar: _pathGateways
@property (copy, nonatomic) NSArray *pathInterfaces; // ivar: _pathInterfaces
@property (nonatomic) int status; // ivar: _status


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)pathGatewaysAtIndex:(NSUInteger)arg0 ;
-(id)pathInterfacesAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addPathGateways:(id)arg0 ;
-(void)addPathInterfaces:(id)arg0 ;
-(void)clearPathGateways;
-(void)clearPathInterfaces;
-(void)deleteConnectionInfo;
-(void)deleteHasIpv4;
-(void)deleteHasIpv6;
-(void)deleteIsConstrained;
-(void)deleteIsExpensive;
-(void)deletePathGateways;
-(void)deletePathInterfaces;
-(void)deleteStatus;
-(void)writeTo:(id)arg0 ;


@end


#endif