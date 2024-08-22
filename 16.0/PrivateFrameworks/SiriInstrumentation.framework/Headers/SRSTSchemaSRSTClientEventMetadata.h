// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRSTSCHEMASRSTCLIENTEVENTMETADATA_H
#define SRSTSCHEMASRSTCLIENTEVENTMETADATA_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface SRSTSchemaSRSTClientEventMetadata : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasSessionId; // ivar: _hasSessionId
@property (nonatomic) BOOL hasSrstId; // ivar: _hasSrstId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *sessionId; // ivar: _sessionId
@property (retain, nonatomic) SISchemaUUID *srstId; // ivar: _srstId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteSessionId;
-(void)deleteSrstId;
-(void)writeTo:(id)arg0 ;


@end


#endif