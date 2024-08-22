// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PEGASUSSCHEMAPEGASUSSERVEREVENTMETADATA_H
#define PEGASUSSCHEMAPEGASUSSERVEREVENTMETADATA_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface PEGASUSSchemaPEGASUSServerEventMetadata : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasPegasusId; // ivar: _hasPegasusId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *pegasusId; // ivar: _pegasusId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deletePegasusId;
-(void)writeTo:(id)arg0 ;


@end


#endif