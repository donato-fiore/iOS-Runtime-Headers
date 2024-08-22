// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NETSCHEMANETHANDSHAKEPROTOCOL_H
#define NETSCHEMANETHANDSHAKEPROTOCOL_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface NETSchemaNETHandShakeProtocol : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) NSUInteger handShakeDuration; // ivar: _handShakeDuration
@property (nonatomic) unsigned int handShakeRTT; // ivar: _handShakeRTT
@property (nonatomic) BOOL hasHandShakeDuration;
@property (nonatomic) BOOL hasHandShakeRTT;
@property (nonatomic) BOOL hasProtocol;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int protocol; // ivar: _protocol


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteHandShakeDuration;
-(void)deleteHandShakeRTT;
-(void)deleteProtocol;
-(void)writeTo:(id)arg0 ;


@end


#endif