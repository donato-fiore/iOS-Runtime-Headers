// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NETSCHEMANETDEBUGSESSIONCONNECTIONSNAPSHOTCAPTURED_H
#define NETSCHEMANETDEBUGSESSIONCONNECTIONSNAPSHOTCAPTURED_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "NETSchemaNETDebugSessionConnectionNetwork.h"
#import "NETSchemaNETDebugSessionConnectionPingInfo.h"
#import "NETSchemaNETDebugSessionConnectionQuality.h"

@interface NETSchemaNETDebugSessionConnectionSnapshotCaptured : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasNetwork; // ivar: _hasNetwork
@property (nonatomic) BOOL hasPingInfo; // ivar: _hasPingInfo
@property (nonatomic) BOOL hasQuality; // ivar: _hasQuality
@property (nonatomic) BOOL hasSequenceNumber;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) NETSchemaNETDebugSessionConnectionNetwork *network; // ivar: _network
@property (copy, nonatomic) NSArray *networkInterfaces; // ivar: _networkInterfaces
@property (retain, nonatomic) NETSchemaNETDebugSessionConnectionPingInfo *pingInfo; // ivar: _pingInfo
@property (retain, nonatomic) NETSchemaNETDebugSessionConnectionQuality *quality; // ivar: _quality
@property (nonatomic) unsigned int sequenceNumber; // ivar: _sequenceNumber


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)networkInterfacesAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addNetworkInterfaces:(id)arg0 ;
-(void)clearNetworkInterfaces;
-(void)deleteNetwork;
-(void)deleteNetworkInterfaces;
-(void)deletePingInfo;
-(void)deleteQuality;
-(void)deleteSequenceNumber;
-(void)writeTo:(id)arg0 ;


@end


#endif