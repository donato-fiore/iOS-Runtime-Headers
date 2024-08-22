// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HOMESCHEMAHOMEASSISTANTINFOREPORTED_H
#define HOMESCHEMAHOMEASSISTANTINFOREPORTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface HOMESchemaHOMEAssistantInfoReported : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasHashedHomeId; // ivar: _hasHashedHomeId
@property (retain, nonatomic) SISchemaUUID *hashedHomeId; // ivar: _hashedHomeId
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteHashedHomeId;
-(void)writeTo:(id)arg0 ;


@end


#endif