// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ANCSCHEMAANCSERVEREVENTMETADATA_H
#define ANCSCHEMAANCSERVEREVENTMETADATA_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface ANCSchemaANCServerEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *ancId; // ivar: _ancId
@property (nonatomic) BOOL hasAncId; // ivar: _hasAncId
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAncId;
-(void)writeTo:(id)arg0 ;


@end


#endif