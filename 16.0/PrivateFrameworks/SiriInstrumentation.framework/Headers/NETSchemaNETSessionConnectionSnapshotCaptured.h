// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NETSCHEMANETSESSIONCONNECTIONSNAPSHOTCAPTURED_H
#define NETSCHEMANETSESSIONCONNECTIONSNAPSHOTCAPTURED_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "NETSchemaNETSessionConnectionNetwork.h"

@interface NETSchemaNETSessionConnectionSnapshotCaptured : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasNetwork; // ivar: _hasNetwork
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) BOOL hasSnapshotTriggerReason;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) NETSchemaNETSessionConnectionNetwork *network; // ivar: _network
@property (copy, nonatomic) NSArray *networkInterfaces; // ivar: _networkInterfaces
@property (nonatomic) unsigned int sequenceNumber; // ivar: _sequenceNumber
@property (nonatomic) int snapshotTriggerReason; // ivar: _snapshotTriggerReason


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
-(void)deleteSequenceNumber;
-(void)deleteSnapshotTriggerReason;
-(void)writeTo:(id)arg0 ;


@end


#endif