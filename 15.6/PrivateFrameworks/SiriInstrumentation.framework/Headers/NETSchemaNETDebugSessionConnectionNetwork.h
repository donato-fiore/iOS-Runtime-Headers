// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NETSCHEMANETDEBUGSESSIONCONNECTIONNETWORK_H
#define NETSCHEMANETDEBUGSESSIONCONNECTIONNETWORK_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface NETSchemaNETDebugSessionConnectionNetwork : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int connectedSubflowCount; // ivar: _connectedSubflowCount
@property (nonatomic) BOOL hasConnectedSubflowCount;
@property (nonatomic) BOOL hasOpenTimeInMs;
@property (nonatomic) BOOL hasSignalStrengthBars;
@property (nonatomic) BOOL hasWiFiPhyMode;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) CGFloat openTimeInMs; // ivar: _openTimeInMs
@property (nonatomic) CGFloat signalStrengthBars; // ivar: _signalStrengthBars
@property (nonatomic) int wiFiPhyMode; // ivar: _wiFiPhyMode


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteConnectedSubflowCount;
-(void)deleteOpenTimeInMs;
-(void)deleteSignalStrengthBars;
-(void)deleteWiFiPhyMode;
-(void)writeTo:(id)arg0 ;


@end


#endif