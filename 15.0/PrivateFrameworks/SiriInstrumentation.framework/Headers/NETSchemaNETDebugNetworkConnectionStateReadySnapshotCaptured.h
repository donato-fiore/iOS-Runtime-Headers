// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NETSCHEMANETDEBUGNETWORKCONNECTIONSTATEREADYSNAPSHOTCAPTURED_H
#define NETSCHEMANETDEBUGNETWORKCONNECTIONSTATEREADYSNAPSHOTCAPTURED_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "NETSchemaNETProxyConfiguration.h"

@interface NETSchemaNETDebugNetworkConnectionStateReadySnapshotCaptured : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSArray *connectionEstablishmentProtocols; // ivar: _connectionEstablishmentProtocols
@property (nonatomic) NSUInteger durationInMs; // ivar: _durationInMs
@property (nonatomic) BOOL hasDurationInMs;
@property (nonatomic) BOOL hasProxyConfiguration; // ivar: _hasProxyConfiguration
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) NETSchemaNETProxyConfiguration *proxyConfiguration; // ivar: _proxyConfiguration
@property (copy, nonatomic) NSArray *resolutions; // ivar: _resolutions


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)resolutionCount;
-(id)connectionEstablishmentProtocolsAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)resolutionAtIndex:(NSUInteger)arg0 ;
-(void)addConnectionEstablishmentProtocols:(id)arg0 ;
-(void)addResolution:(id)arg0 ;
-(void)clearConnectionEstablishmentProtocols;
-(void)clearResolution;
-(void)writeTo:(id)arg0 ;


@end


#endif