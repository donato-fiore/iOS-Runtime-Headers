// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLUSSCHEMAPLUSCLIENTEVENTMETADATA_H
#define PLUSSCHEMAPLUSCLIENTEVENTMETADATA_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface PLUSSchemaPLUSClientEventMetadata : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasPlusId; // ivar: _hasPlusId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *plusId; // ivar: _plusId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deletePlusId;
-(void)writeTo:(id)arg0 ;


@end


#endif