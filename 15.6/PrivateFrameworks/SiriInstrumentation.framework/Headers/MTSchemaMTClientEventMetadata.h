// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTSCHEMAMTCLIENTEVENTMETADATA_H
#define MTSCHEMAMTCLIENTEVENTMETADATA_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface MTSchemaMTClientEventMetadata : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasMtId; // ivar: _hasMtId
@property (nonatomic) BOOL hasSessionId; // ivar: _hasSessionId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *mtId; // ivar: _mtId
@property (retain, nonatomic) SISchemaUUID *sessionId; // ivar: _sessionId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteMtId;
-(void)deleteSessionId;
-(void)writeTo:(id)arg0 ;


@end


#endif