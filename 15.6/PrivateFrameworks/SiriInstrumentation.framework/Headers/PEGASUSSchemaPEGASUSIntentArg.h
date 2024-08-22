// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PEGASUSSCHEMAPEGASUSINTENTARG_H
#define PEGASUSSCHEMAPEGASUSINTENTARG_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "PEGASUSSchemaPEGASUSEntityInfo.h"

@interface PEGASUSSchemaPEGASUSIntentArg : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *attributeType; // ivar: _attributeType
@property (retain, nonatomic) PEGASUSSchemaPEGASUSEntityInfo *entity; // ivar: _entity
@property (nonatomic) BOOL hasAttributeType; // ivar: _hasAttributeType
@property (nonatomic) BOOL hasEntity; // ivar: _hasEntity
@property (nonatomic) BOOL hasKey; // ivar: _hasKey
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *key; // ivar: _key


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAttributeType;
-(void)deleteEntity;
-(void)deleteKey;
-(void)writeTo:(id)arg0 ;


@end


#endif