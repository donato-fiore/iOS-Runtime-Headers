// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DUSCHEMADUSEARCHSESSIONRECORD_H
#define DUSCHEMADUSEARCHSESSIONRECORD_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface DUSchemaDUSearchSessionRecord : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasSessionId; // ivar: _hasSessionId
@property (nonatomic) BOOL hasSessionStartTimestampMs;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *sessionId; // ivar: _sessionId
@property (nonatomic) NSUInteger sessionStartTimestampMs; // ivar: _sessionStartTimestampMs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteSessionId;
-(void)deleteSessionStartTimestampMs;
-(void)writeTo:(id)arg0 ;


@end


#endif