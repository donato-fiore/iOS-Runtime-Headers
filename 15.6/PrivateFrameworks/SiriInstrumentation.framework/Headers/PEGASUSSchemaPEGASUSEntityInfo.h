// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PEGASUSSCHEMAPEGASUSENTITYINFO_H
#define PEGASUSSCHEMAPEGASUSENTITYINFO_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface PEGASUSSchemaPEGASUSEntityInfo : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) float confidence; // ivar: _confidence
@property (copy, nonatomic) NSString *entityId; // ivar: _entityId
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) BOOL hasEntityId; // ivar: _hasEntityId
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteConfidence;
-(void)deleteEntityId;
-(void)writeTo:(id)arg0 ;


@end


#endif